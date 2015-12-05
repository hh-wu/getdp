/*
  Numerical simulation of a Time Reversal experiment.
  The simulation is achieved in 2D, with a thick Time Reversal Miror (TRM).
  The domain is free of any obstacle.
*/

Mesh.Algorithm = 6;
Solver.AutoShowLastStep = 0;

Include "TR_data.pro";

// Point source :
PS = newp; Point(PS) = {XS, YS, ZS, lcSourceInt};

//Initialization
N_scatCreated = 0;
LL_scat[] = {};
Line_scat[] = {};
S_scat[] = {};
CentreX[] = {}; CentreY[] = {};
RadiusX[] = {}; RadiusY[] = {};

If(CLUTTER)
  Include "TR_scat.geo";
EndIf

DefineConstant[
  N_scat2 = {N_scatCreated,
    Name StrCat[MENU_GEO, StrCat[MENU_OBSTACLES, "/01Nb. of placed obstacles"]], ReadOnly 1, Closed 1}
];

//-------------------
//Creation of the TRM
//-------------------

P1 = newp; Point(P1) = {X_TRM_min, Y_TRM_min, ZS, lcTRM};
P2 = newp; Point(P2) = {X_TRM_max, Y_TRM_min, ZS, lcTRM};
P3 = newp; Point(P3) = {X_TRM_max, Y_TRM_max, ZS, lcTRM};
P4 = newp; Point(P4) = {X_TRM_min, Y_TRM_max, ZS, lcTRM};

LTRM1 = newreg; Line(LTRM1) = {P1, P2};
LTRM2 = newreg; Line(LTRM2) = {P2, P3};
LTRM3 = newreg; Line(LTRM3) = {P3, P4};
LTRM4 = newreg; Line(LTRM4) = {P4, P1};

LLTRM = newreg; Line Loop(LLTRM) = {LTRM1, LTRM2, LTRM3, LTRM4};

//------------------------------
// Perfectly Matched Layer (PML)
//------------------------------

// Centre XF,YF,ZF (imported from "data_geometry.geo")
// PF = newp; Point(PF) = {XF,YF,ZF,lcFictitious};

// Interior boundary (propagating part of the domain)
// Rectangle centred on (XF,YF,ZF) with sizes SizeInteriorDomainX (X direction)
// and SizeInteriorDomainY (Y direction)

// Remark on the different names:
// Int = mean "interior" (Beginning of the PML)
// Ext = "exterior" (Truncation of the PML)
//U = Up
//R = Right
//L = Left
//D = Down
// Ex. : PointUR = Point up right

//   UL-----------UR
//    |            |
//    |            |
//   DL------------DR

PIntBoundDL = newp; Point(PIntBoundDL) = {Xmin, Ymin, ZF, lcIntern_Bound};
PIntBoundDR = newp; Point(PIntBoundDR) = {Xmax, Ymin, ZF, lcIntern_Bound};
PIntBoundUR = newp; Point(PIntBoundUR) = {Xmax, Ymax, ZF, lcIntern_Bound};
PIntBoundUL = newp; Point(PIntBoundUL) = {Xmin, Ymax, ZF, lcIntern_Bound};

LIntBoundD = newreg; Line(LIntBoundD) = {PIntBoundDL, PIntBoundDR};
LIntBoundR = newreg; Line(LIntBoundR) = {PIntBoundDR, PIntBoundUR};
LIntBoundU = newreg; Line(LIntBoundU) = {PIntBoundUR, PIntBoundUL};
LIntBoundL = newreg; Line(LIntBoundL) = {PIntBoundUL, PIntBoundDL};

// Boundary of the interior domain (= propagation domain)
LLIntBound = newreg; Line Loop(LLIntBound) = {LIntBoundD, LIntBoundR, LIntBoundU, LIntBoundL};

// Absorbing domain (PML) :
// Rectangle centred on (XF,YF,ZF) with sides (SizeInteriorDomainX +
// SizeAbsorbingDomainX) and (SizeInteriorDomainY + SizeAbsorbingDomainY)
// In the X direction, the PML have a thickness of "SizeAbsorbingDomainX" (same
// for "Y direction" and "SizeAbsorbingDomainY")

PExtBoundDL = newp; Point(PExtBoundDL) = {Xmin - SizePMLX, Ymin - SizePMLY, ZF, lcExtern_Bound};
PExtBoundDR = newp; Point(PExtBoundDR) = {Xmax + SizePMLX, Ymin - SizePMLY, ZF, lcExtern_Bound};
PExtBoundUR = newp; Point(PExtBoundUR) = {Xmax + SizePMLX, Ymax + SizePMLY, ZF, lcExtern_Bound};
PExtBoundUL = newp; Point(PExtBoundUL) = {Xmin - SizePMLX, Ymax + SizePMLY, ZF, lcExtern_Bound};

LExtBoundD = newreg; Line(LExtBoundD) = {PExtBoundDL, PExtBoundDR};
LExtBoundR = newreg; Line(LExtBoundR) = {PExtBoundDR, PExtBoundUR};
LExtBoundU = newreg; Line(LExtBoundU) = {PExtBoundUR, PExtBoundUL};
LExtBoundL = newreg; Line(LExtBoundL) = {PExtBoundUL, PExtBoundDL};

LLExtBound = newreg; Line Loop(LLExtBound) = {LExtBoundD, LExtBoundR, LExtBoundU, LExtBoundL};

If(HidePML)
  Hide{
    Line{LExtBoundD,LExtBoundR,LExtBoundU,LExtBoundL};
    Point{PExtBoundDL, PExtBoundDR, PExtBoundUR, PExtBoundUL};
  }
EndIf

//-------------------------
// Creation of the surfaces
//-------------------------

// Mirror :
SurfTRM = newreg; Plane Surface(SurfTRM) = {LLTRM};
// Exterior_Domain is the domain of interest without the Miror
If(!CLUTTER)
  SurfExteriorDomain = newreg; Plane Surface(SurfExteriorDomain) = {LLTRM, LLIntBound};
EndIf
If(CLUTTER)
  SurfExteriorDomain = newreg; Plane Surface(SurfExteriorDomain) = {LLTRM, LLIntBound, LL_scat(), LLSourceExt};
EndIf
// PML
SurfPML = newreg; Plane Surface(SurfPML) = {LLExtBound,LLIntBound};

//------------------
// Physical entities
//------------------

// Surfaces
Physical Surface(1) = {SurfTRM};
Physical Surface(2) = {SurfExteriorDomain};
Physical Surface(3) = {SurfPML};

// Boundaries
Physical Line(11) = {LTRM1, LTRM2, LTRM3, LTRM4};
Physical Line(12) = {LIntBoundL,LIntBoundD,LIntBoundR,LIntBoundU};
Physical Line(13) = {LExtBoundD, LExtBoundR, LExtBoundU, LExtBoundL};

If(CLUTTER)
  Physical Surface(5) = {SSourceInt};
  Physical Surface(6) = {SSourceExt};
EndIf

//Scatterers (empty if no one)
For ii In {0:N_scat2-1}
  Physical Surface(100 + ii) = {S_scat[ii]};
EndFor
