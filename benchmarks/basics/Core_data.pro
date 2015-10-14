
// This file is included in both Core.geo and Core.pro
// It contains definitions for all parameters shared by Gmsh and GetDP.

// Onelab parameters are defined with the
// DefineNumber[] and DefineString[] statements.

mm = 1e-3; // convert mm into m

dxCore = mm * DefineNumber[ 50, Name "Geometry/1Core width [mm]"];
dyCore = mm * DefineNumber[100, Name "Geometry/2Core height [mm]"];
dist   = mm * DefineNumber[ 25, Name "Geometry/3Coil-core separation [mm]"];
dxInd  = mm * DefineNumber[ 25, Name "Geometry/4Inductor width [mm]"];
dyInd  = mm * DefineNumber[ 50, Name "Geometry/5Inductor height [mm]"];

Val_Rint = mm * DefineNumber[150, Name "Geometry/6Shell inner radius [mm]"];
Val_Rext = 2. * Val_Rint;


