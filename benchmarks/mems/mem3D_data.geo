// Shunt capacitive MEM switch

pp  = "1Geometric dimensions/0";
pp1 = StrCat[pp, "1Upper electrode (with holes)/"];
pp2 = StrCat[pp, "2Lower electrode/"];
ppEM = "2Electromagnetic parameters/0";
ppMec = "3Mechanical parameters/0";

close_menu = 1;
colorro    = "LightGrey";
colorpp    = "Ivory";

//---------------------------------------------------------------------

u  = 1.e-6 ; // dimensions in micros

DefineConstant[
  Lc = { 475, Name StrCat[pp1, "0Length [micron]"],
    Highlight Str[colorpp], Closed close_menu},
  bc = { 275, Name StrCat[pp1, "1Width [micron]"],
    Highlight Str[colorpp], Closed close_menu},
  d = { 4, Name StrCat[pp1, "2Thickness [micron]"],
    Highlight Str[colorpp] },
  w = { 25, Name StrCat[pp1, "2Side of square holes [micron]"],
    Highlight Str[colorpp] },
  pitch = { 2*w, Name StrCat[pp1, "3Pitch of holes [micron]"], ReadOnly 1,
    Highlight Str[colorro] },
  Lb = { 205, Name StrCat[pp1, "4Length of beams [micron]"],
    Highlight Str[colorpp] },
  bb = { 20, Name StrCat[pp1, "5Width of beams [micron]"],
    Highlight Str[colorpp] },
  da = { 80, Name StrCat[pp1, "6Distance between beams [micron]"],
    Highlight Str[colorpp] },
  Ls = { 625, Name StrCat[pp1, "7Length of supporting beams [microns]"],
    Highlight Str[colorpp], Visible 0 },

  Lin = { 485, Name StrCat[pp2, "0Length [micron]"],
    Highlight Str[colorpp], Closed close_menu},
  bin = { 285, Name StrCat[pp2, "1Width [micron]"],
    Highlight Str[colorpp] },
  tin = { 0.5, Name StrCat[pp2, "2Thickness [micron]"],
    Highlight Str[colorpp] },
  t = { 150, Name StrCat[pp2, "3Length of teeth [micron]"],
    Highlight Str[colorpp] },
  win = { bin/3, Name StrCat[pp2, "4Width of teeth [micron]"], ReadOnly 1,
    Highlight Str[colorro] },
  td = { 0.2, Name StrCat[pp2, "5Thickness of dielectric [micron]"],
    Highlight Str[colorpp] },
  gap = { 3, Name StrCat[pp, "3Air gap between electrodes [micron]"],
    Highlight Str[colorpp] },

  R1 = { 700, Name StrCat[pp, "4Inner radius of shell [micron]"],
    Highlight Str[colorpp] },
  R2 = {1000, Name StrCat[pp, "5Outer radius of shell [micron]"],
    Highlight Str[colorpp] }
] ;

// Scaling for getting correct units ...
Lc = Lc * u ;
Lb = Lb * u ;
bb = bb * u ;

Ls = Ls * u ; // Not in this model (see my PhD :-))

d = d * u ;
da = da * u ;
bc = bc * u ;
w = w*u ;
pitch = pitch*u;

Lin = Lin *u ;
bin = bin * u ;
tin = tin * u ;
win = win * u ;
t = t*u;

td = td * u ;
gap = gap*u;

// Shell for FEM
R1 = R1 * u ;
R2 = R2 * u ;

dal = gap/4 ; // easing the mesh task...

DefineConstant[ //maximum voltage 10-15 V
  Vmax = { 15, Min 0, Max 15, Name StrCat[ppEM, "0Voltage [V] - upper electrode"],
    Highlight Str[colorpp]},
  Vmin = { 0., Name StrCat[ppEM, "1Voltage [V] - lower electrode"],
    Highlight Str[colorpp]},
  epsr_diel = { 7, Name StrCat[ppEM, "2Relative permittivity of dielectric layer"],
    Highlight Str[colorpp]}
  E_val = { 70e9, Name StrCat[ppMec, "0Young's modulus [Pa]"],
    Highlight Str[colorpp]},
  nu_val = { 0.3, Name StrCat[ppMec, "1Poisson's value"],
    Highlight Str[colorpp]}
];


//Numbers for physical regions
SUR_PLATEINT = 11110 ;
SUR_PLATEINT_DWN = 11120 ;
SUR_PLATEINT_UP = 11130 ;
PLATEINT = 11000;
BEAMS = 11100 ;

PLATEIN = 22000 ;
SUR_PLATEIN = 22220;

DIEL = 20000 ;
SUR_DIEL = 20001 ;

AIRLAYER = 15000 ;
AIR = 10000 ;
SHELL = 30000 ;

SUR_INF = 55555;

// For mechanical constraints...
SUR_BEAM1i = 2011 ;
SUR_BEAM2i = 2012 ;
SUR_BEAM3i = 2013 ;
SUR_BEAM4i = 2014 ;

SUR_BEAM1d = 2001 ;
SUR_BEAM2d = 2002 ;
SUR_BEAM3d = 2003 ;
SUR_BEAM4d = 2004 ;
