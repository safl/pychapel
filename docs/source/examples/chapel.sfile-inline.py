from pych.extern import Chapel
import os

currentloc = os.getcwd();

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
