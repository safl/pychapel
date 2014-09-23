"""
    * library is implicitly named
    * ename is derived from Python function name
    * Call by value using numerical built-in types
    * Inline Chapel code
    * Multiple Python functions are mapped to distinct explicitly named libraries
"""
from pych.extern import Chapel

@Chapel(lib="libfancy1.so")
def add_doubles_emd(x=float, y=float):
    """
    return x+y;
    """
    return float

@Chapel(lib="libfancy2.so")
def add_ints_emd(x=int, y=int):
    """
    return x+y;
    """
    return int

def test_add_doubles_emd():
    assert add_doubles_emd(1.0, 3.0) == 4.0

def test_add_ints_emd():
    assert add_ints_emd(1, 3) == 4

