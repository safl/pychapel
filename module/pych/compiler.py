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

    def _source_from_pipe(self, extern, object_abspath):

        options = self._options             # Setup command-arguments
        options["lib_out"] = object_abspath
        options["tmp_out"] = "something"

        all_out = ""
        all_err = ""
        for cmd_str in options["commands"]: # Execute commands
            cmd = (cmd_str % options).split(" ")
            logging.debug("Cmd: %s", " ".join(cmd))

            process = Popen(cmd, stdout=PIPE, stdin=PIPE)
            out, err = process.communicate(extern.source)
            all_out += out if out else ""
            all_err += err if err else ""

        return (all_out, all_err)

    def _source_from_file(self, extern, object_abspath):
        pass

    def compile(self, extern, object_abspath):
        """
        Compiles the given 'source' into a shared library.
        The result will be stored in object_abspath.
        """
        logging.debug("If succesful; result should be here %s", object_abspath)

        if extern.slang.lower() == "c":
            out, err = self._source_from_pipe(extern, object_abspath)
        elif extern.slang.lower() == "chapel":
            out, err = self._source_from_file(extern, object_abspath)
        else:
            raise Exception("Unsupported language(%s)" % extern.lang)

        return out, err
