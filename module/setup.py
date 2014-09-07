from pych.version import APP_NAME, APP_VERSION

setup(
    name        = APP_NAME.capitalize(),
    version     = APP_VERSION,
    description = 'PyCh, Python <-- Chapel integration.',
    url         = 'http://www.bh107.org',
    author      = 'Simon A. F. Lund',
    author_email='safl@safl.dk',
    data_files  = [
        ('share/pych/templates', glob.glob('templates/*.c']),
        ('config', 'pych.json')
    ],
    packages=['pych']
)
