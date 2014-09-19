import logging
import ctypes
import pprint

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

    def __init__(self, template_path):
        self.template_path  = template_path
        self.templates = {}

    def load(self, template_fn):

        if template_fn not in self.templates:
            path = "%s/%s" % (self.template_path, template_fn)
            self.templates[template_fn] = open(path).read()

        return self.templates[template_fn]

    def specialize(self, extern):
        """Constructs source-code based on the extern."""

        #
        # Check if "inline-source" / function-body is available,
        # the inline skeletons are basically just a hardcoded
        # instance of an "adaptable" code-template.
        if extern.doc:
            # Grabt the "template"
            tmpl = self.load("inline.skeleton.c")
    
            # Create the function signature
            args = ["%s %s" % (type2csource[atype], aname) 
                for aname, atype in
                zip(extern.anames, extern.atypes)
            ]

            func_text = {
                "rtype":   type2csource[extern.rtype],
                "args":    ", ".join(args),
                "cname":   extern.cname,
                "fbody":   extern.doc
            }
            return tmpl % func_text

        #
        # Check if a "source-file" is available
        if not fp:
            pass

        return None
