"""
Loads and stores pyChapel configuration.
"""
# pylint: disable=maybe-no-member
# The configuration object does have the "__file__" member via the module.
# pylint: disable=too-few-public-methods
# The configuration wraps around the configuration state, access is provided
# through __getitem__ it is perfectly valid that it has few public methods.

import inspect
import json
import os

class Configuration(object):
    """
    Load pyChapel configuration from file and internalize configuration state.
    """

    def __init__(self, config_fn=None):
        """

        :config_fn str: Path to configuration file.
        """

        if not config_fn:               # Load configuration
            config_path = []
            path = inspect.getmodule(self).__file__.split(os.sep)
            for directory in path:
                if directory == "lib":
                    break
                config_path.append(directory)
            config_path += [
                "share",
                "pych",
                "config",
                "pych.json"
            ]
            config_fn = os.sep.join(config_path)

        self._config = json.load(open(config_fn))

    def __getitem__(self, index):
        return self._config[index]
