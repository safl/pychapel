from pych.extern import Chapel

@Chapel()
def hello_world():
    """
    writeln("Hello");
    """
    return None

if __name__ == "__main__":
    hello_world()
