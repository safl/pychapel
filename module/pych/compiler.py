"""
    Encapsulation for calling the backend-compiler.
"""
# pylint: disable=too-few-public-methods
# The Compiler object encapsulates compiler setup and it is only supposed
# to take care of one well-define action: calling the compiler, it is
# therefore perfectly fine that it only has a single method.

from subprocess import Popen, PIPE
import tempfile
import pprint
import os

from pych.utils import prepend_path

LANG2EXT = {
    "c":        ".c",
    "chapel":   ".chpl"
}

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
            self._options[path] = prepend_path(
                self._options["root_path"],
                options[path]
            )

        # Includes
        self._options["includes"] = ""
        for include_path in options["includes"]:
            self._options["includes"] += '-I %s%s' % (
                prepend_path(self._options["root_path"], include_path),
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
        self._options["save_autogen"] = bool(options["save_autogen"])

    def __repr__(self):
        return pprint.pformat(vars(self))

    def compile(self, source, language, object_abspath):
        """
        Compiles the given 'source' into a shared library.
        The result will be stored in object_abspath.

        :param str source: Sourcecode to compile.
        :param str language: Language of the sourceode e.g. "c" or "chapel".
        :returns: Accumulation of all output and errors from compiler/linker
         commands as tuple(out, err).
        :rtype: tuple
        """

        all_out = ""
        all_err = ""

        with tempfile.NamedTemporaryFile(
            suffix=LANG2EXT[language],
            prefix="temp-",
            delete=self._options["save_autogen"]) as sfile_h:

            sfile_h.write(source)               # Dump the source out
            sfile_h.flush()

            archive_tmp_name = "asdf"
            with tempfile.NamedTemporaryFile() as tmp_fd:
                archive_tmp_name = tmp_fd.name

            for cmd in self._options["commands"]: # Execute commands
                cmd = cmd.replace("__SFILE__", sfile_h.name)
                cmd = cmd.replace("__TMP_PATH__", archive_tmp_name)
                cmd = cmd.replace("__OBJECT_ABSPATH__", object_abspath)

                process = Popen(cmd.split(), stdout=PIPE, stdin=PIPE)
                out, err = process.communicate(source)
                all_out += out if out else ""
                all_err += err if err else ""

        return all_out, all_err

def moduralize(chapel_sf):
    """
    Compile the Chapel sf module into a Python module.
    This currently means create a Python module with all
    exported Chapel functions available in the Python module.

    :param chapel_sf str: Chapel source file.
    """

