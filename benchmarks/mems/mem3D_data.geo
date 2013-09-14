// Shunt capacitive MEM switch

pp  = "1Geometric dimensions/0";
ppEM = "2Electromagnetic parameters/0";
ppMec = "3Mechanical parameters/0";

close_menu = 1;
colorro    = "LightGrey";
colorpp    = "Ivory";

//---------------------------------------------------------------------

u  = 1.e-6 ; // dimensions in micros

DefineConstant[
  Lc = { 475, Label "length [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/0"), Highlight Str[colorpp], Closed close_menu},
  bc = { 275, Label "width [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/1"), Highlight Str[colorpp], Closed close_menu},
  d = { 4, Label "thickness [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/2"), Highlight Str[colorpp] },
  w = { 25, Label "side of square holes [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/2"), Highlight Str[colorpp] },
  pitch = { 2*w, Label "pitch of holes [micron]", ReadOnly 1,
    Path StrCat(pp,"1Upper electrode (with holes)/3"), Highlight Str[colorro] },
  Lb = { 205, Label "length of beams [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/4"), Highlight Str[colorpp] },
  bb = { 20, Label "width of beams [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/5"), Highlight Str[colorpp] },
  da = { 80, Label "distance between beams [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/6"), Highlight Str[colorpp] },
  Ls = { 625, Label "length of supporting beams [microns]",
    Path StrCat(pp,"1Upper electrode (with holes)/7"), Highlight Str[colorpp], Visible 0 },

  Lin = { 485, Label "length [micron]",
    Path StrCat(pp,"2Lower electrode/0"), Highlight Str[colorpp], Closed close_menu},
  bin = { 285, Label "width [micron]",
    Path StrCat(pp,"2Lower electrode/1"), Highlight Str[colorpp] },
  tin = { 0.5, Label "thickness [micron]",
    Path StrCat(pp,"2Lower electrode/2"), Highlight Str[colorpp] },
  t = { 150, Label "length of teeth [micron]",
    Path StrCat(pp,"2Lower electrode/3"), Highlight Str[colorpp] },
  win = { bin/3, Label "width of teeth [micron]", ReadOnly 1,
    Path StrCat(pp,"2Lower electrode/4"), Highlight Str[colorro] },
  td = { 0.2, Label "thickness of dielectric [micron]",
    Path StrCat(pp,"2Lower electrode/5"), Highlight Str[colorpp] },
  gap = { 3, Label "air gap between electrodes [micron]",
    Path StrCat(pp,"3"), Highlight Str[colorpp] },

  R1 = { 700, Label "Inner radius of shell [micron]",
    Path StrCat(pp,"4"), Highlight Str[colorpp] },
  R2 = {1000, Label  "Outer radius of shell [micron]",
    Path StrCat(pp,"5"), Highlight Str[colorpp] }
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
  Vmax = { 15, Min 0, Max 15, Label "Voltage [V] - upper electrode",
    Path StrCat(ppEM,"0"), Highlight Str[colorpp]},
  Vmin = { 0., Label "Voltage [V] - lower electrode",
    Path StrCat(ppEM,"1"), Highlight Str[colorpp]},
  epsr_diel = { 7, Label "Relative permittivity of dielectric layer",
    Path StrCat(ppEM,"2"), Highlight Str[colorpp]}
  E_val = { 70e9, Label "Young's modulus [Pa]",
    Path StrCat(ppMec,"0"), Highlight Str[colorpp]},
  nu_val = { 0.3, Label "Poisson's value",
    Path StrCat(ppMec,"1"), Highlight Str[colorpp]}
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

