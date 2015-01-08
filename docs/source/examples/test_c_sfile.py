from pych.extern import FromC

@FromC(sfile="examples.c")
def add_doubles(x=float, y=float):
    return float

def test_c_sfile():
    assert add_doubles(1.0, 3.0) == 4.0
