"""
    Encapsulation for calling the backend-compiler.
"""
from subprocess import Popen, PIPE
import tempfile
import logging
import pprint
import copy
import os

LANG2EXT = {
    "c":        ".c",
    "chapel":   ".chpl"
}

def prefix_path(prefix, path):
    if not os.path.isabs(path):
        return os.path.abspath("%s%s%s" % (prefix, os.sep, path))
    return os.path.abspath(path)

class Compiler(object):
    """
    Use this class to compile source-code to shared libraries,
    loadable by the ObjectStore.
    """

    def __init__(self, options):
        self._options = {}

        # Set "root_path" use "root_path": "" in JSON to use CWD.
        self._options["root_path"] = os.path.abspath(options["root_path"])

        # Paths
        for path in ["output_path", "lib_path", "inc_path"]:        
            self._options[path] = prefix_path(
                self._options["root_path"],
                options[path]
            )

        # Includes
        self._options["includes"] = ""
        for include_path in options["includes"]:
            self._options["includes"] += '-I %s%s' % (
                prefix_path(self._options["root_path"], include_path),
                os.sep
            )

        # Compiler and linker flags
        self._options["cflags"] = " ".join(options["cflags"])
        self._options["lflags"] = " ".join(options["lflags"])

        # Use replements on these
        self._options["ctargets"] = " ".join(options["ctargets"]) % (
            self._options
        )

        self._options["ltargets"] = " ".join(options["ltargets"]) % (
            self._options
        )

        self._options["commands"] = [
            cmd % self._options for cmd in options["commands"]
        ]

        logging.debug("Compiler-setup: %s", self)

    def __repr__(self):
        return pprint.pformat(vars(self))

    def compile(self, source, language, object_abspath):
        """
        Compiles the given 'source' into a shared library.
        The result will be stored in object_abspath.
        """
        logging.debug("If succesful; result should be here %s", object_abspath)

        all_out = ""
        all_err = ""

        with tempfile.NamedTemporaryFile(
            suffix=LANG2EXT[language],
            prefix="temp-",
            delete=False) as sfile_h:

            sfile_h.write(source)               # Dump the source out
            sfile_h.flush()
            
            for cmd in self._options["commands"]: # Execute commands
                cmd = cmd.replace("__SFILE__", sfile_h.name)
                cmd = cmd.replace("__TMP_PATH__", "/tmp/asdf")
                cmd = cmd.replace("__OBJECT_ABSPATH__", object_abspath)

                logging.debug("cmd[%s]", cmd)

                process = Popen(cmd.split(), stdout=PIPE, stdin=PIPE)
                out, err = process.communicate(source)
                all_out += out if out else ""
                all_err += err if err else ""

        return all_out, all_err
