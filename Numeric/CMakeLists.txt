# GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@onelab.info>.

set(SRC
  NumericUtils.cpp
  Adapt.cpp
  Legendre.cpp
  Bessel.cpp
)

if(ENABLE_FORTRAN)
  list(APPEND SRC BesselLib.f)
endif(ENABLE_FORTRAN)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(Numeric "${SRC};${HDR}")
