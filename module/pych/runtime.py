"""
    The "Runtime", the top of the organization.

    Sets up object_cache, specializer, compilers in to
    orchestrate materialization of Externs and initialization
    of Externs/libraries.
"""
import logging
import pprint
import json

from pych.object_cache import ObjectCache
from pych.specializer import Specializer
from pych.compiler import Compiler
from pych.exceptions import MaterializationError

class Runtime(object):
    """Encapsulation of runtime activities, compilation, loading, etc."""

    def __init__(self, config_fn=None):
        if not config_fn:                       # Load configuration
            config_fn = "pych.json"

        config = json.load(open(config_fn))

        logging.basicConfig(                    # Setup logging
            level=config["log_level"],
            format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
        )

        self.hints = {}

        self.compilers = {}                     # Initialize compilers
        for compiler in config["compilers"]:
            logging.debug("Initializing %s compiler.", compiler)
            self.compilers[compiler.lower()] = Compiler(
                config["compilers"][compiler]
            )

        self.object_cache = ObjectCache(config["search_paths"])
        self.specializer = Specializer(config["externs_path"])

        self.object_cache.open_ahead()

    def hint(self, extern):
        """
        Hint the runtime that we might be interested in this extern
        at some point in the future.
        """
        if extern.lib not in self.hints:
            self.hints[extern.lib] = []

        self.hints[extern.lib].append(extern)

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

        @assumption Materialization should not occur until after all
                    mapped functions have been decorated. This limitation
                    should be removed somehow... some day...
        """

        logging.debug("Hints: [%s]", pprint.pformat(self.hints))

        efunc = self.object_cache.evoke(extern) # Evoke the efunc

        if not efunc:                           # Create an evokeable object
            source = ""

            if (extern.doc or extern.sfile) and \
               extern.slang.lower() not in ["c", "chapel"]:
                raise MaterializationError(
                    extern,
                    "Unsupported source language(%s)" % extern.slang
                )

            if extern.doc:                      # Specialize inline
                # Use hints to specialize source for all externs
                # mapped into this library
                for in_library in self.hints[extern.lib]:
                    source += self.specializer.specialize(
                        in_library,
                        prefix=False
                    )

            if extern.sfile:
                source = self.specializer.load(extern.sfile)

            if source:                          # Compile the source

                out, err = self.compilers[extern.slang.lower()].compile(
                    source,
                    extern.slang.lower(),
                    "%s/%s" % (self.object_cache._output_path, extern.lib)
                )
                #
                # TODO: Check the output of out/err and report
                #       an appropriate error.
                #
                efunc = self.object_cache.evoke(extern) # Evoke it again!

            # TODO: Call rt init/finalize and module-initializer for Chapel code

        return efunc
