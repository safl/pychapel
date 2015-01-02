from pych.extern import Chapel

@Chapel(sfile="hellolib.exported.chpl")
def hello_caller():
    return None

if __name__ == "__main__":
    hello_caller()
