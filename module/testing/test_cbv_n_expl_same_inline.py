"""
    * library is implicitly named
    * ename is derived from Python function name
    * Call by value using numerical built-in types
    * Inline Chapel code
    * Multiple Python functions are mapped to the same explicitly named librarie
"""
from pych.extern import Chapel

@Chapel(lib="libfancy0.so")
def add_doubles_ems(x=float, y=float):
    """
    return x+y;
    """
    return float

@Chapel(lib="libfancy0.so")
def add_ints_ems(x=int, y=int):
    """
    return x+y;
    """
    return int

def test_add_doubles_ems():
    assert add_doubles_ems(1.0, 3.0) == 4.0

def test_add_ints_ems():
    assert add_ints_ems(1, 3) == 4

