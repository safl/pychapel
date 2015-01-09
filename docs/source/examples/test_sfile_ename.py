from pych.extern import Chapel

@Chapel(ename="hello_caller", sfile="hellolib.exported.chpl")
def hello_world():
    return None

if __name__ == "__main__":
    hello_world()

def test_sfile(capfd):
    hello_world()
    out, err = capfd.readouterr()
    assert out == 'Hi Caller, I am Chapel, pleased to meet you.\n'
