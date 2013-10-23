catParam1 = "Input/2Geometry/";
catParam2 = "Input/3Domain truncation/";
catParam3 = "Input/4Incident signal/";
catParam4 = "Input/5Mesh parameters/";

colorro = "LightGrey";
colorpp = "Ivory";
colorpq = "AliceBlue";

c0 = 3e8; // speed of light in vacuum

DefineConstant[
  Flag_Geometry = {0, Choices{0="2D cavity", 1="2D cavity with wall", 2="3D cavity"}, Label "Cavity model",
    Path "Input/0", Highlight "Black"}
];

If(Flag_Geometry==0)
  Flag_Model=2;
EndIf
If(Flag_Geometry==1)
  Flag_Model=2;
EndIf
If(Flag_Geometry==2)
  Flag_Model=3;
EndIf

DefineConstant[
  Lx = { 0.6,  Min 0.01, Max 1, Step 0.01, Label "Length X of the cavity [m]",
    Path StrCat(catParam1,"0"), Highlight Str[colorpp]},
  Ly = { 0.4, Min 0.01, Max 1, Step 0.01, Label "Length Y of the cavity [m]",
    Path StrCat(catParam1,"1"), Highlight Str[colorpp]},
  Lz = { 0.4,  Min 0.01, Max 1, Step 0.01, Label "Length Z of the cavity [m]",
    Path StrCat(catParam1,"2"), Highlight Str[colorpp], Visible (Flag_Model==3)},
  
  Flag_Aperture = {0, Choices{0="Rectanglar", 1="Elliptical"}, Label "Shape of the aperture",
    Path StrCat(catParam1,"3"), Highlight "Black", Visible (Flag_Model==3)},
  Appx = { 0.2,  Min 0.01, Max 1, Step 0.01, Label "Length X of the aperture [m]",
    Path StrCat(catParam1,"4"), Highlight Str[colorpp], Visible (Flag_Model==3)},
  Appy = { 0.03, Min 0.01, Max 1, Step 0.01, Label "Length Y of the aperture [m]",
    Path StrCat(catParam1,"5"), Highlight Str[colorpp], Visible (Flag_Model==3)},
  App = { 0.16,  Min 0.01, Max 1, Step 0.01, Label "Length of the aperture [m]",
    Path StrCat(catParam1,"4"), Highlight Str[colorpp], Visible (Flag_Model==2)},
  
  Flag_BC_Type = {1, Choices{0="Silver-Muller", 1="PML"}, Label "Technique",
    Path StrCat(catParam2,"0"), Highlight "Black"},
  Llayer1 = { 0.05, Min 0.01, Max 1, Step 0.01,  Label "Length of the layer [m]",
    Path StrCat(catParam2,"1"), Highlight Str[colorpp]},
  
  Freq = { 500e6, Min 400e6, Max 1e9, Step 20e6, Label "Frequency [Hz]", Loop 1,
    Path StrCat(catParam3,"0"), Highlight Str[colorpp]},
  lambda = { c0/(Freq), Label "Wavelength [m]",
    Path StrCat(catParam3,"1"), ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Label "Wave number",
    Path StrCat(catParam3,"2"), ReadOnly 1, Highlight Str[colorro]},

  Flag_SizeMeshCell = {1, Choices{0="Constant length", 1="Linked to the wavelength"}, Label "Choice of the cell length (Lc)",
    Path StrCat(catParam4,"0"), Highlight "Black"},
  lcValue = { 0.16, Label "Value of Lc [m]",
    Path StrCat(catParam4,"1"), Highlight Str[colorpp], Visible (Flag_SizeMeshCell==0)},
  lambdaOnlc = { 10, Min 1, Max 100, Step 1, Label "Ratio ''wavelength / Lc''",
    Path StrCat(catParam4,"2"), Highlight Str[colorpp], Visible (Flag_SizeMeshCell==1)},
  lcMax = { 0.03, Min 0.001, Max 1, Step 0.001, Label "Maximum value of Lc [m]",
    Path StrCat(catParam4,"3"), Highlight Str[colorpp], Visible (Flag_SizeMeshCell==1)}
];


//========================================================


CAVITY_BORDER = 100;
CAVITY_APERTURE = 101;
BORDER = 102;

CAVITY_VOL = 200;
LAYER1 = 201;

