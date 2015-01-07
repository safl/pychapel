from pych.extern import Chapel

@Chapel()
def add_fff(x=float, y=float):
    """
    return x + y;
    """
    return float

@Chapel()
def div_fff(x=float, y=float):
    """
    return x / y;
    """
    return float

@Chapel()
def mul_fff(x=float, y=float):
    """
    return x * y;
    """
    return float

@Chapel()
def sub_fff(x=float, y=float):
    """
    return x - y;
    """
    return float

def test_add():
    assert add_fff(1.0, 3.0) == 4.0

def test_div():
    assert div_fff(5.0, 2.0) == 2.5

def test_mul():
    assert mul_fff(2.0, 3.0) == 6.0

def test_sub():
    assert sub_fff(5.0, 3.0) == 2.0
