"""
    pyChapel specfic errors.
"""

class Error(Exception):
    """Base class for errors runtime pych errors."""

    def __init__(self, msg, cause):
        if cause:
            msg += u', caused by '+ repr(cause)

        super(Error, self).__init__(msg)

class LibraryError(Error):
    """Intended use when something goes wrong related to a library open/load."""

    def __init__(self, extern, reason=None, cause=None):
        msg = "Library(%s) found but ename(%s) is not available." % (
            extern.lib,
            extern.ename
        )
        if reason:
            msg += reason

        super(LibraryError, self).__init__(msg, cause)

class CompilationError(Error):
    """For compilations errors."""

    def __init__(self, cmd, reason=None, cause=None):
        msg = "Compilation failed with command(%s)" % (
            cmd
        )
        if reason:
            msg += reason

        super(CompilationError, self).__init__(msg, cause)

class MaterializationError(Error):
    """
    Intended use for pyChapel specific errors, related to specialization, and
    compilation.
    """

    def __init__(self, extern, reason=None, cause=None):
        msg = "Failed materializing (%s)." % extern
        if reason:
            msg += reason

        super(MaterializationError, self).__init__(msg, cause)
