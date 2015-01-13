from pych.extern import Chapel

@Chapel(sfile="hellolib.exported.chpl")
def hello_caller():
    return None

if __name__ == "__main__":
    hello_caller()


import testcase
# contains the general testing method, which allows us to gather output

def test_sfile():
    out = testcase.runpy('test_chapel_sfile.py')
    assert out.endswith('Hi Caller, I am Chapel, pleased to meet you.\n')
    # The first time this test is run, it may contain output notifying that
    # a temporary file has been created.  The important part is that this
    # expected output follows it (enabling the test to work for all runs, as
    # the temporary file message won't occur in the second run)
