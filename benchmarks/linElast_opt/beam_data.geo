mm = 1e-3;
LL = 1.0;//1.5*2;
//dx = LL;
//dy = LL;
//dz = LL;

DefineConstant[
  Flag_2D = {1, Choices {0,1}, Name "Input/ 2D?"}
  Flag_hole = {1, Name "Geo/Hole",Choices {0="no hole",1="ellipic",2="spline"},Visible 1},
  NSpline = {6, Name "Geo/nb points", Visible (Flag_hole==2) },
  ExtGmsh = ".pos",
  ExtGnuplot = ".dat",
  ExtAnalyticSens = ".analyticSens",
  ExtOnelabScal = ".onelabScal",
  ExtOnelabVec = ".onelabVec",
  modelpath = CurrentDir, 
  ResDir = StrCat[ modelpath, "res/" ],
  Flag_meshRecombine = {0, Name "Geo/Recombine", Choices {0,1},Visible 1},
  transfiniteMesh = {0, Name "Geo/transfinite",Choices {0,1},Visible (!Flag_hole)},
  nbElemPerLineX = {81, Name "Geo/Nx",Visible (transfiniteMesh==1)},
  nbElemPerLineY = {41,Name "Geo/Ny",Visible (transfiniteMesh==1)},//even number
  nbElemPerLineZ = {20,Name "Geo/Nz",Visible 1},
  md = { 1., Name "Geo/Mesh density"},
  Flag_degree2 = { 0., Name "Input/degree?",Visible 0}
];

// Constructive parameters
DefineConstant[
  dx = {LL*2, 
    Name "Input/Constructive parameters/ Lx"},
  dy = {LL, 
    Name "Input/Constructive parameters/ Ly"},
  dz = {LL, 
    Name "Input/Constructive parameters/ Lz"},
  hole_length = {0.2*2, 
    Name "Input/Constructive parameters/Hole Length", Visible (Flag_hole==1)},
  hole_width =  {0.2*2, 
    Name "Input/Constructive parameters/Hole Width", Visible (Flag_hole==1)}
];

For i In {0:(NSpline-1)}
  DefineConstant[
    RSpline~{i} = {0.4, 
      Name Sprintf("Input/Constructive parameters/ R%g",i), Visible (Flag_hole==2)}
  ];
  //Printf("RSpline~{%g}:%g",i,RSpline~{i});
EndFor

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

lc = dx*0.05/md;

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
HOLE = 9000;


