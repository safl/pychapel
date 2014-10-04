#!/usr/bin/env python
import ctypes

import numpy as np

def main():
    lib = ctypes.cdll.LoadLibrary("extern.so")
    r = np.ones((10,10), dtype=np.float32)
    r_struct = r.__array_struct__
    #print r, r_struct
    #print r, r_struct
    call_this = lib.call_this
    call_this.argtypes = [ctypes.py_object]
    call_this(r_struct)
    call_this(r.__array_struct__)

if __name__ == "__main__":
    main()
