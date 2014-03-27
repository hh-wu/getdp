// We first read some useful shared parameters
Include "transfo.dat";

// Some gmsh parameters

Solver.AutoShowLastStep = 0;
Geometry.OldNewReg = 0;
Geometry.AutoCoherence = 0;
Mesh.Algorithm = 1;

// Includes library of functions for geo definitions
Include "Lib_DefGeoShapes.geo";

////////////////////////////////////////
// Definitions of geometrical regions //
////////////////////////////////////////

// I n d u c t o r s :

y0_ = 0; z0_ = 0;

// Ind1L
x0[] = {-(xCoreInt+dxCore+gapxInd1+dxInd1)+dxInd1/2., y0_, z0_};
dx[] = {dxInd1, dyInd1}; lc = lcInd;
flag_DefSurface = 1; loopHoles[] = {};
flagTransfinite = Flag_Transfinite_Inds; valBumpX = 0.2; valBumpY = 0.2;
flagRecombine = Flag_Recombine_Inds;

Call DefPath_GeoRectangle;

loopInd1L = current_numSurface;
sInd1L = current_numSurface;

skinInd1L[] = current_loop[];

// Ind1R
x0[] = {-xCoreInt+gapxInd1+dxInd1/2., y0_, z0_};
dx[] = {dxInd1, dyInd1}; lc = lcInd;
flag_DefSurface = 1; loopHoles[] = {};
flagTransfinite = Flag_Transfinite_Inds; valBumpX = 0.2; valBumpY = 0.2;
flagRecombine = Flag_Recombine_Inds;

Call DefPath_GeoRectangle;

loopInd1R = current_numSurface;
sInd1R = current_numSurface;

skinInd1R[] = current_loop[];

// Ind2L
x0[] = {xCoreInt-gapxInd1-dxInd1+dxInd1/2., y0_, z0_};
dx[] = {dxInd2, dyInd2}; lc = lcInd;
flag_DefSurface = 1; loopHoles[] = {};
flagTransfinite = Flag_Transfinite_Inds; valBumpX = 0.2; valBumpY = 0.2;
flagRecombine = Flag_Recombine_Inds;

Call DefPath_GeoRectangle;

loopInd2L = current_numSurface;
sInd2L = current_numSurface;

skinInd2L[] = current_loop[];

// Ind2R
x0[] = {xCoreInt+dxCore+gapxInd1+dxInd1/2., y0_, z0_};
dx[] = {dxInd2, dyInd2}; lc = lcInd;
flag_DefSurface = 1; loopHoles[] = {};
flagTransfinite = Flag_Transfinite_Inds; valBumpX = 0.2; valBumpY = 0.2;
flagRecombine = Flag_Recombine_Inds;

Call DefPath_GeoRectangle;

loopInd2R = current_numSurface;
sInd2R = current_numSurface;

skinInd2R[] = current_loop[];


// C o r e :

// interior loop

x_[] = {
  START_ , 0, NEWP_,  xCoreInt,  yCoreInt, 0, lcCoreIntS,
  LINE_  , 0, NEWP_,        0.,  yCoreInt, 0, lcCoreIntM,
  LINE_  , 0, NEWP_, -xCoreInt,  yCoreInt, 0, lcCoreIntS,
  LINE_  , 0, NEWP_, -xCoreInt,        0., 0, lcCoreIntM,
  LINE_  , 0, NEWP_, -xCoreInt, -yCoreInt, 0, lcCoreIntS,
  LINE_  , 0, NEWP_,        0., -yCoreInt, 0, lcCoreIntM,
  LINE_  , 0, NEWP_,  xCoreInt, -yCoreInt, 0, lcCoreIntS,
  LINE_  , 0, NEWP_,  xCoreInt,        0., 0, lcCoreIntM,
  LINE_  , 0, CLOSE_
};

// The integer in the 2nd column is the number given to the starting sub-path
// (ending before another given number).
// (The list x[] above could be generated with a loop for heavy repetitive operations.)

// (1) The points, lines and (sub-)paths are all defined by:
Call DefPath_;

// (2) The path defined in x[] is saved in the current_loop
current_loop[] = l_[];

// (3) current_loop[] must now contain a closed (oriented) line set
flag_DefSurface = 1; loopHoles[] = {loopInd1R, loopInd2L};
Call DefLoopAndSurface_;

// The surface number is saved (and possibly the loop number)
sAirInt = current_numSurface;
loopCoreInt = current_numSurface;

// (4) Some useful points are saved (if other paths are to be connected to these)
// (e.g., we get the 1st point starting sub-path 1, the 2nd one starting sub-path 2...)
// none, current_ref_StartPoints_[] = {1,2}; Call Get_StartPoints_;
// none, startPoints_1[] = current_pStartPoints[];

// (5) All the sub-paths are saved:
// none, num_path = 1; Call GetSubPath_;
// none, skin1[] = current_path[];

// exterior loop

xCoreExt = xCoreInt+dxCore; yCoreExt = yCoreInt+dyCore;

x_[] = {
  START_ , 0, NEWP_,  xCoreExt,  yCoreExt, 0, lcCoreExtS,
  LINE_  , 0, NEWP_,        0.,  yCoreExt, 0, lcCoreExtM,
  LINE_  , 0, NEWP_, -xCoreExt,  yCoreExt, 0, lcCoreExtS,
  LINE_  , 0, NEWP_, -xCoreExt,        0., 0, lcCoreExtM,
  LINE_  , 0, NEWP_, -xCoreExt, -yCoreExt, 0, lcCoreExtS,
  LINE_  , 0, NEWP_,        0., -yCoreExt, 0, lcCoreExtM,
  LINE_  , 0, NEWP_,  xCoreExt, -yCoreExt, 0, lcCoreExtS,
  LINE_  , 0, NEWP_,  xCoreExt,        0., 0, lcCoreExtM,
  LINE_  , 0, CLOSE_
};

// The integer in the 2nd column is the number given to the starting sub-path
// (ending before another given number).
// (The list x[] above could be generated with a loop for heavy repetitive operations.)

// (1) The points, lines and (sub-)paths are all defined by:
Call DefPath_;

// (2) The path defined in x[] is saved in the current_loop
current_loop[] = l_[];

// (3) before calling the function below, current_loop[] must contain a closed (oriented) line set, which is the case
flag_DefSurface = 1; loopHoles[] = {loopCoreInt};
Call DefLoopAndSurface_;

// The surface number is saved
loopCoreExt = current_numSurface;
sCore = current_numSurface;

// (4) Some useful points are saved (other paths will be connected to these)
// (e.g., we get the 1st point starting sub-path 1, the 2nd one starting sub-path 2...)
// none, current_ref_StartPoints_[] = {1,2}; Call Get_StartPoints_;
// (... and we save them)
// none, startPoints_1[] = current_pStartPoints[];

// (5) All the sub-paths are saved:
// none, num_path = 1; Call GetSubPath_;
// none, skin1[] = current_path[];


//
// Air: surrounds all the previously defined regions
x0[] = {0., 0., 0.}; radius = rShellInt; lc = lcShell;
flag_DefSurface = 1;

If (1)
  loopHoles[] = {loopInd1L, loopInd2R, loopCoreExt};

  Call DefPath_GeoCircle;

  skinAirExt[] = current_loop[];
  loopShellInt = current_numSurface;
  If (!Flag_InfiniteDomain)
    current_ref_StartPoints_[] = {1}; Call Get_StartPoints_;
    pointRef_skinAirExt = current_pStartPoints[0];
  EndIf
EndIf
sAir = current_numSurface;


If (Flag_InfiniteDomain)
  // AirInf (Spherical shell): surrounds all the air region
  x0[] = {0., 0., 0.}; radius = rShellExt; lc = lcShell;
  flag_DefSurface = 1;
  If (1)
    loopHoles[] = {loopShellInt};
    Call DefPath_GeoCircle;
    skinAirInf[] = current_loop[];
  EndIf
  sAirInf = current_numSurface;
EndIf


//////////////////////
// Physical regions //
//////////////////////

Physical Surface(AIR) = {sAir, sAirInt};

Physical Surface(CORE) = {sCore};

Physical Surface(IND1L) = {sInd1L};
Physical Surface(IND1R) = {sInd1R};
Physical Surface(IND2L) = {sInd2L};
Physical Surface(IND2R) = {sInd2R};

Physical Line(SKININD1L) = {skinInd1L[]};
Physical Line(SKININD1R) = {skinInd1R[]};
Physical Line(SKININD2L) = {skinInd2L[]};
Physical Line(SKININD2R) = {skinInd2R[]};

Physical Line(SURAIREXT) = {skinAirExt[]};

If (Flag_InfiniteDomain)
  Physical Surface(AIRINF) = {sAirInf};
  Physical Line(SURINF) = {skinAirInf[]};
EndIf
If (!Flag_InfiniteDomain)
  Physical Point(POINT_SURAIREXT) = {pointRef_skinAirExt};
EndIf

Geometry.OldNewReg = 1;
Geometry.AutoCoherence = 1;
