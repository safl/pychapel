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

class Extern(object):
    """
    Encapsulates a mapping between a Python function and an external function.
    """

    def __init__(self, pfunc=None, pname=None, doc=None,
                 atypes=[], anames=[], rtype=None,
                 cfunc=None, cname=None, clib=None, cfile=None):

        self.pfunc  = pfunc     # Python function handle
        self.pname  = pname     # Python function name
        self.doc    = doc       # Python doc-string (used for inline source-code)
        self.atypes = atypes    # Python types of function arguments
        self.anames = anames    # Python names of function arguments
        self.rtype  = rtype     # Python type for the return value

        self.cfunc  = cfunc     # ctypes function handle
        self.cname  = cname     # c function name
        self.cfile  = cfile     # c file with sourcecode
        self.clib   = clib      # c library filename

    def __repr__(self):
        return pprint.pformat(vars(self))

#
# Decorate a Python-function with these to construct a mapping to an Extern.
#
class FromC(object):
    """Encapsulates a call to an external function."""

    def __init__(self, cname=None, clib=None, cfile=None):

        # This is done only once; when the function is decorated
        self._extern = Extern(
            pfunc   = None,
            pname   = None,
            doc     = None,
            atypes  = [],
            anames  = [],
            rtype   = None,

            cfunc   = None,
            cname   = cname,
            clib    = clib,
            cfile   = cfile
        )
        logging.debug("__init__decorate__")

    def __call__(self, f):
        # This is done only once; when the function is decorated
        logging.debug("__call_but_invoked_on_decorate__")

        self._extern.pfunc  = f
        self._extern.pname  = f.__name__
        self._extern.doc    = f.__doc__

        #
        # Obtain the argument-types by inspecting the function parameters
        arg_spec = inspect.getargspec(self._extern.pfunc)   # Grab the argspec

        #
        # Extract the argument types, through default-argument declaration
        self._extern.atypes = list(arg_spec.defaults) if arg_spec.defaults else []

        #
        # Extract the argument names
        self._extern.anames = arg_spec.args

        #
        # Validate the function declaration
        if len(self._extern.atypes) != len(arg_spec.args):
            # Check that we have sufficient amount of type-declarations
            raise TypeError("Missing type declaration on arguments.")
        else:
            # Check that declared types are supported
            for i, arg in enumerate(arg_spec.args):
                arg_type = list(arg_spec.defaults)[i]
                if arg_type not in typemap:
                    msg = "Unsupported type: %s for argument %s" % (
                        arg_type, arg_spec.args[i]
                    )
                    raise TypeError(msg)

        logging.debug(pprint.pformat(self._extern.atypes))

        #
        # Obtain the return-type by called the decorated function
        self._extern.rtype  = self._extern.pfunc()

        #
        # Extract attributes for inline and cfile Externs
        if self._extern.doc:
            self._extern.cname = self._extern.pname
            self._extern.clib  = "inline.so"

        if self._extern.cfile:
            # Parsing the source might be convenient here..
            if not self._extern.cname:
                self._extern.cname = self._extern.pname

            self._extern.clib = "lib%s.so" % os.path.splitext(os.path.basename(
                self._extern.cfile
            ))[0]

        #
        # Hint the runtime that we might want to call this Extern in
        # the future.
        # This could be used as a means of compiling the
        # function ahead of time. Or compile all hinted functions
        # in one go.
        #
        pych.runtime.instance.hint(self._extern)

        def wrapped_f(*args):
            # This is invoked on each function-call
            logging.debug("__actual_call__")

            #
            # Typecheck argument actuals with declaration
            call_types = [type(arg) for arg in args]
            if call_types != self._extern.atypes:
                ct_text = pprint.pformat(call_types)
                at_text = pprint.pformat(self._extern.atypes)
                raise TypeError("Unsupported arg-types; %s. Expected: %s" %
                                (ct_text, at_text))
            #
            # Obtain the external object.
            if not self._extern.cfunc:
                fp = pych.runtime.instance.materialize(self._extern)

                if not fp:
                    raise Exception("Failed materializing function!")
                #
                # Register argument conversion functions on cfunc
                fp.argtypes = [typemap[atype] for atype in self._extern.atypes]
                fp.restype  = typemap[self._extern.rtype]

                #
                # Register the cfunc handle on Extern
                self._extern.cfunc = fp

            #
            # Call
            return self._extern.cfunc(*args)

        return wrapped_f

class FromChapel(FromC):
    pass

