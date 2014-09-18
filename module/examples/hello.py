import logging

import pych
from pych.extern import FromC

@FromC(clib="hello_c.so", cname="hello_c")
def hello_cworld():
    return None

#@FromC()
#def add(x, y):
#    """
#    return x+y;
#    """
#    return int

if __name__ == "__main__":
    logging.basicConfig(level=logging.DEBUG)
    print hello_cworld()
