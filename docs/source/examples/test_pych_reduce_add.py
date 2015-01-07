import numpy as np
from pych.array_ops import *

def test_pych_reduce_add():
    a = np.ones((10,10), dtype=np.float64)
    r = np.empty(10, dtype=np.float64)
    pych_reduce_add(a, 0, r)
    assert all(r == np.array([ 10.0,  10.0,  10.0,  10.0,  10.0,  10.0,  10.0,  10.0,  10.0,  10.0]))
