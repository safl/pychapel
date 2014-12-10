.. _sec-usage-examples:

Usage Examples
==============

This section provides examples closer to real-world code and how to apply
pyChapel in such context. The examples seek to illustrate the effort required by
the user and what results can be expected.

Accelerate your NumPy code
~~~~~~~~~~~~~~~~~~~~~~~~~~

Finance
-------

One application domain is the use of machine-learning to determine the value of
a stock in the future based on previous market-behavior.
The structure of such a code can often be factored into three stages:

1. Load up asking and bidding prices of a stock over time
2. Apply quant-analysis
3. Visualize results

An example of such an application is provided below:

.. literalinclude:: /examples/usage/finance.py
   :language: python
   :linenos:

Where the computationally intensive part is the function
``quant``. Do note that the specific implementatio of the ``quant`` function
does not compute anytime meaningful.
Using ``pych`` this function can be mapped to Chapel by changing:

.. literalinclude:: /examples/usage/finance.py
   :language: python
   :lines: 57-66

to:

.. literalinclude:: /examples/usage/finance_chpl.py
   :language: python
   :lines: 59-71

and adding the include statement:

.. literalinclude:: /examples/usage/finance_chpl.py
   :language: python
   :lines: 10-10

These two implementations can be executed by the commands::

  ./finance.py
  ./finance_chpl.py

Numbers
.......

The implementations were executed three times each and the average reported. The
machine executing was a laptop with 6GB of memory with an Intel i5-2410M
CPU @ 2.3Ghz CPU with two physical cores.

This specific example running on a laptop resulted in the following::

  NumPy: wall-clock ~26.7 seconds.
  NumPy+pyChapel: wall-clock average ~4.2 seconds.

Resulting in a speedup of times ~6.3.

Scientific Computing
--------------------

A common need for speed when working with Python are scientific codes. NumPy and
the SciPy stack provides a rich environment for scientific computing, different
approaches exist to accelerate such code, with pyChapel a new means is provided.

The structure of a scientific code can often be factored into three stages:

1. Load a data-set
2. Process the data
3. Visualize results

An example of such an application is provided below:

.. literalinclude:: /examples/usage/scicomp.py
   :language: python
   :linenos:

Where the time-consuming, computational expensive and memory hungry portion of
the application is the data-processing performed in the `simulate` function.

When tasked with increasing the throughput of such applications the user can
either choose to port the entire application to another language, write a Python-extension implemented in a lower-level language such as C or call into library-functions implemented in lower-level languages for a subset of the application.

Using pyChapel, a subset of the application can with little effort be rewritten
such as the example below illustrates:

.. literalinclude:: /examples/usage/scicomp_chpl.py
   :language: python
   :linenos:

These two implementations can be executed by the commands::

  ./scicomp.py --tsteps 50 --particles 50000000
  ./scicomp_chpl.py --tsteps 50 --particles 50000000

The following subsection provides a couple of preliminary performance numbers.

Numbers
.......

The implementations were executed three times each and the average reported. The
machine executing was a laptop with 6GB of memory with an Intel i5-2410M
CPU @ 2.3Ghz CPU with two physical cores::

  NumPy: wall-clock ~28.3 seconds, ~2.2GB memory consumption.
  NumPy+pyChapel: wall-clock average ~8.8 seconds, ~1.5GB memory consumption.

Resulting in a speedup of ~ times 3.2 and a significantly lowered memory consumption.

C-Implementation
................

.. todo:: Add OpenMP to the c-implementation to compare and illustrate how close this performance gain is to an error-prone c-implementation.

.. literalinclude:: /examples/c.numpy.synthetic.py
   :language: python
   :linenos:

