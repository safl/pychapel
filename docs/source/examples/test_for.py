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

def test_for(capfd):
    ex_for(1, 1000)
    out, err = capfd.readouterr()
    for i in xrange(1, 1000):
        assert 'This is ' + str(i) + '\n' in out
