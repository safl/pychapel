import numpy as np

from pych.array_ops import pych_ewise_add
from pych.extern import Chapel

@Chapel()
def assign(jazz=int, ballet=np.ndarray):
    """
    ballet = jazz;
    """
    return None

def test_whole_array_assignment():
    a = np.ones(10)
    b = np.ones(10)
    c = np.ones(10)

    pych_ewise_add(a,b,c) # adds a and b, leaving their results in c
    assign(5, a)

    assert all(a == [ 5.0,  5.0,  5.0,  5.0,  5.0,  5.0,  5.0,  5.0,  5.0,  5.0])
    assert all(b == [ 1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0])
    assert all(c == [ 2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0])
