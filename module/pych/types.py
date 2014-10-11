"""
    Mapping of types between Python - NumPy - ctypes.
"""
import ctypes
import numpy as np

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

TYPEMAP = {
    None:       None,
    bool:       ctypes.c_bool,
    int:        ctypes.c_int,
    long:       ctypes.c_long,
    float:      ctypes.c_double,
    str:        ctypes.c_char_p,
    unicode:    ctypes.c_wchar_p,
    np.ndarray: ctypes.POINTER(PychArray)
}

KEYWORDS = {
    "c": [],
    "chapel": ["_","align","atomic","begin","break","by","class","cobegin",
        "coforall","config","const","continue","delete dmapped","do",
        "domain","else","enum","export","extern","for","forall","if",
        "in","index inline","inout","iter","label","let","local",
        "module","new","nil","noinit","on","otherwise out","param",
        "proc","record","reduce","ref","return","scan","select",
        "serial","single","sparse subdomain","sync","then","type",
        "union","use","var","when","where","while","yield","zip"
    ]
}
