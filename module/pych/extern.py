import logging
import inspect
import pprint
import ctypes
import os

import pych.runtime

typemap = {
    None:       None,
    bool:       ctypes.c_bool,
    int:        ctypes.c_int,
    long:       ctypes.c_long,
    float:      ctypes.c_double,
    str:        ctypes.c_char_p,
    unicode:    ctypes.c_wchar_p
}

#
# Decorate a Python-function with these to construct a mapping to an Extern.
#
class Extern(object):
    """Encapsulates a mapping and call to an external function."""

    def __init__(self, ename=None, lib=None, sfile=None, slang=None):

        # This is done only once; when the function is decorated
        self.pfunc   = None     # Python function handle
        self.pname   = None     # Python function name
        self.doc     = None     # Python doc-string (used for inline source-code)
        self.atypes  = []       # Python types of function arguments
        self.anames  = []       # Python names of function arguments
        self.rtype   = None     # Python type for the return value

        self.efunc   = None     # ctypes function handle
        self.ename   = ename    # External function name
        self.lib    = lib     # Library filename

        self.sfile   = sfile    # File with sourcecode
        self.slang   = slang    # Language of the sourcefile or inline

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
                if arg_type not in typemap:
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

    def __call__(self, f):
        # This is done only once; when the function is decorated

        self.pfunc  = f
        self.pname  = f.__name__
        self.doc    = f.__doc__

        #
        # Infer type-declaration of Extern from the crazy convention
        arg_spec = inspect.getargspec(self.pfunc)

        self.anames = arg_spec.args         # Extract argument names
        if arg_spec.defaults:                       # Extract argument types
            self.atypes = list(arg_spec.defaults)
        self.rtype  = self.pfunc()  # Obtain return-type

        self._validate_decl()                       # Validate declaration

        # 
        # Extract attributes for "inline" function
        if self.doc:
            self.ename = self.pname
            self.lib  = "inline.so"

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
        pych.runtime.instance.hint(self)

        def wrapped_f(*args):
            # This is invoked on each function-call
            logging.debug("__actual_call__")

            self._type_check(args)      # Typecheck actuals with declaration

            #
            # Obtain the external object.
            if not self.efunc:
                efunc = pych.runtime.instance.materialize(self)

                if not efunc:
                    raise Exception("Failed materializing function!")
                #
                # Register argument conversion functions on efunc
                efunc.argtypes = [typemap[atype] for atype in self.atypes]
                efunc.restype  = typemap[self.rtype]

                #
                # Register the efunc handle on Extern
                self.efunc = efunc

            #
            # Call
            return self.efunc(*args)

        return wrapped_f

class FromC(Extern):

    def __init__(self, ename=None, lib=None, sfile=None):
        super(FromC, self).__init__(
            ename = ename,
            lib = lib,

            sfile = sfile,
            slang = "C"
        )

class FromChapel(Extern):

    def __init__(self, ename=None, lib=None, sfile=None):
        super(FromChapel, self).__init__(
            ename = ename,
            lib = lib,

            sfile = sfile,
            slang = "Chapel"
        )

