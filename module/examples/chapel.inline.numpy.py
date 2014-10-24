import numpy as np
from pych.extern import Chapel

@Chapel()
def ex_numpy(a=np.ndarray):
    """
    pprint_pych_array(a);           // pprint the struct.

    var ret = pych_to_chpl(a);      // Convert it.
    var arr = new _array(ret, ret);
    for e in arr {                  // Try and access it.
        writeln(e);
    }
    writeln("Done.");
    """
    return None

if __name__ == "__main__":
    a = np.ones((3,3), dtype=np.float)
    print a
    ex_numpy(a)
    print a
