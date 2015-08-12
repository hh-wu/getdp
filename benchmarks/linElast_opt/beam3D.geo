// include parameters common to geometry and solver
Include "beam_data.geo";

p1 = newp; Point(p1) = {-Lx/2,-Ly/2,-Lz/2, lc};
p2 = newp; Point(p2) = { Lx/2,-Ly/2,-Lz/2, lc};
p3 = newp; Point(p3) = { Lx/2, Ly/2,-Lz/2, lc};
p4 = newp; Point(p4) = {-Lx/2, Ly/2,-Lz/2, lc};
If(Flag_hole)
  p5 = newp;Point(p5) = {0, 0, -Lz/2, lc}; //center
  p6 = newp;Point(p6) = {hole_length/2, 0, -Lz/2, lc};  //right
  p7 = newp;Point(p7) = {0, hole_width/2, -Lz/2, lc};   //up
  p8 = newp;Point(p8) = {-hole_length/2, 0, -Lz/2, lc};  //left
  p9 = newp;Point(p9) = {0, -hole_width/2, -Lz/2, lc};  //down
EndIf
l1 = newl; Line(l1) = {p1,p2}; l2 = newl; Line(l2) = {p2,p3};
l3 = newl; Line(l3) = {p3,p4}; l4 = newl; Line(l4) = {p4,p1};
If(transfiniteMesh)
  Transfinite Line{l1} = nbElemPerLineX;//Using Progression 1.3;
  Transfinite Line{l3} = nbElemPerLineX; //Using Progression 1.2;
  Transfinite Line{l2} = nbElemPerLineY;
  Transfinite Line{l4} = nbElemPerLineY;
EndIf
If(Flag_hole)
  l6 = newll;Ellipse(l6) = {p6, p5, p6, p7};
  l7 = newll;Ellipse(l7) = {p7, p5, p7, p8};
  l8 = newll;Ellipse(l8) = {p8, p5, p8, p9};
  l9 = newll;Ellipse(l9) = {p9, p5, p9, p6}; 
EndIf
ll1 = newll; Line Loop(ll1) = {l1,l2,l3,l4};
If(!Flag_hole)
  s1 = news; Plane Surface(s1) = {ll1};
EndIf
If(Flag_hole)
  ll2 = newll;Line Loop(ll2) = {l6,l7,l8,l9};
  s1 = news;Plane Surface(s1) = {ll1,-ll2};//list of line loops
EndIf
If(!transfiniteMesh)
  e1[] = Extrude {0, 0, Lz} { Surface{s1}; };
EndIf
If(transfiniteMesh)
  Transfinite Surface {s1} = {l1, l2, l3, l4};
  Recombine Surface "*";
  e1[] = Extrude {0, 0, Lz} { Surface{s1}; Layers {nbElemPerLineZ}; Recombine;};
EndIf
//Coherence Mesh;
//Printf("e1:",e1[]);
pl[] = Line "*";
//Printf("pl:",pl[]);
Magnet[] = {e1[1]};

Physical Volume(BLOC) = Magnet[]; // magnet volume
Physical Surface(SURF_GAUCHE) = e1[5];
Physical Surface(SURF_HAUT) = e1[4]; 
Physical Surface(SURF_DROITE) = e1[3]; 
Physical Surface(SURF_BAS) = e1[2];
Physical Line(LINE_BAS) = {pl[9]};
Physical Point(POINT_1) = p1;
Physical Point(POINT_2) = p2;
Physical Point(POINT_3) = p3;
Physical Point(POINT_4) = p4;



