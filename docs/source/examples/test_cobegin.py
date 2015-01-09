from pych.extern import Chapel

@Chapel()
def ex_cobegin5():
    """
    writeln("Starting!");
    cobegin {
        writeln("#1 line.");
        writeln("#2 line.");
        writeln("#3 line.");
        writeln("#4 line.");
        writeln("#5 line.");
    }
    writeln("DONE!");
    """
    return None

def test_cobegin(capfd):
    ex_cobegin5()
    out, err = capfd.readouterr()
    # ensure starts and ends with correct statements
    assert out.startswith("Starting!\n");
    assert out.endswith("DONE!\n");
    # ensure contains all of the remainder
    assert "#1 line.\n" in out
    assert "#2 line.\n" in out
    assert "#3 line.\n" in out
    assert "#4 line.\n" in out
    assert "#5 line.\n" in out
