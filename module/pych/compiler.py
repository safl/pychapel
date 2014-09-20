"""
    Encapsulation for calling the backend-compiler.
"""
from subprocess import Popen, PIPE
import logging

class Compiler(object):
    """
    Use this class to compile source-code to shared libraries,
    loadable by the ObjectCache.
    """

    def __init__(self, cmd):
        self._cmd = cmd

    def compile(self, source, object_abspath):
        """
        Compiles the given 'source' into a shared library.
        The source is piped to the compiler and will be stored
        in the result will be stored in object_abspath.
        """
        logging.debug("Compiling to %s", object_abspath)

        cmd = [
            self._cmd, '-lm', '-O3', '-x', 'c', '-fPIC',
            '-march=native', '-fopenmp', '-std=c99',
            '-shared', '-', '-o', object_abspath
        ]
        process = Popen(cmd, stdout=PIPE, stdin=PIPE)

        out, err = process.communicate(source)

        return out, err
