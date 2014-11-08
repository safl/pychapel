from pych.extern import Chapel

@Chapel(sfile="/home/safl/pychapel/module/ext/src/mymodule.chpl")
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
