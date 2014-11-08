from pych.extern import Chapel

@Chapel()
def ex_begin_noret():
    """
    begin writeln("#1 line.");
    begin writeln("#2 line.");
    begin writeln("#3 line.");
    begin writeln("#4 line.");
    begin writeln("#5 line.");
    """
    return None

@Chapel()
def ex_begin():
    """
    begin writeln("#1 line.");
    begin writeln("#2 line.");
    begin writeln("#3 line.");
    begin writeln("#4 line.");
    begin writeln("#5 line.");
    return 0;
    """
    return int


if __name__ == "__main__":
    ex_begin_noret()
    ex_begin()
