import pprint

class Extern(object):
    def __init__(self, f, name, doc, sig):
        self.f      = f
        self.name   = name
        self.doc    = doc
        self.sig    = sig

    def __repr__(self):
        return pprint.pformat(vars(self))

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

class Compiler(object):
    pass

class ObjectCache(object):
    def __init__(self, objectPath):
        self._object_path = object_path

class Runtime(object):
    def __init__(self):
        self.compiler       = Compiler()
        self.objectCache    = ObjectCache()

class Op(object):
    def __init__(self):
        pass

class Extension(Op):
    def __init__(self):
        pass

@FromC
def myfunction(x, y, z):
    """Hello there."""
    pass

myfunction(1, 2, 3)
