//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (disk)
//========================================================

DefineConstant[
  res = { 0.05, Min 0.001, Max 1, Step 0.001,
    Name StrCat[OnelabParam1,"2Characteristic length of cells (radius of domain = 1)"]}
];

Mesh.CharacteristicLengthMax = res ;

p[] += newp ; Point(newp) = { 0  , 0  , 0} ;
p[] += newp ; Point(newp) = { 0.5, 0  , 0} ;
p[] += newp ; Point(newp) = { 0  , 0.5, 0} ;
p[] += newp ; Point(newp) = {-0.5, 0  , 0} ;
p[] += newp ; Point(newp) = { 0  ,-0.5, 0} ;

l[] += newl ; Circle(newl) = {p[1], p[0], p[2]} ;
l[] += newl ; Circle(newl) = {p[2], p[0], p[3]} ;
l[] += newl ; Circle(newl) = {p[3], p[0], p[4]} ;
l[] += newl ; Circle(newl) = {p[4], p[0], p[1]} ;

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

Physical Line(BND) = {l[]} ;
Physical Surface(DOM) = {s} ;
