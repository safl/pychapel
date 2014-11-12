import logging
import pych.configuration
import pych.runtime

RT = None
config = None
logging.basicConfig(                                # Setup default logging
    level=logging.ERROR,
    format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
)

try:
    config = pych.configuration.Configuration()     # Load configuration
    try:
        logging.basicConfig(                            # Setup logging
            level=config["log_level"],
            format="%(levelname)s:%(module)s:%(funcName)s: %(message)s"
        )

        RT = pych.runtime.Runtime(config)               # Setup runtime 
    except Exception as e:
        logging.exception("Failed instantiating pyChapel runtime.")

except Exception as e:
    logging.exception("Failed loading pyChapel configuration, Error[%s]")

