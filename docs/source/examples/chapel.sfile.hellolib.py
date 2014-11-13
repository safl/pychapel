from pych.extern import Chapel

@Chapel(sfile="chapel.hellolib.exported.chpl")
def hello_caller():
    return None

@Chapel(sfile="chapel.hellolib.exported.chpl")
def add_ints(x=int, y=int):
    return int

if __name__ == "__main__":
    hello_caller()
    print(add_ints(2,3))
