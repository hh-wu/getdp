//========================================================
// Benchmark "EM waveguide 2D - Straight with a rectangular dielectric"
// File: GMSH geometry
// Contributor: A. Modave
//========================================================

Include "waveguide2D_straightWithDielectric.dat" ;

p[] += newp ; Point(newp) = { 0, 0, 0, res} ;
p[] += newp ; Point(newp) = { L/2-Lx/2, 0, 0, res} ;
p[] += newp ; Point(newp) = { L/2-Lx/2, Ly, 0, res} ;
p[] += newp ; Point(newp) = { L/2+Lx/2, Ly, 0, res} ;
p[] += newp ; Point(newp) = { L/2+Lx/2, 0, 0, res} ;
p[] += newp ; Point(newp) = { L, 0, 0, res} ;
p[] += newp ; Point(newp) = { L, W, 0, res} ;
p[] += newp ; Point(newp) = { 0, W, 0, res} ;

l[] += newl ; Line(newl) = {p[0], p[1]} ;
l[] += newl ; Line(newl) = {p[1], p[2]} ;
l[] += newl ; Line(newl) = {p[2], p[3]} ;
l[] += newl ; Line(newl) = {p[3], p[4]} ;
l[] += newl ; Line(newl) = {p[4], p[5]} ;
l[] += newl ; Line(newl) = {p[5], p[6]} ;
l[] += newl ; Line(newl) = {p[6], p[7]} ;
l[] += newl ; Line(newl) = {p[7], p[0]} ;

lDiel = newl ; Line(newl) = {p[1], p[4]} ;

llAir = newll ; Line Loop(newll) = {l[]} ;
sAir = news ; Plane Surface(news) = {llAir} ;

llDiel = newll ; Line Loop(newll) = {lDiel,-l[3],-l[2],-l[1]} ;
sDiel = news ; Plane Surface(news) = {llDiel} ;

Physical Line(BND_PEC) = {l[0], l[4], l[6]} ;
Physical Line(BND_PORT_1) = {l[7]} ;
Physical Line(BND_PORT_2) = {l[5]} ;
Physical Surface(DOM_AIR) = {sAir} ;
Physical Surface(DOM_DIEL) = {sDiel} ;
