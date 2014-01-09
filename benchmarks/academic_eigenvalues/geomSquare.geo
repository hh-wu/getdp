//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (square)
//========================================================

Mesh.CharacteristicLengthMax = 0.01 ;

p[] += newp ; Point(newp) = {0, 0, 0} ;
p[] += newp ; Point(newp) = {1, 0, 0} ;
p[] += newp ; Point(newp) = {1, 1, 0} ;
p[] += newp ; Point(newp) = {0, 1, 0} ;

l[] += newl ; Line(newl) = {p[0], p[1]} ;
l[] += newl ; Line(newl) = {p[1], p[2]} ;
l[] += newl ; Line(newl) = {p[2], p[3]} ;
l[] += newl ; Line(newl) = {p[3], p[0]} ;

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

Physical Line(BND) = {l[]} ;
Physical Surface(DOM) = {s} ;
