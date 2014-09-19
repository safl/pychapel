import logging
import ctypes
import pprint

from pych.object_cache import ObjectCache
from pych.specializer import Specializer
from pych.compiler import Compiler

config = {
    "compiler_cmd":     "gcc",
    "ccode_path":       "/home/safl/pychapel/module/ccode/templates",
    "chapelcode_path":  "/home/safl/pychapel/module/chapelcode",
    "search_paths":     ["/home/safl/pychapel/module/libraries"],
}

class Runtime(object):

    def __init__(self, log_level=logging.ERROR):
        self.compiler       = Compiler(config["compiler_cmd"])
        self.object_cache   = ObjectCache(config["search_paths"])
        self.specializer    = Specializer(config["ccode_path"])

        logging.basicConfig(level=log_level)

        self.hints = []

    def hint(self, extern):
        """
        Hint the runtime that we might be interested in this extern
        at some point in the future.
        """
        self.hints.append(extern)

    def materialize(self, extern):
        """
        Materializes an extern.
        That means doing all it can to obtain it... compile it it
        it is an inline or source-defition, load it if defined as
        a library-wrapper.
        """
        #
        # Construct source-code using specializer, we assume that
        # if a doc-string is supplied then thats "inline" source-code
        if extern.doc:
            extern.cname = extern.pname
            extern.clib  = "inline.so"

            source   = self.specializer.specialize(extern)
            out, err = self.compiler.compile(
                source, 
                "%s/%s" % (self.object_cache._output_path, extern.clib)
            )

        #
        # Send sourcecode to compiler for compilation

        try:    # Grabbing it from existing loaded symbols
            return self.object_cache._functions[extern.cname]
        except Exception as e:
            logging.debug(e)
            logging.debug("No handle for: [P: %s -> C: %s]" % (extern.pname, extern.cname))

        try:    # Loading it from associated library aka dlload()...
            return self.object_cache.load(extern.clib, extern.cname)
        except Exception as e:
            logging.debug(e)
            logging.debug("No library-handle for: [%s]" % extern.clib)

        try:    # Opening library from disk and loading aka dlopen(), dlload()
            lh = self.object_cache.find(extern.clib)
            if lh:
                return self.object_cache.load(extern.clib, extern.cname)
        except Exception as e:
            logging.debug(e)
            logging.debug("No libraries in in search-path for [%s]" % extern.clib)

        #
        # At this point we know that no library exist for the given extern,
        # so it must either be faulty or an not-yet compiled "inline/template".
        # So the caller should attempt to materialize it.

        logging.debug("Dispatch did not find anything!")
        return None                                     # At last we give up

instance = Runtime(logging.DEBUG)    # Singleton instance of the runtime
instance.object_cache.preload()

