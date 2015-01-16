import pytest
from pych.extern import Chapel

@Chapel(bfile="material.file2.chpl")
def material():
    return None

if __name__ == '__main__':
    material()
    import test_materialization_conflict_A
    test_materialization_conflict_A.material()

import testcase
# contains the general testing method, which allows us to gather output
import os.path

@pytest.mark.xfail
def test_materialization_B():
    out = testcase.runpy(os.path.realpath(__file__))
    # The first time this test is run, it may contain output notifying that
    # a temporary file has been created.  The important part is that this
    # expected output follows it (enabling the test to work for all runs, as
    # the temporary file message won't occur in the second run)  But that means
    # we can't use ==

    # ensure contains both outputs in the correct order
    assert "I'm file 2!\nI'm file 1!\n" in out
