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
    Path StrCat(pp,"1Upper electrode (with holes)/0"), Highlight Str[colorpp],Closed close_menu},
  bc = { 275, Label "width [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/1"), Highlight Str[colorpp],Closed close_menu},
  d = { 4, Label "thickness [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/2"), Highlight Str[colorpp], Closed close_menu},
  w = { 25, Label "side of square holes [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/3"), Highlight Str[colorpp], Closed close_menu},
  Lb = { 205, Label "length of beams [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/4"), Highlight Str[colorpp]},
  bb = { 20, Label "width of beams [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/5"), Highlight Str[colorpp]},
  da = { 80, Label "distance between beams [micron]",
    Path StrCat(pp,"1Upper electrode (with holes)/6"), Highlight Str[colorpp],Closed close_menu},
  Ls = { 625, Label "length of supporting beams [microns]",
    Path StrCat(pp,"1Upper electrode (with holes)/7"), Highlight Str[colorpp], Visible 0 },

  Lin = { 485, Label "length [micron]",
    Path StrCat(pp,"2Lower electrode/0"), Highlight Str[colorpp],Closed close_menu},
  bin = { 285, Label "width [micron]",
    Path StrCat(pp,"2Lower electrode/1"), Highlight Str[colorpp],Closed close_menu},
  tin = { 0.5, Label "thickness [micron]",
    Path StrCat(pp,"2Lower electrode/2"), Highlight Str[colorpp], Closed close_menu},
  t = { 150, Label "length of teeth [micron]",
    Path StrCat(pp,"2Lower electrode/3"), Highlight Str[colorpp], Closed close_menu},
  win = { bin/3, Label "width of teeth [micron]", ReadOnly 1,
    Path StrCat(pp,"2Lower electrode/4"), Highlight Str[colorro], Closed close_menu},
  td = { 0.2, Label "thickness of dielectric [micron]",
    Path StrCat(pp,"2Lower electrode/5"), Highlight Str[colorpp], Closed close_menu},
  gap = { 3, Label "air gap between electrodes [micron]",
    Path StrCat(pp,"3"), Highlight Str[colorpp], Closed close_menu},

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
SUR_PLATEINT = 1111 ;
SUR_PLATEINT_DWN = 1112 ;
SUR_PLATEINT_UP = 1113 ;
PLATEINT = 1100;
BEAMS = 1110 ;

PLATEIN = 2200 ;
SUR_PLATEIN = 2222;

DIEL = 2000 ;
SUR_DIEL = 2001 ;

AIRLAYER = 15000 ;
AIR = 10000 ;
SHELL = 30000 ;

SUR_INF = 5555;

// For mechanical constraints...
SUR_BEAM1i = 101 ;
SUR_BEAM2i = 102 ;
SUR_BEAM3i = 103 ;
SUR_BEAM4i = 104 ;

PTO_BEAM1i1 = 111 ;
PTO_BEAM1i2 = 112 ;
PTO_BEAM1i3 = 113 ;
PTO_BEAM1i4 = 114 ;

PTO_BEAM2i1 = 121 ;
PTO_BEAM2i2 = 122 ;
PTO_BEAM2i3 = 123 ;
PTO_BEAM2i4 = 124 ;

PTO_BEAM3i1 = 131 ;
PTO_BEAM3i2 = 132 ;
PTO_BEAM3i3 = 133 ;
PTO_BEAM3i4 = 134 ;

PTO_BEAM4i1 = 141 ;
PTO_BEAM4i2 = 142 ;
PTO_BEAM4i3 = 143 ;
PTO_BEAM4i4 = 144 ;

SUR_BEAM1d = 201 ;
SUR_BEAM2d = 202 ;
SUR_BEAM3d = 203 ;
SUR_BEAM4d = 204 ;

PTO_BEAM1d1 = 211 ;
PTO_BEAM1d2 = 212 ;
PTO_BEAM1d3 = 213 ;
PTO_BEAM1d4 = 214 ;

PTO_BEAM2d1 = 221 ;
PTO_BEAM2d2 = 222 ;
PTO_BEAM2d3 = 223 ;
PTO_BEAM2d4 = 224 ;

PTO_BEAM3d1 = 231 ;
PTO_BEAM3d2 = 232 ;
PTO_BEAM3d3 = 233 ;
PTO_BEAM3d4 = 234 ;

PTO_BEAM4d1 = 241 ;
PTO_BEAM4d2 = 242 ;
PTO_BEAM4d3 = 243 ;
PTO_BEAM4d4 = 244 ;


// Surfaces for mechanical boundary conditions
SUR_BCy_1 = 511 ;
SUR_BCy_2 = 512 ;
SUR_BCy_3 = 513 ;
SUR_BCy_4 = 514 ;

SUR_BCx_1 = 611 ;
SUR_BCx_2 = 612 ;
SUR_BCx_3 = 613 ;
SUR_BCx_4 = 614 ;
SUR_BCx_5 = 615 ;

SUR_BCxyz = 711 ;
