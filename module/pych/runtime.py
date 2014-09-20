import logging
import ctypes
import pprint
import os

from pych.object_cache import ObjectCache
from pych.specializer import Specializer
from pych.compiler import Compiler

config = {
    "compiler_cmd":     "gcc",
    "ccode_path":       "/home/safl/pychapel/module/ccode/src",
    "chapelcode_path":  "/home/safl/pychapel/module/chapelcode",
    "search_paths":     ["/home/safl/pychapel/module/libraries"],
}

class Runtime(object):

    def __init__(self, log_level=logging.ERROR):
        self.hints = []

        self.compiler       = Compiler(config["compiler_cmd"])
        self.object_cache   = ObjectCache(config["search_paths"])
        self.specializer    = Specializer(config["ccode_path"])

        logging.basicConfig(
            level=log_level,
            format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
        )

    def hint(self, extern):
        """
        Hint the runtime that we might be interested in this extern
        at some point in the future.
        """
        self.hints.append(extern)

    def materialize(self, extern):
        """
        Materializes an extern.

        That means doing all it can to obtain it... compile it if it is 
        an inline or from source-code, load it if defined as
        a library-wrapper, all the bells and whistles...

        @contract   Assume that the caller has checked that the Extern
                    is currently materialized aka verified that
                    Extern.cfunc == None.
                    Nothing bad will happen except for unnessecary work.
        """

        cfunc = self.object_cache.evoke(extern) # Evoke the cfunc

        if not cfunc:                           # Create an evokeable object
            source = None
            if extern.doc:
                source = self.specializer.specialize(extern)

            if extern.cfile:
                source  = self.specializer.load(extern.cfile)

            if source:
                out, err = self.compiler.compile(
                    source, 
                    "%s/%s" % (self.object_cache._output_path, extern.clib)
                )
            
            cfunc = self.object_cache.evoke(extern) # Attempt evocation again

        return cfunc

instance = Runtime(logging.DEBUG)    # Singleton instance of the runtime
instance.object_cache.open_ahead()

