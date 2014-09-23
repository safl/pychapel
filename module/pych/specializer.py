"""
    The Specializer is responsible for loading up sourcecode,
    specializing code-templates to Externs and possibly other
    things down the road.
"""
import logging
import os

type2source = {
    "c": {
        None:       "void",
        bool:       "bool",
        int:        "int",
        long:       "long",
        float:      "double",
        str:        "char*",
        unicode:    "char*"
    },
    "chapel": {
        None:       "void",
        bool:       "bool",
        int:        "int",
        long:       "int(64)",
        float:      "real(64)",
        str:        "char*",
        unicode:    "char*"   
    }
}

class Specializer(object):
    """The actual Specializer class handling eveyrhting."""

    def __init__(self, sourcecode_path):
        self.sourcecode_path = sourcecode_path
        self.sources = {}

    def load(self, filename):
        """
        Reads content of 'filename' into sources dict and returns the
        content.
        """
        if filename not in self.sources:
            path = "%s/%s" % (self.sourcecode_path, filename)
            self.sources[filename] = open(path).read()

        return self.sources[filename]

    def _specialize_c(self, externs):

        # Grab the "template"
        source = self.load(os.sep.join(["templates", "inline.prefix.c"]))
        tmpl = self.load(os.sep.join(["templates", "inline.func.c"]))
        for extern in externs:

            # Create the function signature
            args = ["%s %s" % (type2source["c"][atype], aname)
                for aname, atype in
                zip(extern.anames, extern.atypes)
            ]

            func_text = {
                "rtype":   type2csource["c"][extern.rtype],
                "args":    ", ".join(args),
                "ename":   extern.ename,
                "fbody":   extern.doc
            }
            source += tmpl % func_text

        return source

    def _specialize_chapel(self, externs):

        # Grab the "template"
        source = self.load(os.sep.join(["templates", "inline.prefix.chpl"]))
        tmpl = self.load(os.sep.join(["templates", "inline.func.chpl"]))
        for extern in externs:
            # Create the function signature
            args = ["%s: %s" % (aname, type2source["chapel"][atype])
                for aname, atype in
                zip(extern.anames, extern.atypes)
            ]

            func_text = {
                "rtype":   type2source["chapel"][extern.rtype],
                "args":    ", ".join(args),
                "ename":   extern.ename,
                "fbody":   extern.doc
            }
            source = tmpl % func_text

        return source

    def specialize(self, extern):
        """Constructs source-code based on the extern."""

        logging.debug(" target-extern: %s", extern)
        if extern.slang.lower() not in ["c", "chapel"]:
            raise MaterializationError(
                extern,
                "Unsupported source language(%s)" % extern.slang
            )

        if not extern.doc:
            raise MaterializationError(
                extern,
                "No inline-source available, specify it in doc-string."
            )

        if extern.slang.lower() == "c":
            source = self._specialize_c([extern])
        elif extern.slang.lower() == "chapel":
            source = self._specialize_chapel([extern])

        extern.source = source
