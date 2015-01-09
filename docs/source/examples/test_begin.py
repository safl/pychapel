from pych.extern import Chapel

@Chapel()
def ex_begin_noret():
    """
    writeln("Starting!");
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
    writeln("Starting!");
    begin writeln("#1 line.");
    begin writeln("#2 line.");
    begin writeln("#3 line.");
    begin writeln("#4 line.");
    begin writeln("#5 line.");
    return 0;
    """
    return int


def test_begin_noret(capfd):
    ex_begin_noret()
    out, err = capfd.readouterr()
    # ensure starts with correct statements
    assert out.startswith('Starting!\n');
    # ensure contains all of the remainder
    assert '#1 line.\n' in out
    assert '#2 line.\n' in out
    assert '#3 line.\n' in out
    assert '#4 line.\n' in out
    assert '#5 line.\n' in out

def test_begin_ret(capfd):
    ex_begin()
    out, err = capfd.readouterr()
    # ensure starts with correct statements
    assert out.startswith('Starting!\n');
    # ensure contains all of the remainder
    assert '#1 line.\n' in out
    assert '#2 line.\n' in out
    assert '#3 line.\n' in out
    assert '#4 line.\n' in out
    assert '#5 line.\n' in out
