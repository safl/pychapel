import numpy as np
from pych.extern import FromC

@FromC()
def pass_it(x=np.ndarray, y=np.ndarray):
    r"""
    py_pprint_ndarray(x);
    double* x_cast = x->data;
    double* y_cast = y->data;
    for(int i=0; i<x->shape[0]; i++) {
        printf("i=%d, ", i);
        printf("x=%f, y=%f", *x_cast, *y_cast);
        printf("\n");
        *x_cast = *x_cast + *y_cast;
        y_cast++;
        x_cast++;
    }
    """
    return None

if __name__ == "__main__":
    r = np.ones(10)
    print pass_it(r, np.arange(0,10, dtype=np.float64))
    print r
