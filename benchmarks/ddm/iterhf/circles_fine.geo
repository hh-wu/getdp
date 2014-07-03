Include "circles_param.pro";
phi0 = 0 ;

lc1=lc0; // overwrite value of lc1

Point(1) = {0,0,0,lc1};
cphi0 = Cos(phi0);
sphi0 = Sin(phi0);

Point(2) = { R0*cphi0,  R0*sphi0,0,lc0};
Point(3) = {-R0*sphi0,  R0*cphi0,0,lc0};
Point(4) = {-R0*cphi0, -R0*sphi0,0,lc0};
Point(5) = { R0*sphi0, -R0*cphi0,0,lc0};

Circle(1) = {2,1,3};
Circle(2) = {3,1,4};
Circle(3) = {4,1,5};
Circle(4) = {5,1,2};
Line Loop(newll) = {1,2,3,4};
cir0 = news; Plane Surface (news) = {newll-1};

If(Flag_Quinconce)
 disty *= Sqrt(2)/2;
EndIf

xcen = (Nh-1)*(2*R0+distx)/2 ;
ycen = (Nv-1)*(2*R0+disty)/2 ;

surf[0] = cir0 ; Flag_00 = 0;
Scc[] = {} ; llScc[]={}; ppEpsilon[] = {};
For t1 In {1:Nh}
  For t2 In {1:Nv}
  //If(t1==t2 ||t1<t2 )
    xaux = (t1-1)*(2*R0+distx)-xcen ;
    yaux = (t2-1)*(2*R0+disty)-ycen ;
    If (Flag_Quinconce && (t2 % 2))
      xaux += R0+distx/2;
    EndIf
    If(!(Flag_Quinconce && t2 % 2 && t1 == Nh))
      If (xaux != 0 || yaux != 0)
        surf[]=Translate {xaux, yaux, 0} {Duplicata{ Surface{cir0}; }};
      EndIf
      If (xaux == 0 && yaux == 0)
        Flag_00 = 1;
        surf[0] = cir0 ;
      EndIf
      Scc[]+=surf[0] ;
      ll[] = Boundary{ Surface{surf[0]}; };
      pp[] = Boundary{ Line{ll[0]}; };
      ppEpsilon[] += pp[0];
      Line Loop(newll) = ll[];
      llScc[] += newll-1 ;
    EndIf
  //EndIf
EndFor
EndFor

If(!Flag_00)
  Delete{Surface{cir0};Line{1,2,3,4};Point{2,3,4,5};}
EndIf

p1 = newp; Point(newp) = {Ro,0,0,lc1};
p2 = newp; Point(newp) = {0,Ro,0,lc1};
p3 = newp; Point(newp) = {-Ro,0,0,lc1};
p4 = newp; Point(newp) = {0,-Ro,0,lc1};

co1 = newl ; Circle(newl) = {p1,1,p2};
co2 = newl ; Circle(newl) = {p2,1,p3};
co3 = newl ; Circle(newl) = {p3,1,p4};
co4 = newl ; Circle(newl) = {p4,1,p1};
Line Loop(newll) = {co1:co4};
surfOmega = news ; Plane Surface (news) = {newll-1, llScc[]};

Physical Surface(1) = {surfOmega}; // Omega
Physical Line(2) = {co1:co4};//Sigma

For t In {0:#Scc[]-1}
  gama[] = Boundary{ Surface{Scc[t]}; };

  Physical Line(100+t) = gama[] ; // Gamas
  Physical Surface(200+t) = {Scc[t]}; // Inside Gamas
  Physical Point(300+t)= {ppEpsilon[t]}; // boundary point

//Physical Line(400+t) = gama[{0}] ; // split Gama
//Physical Line(500+t) = gama[{1:3}] ;
EndFor

For t In {0:#Scc[]-1}
  gamaTot[] += Boundary{ Surface{Scc[t]}; };
EndFor

Field[1] = Attractor;
Field[1].NNodesByEdge = 100;
Field[1].EdgesList = {gamaTot[]};

Field[2] = MathEval;
Field[2].F = Sprintf("F1^1 + %g", lc0);

Field[3] = MathEval;
Field[3].F = Sprintf("%g", lc1);

Field[4] = Min;
Field[4].FieldsList = {2,3};

If(Flag_Field)
  Background Field = 4;
  Mesh.CharacteristicLengthFromPoints = 1 ;
  Mesh.CharacteristicLengthExtendFromBoundary = 0 ;
EndIf

Mesh 2;

Delete Physicals;

Physical Surface(1) = {surfOmega}; // Omega

Mesh.Binary=1;
// Mesh 2;
Save "circles_fine.msh";

Physical Line(2) = {co1:co4};//Sigma

For t In {0:#Scc[]-1}
  gama[] = Boundary{ Surface{Scc[t]}; };

  Physical Line(100+t) = gama[] ; // Gamas
  // Physical Point(300+t)= {ppEpsilon[t]}; // boundary point
EndFor
Save "circles_fine_for_Full.msh";
