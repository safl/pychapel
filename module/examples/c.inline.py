from pych.extern import FromC

@FromC()
def add_doubles(x=float, y=float):
    """
    return x+y;
    """
    return float

@FromC()
def add_ints(x=int, y=int):
    """
    return x+y;
    """
    return int

if __name__ == "__main__":
    print add_doubles(1.0, 3.0)
    print add_ints(1,2)
