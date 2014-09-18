from ctypes import cdll
import operator
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
        """Open handles to all libraries found in search-path."""

        for search_path in self._search_paths:
            for library_abspath in glob.glob("%s/*.so" % search_path):
                self.open(library_abspath)

    def open(self, library_abspath):
        """Open a library, store and returns a handle to it."""

        library_fn = os.path.basename(library_abspath)
        if library_fn not in self._libraries:
            self._libraries[library_fn] = cdll.LoadLibrary(library_abspath)
        
        return self._libraries[library_fn]

    def load(self, library_fn, function_name):
        """Load a function from library, store and return it's handle."""

        handle = operator.attrgetter(function_name)(self._libraries[library_fn])
    
        self._functions[function_name] = handle
    
        return self._functions[function_name]

