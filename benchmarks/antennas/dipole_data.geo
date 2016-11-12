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
  Flag_3Dmodel = {0, Choices{0="2D axisymmetric",1="3D"},
    Name "Input/01FE model", Highlight "Blue"},
  Flag_BC_Type = {1, Choices{0="Silver Muller", 1="PML"},
    Name "Input/20Boundary condition at infinity", Highlight "Blue"},
  Flag_InfShape = {0, Choices{0="Rectangular", 1="Capsular"},
    Name "Input/01Shape of truncation boundary", Highlight "Blue",
    ReadOnly (Flag_3Dmodel==1), Visible (Flag_3Dmodel==0)},
  Flag_PML_Cyl = {0, Choices{0="Rectangular PML", 1="Cylindrical PML"},
    Name "Input/20Type of PML", Highlight "Blue",
    ReadOnly (Flag_3Dmodel==0), Visible (Flag_3Dmodel==1 && Flag_BC_Type==1)}
] ;

DefineConstant[
  Ldipole = { 0.5, Name StrCat[pp, "0Length of dipole [m]"],
    Highlight Str[colorpp], Closed close_menu},
  rdipole = { 3.3242, Name StrCat[pp, "0Radius of dipole [mm]"],
    Highlight Str[colorpp]},
  frac_Ldipole = { 100, Name StrCat[pp, "1Fraction of Ldipole that determines the delta gap"],
    Highlight Str[colorpp]},
  delta_gap = { Ldipole/frac_Ldipole, Name StrCat[pp, "2Delta gap (feed) [m]"],
    ReadOnly 1, Highlight Str[colorro]},

  FREQ = { c0*5, Min fmin, Max fmax, Step (fmax-fmin)/nn,
    Name StrCat[ppEM, "3Frequency [Hz]"], Loop 0, Highlight Str[colorpp]},
  lambda = { c0/FREQ, Name StrCat[ppEM, "4Wavelength [m]"],
    ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Name StrCat[ppEM, "5Wave number"],
    ReadOnly 1, Highlight Str[colorro]},

  xb = { Ldipole/2, Name StrCat[pp2, "0X at inner boundary [m]"],
    Highlight Str[colorpp], Visible !(Flag_3Dmodel==0 && Flag_InfShape==1)},
  yb = { Ldipole*3/4, Name StrCat[pp2, "1Y at inner boundary [m]"],
    Highlight Str[colorpp], Visible !(Flag_3Dmodel==0 && Flag_InfShape==1)},
  zb = { Ldipole/2, Name StrCat[pp2, "2Z at inner boundary [m]"],
    Highlight Str[colorpp], Visible Flag_3Dmodel==1},

  rb = { Ldipole/2, Name StrCat[pp2, "3R at inner boundary [m]"],
    Highlight Str[colorpp], Visible (Flag_3Dmodel==0 && Flag_InfShape==1)},

  nbla = { 10, Name StrCat[pp2, "4Points per wavelength"], Highlight Str[colorpp] },
  PmlDelta = { (xb/3 < 4*lambda/nbla) ? xb/3:4*lambda/nbla,
    Name StrCat[pp2, "4PML thickness [m]"], ReadOnly 1, Highlight "LightGrey",
    Visible (Flag_BC_Type == 1) }

  AngleWedge_deg = { 45, Choices{45, 90, 360}, Name "Input/02Wedge angle [deg]",
    Highlight "Ivory", Visible (Flag_3Dmodel==1 && Flag_PML_Cyl==0)},
  AngleWedgeCyl_deg = { 10, Name "Input/02Angle [deg]",
    Help Str["-Use angle smaller than 90 or modify geo file"],
    Highlight "Ivory", Visible (Flag_3Dmodel==1 && Flag_PML_Cyl==1)}
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
