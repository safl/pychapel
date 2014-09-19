import logging

import pych
from pych.extern import FromC

@FromC()
def add_doubles(x=float, y=float):
    """
    return x+y;
    """
    return float

if __name__ == "__main__":
    logging.basicConfig(level=logging.DEBUG)
    print add_doubles(1.0, 3.0)
