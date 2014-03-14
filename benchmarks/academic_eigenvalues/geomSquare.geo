//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (square)
//========================================================

DefineConstant[
  FLAG_MESH = {2, Highlight "Black",
    Name StrCat[OnelabParamMesh,"1Shape of cells"],
    Choices {1="Triangles", 2="Rectangles"} },
  res = { 0.05, Min 0.001, Max 1, Step 0.001, Visible (FLAG_MESH==1),
    Name StrCat[OnelabParamMesh,"2Characteristic length of cells (length of borders = 1)"]},
  resRect = { 200, Min 1, Max 1000, Step 1, Visible (FLAG_MESH==2),
    Name StrCat[OnelabParamMesh,"3Number of cells along each border"]}
];

p[] += newp ; Point(newp) = {-0.5, -0.5, 0} ;
p[] += newp ; Point(newp) = { 0.5, -0.5, 0} ;
p[] += newp ; Point(newp) = { 0.5,  0.5, 0} ;
p[] += newp ; Point(newp) = {-0.5,  0.5, 0} ;

l[] += newl ; Line(newl) = {p[0], p[1]} ;
l[] += newl ; Line(newl) = {p[1], p[2]} ;
l[] += newl ; Line(newl) = {p[2], p[3]} ;
l[] += newl ; Line(newl) = {p[3], p[0]} ;

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

Physical Line(BND) = {l[]} ;
Physical Surface(DOM) = {s} ;

If (FLAG_MESH==1)
  Mesh.CharacteristicLengthMax = res ;
EndIf

If (FLAG_MESH==2)
  Transfinite Line {l[0], l[2]} = resRect+1 ;
  Transfinite Line {l[1], l[3]} = resRect+1 ;
  Transfinite Surface {s} ;
  Recombine Surface {s} ;
EndIf
