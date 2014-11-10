#!/usr/bin/env bash
print "Python/NumPy"
/usr/bin/time ./python.numpy.synthetic.py --tsteps 50 --particles 50000000
/usr/bin/time ./python.numpy.synthetic.py --tsteps 50 --particles 50000000
/usr/bin/time ./python.numpy.synthetic.py --tsteps 50 --particles 50000000
print "Python/NumPy + pyChapel(Chapel)"
/usr/bin/time ./chapel.numpy.synthetic.py --tsteps 50 --particles 50000000
/usr/bin/time ./chapel.numpy.synthetic.py --tsteps 50 --particles 50000000
/usr/bin/time ./chapel.numpy.synthetic.py --tsteps 50 --particles 50000000
print "Python/NumPy +pyChapel(C)"
/usr/bin/time ./c.numpy.synthetic.py --tsteps 50 --particles 50000000
/usr/bin/time ./c.numpy.synthetic.py --tsteps 50 --particles 50000000
/usr/bin/time ./c.numpy.synthetic.py --tsteps 50 --particles 50000000
