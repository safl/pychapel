class Error(Exception):
    """Base class for errors runtime pych errors."""
    def __init__(self, extern, msg=None):
        self.extern = extern
        self.msg = msg

class LanguageError(Error):

    def __str__(self):
        return "Extern(%s) uses unsupported language: '%s'. AUX[%s]" % (
            self.extern,
            self.lang,
            self.msg
        )

class LibraryError(Error):

    def __str__(self):
        return "Library(%s) found but ename(%s) is not available. AUX[%s]" % (
            self.extern.lib,
            self.extern.ename,
            self.msg
        )

class MaterializationError(Error):

    def __str__(self):
        return "Failed materializing (%s), reason: [%s]" % (
            self.extern, self.msg
        )

