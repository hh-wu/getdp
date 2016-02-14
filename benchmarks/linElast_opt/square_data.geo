// general setting parameters
nn = 1;
DefineConstant[
  Flag_hole = {0, Name StrCat(ppC,"Hole"),Choices {0="no hole",1="ellipse",2="spline"}},
  Flag_sym = {0, Name StrCat(ppC,"Symetry"),Choices {0,1,2}},
  NSpline = {6, Name StrCat(ppC,"nb points"), Visible (Flag_hole==2) },
  Flag_extrude = {1, Choices {0,1}, Name StrCat(ppC,"extrude?")},
  transfinite={0, Name StrCat(ppC,"transfinite?"),Choices {0,1},Visible (!Flag_hole)},
  nbE_X = {25*nn/**4*/, Name StrCat(ppC,"Nx"),Visible (transfinite)},
  nbE_Y = {50*nn/**4*/,Name StrCat(ppC,"Ny"),Visible (transfinite)},//even number
  nbE_Z = {40,Name StrCat(ppC,"Nz"),Visible (transfinite)}
  progl_1 = {1., Name StrCat(ppC,"progression l1"),Visible (transfinite)},
  progl_2 = {1., Name StrCat(ppC,"progression l2"),Visible (transfinite)},
  progl_3 = {1., Name StrCat(ppC,"progression l3"),Visible (transfinite)},
  progl_4 = {1., Name StrCat(ppC,"progression l4"),Visible (transfinite)},
  Flag_addpad = {1, Choices {0,1}, Name StrCat(ppC,"add pad")},
  nbE_X_pad = {75*nn, Name StrCat(ppC,"Nx pad"),Visible (Flag_addpad)},
  nbE_Y_pad = {50*nn,Name StrCat(ppC,"Ny pad"),Visible (Flag_addpad)},//even number
  nbE_Z_pad = {40,Name StrCat(ppC,"Nz pad"),Visible (Flag_addpad)}
];

// Constructive parameters
LL = 1.0;
DefineConstant[
  hole_length = {.4/*LL/2*/, 
    Name StrCat(pp,"Hole Length"), Visible (Flag_hole==1), Closed 1},
  hole_width =  {.4/*LL/2*/, 
    Name StrCat(pp,"Hole Width"), Visible (Flag_hole==1), Closed 1}
];

For i In {0:(NSpline-1)}
  DefineConstant[
    RSpline~{i} = {LL/2, 
      Name Sprintf(StrCat(pp,"R%g"),i), Visible (Flag_hole==2), Closed 1}  ];
EndFor

DefineConstant[
  Lx ={LL*1.5,Name StrCat(pp,"X length [m]"), Visible 1, Closed 1},
  Ly ={LL*1.5,Name StrCat(pp,"Y length [m]"), Visible 1, Closed 1},
  Lxpad = {0.6,Name StrCat(pp,"X length pad [m]"), Visible (Flag_addpad), Closed 1},
  Lypad = {0.4,Name StrCat(pp,"Y length pad [m]"), Visible (Flag_addpad), Closed 1}
];
If (Flag_extrude) //3D
  DefineConstant[
    Lz = {LL/4,Name StrCat(pp,"Z length [m]"), Visible (Flag_extrude), Closed 1}
  ];
Else 
  Lz = 0;
EndIf

lc = Lx*0.05/md;

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
POINT_12 = 1206;
POINT_CENTER = 1207;
HOLE = 9000;
LINE_NON_PERTURBED = 100000;

