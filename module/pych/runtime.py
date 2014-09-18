import logging
import ctypes

from pych.object_cache import ObjectCache
from pych.compiler import Compiler

config = {
    "compiler_cmd":     "gcc",
    "ccode_path":       "/home/safl/pychapel/module/ccode",
    "chapelcode_path":  "/home/safl/pychapel/module/chapelcode",
    "search_paths":     ["/home/safl/pychapel/module/libraries"],
}

typemap = {
    int:        ctypes.c_int,
    long:       ctypes.c_long,
    float:      ctypes.c_double,
}

class Runtime(object):

    def __init__(self, log_level=logging.ERROR):
        self.compiler       = Compiler(config["compiler_cmd"])
        self.object_cache   = ObjectCache(config["search_paths"])

        logging.basicConfig(level=log_level)

    def execute(self, extern):
        logging.debug("Executing %s | %s" % (extern.cname, extern))

        #
        # First check if the function-handle is avaiable
        fp = None
        try:
            fp = self.object_cache._functions[extern.cname]
        except AttributeError as e:
            pass
        except KeyError as e:
            pass

        #
        # Check if library-handle is available
        try:
            fp = self.object_cache.load(extern.clib, extern.cname) if not fp else fp
        except Exception as e:
            logging.debug("Failed grabbing library: %s" % extern.clib)

        #
        # Check if library is available on disk

        #
        # Check if "inline-source" is available
        if not fp and extern.doc:
            pass                # TODO: Compile and load "inline-source"

        #
        # Check if a "source-file" is available
        if not fp:
            pass

        fp.argtypes = [typemap[type(arg)] for arg in extern.args]
        res = fp(*extern.args)
        if not extern.rtype:    # Mangle return-void
            res = None

        return res

        #
        # At last we give up

instance = Runtime(logging.DEBUG)    # Singleton instance of the runtime
instance.object_cache.preload()

