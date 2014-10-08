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

from pych.exceptions import LibraryError

def prepend_path(root, path):

    abspath = path
    if not os.path.isabs(abspath):
        abspath = "%s%s%s" % (root, os.sep, path)
    abspath = os.path.abspath(abspath)

    return abspath

class ObjectStore(object):
    """The object cache encapsulation."""

    def __init__(self, config):

        self._root_path = config["root_path"]   
        if not self._root_path:             # Root-path defaults to cwd
            self._root_path = os.getcwd()
                                            # Search paths
        self._search_paths = {source:[] for source in config["search_paths"]}
        for source in config["search_paths"]:
            for search_path in config["search_paths"][source]:
                self._search_paths[source].append(prepend_path(
                    self._root_path, search_path
                ))
                                            # Output paths
        self._output_paths = {source:[] for source in config["output_paths"]}
        for source in config["output_paths"]:
            output_path = config["output_paths"][source]
            self._output_paths[source] = prepend_path(self._root_path, output_path)

        self._functions = {}
        self._libraries = {}                # library.so => cdll-library-handle

        logging.debug("Object-store: %s", self)

    def __repr__(self):
        return pprint.pformat(vars(self))

    def open(self, library_abspath):
        """Open a library, return and store a handle to it."""

        library_fn = os.path.basename(library_abspath)
        if library_fn not in self._libraries:
            # Module/library initialization for chapel libraries
            self._libraries[library_fn] = cdll.LoadLibrary(library_abspath)

        return self._libraries[library_fn]

    def open_ahead(self):
        """Open handles to all libraries in search-path."""

        for search_path in self._search_paths:
            for library_abspath in glob.glob("%s/*.so" % search_path):
                self.open(library_abspath)

        logging.debug(
            "Opened the following libraries 'ahead of time': %s",
            [lib for lib in self._libraries]
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

        for source in self._search_paths:
            for search_path in self._search_paths[source]:                
                library_abspath = "%s/%s" % (search_path, library_fn)
                logging.debug(
                    "Is lib(%s) here: '%s'?",
                    library_fn,
                    library_abspath
                )
                if os.path.exists(library_abspath):
                    return self.open(library_abspath)

        logging.debug("lib(%s) is nowhere to be found.", library_fn)
        return None

    def evoke(self, extern):
        """
        Evoke the efunc related the given Extern channeling all the power
        of the mighty ObjectStore.
        """

        try:    # Grabbing it from existing loaded symbols
            return self._functions[extern.ename]
        except KeyError:
            logging.debug(
                "No function-handle for: [P: %s -> C: %s]",
                extern.pname,
                extern.ename
            )

        try:    # Loading it from associated library aka dlload()...
            return self.load(extern.lib, extern.ename)
        except KeyError:
            logging.debug("No library-handle for: [%s]", extern.lib)
        except AttributeError:
            logging.error(
                "Library(%s) found but ename(%s) is not in it.",
                extern.lib,
                extern.ename
            )

        try:    # Opening library from disk and loading aka dlopen(), dlload()
            logging.debug("Trying to 'find' library(%s) on disk.", extern.lib)
            lib_h = self.find(extern.lib)
            if lib_h:
                logging.debug(
                    "Library(%s) found, trying to load(%s)",
                    extern.lib,
                    extern.ename
                )
                return self.load(extern.lib, extern.ename)
        except AttributeError:
            raise LibraryError(extern)

        logging.debug(
            "I used all my magic but failed evoking the ufunc for extern."
        )
        return None                                     # At last we give up
