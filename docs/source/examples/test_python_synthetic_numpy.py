#!/usr/bin/env python
import argparse
import numpy as np

def simulation(tsteps, spin, decay, velocity):
    """Simulation of some physical phenomenon on a dataset."""

    delta = velocity
    for _ in xrange(0, tsteps):
        delta = (spin * decay + velocity) / delta

    return np.add.reduce(delta)

def main(tsteps, particles):
    """Load data, run simulation, visualize results."""

    spin = np.ones(particles)               # Load data
    decay = np.ones(particles)
    velocity = np.ones(particles)

    res = simulation(                       # Run simulation
        tsteps,
        spin,
        decay,
        velocity
    )
                                            # Visualize result
    print("Phenomenon after %d tsteps = %d." % (tsteps, res))

if __name__ == "__main__":                  # Argument parsing
    parser = argparse.ArgumentParser(
        description='Example illustrating simulation code.'
    )
    parser.add_argument(
        '--tsteps', help="# of tsteps in 'simulation'",
        type=int,
        required=True
    )
    parser.add_argument(
        '--particles', help="# of elements in arrays '",
        type=int,
        required=True
    )
    args = parser.parse_args()

    main(args.tsteps, args.particles)

def test_example(capfd):
    main(50, 50000000)
    out, err = capfd.readouterr()
    assert out == 'Phenomenon after 50 tsteps = 50000000.\n'

def test_example_49(capfd):
    main(49, 50000000)
    out, err = capfd.readouterr()
    assert out == 'Phenomenon after 49 tsteps = 100000000.\n'

def test_example_51(capfd):
    main(51, 50000000)
    out, err = capfd.readouterr()
    assert out == 'Phenomenon after 51 tsteps = 100000000.\n'

def test_example_48(capfd):
    main(48, 50000000)
    out, err = capfd.readouterr()
    assert out == 'Phenomenon after 48 tsteps = 50000000.\n'

def test_example_52(capfd):
    main(52, 50000000)
    out, err = capfd.readouterr()
    assert out == 'Phenomenon after 52 tsteps = 50000000.\n'
