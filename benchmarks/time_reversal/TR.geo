/*
Numerical simulation of a Time Reversal experiment.
The simulation is achieved in 2D, with a thick Time Reversal Miror (TRM).
The domain is free of any obstacle.
*/

Include "TR_data.pro";

// Point source :
PS = newp; Point(PS) = {XS,YS,ZS,lcSourceInt};

//===================
//Creation of the TRM
//===================

P1 = newp; Point(P1) = {X_TRM_min,Y_TRM_min,ZS,lcTRM};
P2 = newp; Point(P2) = {X_TRM_max,Y_TRM_min,ZS,lcTRM};
P3 = newp; Point(P3) = {X_TRM_max,Y_TRM_max,ZS,lcTRM};
P4 = newp; Point(P4) = {X_TRM_min,Y_TRM_max,ZS,lcTRM};

LTRM1 = newreg; Line(LTRM1) = {P1,P2};
LTRM2 = newreg; Line(LTRM2) = {P2,P3};
LTRM3 = newreg; Line(LTRM3) = {P3,P4};
LTRM4 = newreg; Line(LTRM4) = {P4,P1};

LLTRM = newreg; Line Loop(LLTRM) = {LTRM1,LTRM2,LTRM3,LTRM4};

//==============================
// Perfectly Matched Layer (PML)
//==============================

// Centre XF,YF,ZF (imported from "data_geometry.geo")
//PF = newp; Point(PF) = {XF,YF,ZF,lcFictitious};

//Interior boundary (propagating part of the domain)
//Rectangle centered on (XF,YF,ZF) with sizes SizeInteriorDomainX (X direction)
//and SizeInteriorDomainY (Y direction)

// Remark on the different names:
// Int = mean "interior" (Begining of the PML)
// Ext = "exterior" (Troncation of the PML)
//U = Up
//R = Right
//L = Left
//D = Down
// Ex. : PointUR = Point up right

//   UL-----------UR
//    |            |
//    |            |
//   DL------------DR

PIntBoundDL = newp; Point(PIntBoundDL) = {X_Omega_min, Y_Omega_min, ZF, lcIntern_Bound};
PIntBoundDR = newp; Point(PIntBoundDR) = {X_Omega_max, Y_Omega_min, ZF, lcIntern_Bound};
PIntBoundUR = newp; Point(PIntBoundUR) = {X_Omega_max, Y_Omega_max, ZF, lcIntern_Bound};
PIntBoundUL = newp; Point(PIntBoundUL) = {X_Omega_min, Y_Omega_max, ZF, lcIntern_Bound};

LIntBoundD = newreg; Line(LIntBoundD) = {PIntBoundDL,PIntBoundDR};
LIntBoundR = newreg; Line(LIntBoundR) = {PIntBoundDR,PIntBoundUR};
LIntBoundU = newreg; Line(LIntBoundU) = {PIntBoundUR,PIntBoundUL};
LIntBoundL = newreg; Line(LIntBoundL) = {PIntBoundUL,PIntBoundDL};

// Boundary of the interior domain (= propagation domain)
LLIntBound = newreg; Line Loop(LLIntBound) = {LIntBoundD,LIntBoundR,LIntBoundU,LIntBoundL};

// Absorbing domain (PML) :
//Rectangle centered on (XF,YF,ZF) with sides (SizeInteriorDomainX + SizeAbsorbingDomainX) and (SizeInteriorDomainY + SizeAbsorbingDomainY)
//In the X direction, the PML have a thickness of "SizeAbsorbingDomainX" (same for "Y direction" and "SizeAbsorbingDomainY")

PExtBoundDL = newp; Point(PExtBoundDL) = {X_Omega_min - SizePMLX, Y_Omega_min - SizePMLY, ZF, lcExtern_Bound};
PExtBoundDR = newp; Point(PExtBoundDR) = {X_Omega_max + SizePMLX, Y_Omega_min - SizePMLY, ZF, lcExtern_Bound};
PExtBoundUR = newp; Point(PExtBoundUR) = {X_Omega_max + SizePMLX, Y_Omega_max + SizePMLY, ZF, lcExtern_Bound};
PExtBoundUL = newp; Point(PExtBoundUL) = {X_Omega_min - SizePMLX, Y_Omega_max + SizePMLY, ZF, lcExtern_Bound};

LExtBoundD = newreg; Line(LExtBoundD) = {PExtBoundDL,PExtBoundDR};
LExtBoundR = newreg; Line(LExtBoundR) = {PExtBoundDR,PExtBoundUR};
LExtBoundU = newreg; Line(LExtBoundU) = {PExtBoundUR,PExtBoundUL};
LExtBoundL = newreg; Line(LExtBoundL) = {PExtBoundUL,PExtBoundDL};

LLExtBound = newreg; Line Loop(LLExtBound) = {LExtBoundD,LExtBoundR,LExtBoundU,LExtBoundL};

//==========================
//  Creation of the surfaces
//==========================

// Miror :
SurfTRM = newreg; Plane Surface(SurfTRM) = {LLTRM};

// Exterior_Domain is the domain of interest without the Miror
SurfExteriorDomain = newreg; Plane Surface(SurfExteriorDomain) = {LLTRM,LLIntBound};

// PML
SurfPML = newreg; Plane Surface(SurfPML) = {LLExtBound,LLIntBound};

//==============================
//  Physical entities
//==============================

// Surfaces
Physical Surface(1) = {SurfTRM};
Physical Surface(2) = {SurfExteriorDomain};
Physical Surface(3) = {SurfPML};

// Boundaries		
Physical Line(11) = {LTRM1, LTRM2, LTRM3, LTRM4};
Physical Line(12) = {LIntBoundL,LIntBoundD,LIntBoundR,LIntBoundU};
Physical Line(13) = {LExtBoundD, LExtBoundR, LExtBoundU, LExtBoundL};
