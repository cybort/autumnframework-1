# Content #
  1. Build
  1. Test
  1. Install


## Build ##
This source package has been built and tested on:
  * WindowsXP with Visual C++ 6.0
  * linux Ubuntu 6.06 with gcc 4.0.3
  * SunOS 5.10 i86pc with Sun C++ 5.8
  * Aix 5L with xlC\_r

### WindowsXP ###
Open workspace autumnframework.dsw and build all projects with batch build.

### other platform ###
  * Goto config direcotry, copy the platform corresponding config file to file "makeConfig";
  * Execute "make all" in source code top directory.


## Test ##

### WindowsXP ###
Execute project "FrameTest".

### other platform ###
Execute "make test" in source code top directory.


## Install ##
After building, the bin, include and lib directories in source code top directory contain the destination files. You can copy them to where you want.
