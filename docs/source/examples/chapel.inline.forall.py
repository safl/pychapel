from pych.extern import Chapel

@Chapel()
def ex_forall(start=int, end=int):
    """
    forall i in start..end {
        writeln("This is ", i);
    }
    return 0.0;
    """
    return float

if __name__ == "__main__":
    ex_forall(1, 10000)
