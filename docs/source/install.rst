============
Installation
============

Until accepted Chapel needs to be compiled from this repository::

  cd ~
  git clone git@github.com:safl/chapel.git

Add this or equivalent to your environment::

  #
  # Setup Chapel
  #
  CWD=`pwd`
  #export CHPL_REGEXP=re2
  export CHPL_REGEXP=none
  export CHPL_MEM=cstdlib
  export CHPL_GMP=none
  export CHPL_TASKS=fifo
  cd ~/chapel/ && source ~/chapel/util/setchplenv.bash
  cd $CWD

Reload your environment, then build the compiler::

  cd ~/chapel
  make

