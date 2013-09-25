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

DefineConstant[
  Flag_model = {0, Choices{0="2D axisymetric", 1="3D"},
    Label "FE model", Path "Input/00", Highlight "Blue"},
  Flag_2Ddomain = {0, Choices{0="Rectangle", 1="Pill"},
    Label "Computational domain", Path "Input/01", Highlight "Blue", Visible !Flag_model},
  Flag_3Ddomain = {0, Choices{0="3D 1/8", 1="3D 1/4", 2="3D full"},
    Label "Computational domain", Path "Input/01", Highlight "Blue", Visible Flag_model},

  Ldipole = { 0.5, Label "Length of dipole [m]",
    Path StrCat(pp,"0"), Highlight Str[colorpp], Closed close_menu},
  rdipole = { 3.3242, Label "Radius of dipole [mm]",
    Path StrCat(pp,"0"), Highlight Str[colorpp]},
  frac_Ldipole = { 100, Label "Fraction of Ldipole that determines the delta gap",
    Path StrCat(pp,"1"), Highlight Str[colorpp]},
  delta_gap = { Ldipole/frac_Ldipole, Label "Delta gap (feed) [m]",
    Path StrCat(pp,"2"), ReadOnly 1, Highlight Str[colorro]},

  FREQ = { c0, Min fmin, Max fmax, Step (fmax-fmin)/nn, Label "Frequency [Hz]", Loop 0,
    Path StrCat(ppEM,"3"), Highlight Str[colorpp]},
  lambda = { c0/FREQ, Label "Wavelength [m]",
    Path StrCat(ppEM,"4"), ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Label "Wave number",
    Path StrCat(ppEM,"5"), ReadOnly 1, Highlight Str[colorro]},

  xb = { Ldipole/2, Label "X at inner boundary [m]",
    Path StrCat(pp2,"0"), Highlight Str[colorpp], Visible !(Flag_model==0 && Flag_2Ddomain==1)},
  yb = { Ldipole*3/4, Label "Y at inner boundary [m]",
    Path StrCat(pp2,"1"), Highlight Str[colorpp], Visible !(Flag_model==0 && Flag_2Ddomain==1)},
  zb = { Ldipole/2, Label "Z at inner boundary [m]",
    Path StrCat(pp2,"2"), Highlight Str[colorpp], Visible Flag_model==1},

  rb = { Ldipole/2, Label "R at inner boundary [m]",
    Path StrCat(pp2,"3"), Highlight Str[colorpp], Visible (Flag_model==0 && Flag_2Ddomain==1)},

  PmlDelta = { xb/3, Label "PML thickness [m]",
    Path StrCat(pp2,"4"), Highlight Str[colorpp]}
] ;

rdipole = rdipole*mm; // in [m]


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
