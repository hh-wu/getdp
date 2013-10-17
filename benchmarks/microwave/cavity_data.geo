catParam1 = "Input/1Geometry/";
catParam2 = "Input/2Domain truncation/";
catParam3 = "Input/3Incident signal/";

colorro = "LightGrey";
colorpp = "Ivory";
colorpq = "AliceBlue";

c0 = 3e8;   // speed of light in vacuum
fmin = 1e8;
fmax = 1e9;
nn = 20;
mm = 1e-3;
deg2rad = Pi/180;


DefineConstant[
  
  Flag_Model = {2, Choices{2="2D", 3="3D"}, Label "Model",
    Path "Input/0", Highlight "Black"},
  
  Lx = { 0.3,  Min 0.01, Max 1, Step 0.01, Label "Length X of the cavity [m]",
    Path StrCat(catParam1,"0"), Highlight Str[colorpp]},
  Ly = { 0.12, Min 0.01, Max 1, Step 0.01, Label "Length Y of the cavity [m]",
    Path StrCat(catParam1,"1"), Highlight Str[colorpp]},
  Lz = { 0.3,  Min 0.01, Max 1, Step 0.01, Label "Length Z of the cavity [m]",
    Path StrCat(catParam1,"2"), Highlight Str[colorpp], Visible (Flag_Model==3)},
  
  Flag_Aperture = {0, Choices{0="Rectanglar", 1="Elliptical"}, Label "Shape of the aperture",
    Path StrCat(catParam1,"3"), Highlight "Black", Visible (Flag_Model==3)},
  Appx = { 0.2,  Min 0.01, Max 1, Step 0.01, Label "Length X of the aperture [m]",
    Path StrCat(catParam1,"4"), Highlight Str[colorpp], Visible (Flag_Model==3)},
  Appy = { 0.03, Min 0.01, Max 1, Step 0.01, Label "Length Y of the aperture [m]",
    Path StrCat(catParam1,"5"), Highlight Str[colorpp], Visible (Flag_Model==3)},
  App = { 0.03,  Min 0.01, Max 1, Step 0.01, Label "Length of the aperture [m]",
    Path StrCat(catParam1,"4"), Highlight Str[colorpp], Visible (Flag_Model==2)},
  
  Flag_BC_Type = {1, Choices{0="Silver-Muller", 1="PML"}, Label "Technique",
    Path StrCat(catParam2,"0"), Highlight "Black"},
  Llayer1 = { 0.05, Min 0.01, Max 1, Step 0.01,  Label "Length of the layer [m]",
    Path StrCat(catParam2,"1"), Highlight Str[colorpp]},
  
  Freq = { 500e6, Min 100e6, Max 2e9, Step 10e6, Label "Frequency [Hz]", Loop 0,
    Path StrCat(catParam3,"0"), Highlight Str[colorpp]},
  lambda = { c0/(Freq), Label "Wavelength [m]",
    Path StrCat(catParam3,"1"), ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Label "Wave number",
    Path StrCat(catParam3,"2"), ReadOnly 1, Highlight Str[colorro]}

] ;


//========================================================


CAVITY_BORDER = 100;
CAVITY_APERTURE = 101;
BORDER = 102;

CAVITY_VOL = 200;
LAYER1 = 201;

