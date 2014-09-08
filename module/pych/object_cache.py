from ctypes import cdll
import operator
import glob
import os

class ObjectCache(object):

    def __init__(self, object_path):
        self._object_path   = object_path

        self._functions     = {}
        self._libraries     = {}

    def preload(self):

        for library_path in glob.glob("%s/*.so" % self._object_path):
            library_fn      = os.path.basename(library_path)
            function_name   = library_fn.split(os.extsep)[0]

            library_handle  = cdll.LoadLibrary(library_path)
            function_handle = operator.attrgetter(function_name)(library_handle)

            self._functions[function_name]  = function_handle
            self._libraries[library_fn]     = library_handle

