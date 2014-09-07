import pprint
import pych.runtime

class Extern(object):
    """
    Encapsulates a mapping between a Python function and an
    external function.
    """

    def __init__(self, f, name, doc, sig):
        self.f      = f
        self.name   = name
        self.doc    = doc
        self.sig    = sig

    def __repr__(self):
        return pprint.pformat(vars(self))

#
# Decorate a Python-function with these to construct an Extern.
#
class FromC(object):
    """Encapsulates a call to an external function."""

    def __init__(self, f):
        self._extern = Extern(
            f       = f,
            name    = f.__name__,
            doc     = f.__doc__,
            sig     = []
        )

    def __call__(self, *args):
        print "Calling..."
        
        self._extern.sig = [type(arg) for arg in args]
        print self._extern
        self._extern.f(*args)
        print "Called..."

class FromChapel(FromC):
    pass

