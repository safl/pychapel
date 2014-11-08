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

if __name__ == "__main__":
    a = np.ones((10), dtype=np.float)
    b = a[::2]
    print a
    ex_numpy(b)
    print a, b

    c = np.ones((10), dtype=np.float)
    d = c[::2]
    for i, e in enumerate(d):
        d[i] = i

    print c, d
