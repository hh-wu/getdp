mm = 1e-3;

dx = /*0.65*/1;//50*mm;
dy = 0.25;//25*mm;

DefineConstant[
  ExtGmsh = ".pos",
  ExtGnuplot = ".dat",
  modelpath = CurrentDir, 
  ResDir = StrCat[ modelpath, "res/" ],
  Flag_squhole = {1, Name "Geo/Hole",Choices {0,1},Visible 1},
  transfiniteMesh = {0, Name "Geo/transfinite Mesh",Choices {0,1},Visible (Flag_squhole)},
  nbElemPerLineHor = {40, Name "Geo/Nb of Nodes/Line",Visible (transfiniteMesh==1)},
  nbElemPerLineVert2 = {10,Name "Geo/Nb of Nod/Line Trans",Visible (transfiniteMesh==1)},
  Flag_meshRecombine = {1, Name "Geo/RecombineSurface", Choices {0,1},Visible 1},
  md = { 2., Name "Geo/Mesh Characteristic Length Factor",Label "Mesh density"},
  Flag_degree = { 1., Name "Input/OptParam/degree"}
];

// Optimization problem specification
Include "opt_data.geo";

lc = 15*mm/md;
nbElemPerLineVert = 2*nbElemPerLineVert2-1;//nely

BLOC = 1000;
SURF_BAS = 1101;
SURF_HAUT = 1102;
SURF_GAUCHE = 1103;
SURF_DROITE = 1104;
POINT_1 = 1201;
POINT_2 = 1202;
POINT_3 = 1203;
POINT_4 = 1204;
POINT_5 = 1205;
If(Flag_squhole)
  BLOC_HOLE = 2000;
  SURF_BAS_HOLE = 2101;
  SURF_HAUT_HOLE = 2102;
  SURF_GAUCHE_HOLE = 2103;
  SURF_DROITE_HOLE = 2104;
  POINT_1_HOLE = 2201;
  POINT_2_HOLE = 2202;
  POINT_3_HOLE = 2203;
  POINT_4_HOLE = 2204;
EndIf


