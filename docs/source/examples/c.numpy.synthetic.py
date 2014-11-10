#!/usr/bin/env python
import argparse
import numpy as np
from pych.extern import FromC

@FromC()
def simulation(tsteps=int, spin=np.ndarray, decay=np.ndarray, velocity=np.ndarray):
    """
    double* spin_ptr = (double*)spin->ptr_d;
    double* decay_ptr = (double*)decay->ptr_d;
    double* velocity_ptr = (double*)velocity->ptr_d;
    double result = 0.0;
    
    int particles = spin->shape[0];
    double* delta_ptr = (double*)malloc(particles*sizeof(double));
    
    for(int i=0; i<particles; i++) {
        delta_ptr[i] = velocity_ptr[i];
    }
    for(int timestep=0; timestep<tsteps; timestep++) {
        for(int i=0; i<particles; i++) {
            delta_ptr[i] = (spin_ptr[i] * decay_ptr[i] + velocity_ptr[i]) /
            delta_ptr[i];
        }
    }
    for(int i=0; i<particles; i++) {
        result += delta_ptr[i];
    }
    free(delta_ptr);
    return result;
    """
    return float

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
