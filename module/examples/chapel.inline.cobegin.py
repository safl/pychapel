from pych.extern import Chapel

@Chapel()
def ex_cobegin5():
    """
    cobegin {
        writeln("#1 line.");
        writeln("#2 line.");
        writeln("#3 line.");
        writeln("#4 line.");
        writeln("#5 line.");
    }
    """
    return None

if __name__ == "__main__":
    ex_cobegin5()
