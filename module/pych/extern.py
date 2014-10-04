"""
    Externs encapsulate the mapping between Python function and an
    "external" function available in a library/shared-object.

    Externs can be "materialized" the process of materialization will
    allways result in the same thing: a mapping form a Python function
    to a function within a library/shared-object.

        * "Just" a mapping to an existing library
        * Compilation of C or Chapel source-code
        * Compilation of inline C or Chapel source-code

    Compilation is done dynamically either just-in-time, when the mapped
    function is called. Or ahead-of-time, when the mapped function is
    decorated. Or somewhere in between those to points in time.
"""
import logging
import inspect
import pprint
import ctypes
import os

import numpy as np
from numpy.ctypeslib import ndpointer

from pych.exceptions import MaterializationError
import pych.runtime

class PyNdArray(ctypes.Structure):

    _fields_ = [
        ('two',         ctypes.c_int),
        ('nd',          ctypes.c_int),
        ('typekind',    ctypes.c_char),
        ('itemsize',    ctypes.c_int),
        ('flags',       ctypes.c_int),
        ('shape',       ctypes.c_int*16),
        ('strides',     ctypes.c_int*16),
        ('data',        ctypes.c_void_p)
    ]

def construct_struct(array):

    array_id = id(array)

    try:
        return pych.RT.arrays[array_id]
    except KeyError:
        logging.debug("Array does not exist.")

    #
    # Create one
    #
    shape = [nelements for nelements in array.shape]
    shape += [0]*(16-len(shape))

    strides = [stride for stride in array.strides]
    strides += [0]*(16-len(strides))

    pych.RT.arrays[array_id] = PyNdArray(
        two=2,
        nd=array.ndim,
        typekind=array.__array_interface__['typestr'][1],
        itemsize=array.itemsize,
        flags=0,
        shape=(ctypes.c_int*16)(*shape),
        strides=(ctypes.c_int*16)(*strides),
        data=array.ctypes.data
    )
    return pych.RT.arrays[array_id]

TYPEMAP = {
    None:       None,
    bool:       ctypes.c_bool,
    int:        ctypes.c_int,
    long:       ctypes.c_long,
    float:      ctypes.c_double,
    str:        ctypes.c_char_p,
    unicode:    ctypes.c_wchar_p,
    np.ndarray: ctypes.POINTER(PyNdArray)
}

#
# Decorate a Python-function with these to construct a mapping to an Extern.
#
class Extern(object):
    """Encapsulates a mapping and call to an external function."""

    def __init__(self, ename=None, lib=None, sfile=None, slang=None):

        # This is done only once; when the function is decorated
        self.pfunc = None   # Python function handle
        self.pname = None   # Python function name
        self.doc = None     # Python doc-string (used for inline source-code)
        self.atypes = []    # Python types of function arguments
        self.anames = []    # Python names of function arguments
        self.rtype = None   # Python type for the return value

        self.efunc = None   # ctypes function handle
        self.ename = ename  # External function name
        self.lib = lib      # Library filename

        self.sfile = sfile  # File with sourcecode
        self.slang = slang  # Language of the sourcefile or inline
        self.source = None  # Sourcecode in textual representation

        logging.debug("__init__decorate__")

    def __repr__(self):
        return pprint.pformat(vars(self))

    def _validate_decl(self):
        """Validate the function declaration."""

        if len(self.atypes) != len(self.anames):
            # Check that we have sufficient amount of type-declarations
            raise TypeError("Missing type declaration on arguments.")
        else:
            # Check that declared types are supported
            for i, arg in enumerate(self.anames):
                arg_type = self.atypes[i]
                if arg_type not in TYPEMAP:
                    msg = "Unsupported type: %s for argument %s" % (
                        arg_type, arg
                    )
                    raise TypeError(msg)

    def _type_check(self, args):
        """Compare argument-types with extern declation."""

        call_types = [type(arg) for arg in args]
        
        if call_types != self.atypes:
            ct_text = pprint.pformat(call_types)
            at_text = pprint.pformat(self.atypes)
            raise TypeError("Unsupported arg-types; %s. Expected: %s" %
                            (ct_text, at_text))

    def __call__(self, pfunc):
        """
        Sets up the function-mapping and hints the runtime of its existance.
        Invoked upon decoration.
        """
        # This is done only once; when the function is decorated

        self.pfunc = pfunc
        self.pname = pfunc.__name__
        self.doc = pfunc.__doc__

        #
        # Infer type-declaration of Extern from the crazy convention
        arg_spec = inspect.getargspec(self.pfunc)

        self.anames = arg_spec.args         # Extract argument names
        if arg_spec.defaults:               # Extract argument types
            self.atypes = list(arg_spec.defaults)
        self.rtype = self.pfunc()           # Obtain return-type

        self._validate_decl()               # Validate declaration

        #
        # Extract attributes for "inline" function
        #
        # TODO: Consider library-naming, we want to persist across
        #       executions, and really want to do the impossible:
        #       expand the inline-library. So what can be done instead?
        #
        #       Collisions should be avoided yet so should compilation also.
        #
        if self.doc:
            if not self.ename:
                self.ename = self.pname
            if not self.lib:
                self.lib = "inline-%s.so" % (
                    self.slang.lower()
                )

        #
        # Extract attributes for "sfile" function
        if self.sfile:
            # TODO: Consider parsing the source-file and expanding validation
            #       of the type-declaration using the parsed information.
            if not self.ename:
                self.ename = self.pname

            self.lib = "lib%s.so" % os.path.splitext(os.path.basename(
                self.sfile
            ))[0]

        #
        # Hint the runtime that we might want to call this Extern in
        # the future.
        # This could be used as a means of compiling the
        # function ahead of time. Or compile all hinted functions
        # in one go as the first call hits a function.
        #
        pych.RT.hint(self)

        def wrapped_f(*args):
            """The logic invoked when calling a mapped function."""

            # This is invoked on each function-call
            logging.debug("__actual_call__")

            self._type_check(args)      # Typecheck actuals with declaration

            #
            # Obtain the external object.
            if not self.efunc:
                efunc = pych.RT.materialize(self)

                if not efunc:
                    raise MaterializationError(self)
                #
                # Register argument conversion functions on efunc
                efunc.argtypes = [TYPEMAP[atype] for atype in self.atypes]
                efunc.restype = TYPEMAP[self.rtype]

                #
                # Register the efunc handle on Extern
                self.efunc = efunc

            # Convert the nptypes
            c_args = []
            for i, arg in enumerate(args):
                print type(arg), arg, i
                if type(arg) is np.ndarray:
                    c_args.append(construct_struct(arg))
                else:
                    c_args.append(arg)

            #
            # Call
            return self.efunc(*c_args)

        return wrapped_f

class FromC(Extern):
    """
    Decorate a Python function using this Extern to map it to an
    external C function.
    """

    def __init__(self, ename=None, lib=None, sfile=None):
        super(FromC, self).__init__(
            ename=ename,
            lib=lib,

            sfile=sfile,
            slang="C"
        )

class Chapel(Extern):
    """
    Decorate a Python function using this Extern to map it to an
    external Chapel function.
    """

    def __init__(self, ename=None, lib=None, sfile=None):
        super(Chapel, self).__init__(
            ename=ename,
            lib=lib,

            sfile=sfile,
            slang="Chapel"
        )

