"""
Explicit mapping of NumPy array operations to Chapel array operations.
"""
from pych.extern import Chapel
import numpy as np
# pylint: disable=no-member
# The ndarray member is added dynamically and therefore not visible to pylint.
# pylint: disable=unused-argument
# The interoperability interface exploits arguments, their use are therefore
# not visible to pylint.

@Chapel()
def pych_ewise_add(in1=np.ndarray, in2=np.ndarray, res=np.ndarray):
    """
    res = in1 + in2;
    """
    return None

#@Chapel()
#def pych_ewise_assign(in1=np.ndarray, res=np.ndarray):
#    """
#    res = in1;
#    """

@Chapel()
def pych_ewise_assign(in1=int, res=np.ndarray):
    """
    res = in1;
    """
    return None

@Chapel()
def pych_ewise_subtract(in1=np.ndarray, in2=np.ndarray, res=np.ndarray):
    """
    res = in1 - in2;
    """
    return None

@Chapel()
def pych_scan_add(in1=np.ndarray, in2=np.ndarray, res=np.ndarray):
    """
    res = in1 - in2;
    """
    return None

@Chapel()
def pych_reduce_add(in1=np.ndarray, axis=int, res=np.ndarray):
    """
    res = +reduce(in1);
    """
    return None

