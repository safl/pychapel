"""
Utility functions used across modules.
"""
import os

def prepend_path(root, path):
    """
    Prefix 'path' with 'root' when 'path is not an absolute path.

    :param root str: String to prepend to path.
    :param path str: The path that will be prefixes with 'root'.
    """

    abspath = path
    if not os.path.isabs(abspath):
        abspath = "%s%s%s" % (root, os.sep, path)
    abspath = os.path.abspath(abspath)

    return abspath
