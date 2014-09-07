
class Runtime(object):
    def __init__(self):
        self.compiler       = Compiler()
        self.objectCache    = ObjectCache("somewhere")

instance = Runtime()
