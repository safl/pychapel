import logging
import ctypes
import pprint
import json
import os

from pych.object_cache import ObjectCache
from pych.specializer import Specializer
from pych.compiler import Compiler

class Runtime(object):

    def __init__(self, config_fn=None):
        self.hints = []

        if not config_fn:
            config_fn = "pych.json"

        config = json.load(open(config_fn))

        self.compiler       = Compiler(config["compiler_cmd"])
        self.object_cache   = ObjectCache(config["search_paths"])
        self.specializer    = Specializer(config["ccode_path"])

        logging.basicConfig(
            level=config["log_level"],
            format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
        )

        self.object_cache.open_ahead()

    def hint(self, extern):
        """
        Hint the runtime that we might be interested in this extern
        at some point in the future.
        """
        self.hints.append(extern)

    def materialize(self, extern):
        """
        Materializes an extern.

        That means doing all it can to obtain cfunc/function-handle:

        Compile it using an inline-template
        Compile it from a straightforward sourcefile
        Compile it using a specialization template
        "Just" load it if defined as a library-wrapper
        Possibly other stunts..

        @contract   Assume that the caller has checked that the Extern
                    is not yet materialized aka verified that
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

instance = Runtime()    # Singleton instance of the runtime

