// This file is called when the medium contains obstacles.
// Two mains actions are achieved :
// 1) Creation of the obstacles
// 2) The Green function must now be approximated: creation of a small disk
//    around the source to approximate Dirac function

// 1- Obstacles
// Plot the box of obstacles
pboxdl = newp ; Point(pboxdl) = {Xboxmin, Yboxmin, 0, lcIntern_Bound};
pboxdr = newp ; Point(pboxdr) = {Xboxmax, Yboxmin, 0, lcIntern_Bound};
pboxur = newp ; Point(pboxur) = {Xboxmax, Yboxmax, 0, lcIntern_Bound};
pboxul = newp ; Point(pboxul) = {Xboxmin, Yboxmax, 0, lcIntern_Bound};
lboxl = newl ; Line(lboxl) = {pboxul, pboxdl};
lboxd = newl ; Line(lboxd) = {pboxdl, pboxdr};
lboxr = newl ; Line(lboxr) = {pboxdr, pboxur};
lboxu = newl ; Line(lboxu) = {pboxur, pboxul};

// Functions to place obstacles in the box
Include "CreateEllipses.geo";
Call CreateEllipses;

// 2- Point source

// Two concentric disks centred on the point source are created. The first one
// to approximate the Diract function (very very small)
// The second disk is here to avoid the mesh refinement to propagate throughout
// all the domain (very small)

// 1st disk (internal) :
//Radii (epsilon is defined in TR_data.pro)
RadiusSourceIntX = epsilon;
RadiusSourceIntY = epsilon;
PSourceInt1 = newp; Point(PSourceInt1) = {XS + RadiusSourceIntX, YS ,ZS, lcSourceInt};
PSourceInt2 = newp; Point(PSourceInt2) = {XS, YS + RadiusSourceIntY, ZS, lcSourceInt};
PSourceInt3 = newp; Point(PSourceInt3) = {XS - RadiusSourceIntX, YS, ZS, lcSourceInt};
PSourceInt4 = newp; Point(PSourceInt4) = {XS, YS - RadiusSourceIntY, ZS, lcSourceInt};

LSourceInt1 = newreg; Ellipse(LSourceInt1) = {PSourceInt1, PS, PSourceInt1, PSourceInt2};
LSourceInt2 = newreg; Ellipse(LSourceInt2) = {PSourceInt2, PS, PSourceInt1, PSourceInt3};
LSourceInt3 = newreg; Ellipse(LSourceInt3) = {PSourceInt3, PS, PSourceInt1, PSourceInt4};
LSourceInt4 = newreg; Ellipse(LSourceInt4) = {PSourceInt4, PS, PSourceInt1, PSourceInt1};

LLSourceInt = newreg; Line Loop(LLSourceInt) = {LSourceInt1, LSourceInt2, LSourceInt3, LSourceInt4};

// 2nd Disk (external) :
// Radii
RadiusSourceExtX = 100*epsilon;
RadiusSourceExtY = 100*epsilon;
PSourceExt1 = newp; Point(PSourceExt1) = {XS + RadiusSourceExtX, YS , ZS, lcSourceExt};
PSourceExt2 = newp; Point(PSourceExt2) = {XS, YS + RadiusSourceExtY, ZS, lcSourceExt};
PSourceExt3 = newp; Point(PSourceExt3) = {XS - RadiusSourceExtX, YS, ZS, lcSourceExt};
PSourceExt4 = newp; Point(PSourceExt4) = {XS, YS - RadiusSourceExtY, ZS, lcSourceExt};

LSourceExt1 = newreg; Ellipse(LSourceExt1) = {PSourceExt1, PS, PSourceExt1, PSourceExt2};
LSourceExt2 = newreg; Ellipse(LSourceExt2) = {PSourceExt2, PS, PSourceExt1, PSourceExt3};
LSourceExt3 = newreg; Ellipse(LSourceExt3) = {PSourceExt3, PS, PSourceExt1, PSourceExt4};
LSourceExt4 = newreg; Ellipse(LSourceExt4) = {PSourceExt4, PS, PSourceExt1, PSourceExt1};

LLSourceExt = newreg; Line Loop(LLSourceExt) = {LSourceExt1, LSourceExt2, LSourceExt3, LSourceExt4};

SSourceInt = newreg; Plane Surface(SSourceInt) = {LLSourceInt};
SSourceExt = newreg; Plane Surface(SSourceExt) = {LLSourceInt,LLSourceExt};
