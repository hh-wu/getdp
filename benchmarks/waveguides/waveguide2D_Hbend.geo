//========================================================
// Benchmark "EM waveguide 2D - H-bend"
// File: GMSH geometry
// Contributors:
//   L. Rindorf (original version, 2008)
//   A. Modave (modifications)
//========================================================

Include "waveguide2D_Hbend.dat" ;

p[] += newp ; Point(newp) = {0, R, 0, res} ;
p[] += newp ; Point(newp) = {-L,-W/2, 0, res} ;
p[] += newp ; Point(newp) = { 0,-W/2, 0, res} ;
p[] += newp ; Point(newp) = { 0, W/2, 0, res} ;
p[] += newp ; Point(newp) = {-L, W/2, 0, res} ;
p[] += newp ; Point(newp) = { W/2+R,   R, 0, res} ;
p[] += newp ; Point(newp) = { W/2+R, L+R, 0, res} ;
p[] += newp ; Point(newp) = {-W/2+R, L+R, 0, res} ;
p[] += newp ; Point(newp) = {-W/2+R,   R, 0, res} ;

l[] += newl ; Line(newl) = {p[1],p[2]} ;
l[] += newl ; Circle(newl) = {p[2],p[0],p[5]} ;
l[] += newl ; Line(newl) = {p[5],p[6]} ;
l[] += newl ; Line(newl) = {p[6],p[7]} ;
l[] += newl ; Line(newl) = {p[7],p[8]} ;
l[] += newl ; Circle(newl) = {p[8],p[0],p[3]} ;
l[] += newl ; Line(newl) = {p[3],p[4]} ;
l[] += newl ; Line(newl) = {p[4],p[1]} ;

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

Physical Surface(DOM) = {s} ;
Physical Line(BND_PEC) = {l[0],l[1],l[2],l[4],l[5],l[6]} ;
Physical Line(BND_PORT_1) = {l[7]} ;
Physical Line(BND_PORT_2) = {l[3]} ;
