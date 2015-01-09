from pych.extern import Chapel

@Chapel()
def hello_world():
    """
    writeln("Hello, world");
    """
    return None

if __name__ == "__main__":
    hello_world()

def test_inline(capfd):
    hello_world()
    out, err = capfd.readouterr()
    assert out == 'Hello, world\n'
