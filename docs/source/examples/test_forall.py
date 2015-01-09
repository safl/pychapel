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

def test_forall(capfd):
    ex_forall(1, 10000)
    out, err = capfd.readouterr()
    for i in xrange(1, 10000):
        assert 'This is ' + str(i) + '\n' in out
