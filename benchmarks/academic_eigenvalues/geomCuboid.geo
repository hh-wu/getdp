//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (cuboid)
//========================================================

DefineConstant[
  FLAG_MESH = {2, Highlight "Black",
    Name StrCat[OnelabParam1,"1Shape of cells"],
    Choices {1="Tetrahedra", 2="Hexahedra"} },
  res = { 0.1, Min 0.01, Max 1, Step 0.01, Visible (FLAG_MESH==1),
    Name StrCat[OnelabParam1,"2Characteristic length of cells (length of borders = 1)"]},
  resX = { 30, Min 1, Max 100, Step 1, Visible (FLAG_MESH==2),
    Name StrCat[OnelabParam1,"3Number of cells along x-borders"]},
  resY = { 30, Min 1, Max 100, Step 1, Visible (FLAG_MESH==2),
    Name StrCat[OnelabParam1,"4Number of cells along y-borders"]},
  resZ = { 30, Min 1, Max 100, Step 1, Visible (FLAG_MESH==2),
    Name StrCat[OnelabParam1,"5Number of cells along z-borders"]}
];

p1[] += newp ; Point(newp) = {-0.5,-0.5,-0.5} ;
p1[] += newp ; Point(newp) = { 0.5,-0.5,-0.5} ;
p1[] += newp ; Point(newp) = { 0.5, 0.5,-0.5} ;
p1[] += newp ; Point(newp) = {-0.5, 0.5,-0.5} ;
p2[] += newp ; Point(newp) = {-0.5,-0.5, 0.5} ;
p2[] += newp ; Point(newp) = { 0.5,-0.5, 0.5} ;
p2[] += newp ; Point(newp) = { 0.5, 0.5, 0.5} ;
p2[] += newp ; Point(newp) = {-0.5, 0.5, 0.5} ;

l1[] += newl ; Line(newl) = {p1[0], p1[1]} ;
l1[] += newl ; Line(newl) = {p1[1], p1[2]} ;
l1[] += newl ; Line(newl) = {p1[2], p1[3]} ;
l1[] += newl ; Line(newl) = {p1[3], p1[0]} ;
l2[] += newl ; Line(newl) = {p2[0], p2[1]} ;
l2[] += newl ; Line(newl) = {p2[1], p2[2]} ;
l2[] += newl ; Line(newl) = {p2[2], p2[3]} ;
l2[] += newl ; Line(newl) = {p2[3], p2[0]} ;
lL[] += newl ; Line(newl) = {p1[0], p2[0]} ;
lL[] += newl ; Line(newl) = {p1[1], p2[1]} ;
lL[] += newl ; Line(newl) = {p1[2], p2[2]} ;
lL[] += newl ; Line(newl) = {p1[3], p2[3]} ;

ll1 = newll ; Line Loop(newll) = {-l1[]} ;
s1 = news ; Plane Surface(news) = {ll1} ;
ll2 = newll ; Line Loop(newll) = {l2[]} ;
s2 = news ; Plane Surface(news) = {ll2} ;

llL[] += newll ; Line Loop(newll) = {l1[0], lL[1], -l2[0], -lL[0]} ;
llL[] += newll ; Line Loop(newll) = {l1[1], lL[2], -l2[1], -lL[1]} ;
llL[] += newll ; Line Loop(newll) = {l1[2], lL[3], -l2[2], -lL[2]} ;
llL[] += newll ; Line Loop(newll) = {l1[3], lL[0], -l2[3], -lL[3]} ;
sL[] += news ; Plane Surface(news) = {llL[0]} ;
sL[] += news ; Plane Surface(news) = {llL[1]} ;
sL[] += news ; Plane Surface(news) = {llL[2]} ;
sL[] += news ; Plane Surface(news) = {llL[3]} ;

sl = newsl ; Surface Loop(newsl) = {s1, s2, sL[]} ;
v = newv ; Volume(newv) = {sl} ;

Physical Surface(BND) = {s1, s2, sL[]} ;
Physical Volume(DOM) = {v} ;

If (FLAG_MESH==1)
  Mesh.CharacteristicLengthMax = res ;
EndIf

If (FLAG_MESH==2)
  Transfinite Line {l1[0], l1[2], l2[0], l2[2]} = resX+1 ;
  Transfinite Line {l1[1], l1[3], l2[1], l2[3]} = resY+1 ;
  Transfinite Line {lL[]} = resZ+1 ;
  Transfinite Surface {s1, s2, sL[]} ;
  Recombine Surface {s1, s2, sL[]} ;
  Transfinite Volume {v} ;
  Recombine Volume {v} ;
EndIf
