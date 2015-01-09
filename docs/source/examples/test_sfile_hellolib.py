from pych.extern import Chapel

@Chapel(sfile="hellolib.exported.chpl")
def hello_caller():
    return None

if __name__ == "__main__":
    hello_caller()

def test_sfile(capfd):
    hello_caller()
    out, err = capfd.readouterr()
    assert out == 'Hi Caller, I am Chapel, pleased to meet you.\n'
