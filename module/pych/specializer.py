"""
    The Specializer is responsible for loading up sourcecode,
    specializing code-templates to Externs and possibly other
    things down the road.
"""
import logging
import os

type2csource = {
    None:       "void",
    bool:       "bool",
    int:        "int",
    long:       "long",
    float:      "double",
    str:        "char*",
    unicode:    "char*"
}

type2chapelsource = {
    None:       "void",
    bool:       "bool",
    int:        "int(32)",
    long:       "int(64)",
    float:      "real(64)",
    str:        "char*",
    unicode:    "char*"
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

    def _specialize_c(self, extern):
        #
        # Check if "inline-source" / function-body is available,
        # the inline skeletons are basically just a hardcoded
        # instance of an "adaptable" code-template.
        if extern.doc:
            # Grabt the "template"
            tmpl = self.load(os.sep.join(["templates", "inline.skeleton.c"]))

            # Create the function signature
            args = ["%s %s" % (type2csource[atype], aname)
                for aname, atype in
                zip(extern.anames, extern.atypes)
            ]

            func_text = {
                "rtype":   type2csource[extern.rtype],
                "args":    ", ".join(args),
                "ename":   extern.ename,
                "fbody":   extern.doc
            }
            extern.source = tmpl % func_text

    def _specialize_chapel(self, extern):
        #
        # Check if "inline-source" / function-body is available,
        # the inline skeletons are basically just a hardcoded
        # instance of an "adaptable" code-template.
        if extern.doc:
            # Grabt the "template"
            tmpl = self.load(os.sep.join(["templates", "inline.skeleton.chpl"]))

            # Create the function signature
            args = ["%s: %s" % (aname, type2chapelsource[atype])
                for aname, atype in
                zip(extern.anames, extern.atypes)
            ]

            func_text = {
                "rtype":   type2chapelsource[extern.rtype],
                "args":    ", ".join(args),
                "ename":   extern.ename,
                "fbody":   extern.doc
            }
            extern.source = tmpl % func_text

    def specialize(self, extern):
        """Constructs source-code based on the extern."""

        logging.debug(" target-extern: %s", extern)
        if extern.slang.lower() not in ["c", "chapel"]:
            raise Exception("Unsupported source language(%s)" % extern.slang)

        if not extern.doc:
            raise Exception("No inline-source available,"
                            "specify it in doc-string.")

        if extern.slang.lower() == "c":
            self._specialize_c(extern)
        elif extern.slang.lower() == "chapel":
            self._specialize_chapel(extern)
