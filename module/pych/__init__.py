"""
pych - The Python/Chapel interoperability module.
"""
import logging
import pych.configuration
import pych.runtime

RT = None
CONFIG = None
logging.basicConfig(                                # Setup default logging
    level=logging.ERROR,
    format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
)

try:
    CONFIG = pych.configuration.Configuration()     # Load configuration
    logging.basicConfig(                            # Setup logging
        level=CONFIG["log_level"],
        format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
    )

    RT = pych.runtime.Runtime(CONFIG)               # Setup runtime
except ValueError as exc:
    logging.error("Looks like there is an error in your configuration file.")
except IOError as exc:
    logging.error("If you are installing just now, "
                  "then ignore this error message: "
                  "Could not find config-file(pych.json), "
                  "check your installation or try re-installing.")
