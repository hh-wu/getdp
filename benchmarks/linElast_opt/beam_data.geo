mm = 1e-3;

pInOpt = "Input/OptParam/";
ResDir = "res/";
ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";

dx = /*0.65*/1;//50*mm;
dy = 0.25;//25*mm;

DefineConstant[
  Flag_hole = {1, Name "Geo/Hole",Choices {0,1},Visible 1},

  hole_length = {dx/2, Name StrCat[pInOpt,"x_0"],
                 Label "Hole Length",Visible (Flag_hole)},

  hole_width = {dy/3, Name "Geo/Hole Width",Visible (Flag_hole)},

  transfiniteMesh = {0, Name "Geo/transfinite Mesh",
                        Choices {0,1},Visible (Flag_hole)},

  nbElemPerLineHor = {40, Name "Geo/Nbr of Nodes per Line (MB-stator)",
                        Visible (transfiniteMesh==1)},

  nbElemPerLineVert2 = {10, Name "Geo/Nbr of Nodes per Line Transvers (MB)",
                      Visible (transfiniteMesh==1)},

  Flag_topopt = {1, Name "Input/OptParam/optType",Label "Optimization Type",
                    Choices {0="ShapeOpt",1="TopOpt"}, Visible 1},

  Flag_meshRecombine={0, Name "Geo/RecombineSurface",Label "Mesh recombine surface", 
                       Choices {0,1},Visible 1},

  md = { 1., Name "Geo/Mesh Characteristic Length Factor",Label "Mesh density"},

  Flag_degree = { 1., Name "Input/OptParam/degree"}
];

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
If(Flag_hole)
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

//--------------------------
// optimization data
//--------------------------
// define performance function type
// FIXME
NO_PERF = 0;
COMPLIANCE = 4;
VOLUME = 5;
// top opt fields
DES_VAR_FIELD = 21;
SENS_FIELD = 22;



