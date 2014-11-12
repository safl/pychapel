"""
pyChapel - The Python/Chapel interoperability module.
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

except IOError as exc:
    logging.exception("Failed loading pyChapel configuration.")

