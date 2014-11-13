.. _sec-usage:

Usage
=====

pyChapel provides interoperability with Chapel in three forms:

1. Chapel code inlined in Python
2. Chapel code from source-files
3. Compile Chapel modules into Python modules

.. _subsec-inlined:

Inlined
~~~~~~~

If you read :ref:`sec-getting-started` you might be disappointed since you were
promised something more exiting than ``Hello, world``. Don't worry we will get
there after we've gone through the basics.

When using `inlined` mode you get access to Chapel by decorating functions with
the ``pych.extern.Chapel`` decorator and by writing those functions using certain
conventions.

.. literalinclude:: /examples/chapel.inline.helloworld.py
   :language: python

The Chapel code goes into the ``docstring`` of the decorated function.

.. note:: About scope: The notion of ``inlining`` might give the expectancy that the scope of the decorated function will be inherited such that globals and locals within the Python module might be accessible. However, this is not the case, only the variables passed as arguments will be available.

Inlining is meant to be used as a convenience where small chunks of Python can easily be re-written to more efficient Chapel code or simply get started with small snippets of Chapel within the comforts of Python.

The downside is that you lose syntax highlighting of Chapel code, and when the small snippet grows it becomes unmanagable. In those and what your motivation might be using :ref:`subsec-source-files` or :ref:`subsec-compiling-modules` might be preferable.

.. _subsec-source-files:

Source-files
~~~~~~~~~~~~

Instead of using the ``docstring`` of the decorated function a Chapel source-file can be used to used instead. Using either the ``bfile`` or the ``sfile`` argument to the decorator. 

Using the ``bfile`` argument behaves exactly as the ``inline`` except the
function-body is taken from the given file.

.. literalinclude:: /examples/chapel.bfile.hello.py
   :language: python

The ``bfile`` target could contain something like below.

.. literalinclude:: /examples/chapel.bfile.hello.chpl
   :language: c


.. literalinclude:: /examples/chapel.sfile.hello.py
   :language: python

This is done as in the example below by adding the ``sfile`` argument to the decorator.

In contrast to the ``docstring`` then the ``sfile`` expects not only a function
body but the entire 

.. _subsec-conventions:

Conventions and Arguments
~~~~~~~~~~~~~~~~~~~~~~~~~

...

.. _subsec-scope:




.. _subsec-compiling-modules:

Compiling Chapel modules into Python modules
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

...

