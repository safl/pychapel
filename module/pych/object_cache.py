from ctypes import cdll
import operator
import logging
import pprint
import glob
import os

class ObjectCache(object):

    def __init__(self, search_paths):
        self._search_paths  = search_paths
        self._output_path   = search_paths[0]   # Output is the search in the
                                                # object search-path
        self._functions     = {}
        self._libraries     = {}                # library.so => cdll-library-handle 

    def preload(self):
        """Open handles to all libraries in search-path."""

        for search_path in self._search_paths:
            for library_abspath in glob.glob("%s/*.so" % search_path):
                self.open(library_abspath)

        logging.debug("Preloaded: %s" % pprint.pformat(self._libraries))

    def find(self, library_fn):
        """
        Look through the search_paths for 'library_fn'.
        Opening the first matching library.
        """
        for sp in self._search_paths:
            library_abspath = "%s/%s" % (sp, library_fn)
            if os.path.exists():
                return self.open(library_abspath)

        return None

    def open(self, library_abspath):
        """Open a library, returns and stores a handle to it."""

        library_fn = os.path.basename(library_abspath)
        if library_fn not in self._libraries: 
            self._libraries[library_fn] = cdll.LoadLibrary(library_abspath)
        
        return self._libraries[library_fn]

    def load(self, library_fn, function_name):
        """Load a function from library, returns and stores a handle to it."""

        handle = operator.attrgetter(function_name)(self._libraries[library_fn])
    
        self._functions[function_name] = handle
    
        return self._functions[function_name]

