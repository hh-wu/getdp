# GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

set(SRC
  Adapt.cpp
    Bessel.cpp
    Legendre.cpp
    gsl_brent.cpp
)

if(ENABLE_FORTRAN)
  list(APPEND SRC BesselLib.f)
endif(ENABLE_FORTRAN)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(Numeric "${SRC};${HDR}")
