//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (line)
//========================================================

Mesh.CharacteristicLengthMax = 0.01 ;

p[] += newp ; Point(newp) = {0, 0, 0} ;
p[] += newp ; Point(newp) = {1, 0, 0} ;
l = newl ; Line(newl) = {p[0],p[1]} ;

Physical Point(BND) = {p[]} ;
Physical Line(DOM) = {l} ;
