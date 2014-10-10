from pych.extern import Chapel

@Chapel()
def add_fff(x=float, y=float):
    """
    writeln("Hello");
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

if __name__ == "__main__":
    print add_fff(1.0, 3.0)
    print div_fff(5.0, 2.0)
    print mul_fff(2.0, 3.0)
    print sub_fff(5.0, 3.0)
