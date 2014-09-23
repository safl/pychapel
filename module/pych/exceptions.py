"""
    pyChapel specfic errors.
"""
class Error(Exception):
    """Base class for errors runtime pych errors."""

    def __init__(self, extern, msg=None):
        self.extern = extern
        self.msg = msg

class LibraryError(Error):
    """Intended use when something goes wrong related to a library open/load."""

    def __str__(self):
        return "Library(%s) found but ename(%s) is not available. AUX[%s]" % (
            self.extern.lib,
            self.extern.ename,
            self.msg
        )

class MaterializationError(Error):
    """
    Intended use for pyChapel specific errors, related to specialization, and
    compilazation.
    """

    def __str__(self):
        return "Failed materializing (%s), reason: [%s]" % (
            self.extern, self.msg
        )

