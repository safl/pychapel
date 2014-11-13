from pych.extern import Chapel

@Chapel(bfile="bfile.hello.chpl")
def hello_world():
    return None

if __name__ == "__main__":
    hello_world()
