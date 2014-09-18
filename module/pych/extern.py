import logging
import inspect
import pprint
import ctypes

import pych.runtime

typemap = {
    None:       None,
    int:        ctypes.c_int,
    long:       ctypes.c_long,
    float:      ctypes.c_double
}

class Extern(object):
    """
    Encapsulates a mapping between a Python function and an external function.
    """

    def __init__(self, pfunc=None, pname=None, doc=None, atypes=[], rtype=None,
                 cfunc=None, cname=None, clib=None, cfile=None):

        self.pfunc  = pfunc     # Python function handle
        self.pname  = pname     # Python function name
        self.doc    = doc       # Python doc-string (used for inline source-code)
        self.atypes = atypes    # Python types of function arguments
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
            rtype   = None,

            cfunc   = None,
            cname   = cname,
            clib    = clib,
            cfile   = cfile
        )
        logging.debug("__init__decorate__")

    def __call__(self, f):

        # This is done only once; when the function is decorated
        self._extern.pfunc  = f
        self._extern.pname  = f.__name__
        self._extern.doc    = f.__doc__

        logging.debug("__call_but_really_decorate__")

        def wrapped_f(*args):
            logging.debug("__actual_call__")

            # This is invoked on each call to the function

            if not self._extern.cfunc:
                self._extern.atypes = [type(arg) for arg in args]
                self._extern.rtype  = self._extern.pfunc(*args)

                # Obtain the external object, we should only do this once
                # But cannot do it until we know the types of arguments.
                fp = pych.runtime.instance.dispatch(self._extern)
                if not fp:
                    raise Exception("Cannot materialize function!")
                #
                # Register argument conversion functions on cfunc
                fp.argtypes = [typemap[atype] for atype in self._extern.atypes]
                fp.restype  = typemap[self._extern.rtype]

                #
                # Register the cfunc handle on Extern
                self._extern.cfunc = fp

            return self._extern.cfunc(*args)

        return wrapped_f

class FromChapel(FromC):
    pass

