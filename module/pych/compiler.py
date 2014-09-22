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

    def __init__(self, options):
        self._options = options

    def compile(self, source, object_abspath):
        """
        Compiles the given 'source' into a shared library.
        The source is piped to the compiler and will be stored
        in the result will be stored in object_abspath.
        """
        logging.debug("If succesful; result should be here %s", object_abspath)

        options = self._options             # Setup command-arguments
        options["lib_out"] = object_abspath
        options["tmp_out"] = "something"

        for cmd_str in options["commands"]: # Execute commands
            cmd = (cmd_str % options).split(" ")
            logging.debug("Cmd: %s", " ".join(cmd))

            process = Popen(cmd, stdout=PIPE, stdin=PIPE)
            out, err = process.communicate(source)

        return out, err
