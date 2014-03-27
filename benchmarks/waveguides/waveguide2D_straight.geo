//========================================================
// Benchmark "EM waveguide 2D - Straight"
// File: GMSH geometry
// Contributor: A. Modave
//========================================================

Include "waveguide2D_straight.dat" ;

p[] += newp ; Point(newp) = { 0, 0, 0, res} ;
p[] += newp ; Point(newp) = { L, 0, 0, res} ;
p[] += newp ; Point(newp) = { L, W, 0, res} ;
p[] += newp ; Point(newp) = { 0, W, 0, res} ;

l[] += newl ; Line(newl) = {p[0], p[1]} ;
l[] += newl ; Line(newl) = {p[1], p[2]} ;
l[] += newl ; Line(newl) = {p[2], p[3]} ;
l[] += newl ; Line(newl) = {p[3], p[0]} ;

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

Physical Line(BND_PEC) = {l[0], l[2]} ;
Physical Line(BND_PORT_1) = {l[3]} ;
Physical Line(BND_PORT_2) = {l[1]} ;
Physical Surface(DOM) = {s} ;
