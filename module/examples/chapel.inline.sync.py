from pych.extern import Chapel

@Chapel()
def ex_sync():
    """
    sync {
        begin writeln("#1 line.");
        begin writeln("#2 line.");
        begin writeln("#3 line.");
        begin writeln("#4 line.");
        begin writeln("#5 line.");
    }
    """
    return None

if __name__ == "__main__":
    ex_sync()
