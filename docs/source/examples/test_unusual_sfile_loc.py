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

def test_unusual_sfile_loc(capfd):
    hello_mymodule()
    out, err = capfd.readouterr()
    assert out == 'Hello from mymodule\n'

def test_inline_output(capfd):
    hello_inline()
    out, err = capfd.readouterr()
    assert out == 'Hello from inline.\n'
