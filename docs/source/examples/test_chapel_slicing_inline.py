import numpy as np
from pych.extern import Chapel

@Chapel()
def ex_numpy(a=np.ndarray):
    """
    use Time;
    var b: [a.domain] real;
    b = 2.0;
    for i in a.domain {
        a[i] = getCurrentTime() / 60;
        writeln(a[i]);
    }
    writeln(a);
    writeln("Done.");
    """
    return None

def test_chapel_slicing():
    a = np.ones((10), dtype=np.float)
    b = a[::2]
    wasRight1 = all(a == [ 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 ])
    # wasRight1 ensures array originally started as filled with ones
    ex_numpy(b)
    wasRight2 = all(a[::2] == b)
    # wasRight2 ensures a was updated as b was, since slices of numpy arrays
    # share memory with the original array

    c = np.ones((10), dtype=np.float)
    d = c[::2]
    for i, e in enumerate(d):
        d[i] = i

    assert wasRight1 and wasRight2 and all(c == [ 0.0,  1.0,  1.0,  1.0,  2.0,  1.0,  3.0,  1.0,  4.0,  1.0]) and all(d == [ 0.0,  1.0,  2.0,  3.0,  4.0])
