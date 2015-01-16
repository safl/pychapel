import pytest
from pych.extern import Chapel

# Don't have a way to specify where the Chapel module arbitraryfile would live
# The intention seems to be the addition of an argument lib to @Chapel
@Chapel()
def useArbitrary():
    """
    use arbitraryfile;

    writeln(foo(1, 2));
    // Should be 6
    writeln(bar());
    // Should be 14 14 3 14 14\n14 14 3 14 14\n
    writeln(baz());
    // Should be (num = 4, contents = 3.0)\n(num = 4, contents = 3.0)\n
    """
    return None

if __name__ == "__main__":
    useArbitrary()

import testcase
# contains the general testing method, which allows us to gather output
import os.path

@pytest.mark.xfail
def test_using_other_chapel_code():
    out = testcase.runpy(os.path.realpath(__file__))
    assert out.endswith('6\n14 14 3 14 14\n14 14 3 14 14\n(num = 4, contents = 3.0)\n(num = 4, contents = 3.0)\n')
