from pych.extern import Chapel

@Chapel()
def ex_reduce(start=int, end=int):
    """
    var A: [start..end] int = 1;
    return +reduce(A);
    """
    return int

if __name__ == "__main__":
    print ex_reduce(1, 500000)
