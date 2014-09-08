import pych
from pych.extern import FromC

@FromC
def hello_c():
    pass

if __name__ == "__main__":

    pych.runtime.instance.object_cache.preload()
    hello_c()
