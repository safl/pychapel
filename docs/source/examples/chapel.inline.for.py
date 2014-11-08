from pych.extern import Chapel

@Chapel()
def ex_for(start=int, end=int):
    """
    for i in start..end {
        writeln("This is ", i);
    }
    return 0.0;
    """
    return float

if __name__ == "__main__":
    ex_for(1, 1000)
