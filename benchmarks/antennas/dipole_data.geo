// A half-wave dipole

pp  = "1Geometric dimensions/0";
pp2 = "1Geometric dimensions/03Domain dimensions/";
ppEM = "2Electromagnetic parameters/0";

close_menu = 0;
colorro = "LightGrey";
colorpp = "Ivory";

c0 = 3e8;   // speed of light in vacuum
fmin = 1e8;
fmax = 1e9;
nn = 20;
mm = 1e-3;

deg2rad = Pi/180;

DefineConstant[
  Flag_3Dmodel = {1, Choices{0="2D axisymmetric",1="3D"},
    Label "FE model", Path "Input/01", Highlight "Blue"},
  Flag_BC_Type = {1, Choices{0="Silver Muller", 1="PML"},
    Label "Boundary condition at infinity", Path "Input/20", Highlight "Blue", Visible 1},
  Flag_InfShape = {0, Choices{0="Rectangular", 1="Capsular"}, ReadOnly (Flag_3Dmodel==1),
    Label "Shape of truncation boundary", Path "Input/01", Highlight "Blue", Visible (Flag_3Dmodel==0)},
  Flag_PML_Cyl = {0, Choices{0="Rectangular PML", 1="Cylindrical PML"}, ReadOnly (Flag_3Dmodel==0),
    Label "type of PML", Path "Input/20", Highlight "Blue", Visible (Flag_3Dmodel==1 && Flag_BC_Type==1)}
] ;

DefineConstant[
  Ldipole = { 0.5, Label "Length of dipole [m]",
    Path StrCat(pp,"0"), Highlight Str[colorpp], Closed close_menu},
  rdipole = { 3.3242, Label "Radius of dipole [mm]",
    Path StrCat(pp,"0"), Highlight Str[colorpp]},
  frac_Ldipole = { 100, Label "Fraction of Ldipole that determines the delta gap",
    Path StrCat(pp,"1"), Highlight Str[colorpp]},
  delta_gap = { Ldipole/frac_Ldipole, Label "Delta gap (feed) [m]",
    Path StrCat(pp,"2"), ReadOnly 1, Highlight Str[colorro]},

  FREQ = { c0*5, Min fmin, Max fmax, Step (fmax-fmin)/nn, Label "Frequency [Hz]", Loop 0,
    Path StrCat(ppEM,"3"), Highlight Str[colorpp]},
  lambda = { c0/FREQ, Label "Wavelength [m]",
    Path StrCat(ppEM,"4"), ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Label "Wave number",
    Path StrCat(ppEM,"5"), ReadOnly 1, Highlight Str[colorro]},

  xb = { Ldipole/2, Label "X at inner boundary [m]",
    Path StrCat(pp2,"0"), Highlight Str[colorpp], Visible !(Flag_3Dmodel==0 && Flag_InfShape==1)},
  yb = { Ldipole*3/4, Label "Y at inner boundary [m]",
    Path StrCat(pp2,"1"), Highlight Str[colorpp], Visible !(Flag_3Dmodel==0 && Flag_InfShape==1)},
  zb = { Ldipole/2, Label "Z at inner boundary [m]",
    Path StrCat(pp2,"2"), Highlight Str[colorpp], Visible Flag_3Dmodel==1},

  rb = { Ldipole/2, Label "R at inner boundary [m]",
    Path StrCat(pp2,"3"), Highlight Str[colorpp], Visible (Flag_3Dmodel==0 && Flag_InfShape==1)},

  nbla     = { 10,   Label "Points per wavelength", Path StrCat(pp2,"4"), Highlight Str[colorpp] },
  PmlDelta = { (xb/3 < 4*lambda/nbla) ? xb/3:4*lambda/nbla,
    Label "PML thickness [m]", ReadOnly 1, Path StrCat(pp2,"4"), Highlight "LightGrey",
    Visible (Flag_BC_Type == 1) }

  AngleWedge_deg = { 45, Choices{45, 90, 360}, Label "Wedge angle [deg]", Path "Input/02",
    Highlight "Ivory", Visible (Flag_3Dmodel==1 && Flag_PML_Cyl==0)},
  AngleWedgeCyl_deg = { 30, Label "Wedge angle [deg]", Help Str["-Use angle smaller than 90 or modify geo file"],
    Path "Input/02", Highlight "Ivory", Visible (Flag_3Dmodel==1 && Flag_PML_Cyl==1)}
] ;

rdipole = rdipole*mm; // in [m]
AngleWedge = ((Flag_PML_Cyl==0) ? AngleWedge_deg : AngleWedgeCyl_deg) * deg2rad ;

CoefGeo = (!Flag_3Dmodel) ? 2*Pi : 2*Pi/AngleWedge; // axisymmetry in 2D, 1/8 or 1/4 of the 3D model

Printf("CoefGeo %g", CoefGeo);

//=======================================================================


DIPOLE = 1000;
DIPOLEDWN = DIPOLE+1;
DIPOLEUP =  DIPOLE+2;

SKINDIPOLE    = 1100;
SKINDIPOLEUP  = SKINDIPOLE+1;
SKINDIPOLEDWN = SKINDIPOLE+2;

FEED       = 2000 ;
SKINFEED   = 2100 ;

CUTFEED    = 2300 ;
CUTFEEDUP  = CUTFEED+1 ;
CUTFEEDDWN = CUTFEED+2 ;

AIR = 3000;
PML = 3100 ;
PMLX = PML+1 ;
PMLY = PML+2 ;
PMLZ = PML+3 ;

SYMDIPOLE  = 1200 ;
SYMFEED    = 2200 ;
SYMAIR     = 3200 ;

SURFAIRINF = 3333 ;
AXIS = 4444 ;
