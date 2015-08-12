mm = 1e-3;
LL = 1.0;
dx = LL*4;
dy = LL;
dz = LL;

DefineConstant[
  Flag_2D = {1, Choices {0,1}, Name "Input/ 2D?"}
  Flag_hole = {1, Name "Geo/Hole",Choices {0,1},Visible 1},
  ExtGmsh = ".pos",
  ExtGnuplot = ".dat",
  modelpath = CurrentDir, 
  ResDir = StrCat[ modelpath, "res/" ],
  Flag_meshRecombine = {0, Name "Geo/RecombineSurface", Choices {0,1},Visible 1},
  transfiniteMesh = {0, Name "Geo/transfinite Mesh",Choices {0,1},Visible (!Flag_hole)},
  nbElemPerLineX = {401, Name "Geo/Nx",Visible (transfiniteMesh==1)},
  nbElemPerLineY = {101,Name "Geo/Ny",Visible (transfiniteMesh==1)},//even number
  nbElemPerLineZ = {10,Name "Geo/Nz",Visible 1},
  md = { 1., Name "Geo/Mesh Characteristic Length Factor",Label "Mesh density"},
  Flag_degree2 = { 0., Name "Input/degree?",Visible 0}
];
lc = dx*0.05/md;

// Constructive parameters
DefineConstant[
  hole_length = {dx/2, 
    Name "Input/Constructive parameters/Hole Length", Visible (Flag_hole)},
  hole_width =  {dy/3, 
    Name "Input/Constructive parameters/Hole Width", Visible (Flag_hole)}
];

If (!Flag_2D) //3D
  DefineConstant[
    Lx ={dx, 
      Name "Input/Constructive parameters/X length [m]", Visible (!Flag_2D)},
    Ly = {dy, 
      Name "Input/Constructive parameters/Y length [m]", Visible (!Flag_2D)},
    Lz = {dz, 
      Name "Input/Constructive parameters/Z length [m]", Visible (!Flag_2D)}
  ];
EndIf

// Optimization problem specification
Include "opt_data.geo";

BLOC = 1000;
SURF_BAS = 1101;
SURF_HAUT = 1102;
SURF_GAUCHE = 1103;
SURF_DROITE = 1104;
LINE_BAS = 1105;
POINT_1 = 1201;
POINT_2 = 1202;
POINT_3 = 1203;
POINT_4 = 1204;
POINT_5 = 1205;


