# GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# issues on https://gitlab.onelab.info/getdp/getdp/issues.

set(SRC
  F_Analytic.cpp F_BiotSavart.cpp F_Coord.cpp F_ExtMath.cpp
    F_Geometry.cpp F_Interpolation.cpp F_Hysteresis.cpp F_Math.cpp
    F_Misc.cpp F_MultiHar.cpp F_Raytracing.cpp
    F_Gmsh.cpp F_DiffGeom.cpp F_Octave.cpp F_Python.cpp
    F_PeWe.cpp
  BF_Node.cpp BF_NodeXYZ.cpp BF_Node_2.cpp BF_Node_3.cpp
    BF_Edge.cpp BF_Edge_2.cpp BF_Edge_3.cpp BF_Edge_4.cpp
    BF_Facet.cpp BF_Volume.cpp BF_Region.cpp
    BF_Perpendicular.cpp BF_GroupOfEntities.cpp
  GF_Helmholtz.cpp GF_HelmholtzxForm.cpp
    GF_Laplace.cpp GF_LaplacexForm.cpp
  Cal_Quantity.cpp
    Cal_Value.cpp
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(Functions "${SRC};${HDR}")
