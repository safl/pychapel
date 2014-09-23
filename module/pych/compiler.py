"""
    Encapsulation for calling the backend-compiler.
"""
from subprocess import Popen, PIPE
import tempfile
import logging

from pych.exceptions import *

lang2ext = {
    "c": ".c",
    "chapel": ".chpl"
}

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

        with tempfile.NamedTemporaryFile(
            suffix=lang2ext[extern.slang.lower()],
            prefix="temp-",
            delete=False) as sf:

            sf.write(extern.source)             # Dump the source out
            sf.flush()

            options = self._options             # Setup command-arguments
            options["lib_out"] = object_abspath
            options["tmp_out"] = "something"
            options["sfile"] = sf.name

            all_out = ""
            all_err = ""
            for cmd_str in options["commands"]: # Execute commands
                logging.debug("cmd_str(%s)", cmd_str)
                cmd = (cmd_str % options).split(" ")
                logging.debug("Cmd: %s", " ".join(cmd))

                process = Popen(cmd, stdout=PIPE, stdin=PIPE)
                out, err = process.communicate(extern.source)
                all_out += out if out else ""
                all_err += err if err else ""

        return (all_out, all_err)

    def compile(self, source, language, object_abspath):
        """
        Compiles the given 'source' into a shared library.
        The result will be stored in object_abspath.
        """
        logging.debug("If succesful; result should be here %s", object_abspath)

        if language == "c":
            out, err = self._source_from_pipe(source, object_abspath)
        elif language == "chapel":
            out, err = self._source_from_file(source, object_abspath)

        return out, err
