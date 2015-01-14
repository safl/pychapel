from pych.extern import Chapel

@Chapel(bfile="bfile.hello.chpl")
def hello_world_bfile():
    return None

if __name__ == "__main__":
    hello_world_bfile()

import testcase
# contains the general testing method, which allows us to gather output
import os.path

def test_bfile(capfd):
    out = testcase.runpy(os.path.realpath(__file__))
    # The first time this test is run, it may contain output notifying that
    # a temporary file has been created. The important part is that this
    # expected output follows it (enabling the test to work for all runs, as
    # the temporary file message won't occur in the second run) But that means
    # we can't use ==
    assert out.endswith('Hello, from a bfile.\n')
