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

if __name__ == '__main__':
    ex_forall(1, 10000)


import testcase
# contains the general testing method, which allows us to gather output

def test_forall():
    output = testcase.runpy('test_forall.py');
    for i in xrange(1, 10001):
        assert 'This is ' + str(i) + '\n' in output
