// general setting parameters
DefineConstant[
  Flag_hole = {0, Name StrCat(ppC,"Hole"),Choices {0="no hole",1="ellipse",2="spline"}},
  Flag_sym = {0, Name StrCat(ppC,"Symetry"),Choices {0,1}},
  NSpline = {6, Name StrCat(ppC,"nb points"), Visible (Flag_hole==2) },
  Flag_extrude = {0, Choices {0,1}, Name StrCat(ppC,"extrude?")},
  transfinite={1, Name StrCat(ppC,"transfinite?"),Choices {0,1},Visible (!Flag_hole)},
  nbE_X = {36/**4*/, Name StrCat(ppC,"Nx"),Visible (transfinite)},
  nbE_Y = {20/**4*/,Name StrCat(ppC,"Ny"),Visible (transfinite)},//even number
  nbE_Z = {40,Name StrCat(ppC,"Nz"),Visible (transfinite)}
  progl_1 = {1., Name StrCat(ppC,"progression l1"),Visible (transfinite)},
  progl_2 = {1., Name StrCat(ppC,"progression l2"),Visible (transfinite)},
  progl_3 = {1., Name StrCat(ppC,"progression l3"),Visible (transfinite)},
  progl_4 = {1., Name StrCat(ppC,"progression l4"),Visible (transfinite)}
];

// Constructive parameters
LL = 1.0;
DefineConstant[
  hole_length = {.2/*LL/2*/, 
    Name StrCat(pp,"Hole Length"), Visible (Flag_hole==1), Closed 1},
  hole_width =  {.2/*LL/2*/, 
    Name StrCat(pp,"Hole Width"), Visible (Flag_hole==1), Closed 1}
];

For i In {0:(NSpline-1)}
  DefineConstant[
    RSpline~{i} = {LL/2, 
      Name Sprintf(StrCat(pp,"R%g"),i), Visible (Flag_hole==2), Closed 1}  ];
EndFor

DefineConstant[
  Lx ={LL*3,Name StrCat(pp,"X length [m]"), Visible 1, Closed 1},
  Ly ={LL*1,Name StrCat(pp,"Y length [m]"), Visible 1, Closed 1}
];
If (Flag_extrude) //3D
  DefineConstant[
    Lz = {LL/4,Name StrCat(pp,"Z length [m]"), Visible (Flag_extrude), Closed 1}
  ];
Else 
  Lz = 0;
EndIf

lc = Lx*0.05/md;
//lc = 0.2;

// Physical region TAG
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
LINE_NON_PERTURBED = 100000;

