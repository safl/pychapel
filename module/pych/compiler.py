from subprocess import Popen, PIPE

class Compiler(object):

    def __init__(self, cmd, object_path):

        self._cmd           = cmd
        self._object_path   = object_path
    
    def compile(self, source):

        cmd = [self._cmd, self._object_path]
        p   = Popen(cmd, stdout = PIPE, stdin = PIPE)

        out, err = p.communicate(source)

        return out, err

class C(Compiler):
    pass

class Chapel(Compiler):
    pass

