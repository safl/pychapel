"""
    Responsible for loading objects from disk and
    maintaining handles functions and libraries.
"""
from ctypes import cdll
import operator
import logging
import pprint
import glob
import os

class ObjectCache(object):
    """The object cache encapsulation."""

    def __init__(self, search_paths):
        self._search_paths = search_paths
        self._output_path = search_paths[0] # Output is the search in the
                                            # object search-path
        self._functions = {}
        self._libraries = {}                # library.so => cdll-library-handle

    def open(self, library_abspath):
        """Open a library, return and store a handle to it."""

        library_fn = os.path.basename(library_abspath)
        if library_fn not in self._libraries:
            self._libraries[library_fn] = cdll.LoadLibrary(library_abspath)

        return self._libraries[library_fn]

    def open_ahead(self):
        """Open handles to all libraries in search-path."""

        for search_path in self._search_paths:
            for library_abspath in glob.glob("%s/*.so" % search_path):
                self.open(library_abspath)

        logging.debug(
            "Opened the following libraries 'ahead of time': %s",
            [elib for elib in self._libraries]
        )

    def load(self, library_fn, function_name):
        """Load a function from library, return and store a handle to it."""

        handle = operator.attrgetter(function_name)(self._libraries[library_fn])

        self._functions[function_name] = handle
 
        return self._functions[function_name]

    def find(self, library_fn):
        """
        Look through the search_paths for 'library_fn'.
        Opening the first matching library.
        """
        for sp in self._search_paths:
            library_abspath = "%s/%s" % (sp, library_fn)
            logging.debug(
                "Is elib(%s) here: '%s'?",
                library_fn,
                library_abspath
            )
            if os.path.exists(library_abspath):
                return self.open(library_abspath)

        logging.debug("elib(%s) is nowhere to be found.", library_fn)
        return None

    def evoke(self, extern):
        """
        Evoke the efunc related the given Extern channeling all the power
        of the mighty ObjectCache.
        """

        try:    # Grabbing it from existing loaded symbols
            return self._functions[extern.ename]
        except KeyError as exc:
            logging.debug(
                "No function-handle for: [P: %s -> C: %s]",
                extern.pname,
                extern.ename
            )

        try:    # Loading it from associated library aka dlload()...
            return self.load(extern.elib, extern.ename)
        except KeyError as exc:
            logging.debug("No library-handle for: [%s]", extern.elib)
        except AttributeError as exc:
            logging.error(
                "Library(%s) found but ename(%s) is not in it.",
                extern.elib,
                extern.ename
            )

        try:    # Opening library from disk and loading aka dlopen(), dlload()
            logging.debug("Trying to 'find' library(%s) on disk.", extern.elib)
            lh = self.find(extern.elib)
            if lh:
                logging.debug(
                    "Library(%s) found, trying to load(%s)",
                    extern.elib,
                    extern.ename
                )
                return self.load(extern.elib, extern.ename)
        except AttributeError as exc:
            logging.error(
                "Library(%s) found but ename(%s) is not in it.",
                extern.elib,
                extern.ename
            )

        logging.debug(
            "I used all my magic but failed evoking the ufunc for extern(%s).",
            extern
        )
        return None                                     # At last we give up
