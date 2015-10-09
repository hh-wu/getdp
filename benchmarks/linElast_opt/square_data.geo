// general setting parameters
DefineConstant[
  Flag_hole = {1, Name StrCat(ppC,"Hole"),Choices {0="no hole",1="ellipse",2="spline"}},
  NSpline = {6, Name StrCat(ppC,"nb points"), Visible (Flag_hole==2) },
  Flag_extrude = {0, Choices {0,1}, Name StrCat(ppC,"extrude?")},
  transfinite={0, Name StrCat(ppC,"transfinite?"),Choices {0,1},Visible (!Flag_hole)},
  nbE_X = {20*4+1, Name StrCat(ppC,"Nx"),Visible (transfinite)},
  nbE_Y = {21,Name StrCat(ppC,"Ny"),Visible (transfinite)},//even number
  nbE_Z = {40,Name StrCat(ppC,"Nz"),Visible (transfinite)}
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
      Name Sprintf(StrCat(pp,"R%g"),i), Visible (Flag_hole==2), Closed 1}
  ];
EndFor

DefineConstant[
  Lx ={LL*4, 
    Name StrCat(pp,"X length [m]"), Visible 1, Closed 1},
  Ly ={LL, 
    Name StrCat(pp,"Y length [m]"), Visible 1, Closed 1}
];
If (Flag_extrude) //3D
  DefineConstant[
    Lz = {LL/4, 
      Name StrCat(pp,"Z length [m]"), Visible (Flag_extrude), Closed 1}
  ];
EndIf
If (!Flag_extrude) //2D
  Lz = 0;
EndIf

lc = Lx*0.05/md;

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

