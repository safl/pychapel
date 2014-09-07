from ctypes import cdll

class ObjectCache(object):
    def __init__(self, object_path):
        self._object_path = object_path

