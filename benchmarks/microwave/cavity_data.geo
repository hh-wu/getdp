catParam1 = "1Geometry/";
catParam11 = "1Geometry/01Cavity/";
catParam12 = "1Geometry/02Aperture/";
catParam13 = "1Geometry/03Domain truncation/";
catParam2 = "2Incident signal/";

colorro = "LightGrey";
colorpp = "Ivory";

c0 = 3e8;   // speed of light in vacuum
fmin = 1e8;
fmax = 1e9;
nn = 20;
mm = 1e-3;
deg2rad = Pi/180;


DefineConstant[
  
  Lx = { 0.3,  Min 0.01, Max 1, Step 0.01, Label "Length X [m]",
    Path StrCat(catParam11,"0"), Highlight Str[colorpp]},
  Ly = { 0.12, Min 0.01, Max 1, Step 0.01, Label "Length Y [m]",
    Path StrCat(catParam11,"1"), Highlight Str[colorpp]},
  Lz = { 0.3,  Min 0.01, Max 1, Step 0.01, Label "Length Z [m]",
    Path StrCat(catParam11,"2"), Highlight Str[colorpp]},
  
  Flag_Aperture = {0, Choices{0="Rectanglar", 1="Elliptical"}, Label "Shape",
    Path StrCat(catParam12,"3"), Highlight "Black"},
  Appx = { 0.2, Min 0.01, Max 1, Step 0.01, Label "Length X [m]",
    Path StrCat(catParam12,"4"), Highlight Str[colorpp]},
  Appy = { 0.03, Min 0.01, Max 1, Step 0.01, Label "Length y [m]",
    Path StrCat(catParam12,"5"), Highlight Str[colorpp]},
  
  Flag_BC_Type = {0, Choices{0="Silver-Muller", 1="PML"}, Label "Technique",
    Path StrCat(catParam13,"0"), Highlight "Black"},
  Llayer1 = { 0.05, Min 0.01, Max 1, Step 0.01,  Label "Length of the layer [m]",
    Path StrCat(catParam13,"1"), Highlight Str[colorpp]},
  
  Freq = { 500e6, Min 100e6, Max 2e9, Step 10e6, Label "Frequency [Hz]", Loop 0,
    Path StrCat(catParam2,"0"), Highlight Str[colorpp]},
  lambda = { c0/(Freq), Label "Wavelength [m]",
    Path StrCat(catParam2,"1"), ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Label "Wave number",
    Path StrCat(catParam2,"2"), ReadOnly 1, Highlight Str[colorro]}

] ;


//========================================================


CAVITY_BORDER = 100;
CAVITY_APERTURE = 101;
BORDER = 102;

CAVITY_VOL = 200;
LAYER1 = 201;

