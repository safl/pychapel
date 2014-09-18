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



class Runtime(object):

    def __init__(self, log_level=logging.ERROR):
        self.compiler       = Compiler(config["compiler_cmd"])
        self.object_cache   = ObjectCache(config["search_paths"])

        logging.basicConfig(level=log_level)

    def dispatch(self, extern):
        """Tries to obtain executable code for the given extern."""
        
        try:    # Grabbing it from existing loaded symbols
            return self.object_cache._functions[extern.cname]
        except Exception as E:
            logging.debug("No handle for: [P: %s -> C: %s]" % (extern.pname, extern.cname))

        try:    # Loading it from associated library aka dlload()...
            return self.object_cache.load(extern.clib, extern.cname)
        except Exception as e:
            logging.debug("No library-handle for: [%s]" % extern.clib)

        try:    # Opening library from disk and loading aka dlopen(), dlload()
            lh = self.object_cache.find(extern.clib)
            if lh:
                return self.object_cache.load(extern.cname)
        except Exception as e:
            logging.debug("No libraries in in search-path for [%s]" % extern.clib)

        #
        # At this point we know that no library exist for the given extern,
        # so it must either be faulty or an not-yet compiled "inline"
        #

        #
        # Check if "inline-source" / function-body is available
        if not fp and extern.doc:
            pass                # TODO: Compile and load "inline-source"

        #
        # Check if a "source-file" is available
        if not fp:
            pass
        
        logging.debug("Dispatch did not find anything!")
        return None                                     # At last we give up

    def execute(self, extern):
        logging.debug("Executing %s | %s" % (extern.cname, extern))

        fp = self.dispatch(extern)
        if not fp:
            raise Exception("Bahhh cannot materialize extern.")


        #
        # Call the function
        res = fp(*extern.args)

        logging.debug("Type: %s" % type(res))
        return res

instance = Runtime(logging.DEBUG)    # Singleton instance of the runtime
instance.object_cache.preload()

