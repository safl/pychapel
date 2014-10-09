"""
    pyChapel Array - Mapping the NumPy ndarray to something edible by ctypes.
"""
import ctypes

class PychArray(ctypes.Structure):
    """
    Representation of a NumPy array when interoperating with C/Chapel
    via ctypes.
    """

    _fields_ = [
        ('two',         ctypes.c_int),
        ('nd',          ctypes.c_int),
        ('typekind',    ctypes.c_char),
        ('itemsize',    ctypes.c_int),
        ('flags',       ctypes.c_int),
        ('shape',       ctypes.c_int*16),
        ('strides',     ctypes.c_int*16),
        ('data',        ctypes.c_void_p)
    ]
