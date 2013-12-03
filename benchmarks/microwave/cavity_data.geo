catParam1 = "Input/2Geometry/";
catParam2 = "Input/3Domain truncation/";
catParam3 = "Input/4Incident signal/";
catParam4 = "Input/5Mesh parameters/";

colorro = "LightGrey";
colorpp = "Ivory";
colorpq = "AliceBlue";

c0 = 3e8; // speed of light in vacuum

DefineConstant[
  Flag_Geometry = {0, Choices{0="2D cavity", 1="2D cavity with wall", 2="3D cavity"},
    Name "Input/0Cavity model", Highlight "Black"}
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
  Lx = { 0.6,  Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam1, "0Length X of the cavity [m]"],
    Highlight Str[colorpp]},
  Ly = { 0.4, Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam1,"1Length Y of the cavity [m]"],
    Highlight Str[colorpp]},
  Lz = { 0.4,  Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam1,"2Length Z of the cavity [m]"],
    Highlight Str[colorpp], Visible (Flag_Model==3)},

  Flag_Aperture = {0, Choices{0="Rectanglar", 1="Elliptical"},
    Name StrCat[catParam1,"3Shape of the aperture"],
    Highlight "Black", Visible (Flag_Model==3)},
  Appx = { 0.2,  Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam1,"4Length X of the aperture [m]"],
    Highlight Str[colorpp], Visible (Flag_Model==3)},
  Appy = { 0.03, Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam1,"5Length Y of the aperture [m]"],
    Highlight Str[colorpp], Visible (Flag_Model==3)},
  App = { 0.16,  Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam1,"4Length of the aperture [m]"],
    Highlight Str[colorpp], Visible (Flag_Model==2)},

  Flag_BC_Type = {1, Choices{0="Silver-Muller", 1="PML"},
    Name StrCat[catParam2,"0Technique"], Highlight "Black"},
  Llayer1 = { 0.05, Min 0.01, Max 1, Step 0.01,
    Name StrCat[catParam2,"1Length of the layer [m]"], Highlight Str[colorpp]},

  Flag_SizeMeshCell = {0, Choices{0="Constant length", 1="Linked to the wavelength"},
    Name StrCat[catParam4,"0Choice of the cell length (Lc)"], Highlight "Black"},
  lcValue = { 0.01, Min 0.001, Max 1, Step 0.001,
    Name StrCat[catParam4,"1Value of Lc [m]"],
    Highlight Str[colorpp], Visible (Flag_SizeMeshCell==0)},
  lambdaOnlc = { 10, Min 1, Max 100, Step 1,
    Name StrCat[catParam4,"2Ratio ''wavelength over Lc''"],
    Highlight Str[colorpp], Visible (Flag_SizeMeshCell==1)},
  lcMax = { 0.03, Min 0.001, Max 1, Step 0.001,
    Name StrCat[catParam4,"3Maximum value of Lc [m]"],
    Highlight Str[colorpp], Visible (Flag_SizeMeshCell==1)}
];

//========================================================


CAVITY_BORDER = 100;
CAVITY_APERTURE = 101;
BORDER = 102;

CAVITY_VOL = 200;
LAYER1 = 201;

