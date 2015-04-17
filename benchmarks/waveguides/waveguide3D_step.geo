//========================================================
// Benchmark "EM waveguide 3D - Rectangular Step"
// File: GMSH geometry
// Contributors: B. Klein
// Based on the example, waveguide3D_rectangle by: C. Geuzaine, A. Modave
//========================================================

Include "waveguide3D_step.dat" ;
Mesh.Optimize = 1;

p1[] += newp ; Point(newp) = {W0x+0,W0y, 0, res} ;
p1[] += newp ; Point(newp) = {W0x+Wxs,W0y, 0, res} ;
p1[] += newp ; Point(newp) = {W0x+Wxs,W0y+Wys, 0, res} ;
p1[] += newp ; Point(newp) = {W0x+0,W0y+Wys, 0, res} ;
p2[] += newp ; Point(newp) = {W0x+0,W0y, Ls, res} ;
p2[] += newp ; Point(newp) = {W0x+Wxs,W0y, Ls, res} ;
p2[] += newp ; Point(newp) = {W0x+Wxs,W0y+Wys, Ls, res} ;
p2[] += newp ; Point(newp) = {W0x+0,W0y+Wys, Ls, res} ;
p2b[] += newp ; Point(newp) = {0,0, Ls, res} ;
p2b[] += newp ; Point(newp) = {Wxb,0, Ls, res} ;
p2b[] += newp ; Point(newp) = {Wxb,Wyb, Ls, res} ;
p2b[] += newp ; Point(newp) = {0,Wyb, Ls, res} ;
p3[] += newp ; Point(newp) = {0,0, Ls+Lb, res} ;
p3[] += newp ; Point(newp) = {Wxb,0, Ls+Lb, res} ;
p3[] += newp ; Point(newp) = {Wxb,Wyb, Ls+Lb, res} ;
p3[] += newp ; Point(newp) = {0,Wyb, Ls+Lb, res} ;

l1[] += newl ; Line(newl) = {p1[0], p1[1]} ;
l1[] += newl ; Line(newl) = {p1[1], p1[2]} ;
l1[] += newl ; Line(newl) = {p1[2], p1[3]} ;
l1[] += newl ; Line(newl) = {p1[3], p1[0]} ;
l2[] += newl ; Line(newl) = {p2[0], p2[1]} ;
l2[] += newl ; Line(newl) = {p2[1], p2[2]} ;
l2[] += newl ; Line(newl) = {p2[2], p2[3]} ;
l2[] += newl ; Line(newl) = {p2[3], p2[0]} ;
l2b[] += newl ; Line(newl) = {p2b[0], p2b[1]} ;
l2b[] += newl ; Line(newl) = {p2b[1], p2b[2]} ;
l2b[] += newl ; Line(newl) = {p2b[2], p2b[3]} ;
l2b[] += newl ; Line(newl) = {p2b[3], p2b[0]} ;
l3[] += newl ; Line(newl) = {p3[0], p3[1]} ;
l3[] += newl ; Line(newl) = {p3[1], p3[2]} ;
l3[] += newl ; Line(newl) = {p3[2], p3[3]} ;
l3[] += newl ; Line(newl) = {p3[3], p3[0]} ;
lL[] += newl ; Line(newl) = {p1[0], p2[0]} ;
lL[] += newl ; Line(newl) = {p1[1], p2[1]} ;
lL[] += newl ; Line(newl) = {p1[2], p2[2]} ;
lL[] += newl ; Line(newl) = {p1[3], p2[3]} ;

lL2[] += newl ; Line(newl) = {p2b[0], p3[0]} ;
lL2[] += newl ; Line(newl) = {p2b[1], p3[1]} ;
lL2[] += newl ; Line(newl) = {p2b[2], p3[2]} ;
lL2[] += newl ; Line(newl) = {p2b[3], p3[3]} ;

ll1 = newll ; Line Loop(newll) = {-l1[]} ;
s1 = news ; Plane Surface(news) = {ll1} ;
ll2 = newll ; Line Loop(newll) = {l3[]} ;
s2 = news ; Plane Surface(news) = {ll2} ;

ll2b = newll ; Line Loop(newll) = {l2b[]} ;
ll2bn = newll ; Line Loop(newll) = {l2[]} ;
s2b = news ; Plane Surface(news) = {ll2b,ll2bn} ;

llL[] += newll ; Line Loop(newll) = {l1[0], lL[1], -l2[0], -lL[0]} ;
llL[] += newll ; Line Loop(newll) = {l1[1], lL[2], -l2[1], -lL[1]} ;
llL[] += newll ; Line Loop(newll) = {l1[2], lL[3], -l2[2], -lL[2]} ;
llL[] += newll ; Line Loop(newll) = {l1[3], lL[0], -l2[3], -lL[3]} ;
sL[] += news ; Plane Surface(news) = {llL[0]} ;
sL[] += news ; Plane Surface(news) = {llL[1]} ;
sL[] += news ; Plane Surface(news) = {llL[2]} ;
sL[] += news ; Plane Surface(news) = {llL[3]} ;

llL2[] += newll ; Line Loop(newll) = {l2b[0], lL2[1], -l3[0], -lL2[0]} ;
llL2[] += newll ; Line Loop(newll) = {l2b[1], lL2[2], -l3[1], -lL2[1]} ;
llL2[] += newll ; Line Loop(newll) = {l2b[2], lL2[3], -l3[2], -lL2[2]} ;
llL2[] += newll ; Line Loop(newll) = {l2b[3], lL2[0], -l3[3], -lL2[3]} ;
sL[] += news ; Plane Surface(news) = {llL2[0]} ;
sL[] += news ; Plane Surface(news) = {llL2[1]} ;
sL[] += news ; Plane Surface(news) = {llL2[2]} ;
sL[] += news ; Plane Surface(news) = {llL2[3]} ;

sl = newsl ; Surface Loop(newsl) = {s1, s2, s2b, sL[]} ;
v = newv ; Volume(newv) = {sl} ;

Physical Surface(BND_PEC) = {sL[],s2b} ;
Physical Surface(BND_PORT_1) = {s1} ;
Physical Surface(BND_PORT_2) = {s2} ;
Physical Volume(DOM) = {v} ;
