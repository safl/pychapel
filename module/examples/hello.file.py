from pych.extern import FromC

@FromC(cfile="examples.c")
def add_doubles(x=float, y=float):
    return float

if __name__ == "__main__":
    print add_doubles(1.0, 3.0)
