from pych.extern import Chapel

@Chapel(ename="hello_caller", sfile="hellolib.exported.chpl")
def hello_world():
    return None

if __name__ == "__main__":
    hello_world()
