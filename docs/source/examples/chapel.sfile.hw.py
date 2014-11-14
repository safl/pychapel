from pych.extern import Chapel

@Chapel()
def hello_world(sfile="sfile.hello.chpl"):
    return None

if __name__ == "__main__":
    hello_world()
