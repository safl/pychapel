from pych.extern import Chapel

@Chapel(sfile="/home/safl/pychapel/module/ext/src/mymodule.chpl")
def hello_mymodule():
    return None

@Chapel(sfile="/home/safl/pychapel/module/ext/src/mymodule.chpl")
def add_rr(x=float, y=float):
    return float

@Chapel(sfile="/home/safl/pychapel/module/ext/src/mymodule.chpl")
def subtract_rr(x=float, y=float):
    return float

if __name__ == "__main__":
    hello_mymodule()
    print add_rr(1.0, 2.0)
    print subtract_rr(1.0, 3.0)
