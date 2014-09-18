import logging
import inspect
import pprint

import pych.runtime

py2c = {
    int:    'i',
    long:   'I',
    float:  'd',
    str:    's'
}

class Extern(object):
    """
    Encapsulates a mapping between a Python function and an
    external function.
    """

    def __init__(self, f=None, args=None,name=None, doc=None,
                 sig=[], rtype=None,
                 cname=None, clib=None, cfunc=None,
                 cfile=None):

        self.f      = f     # Python function handle
        self.name   = name  # Python function name
        self.args   = args  # Python function name
        self.doc    = doc   # Python doc-string (used for inline source-code)
        self.sig    = sig   # Python types of function arguments
        self.rtype  = rtype # Python type for the return value

        self.cname  = cname # c function name
        self.cfile  = cfile # c function name
        self.clib   = clib  # c library filename
        self.cfunc  = cfunc # ctypes function handle

    def __repr__(self):
        return pprint.pformat(vars(self))

    def extern_name(self):
        return "%s_%s" % (self.name, '_'.join([py2c[t] for t in self.sig]))

#
# Decorate a Python-function with these to construct an Extern.
#
class FromC(object):
    """Encapsulates a call to an external function."""

    def __init__(self, cname=None, clib=None, cfile=None):

        self._extern = Extern(
            f       = None,
            name    = None,
            doc     = None,
            args    = None,

            sig     = [],
            rtype   = None,

            clib    = clib,
            cname   = cname,
            cfunc   = None,
            cfile   = cfile
        )
        logging.debug("Constructed...")

    def __call__(self, f):

        logging.debug(pprint.pformat(inspect.getargspec(f)))

        self._extern.f      = f
        self._extern.name   = f.__name__
        self._extern.doc    = f.__doc__

        logging.debug("__call__")

        def wrapped_f(*args):
            self._extern.args   = args
            self._extern.sig    = [type(arg) for arg in args]
            self._extern.rtype  = self._extern.f(*args)
        
            return pych.runtime.instance.execute(self._extern)

        return wrapped_f

class FromChapel(FromC):
    pass

