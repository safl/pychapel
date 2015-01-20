from pych.extern import Chapel
import os.path

currentloc = os.path.dirname(os.path.realpath(__file__))

@Chapel(depend=[currentloc + '/multMods1/', currentloc + '/multMods2/'], sfile="users.multiple.chpl")
def useMultiModules(x=int, y=int):
    return int

if __name__ == "__main__":
    print(useMultiModules(2, 4))

def test_using_multiple_modules():
    assert useMultiModules(2, 4) == 28
