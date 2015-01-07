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
    assert all(a == [ 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 ])
    # this assert ensures array originally started as filled with ones
    ex_numpy(b)
    assert all(a[::2] == b)
    # this assert ensures a was updated when b was, since slices of numpy arrays
    # share memory with the original array
    # b should contain references to the current time, but since that will vary
    # from run to run, this is a more robust comparison

    c = np.ones((10), dtype=np.float)
    # c starts out the same as a
    d = c[::2]
    for i, e in enumerate(d):
        d[i] = i
    # d should contain 0.0 through 4.0, updating alternating indexes in c
    # starting with the first index to contain the same contents.  The
    # assert in the following line reflects this knowledge.

    assert all(c == [ 0.0,  1.0,  1.0,  1.0,  2.0,  1.0,  3.0,  1.0,  4.0,  1.0]) and all(d == [ 0.0,  1.0,  2.0,  3.0,  4.0])
