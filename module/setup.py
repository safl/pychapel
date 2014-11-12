#!/usr/bin/env python
from distutils.core import setup
from distutils.command.install_data import install_data
import pprint
import glob

from pych.version import APP_NAME, APP_VERSION

class post_install(install_data):
    """Do these things post-installation."""

    def run(self):
        """Update the config-file with to match the installed location."""

        install_data.run(self)  # Do whatever install_data used to do

                                # Then modify the installed pych.json
        for filename in self.outfiles:
            if 'pych.json' in filename:
                with open(filename, 'r') as conf_fd:
                    pych_json = conf_fd.read()
                    pych_json = pych_json.replace(
                        "/tmp/pych_dev",
                        self.install_dir
                    )
                with open(filename, 'w') as conf_fd:
                    conf_fd.write(pych_json)

setup(
    name        = APP_NAME,
    version     = APP_VERSION,
    description = 'pyChapel, Python ~ Chapel integration.',
    url         = 'http://www.bh107.org',
    author      = 'Simon A. F. Lund',
    author_email='safl@safl.dk',
    data_files  = [
        ('share/pych/config', ['configs/pych.json']),
        ('share/pych/examples', glob.glob('../docs/source/examples/*')),
        ('share/pych/include', glob.glob('include/*.h')),
        ('share/pych/lib', glob.glob('lib/*')),
        ('share/pych/templates/c', glob.glob('templates/c/*')),
        ('share/pych/templates/chapel', glob.glob('templates/chapel/*')),
        ('share/pych/templates/python', glob.glob('templates/python/*')),
        ('var/pych/store/c', ['store/c/empty']),
        ('var/pych/store/chapel', ['store/chapel/empty']),
        ('var/pych/store/third_party', ['store/third_party/empty']),
        ('share/pych/testing', glob.glob('testing/*'))
    ],
    packages=['pych'],
    scripts=["scripts/pych"],
    cmdclass=dict(install_data=post_install)
)
