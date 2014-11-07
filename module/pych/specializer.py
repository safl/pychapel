"""
    The Specializer is responsible for loading up sourcecode,
    specializing code-templates for Externs and possibly other
    things down the road.
"""
import logging
import os

import numpy as np

from pych.types import TYPE2SOURCE

def get_specializer(slang):
    """
    Return a specializer instance for the given source language (slang).

    :param str slang: Source language, e.g. "c" or "chapel".
    :returns: A specializer for the given source language.
    :rtype: CSpecializer|ChapelSpecializer
    """
    if slang.lower() == "c":
        return CSpecializer
    elif slang.lower() == "chapel":
        return ChapelSpecializer
    else:
        return None

class BaseSpecializer(object):
    """
    Handles loading of source-code and code-templates for specialization.
    The actual language-specific specialization is performed by subclasses.
    """

    def __init__(self, sourcecode_path):
        self.sourcecode_path = sourcecode_path
        self.sources = {}

    def load(self, filename):
        """
        Reads content of 'filename' into sources dict and returns the
        content.

        :param str filename: Filename without path.
        :returns: Filecontents.
        :rtype: str
        """
        if filename not in self.sources:
            path = filename
            if not os.path.isabs(path):
                path = "%s/%s" % (self.sourcecode_path, filename)
            self.sources[filename] = open(path).read()

        return self.sources[filename]

    def specialize(self, externs, prefix=True):
        """
        The function performing the actual specialization for the given
        Extern(s).

        :param pych.Extern externs: List of Externs to specialize.
        :returns: Sourcecode in the Externs language.
        :rtype: str
        :raises NotImplementedError: When using the BaseSpecializer directly. Use the "targeted" specializer for C or Chapel.
        """
        raise NotImplementedError("Do not use the BaseSpecializer directly.")

class CSpecializer(BaseSpecializer):
    """Specializer for C code."""

    def __init__(self, sourcecode_path):
        super(CSpecializer, self).__init__(sourcecode_path)

    def specialize(self, externs, prefix=True):
        """Specialize the inline-c code-template to the given externs."""

        # Grab the "template"
        source = ""
        if prefix:
            source = self.load(os.sep.join(["c", "prefix.c"]))

        tmpl = self.load(os.sep.join(["c", "func.c"]))
        for extern in externs:

            # Create the function signature
            args = ["%s %s" % (TYPE2SOURCE["c"][atype], aname)
                for aname, atype in
                zip(extern.anames, extern.atypes)
            ]

            func_text = {
                "rtype":   TYPE2SOURCE["c"][extern.rtype],
                "args":    ", ".join(args),
                "ename":   extern.ename,
                "fbody":   extern.doc
            }
            source += tmpl % func_text

        return source

class ChapelSpecializer(BaseSpecializer):
    """Specializer for Chapel code."""

    def __init__(self, sourcecode_path):
        super(ChapelSpecializer, self).__init__(sourcecode_path)

    def specialize(self, externs, prefix=True):
        """Specialize the inline-chapel code-template to the given externs."""

        # Grab the "template"
        source = ""
        if prefix:
            source = self.load(os.sep.join(["chapel", "prefix.chpl"]))

        for extern in externs:
            
            # The function that won't get exported
            tmpl_internal = self.load(os.sep.join(["chapel", "func.internal.chpl"]))
            
            # NumPy conversion
            conv_pych = self.load(os.sep.join(["chapel", "convert.pych.1d.chpl"]))

            # The function that will get exported
            if extern.rtype:
                tmpl = self.load(os.sep.join(["chapel", "func.export.return.chpl"]))
            else:
                tmpl = self.load(os.sep.join(["chapel", "func.export.noreturn.chpl"]))

            #
            # Exported signature
            pars = []
            conversion = ""
            logging.debug("Args: %s", str(extern.anames))
            logging.debug("Atypes: %s", str(extern.atypes))
            for aname, atype in zip(extern.anames, extern.atypes):
                aname_postscript = ""
                if atype is np.ndarray:
                    aname_postscript = "_pych"
                    conversion += conv_pych % {"aname": aname}

                pars.append("%s%s: %s" % (
                    aname, aname_postscript, TYPE2SOURCE["chapel"][atype]
                ))

            #
            # The internal signature and arguments are just a list of
            # extern.anames joined together.

            func_text = {
                "rtype":   TYPE2SOURCE["chapel"][extern.rtype],
                "pars":    ", ".join(pars),
                "conversion": conversion,
                "pars_internal": ", ".join(extern.anames),
                "args_internal": ", ".join(extern.anames),
                "ename":   extern.ename,
                "fbody":   extern.doc
            }

            source += tmpl_internal % func_text
            source += tmpl % func_text

        return source

