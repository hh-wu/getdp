//========================================================
// Benchmark "EM waveguide 3D - Rectangular"
// File: GMSH geometry
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide3D_rectangle.dat" ;
Mesh.Optimize = 1;

p1[] += newp ; Point(newp) = {  0,  0, 0, res} ;
p1[] += newp ; Point(newp) = { Wx,  0, 0, res} ;
p1[] += newp ; Point(newp) = { Wx, Wy, 0, res} ;
p1[] += newp ; Point(newp) = {  0, Wy, 0, res} ;
p2[] += newp ; Point(newp) = {  0,  0, L, res} ;
p2[] += newp ; Point(newp) = { Wx,  0, L, res} ;
p2[] += newp ; Point(newp) = { Wx, Wy, L, res} ;
p2[] += newp ; Point(newp) = {  0, Wy, L, res} ;

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

Physical Surface(BND_PEC) = {sL[]} ;
Physical Surface(BND_PORT_1) = {s1} ;
Physical Surface(BND_PORT_2) = {s2} ;
Physical Volume(DOM) = {v} ;
