"""
    The "Runtime", the top of the organization.

    Sets up object_store, specializer, compilers in to
    orchestrate materialization of Externs and initialization
    of Externs/libraries.
"""
import logging
import ctypes
import pprint
import json

from pych.array import PychArray
from pych.object_store import ObjectStore
from pych.specializer import get_specializer
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

        self.object_store = ObjectStore(        # Init object-store
            config["object_store"]
        )
        if config["open_ahead"]:
            self.object_store.open_ahead()

        self.compilers = {}                     # Init compilers
        for compiler in config["compilers"]:
            logging.debug("Initializing %s compiler.", compiler)
            self.compilers[compiler] = Compiler(
                config["compilers"][compiler]
            )

        self.specializers = {}                  # Init specializers
        for slang in config["specializers"]:
            self.specializers[slang] = get_specializer(slang)(config["specializers"][slang])

        self.arrays = {}                        # Array mappings

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

        efunc = self.object_store.evoke(extern) # Evoke the efunc

        if not efunc:                           # Create an evokeable object
            source = ""
            slang = extern.slang.lower() if extern.slang else None

            if (extern.doc or extern.sfile) and \
                slang not in ["c", "chapel"]:
                raise MaterializationError(
                    extern,
                    "Unsupported source language(%s)" % extern.slang
                )

            if extern.doc:                      # Specialize inline
                # Use hints to specialize source for all externs
                # mapped into this library
                source = self.specializers[slang].specialize(
                    self.hints[extern.lib]
                )

            if extern.sfile:
                source = self.specializers[slang].load(
                    extern.sfile
                )

            if source:                          # Compile the source
                out, err = self.compilers[slang].compile(
                    source,
                    slang,
                    "%s/%s" % (self.object_store._output_paths[slang], extern.lib)
                )
                #
                # TODO: Check the output of out/err and report
                #       an appropriate error.
                #
                efunc = self.object_store.evoke(extern) # Evoke it again!

            # TODO: Call rt init/finalize and module-initializer for Chapel code

        return efunc

    def map_nparray(self, nparray):
        """
        Map a NumPy array to a PychArray for ffi interoperability.
        
        @returns The PychArray usable by ctypes.
        """
        nparray_id = id(nparray)

        try:
            return self.arrays[nparray_id]
        except KeyError:
            logging.debug("Array is not mapped... yet...")

        #
        # Create one
        #
        shape = [nelements for nelements in nparray.shape]
        shape += [0]*(16-len(shape))

        strides = [stride for stride in nparray.strides]
        strides += [0]*(16-len(strides))

        self.arrays[nparray_id] = PychArray(
            two=2,
            nd=nparray.ndim,
            typekind=nparray.__array_interface__['typestr'][1],
            itemsize=nparray.itemsize,
            flags=0,
            shape=(ctypes.c_int*16)(*shape),
            strides=(ctypes.c_int*16)(*strides),
            data=nparray.ctypes.data
        )

        return self.arrays[nparray_id]
