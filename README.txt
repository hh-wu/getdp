This is GetDP, a General environment for the treatment of Discrete Problems.

GetDP is copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege,
and is distributed under the terms of the GNU General Public License, Version 2
or later. See doc/LICENSE.txt and doc/CREDITS.txt for more information.

See the doc/ and demos/ directories for documentation. The reference manual is
located in doc/texinfo/. See the web site http://getdp.info for additional
examples.

Building a bare-bones version of GetDP from its source code requires a C++
compiler and CMake (http://cmake.org). By default GetDP also uses the GSL
(http://www.gnu.org/software/gsl) and PETSc (http://www.mcs.anl.gov/petsc),
using either real or complex arithmetic. If PETSc is available, GetDP can use
SLEPc (http://www.grycap.upv.es/slepc) to solve eigenvalue problems. Instead of
PETsc (and SLEPc), GetDP can also use a built-in set of linear solvers derived
from Sparskit Version 2 (http://www-users.cs.umn.edu/~saad/) and eigensolvers
from Arpack (http://www.caam.rice.edu/software/ARPACK). Sparskit and Arpack, as
well GetDP's special mathematical functions require a Fortan compiler and
BLAS/LAPACK.

Build GetDP using CMake's graphical user interface
-------------------------------------------------

* Launch CMake and fill-in the two top input fields (telling where the GetDP
  source directory is located and where you want the GetDP binary to be
  created).

* Click on "Add entry" and define the variable CMAKE_PREFIX_PATH, of type
  "PATH", pointing to the location(s) of any external package(s) (BLAS/LAPACK,
  etc.) installed in non-standard directories.

* Click on "Configure" and choose your compiler.

* Optionally change some configuration options (re-run "Configure" every time
  you change some options).

* Once you are happy with all the configuration options, click on "Generate".

* Go to the build directory and build Gmsh using your chosen compiler.

Build GetDP from the command line
--------------------------------

* Create a build directory, for example as a subdirectory of GetDP's source
  directory:

    mkdir build

* Run cmake from within the build directory, pointing to GetDP's source
  directory:

    cd build
    cmake ..

* To build and install GetDP then simply type

    make
    make install

* To change build options you can use "ccmake" instead of "cmake", e.g.:

    ccmake ..

  or you can specify options directly on the command line. For example, you can
  use

    cmake -DCMAKE_PREFIX_PATH=/opt/local ..

  to specify the location of external packages installed in non-standard
  directories. You can use

    cmake -DCMAKE_INSTALL_PREFIX=/opt

  to change the installation directory. Or you can use

    cmake -DENABLE_PETSC=0 -DENABLE_SPARSKIT=1 ..

  to build a version of GetDP that uses Sparskit instead of PETSc.

* You can keep multiple builds with different build options at the same time:
  just configure the builds in separate directories.

* To see a detailed compilation log use

    make VERBOSE=1
