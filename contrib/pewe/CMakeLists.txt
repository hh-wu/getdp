# GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# issues on https://gitlab.onelab.info/getdp/getdp/issues.

set(SRC
    fortran/besselh.f90
    fortran/cylindrical_cavity.f90
    fortran/cylindrical_wall.f90
    fortran/cylindrical_walls.f90
    fortran/cylindrical_wallout.f90
    fortran/cylindrical_wallsout.f90
    fortran/cylindrical_walloutabc.f90
    fortran/cylindrical_wallsoutabc.f90
    fortran/cylindrical_walloutabc2.f90
    fortran/cylindrical_walloutabc2pade.f90
    fortran/cylindrical_wallsoutabc2pade.f90
   )

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(contrib/pewe "${SRC};${HDR}")
