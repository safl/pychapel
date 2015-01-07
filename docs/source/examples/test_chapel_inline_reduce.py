from pych.extern import Chapel

@Chapel()
def ex_reduce(start=int, end=int):
    """
    var A: [start..end] int = 1;
    return +reduce(A);
    """
    return int

def test_chapel_inline_reduce():
    assert ex_reduce(1, 500000) == 500000
