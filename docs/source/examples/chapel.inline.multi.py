import numpy as np

from pych.array_ops import pych_ewise_add
from pych.extern import Chapel

@Chapel()
def assign(jazz=int, ballet=np.ndarray):
    """
    ballet = jazz;
    """
    return None

if __name__ == "__main__":
    a = np.ones(10)
    b = np.ones(10)
    c = np.ones(10)

    pych_ewise_add(a,b,c)
    assign(5, a)

    print a
    print c
