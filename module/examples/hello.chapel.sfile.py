from pych.extern import FromChapel

@FromChapel(sfile="examples.chpl")
def hello_world():
    return None

@FromChapel(sfile="examples.chpl")
def add_ints(x=int, y=int):
    return int

@FromChapel(sfile="examples.chpl")
def add_doubles(x=float, y=float):
    return float

if __name__ == "__main__":
    hello_world()
    print add_ints(1, 2)
    print add_doubles(1.0, 3.0)
