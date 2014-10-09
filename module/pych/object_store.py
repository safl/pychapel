"""
    Responsible for opening libraries, loading functions and maintaining
    handles to both.
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
        """
        Open a library, store a handle to it and return the handle.
        
        :param str library_abspath: Absolute path to the library (.so).
        :returns: Handle to library when successful, None othervise.
        :rtype: ctypes.CDLL

        :raises OSError: When 'library_abspath' is not found.
        """
        library_fn = os.path.basename(library_abspath)
        if library_fn not in self._libraries:   # Avoid reopening libraries
            self._libraries[library_fn] = cdll.LoadLibrary(library_abspath)

        return self._libraries[library_fn]

    def open_ahead(self):
        """Open handles to all libraries in search paths."""

        for search_path in self._search_paths:
            for library_abspath in glob.glob("%s/*.so" % search_path):
                self.open(library_abspath)

    def open_fn(self, library_fn):
        """
        Look through the search_paths for 'library_fn', opening the first
        matching library via open(...) thereby implicitly also storing a handle
        to it.

        :param str library_fn: Filename of library without path, for example "libc.so".
        :returns: Handle to library when successful, None othervise.
        :rtype: ctypes.CDLL
        """
        for source in self._search_paths:
            for search_path in self._search_paths[source]:                
                library_abspath = "%s/%s" % (search_path, library_fn)
                if os.path.exists(library_abspath):
                    return self.open(library_abspath)

        return None

    def load(self, library_fn, function_name):
        """
        Load a function from library, store a handle to it, and return
        the handle.
        
        :param str library_fn: Filename of library without path for example "libc.so".
        :param str function_name: Name of the symbol/function to load, for example "printf".
        :returns: Handle to library function as a ctypes function pointer.
        :rtype: ctypes._FuncPtr
        :raises AttributeError: When function is not in library.
        """

        handle = operator.attrgetter(function_name)(self._libraries[library_fn])

        self._functions[function_name] = handle

        return self._functions[function_name]


    def evoke(self, extern):
        """
        Evoke the efunc related the given Extern channeling all the power of the mighty ObjectStore.

        This entails going through the "hierachy":

        1. Check and see if function pointer is readily available.
        2. Try loading from existing library handle.
        3. Search for library associated with 'extern', open library, load function.

        Hitting 3) should only occur the first time an Extern is evoked.

        Meaning that evocations of different Externs in the same library will not go to disk.

        Similarly, multiple evocations of the same Extern will only result in a
        lookup.

        :param pych.Extern extern: Python representation for which an external function should be conjured.
        :returns: Handle to library function as a ctypes function pointer.
        :rtype: ctypes._FuncPtr 
        """

        if extern.ename in self._functions:     # Grabbing loaded symbols
            return self._functions[extern.ename]

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
            lib_h = self.open_fn(extern.lib)
            if lib_h:
                return self.load(extern.lib, extern.ename)
        except AttributeError:
            raise LibraryError(extern)

        logging.debug(
            "I used all my magic but failed evoking the ufunc for extern."
        )
        return None                                     # At last we give up
