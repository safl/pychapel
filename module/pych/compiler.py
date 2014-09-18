from subprocess import Popen, PIPE

class Compiler(object):

    def __init__(self, cmd):

        self._cmd = cmd
    
    def compile(self, source, object_abspath):

        cmd = [
            self._cmd, '-lm', '-O3', '-x', 'c',
            '-march=native', '-fopenmp', '-std=c99',
            '-shared', '-', '-o', object_abspath
        ]
        p = Popen(cmd, stdout = PIPE, stdin = PIPE)

        out, err = p.communicate(source)

        return out, err

class C(Compiler):
    pass

class Chapel(Compiler):
    pass

