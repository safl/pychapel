from pych.object_cache import ObjectCache
from pych.compiler import Compiler

class Runtime(object):

    def __init__(self):
        self.compiler       = Compiler("gcc", "/tmp")
        self.object_cache   = ObjectCache("/tmp")

    def execute(self, extern):

        self.object_cache._functions[extern.name]()

instance = Runtime()
