import numpy as np
from pych.array_ops import *

a = np.ones((10,10), dtype=np.float64)
r = np.empty(10, dtype=np.float64)

pych_reduce_add(a, 0, r)

print r
