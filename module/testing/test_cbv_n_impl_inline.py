"""
    * library is implicitly named
    * ename is derived from Python function name
    * Call by value using numerical built-in types
    * Inline Chapel code
    * Multiple functions are mapped from the same implicit library
"""
from pych.extern import FromChapel

@FromChapel()
def add_doubles_nii(x=float, y=float):
    """
    return x+y;
    """
    return float

@FromChapel()
def add_ints_nii(x=int, y=int):
    """
    return x+y;
    """
    return int

def test_add_doubles_nii():
    assert add_doubles_nii(1.0, 3.0) == 4.0

def test_add_ints_nii():
    assert add_ints_nii(1, 3) == 4

