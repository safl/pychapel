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

    def specialize(self, extern):
        """Constructs source-code based on the extern."""

        logging.debug(" target-extern: %s", extern)

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
            return tmpl % func_text

        return None
