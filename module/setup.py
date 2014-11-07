#!/usr/bin/env python
from distutils.core import setup
import glob

setup(
    name        = "pyChapel",
    version     = "0.1.1",
    description = 'pyChapel, Python ~ Chapel integration.',
    url         = 'http://www.bh107.org',
    author      = 'Simon A. F. Lund',
    author_email='safl@safl.dk',
    data_files  = [
        ('share/pych/config', ['configs/pych.json']),
        ('share/pych/examples', glob.glob('examples/*')),
        ('share/pych/include', glob.glob('include/*.h')),
        ('share/pych/lib', glob.glob('lib/*')),
        ('share/pych/templates/c', glob.glob('templates/c/*')),
        ('share/pych/templates/chapel', glob.glob('templates/chapel/*')),
        ('var/pych/store/c', ['store/c/empty']),
        ('var/pych/store/chapel', ['store/chapel/empty']),
        ('var/pych/store/third_party', ['store/third_party/empty']),
        ('share/pych/testing', glob.glob('testing/*'))
    ],
    packages=['pych']
)
