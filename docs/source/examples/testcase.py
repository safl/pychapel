import shlex
import subprocess
import sys

# Copied and mildly modified from the testing setup in the related repository
# chplforpyp-docs (also owned by us)

def runpy(py_file, stdin=None):
    """Run python script and return output.
    
    This is sort of like check_output, which was introduced in python 2.7.
    """
    cmd = [sys.executable]
    cmd += shlex.split(py_file)
    stdin_val = subprocess.PIPE if stdin else None
    p = subprocess.Popen(cmd, stdout=subprocess.PIPE,
                         stderr=subprocess.STDOUT, stdin=stdin_val)
    output, _ = p.communicate(input=stdin)
    return output
