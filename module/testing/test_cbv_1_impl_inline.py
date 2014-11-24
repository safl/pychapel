"""
    * library is implicitly named
    * ename is derived from Python function name
    * Call by value using numerical built-in types
    * Inline Chapel code
    * One function is mapped
"""
from pych.extern import Chapel

@Chapel()
def add_doubles_isi(x=float, y=float):
    """
    return x+y;
    """
    return float

def test_doubles_isi():
    assert add_doubles_isi(1.0, 3.0) == 4.0

