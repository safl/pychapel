from pych.extern import Chapel

@Chapel()
def ex_sync():
    """
    writeln("Starting!");
    sync {
        begin writeln("#1 line.");
        begin writeln("#2 line.");
        begin writeln("#3 line.");
        begin writeln("#4 line.");
        begin writeln("#5 line.");
    }
    writeln("DONE!");
    """
    return None

def test_sync(capfd):
    ex_sync()
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
