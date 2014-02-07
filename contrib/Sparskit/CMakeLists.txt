# GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@geuz.org>.

set(SRC
  Sparskit.cpp
  blas1.f
  blassm.f
  cmkreord.f
  flu.f
  formats.f
  inout.f
  iters.f
  matvec.f
  reordering.f
  unary.f
  ilut.F
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(contrib/Sparskit "${SRC};${HDR}")
