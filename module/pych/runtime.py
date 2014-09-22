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
        if not config_fn:                       # Load configuration
            config_fn = "pych.json"

        config = json.load(open(config_fn))     

        logging.basicConfig(                    # Setup logging
            level=config["log_level"],
            format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
        )

        self.hints = []

        self.compilers = {}                     # Initialize compilers
        for compiler in config["compilers"]:
            logging.debug("Initializing %s compiler.", compiler)
            self.compilers[compiler.lower()] = Compiler(config["compilers"][compiler])
        
        self.object_cache   = ObjectCache(config["search_paths"])
        self.specializer    = Specializer(config["externs_path"])

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

        That means doing all it can to obtain efunc/function-handle:

        Compile it using an inline-template
        Compile it from a straightforward sourcefile
        Compile it using a specialization template
        Or "Just" load it if defined as a library-wrapper
        Possibly other stunts..

        @contract   Assume that the caller has checked that the Extern
                    is not yet materialized aka verified that
                    Extern.efunc == None.
                    Nothing bad will happen except for unnessecary work.
        """

        efunc = self.object_cache.evoke(extern) # Evoke the efunc

        if not efunc:                           # Create an evokeable object
            source = None
            if extern.doc:
                self.specializer.specialize(extern)

            if extern.sfile:
                extern.source = self.specializer.load(extern.sfile)

            if extern.source:
                out, err = self.compilers[extern.slang.lower()].compile(
                    extern, 
                    "%s/%s" % (self.object_cache._output_path, extern.lib)
                )
            
            efunc = self.object_cache.evoke(extern) # Attempt evocation again

        return efunc

instance = Runtime()    # Singleton instance of the runtime

