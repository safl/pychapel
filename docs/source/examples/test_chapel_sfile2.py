from pych.extern import Chapel

@Chapel(sfile="sfile.hello.chpl")
def hello_world():
    return None

if __name__ == "__main__":
    hello_world()

def test_sfile(capfd):
    hello_world()
    out, err = capfd.readouterr()
    assert out == 'Hello, World\n'
