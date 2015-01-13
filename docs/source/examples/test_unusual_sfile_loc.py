from pych.extern import Chapel
import os.path

currentloc = os.path.dirname(os.path.realpath(__file__))

# Note: depends on test living in a specific location relative to
# mymodule.chpl.  Not ideal, but also not a huge issue.
@Chapel(sfile=currentloc + "/../../../module/ext/src/mymodule.chpl")
def hello_mymodule():
    return None

@Chapel()
def hello_inline():
    """
    writeln("Hello from inline.");
    """
    return None

if __name__ == "__main__":
    hello_mymodule()
    hello_inline()


import testcase
# contains the general testing method, which allows us to gather output

def test_unusual_sfile_loc():
    out = testcase.runpy(os.path.realpath(__file__))
    assert 'Hello from mymodule\n' in out
    assert out.endswith('Hello from inline.\n')
