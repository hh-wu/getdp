//========================================================
// Benchmark "acoustic wave produced by a loudspeaker"
// File: GMSH geometry
//========================================================

Include "loudspeaker.dat";


//--------------------------------------------------------
// The loudspeaker
//--------------------------------------------------------

cen0=newp ; Point(newp) = {0,0,0,lc0} ;
pObs[]+=newp ; Point(newp) = {x0, -feed/2, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {x0, feed/2, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+x0, feed/2, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+b+x0, app/2, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+b+x0, app/2+thick, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+x0, feed/2+thick, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {-thick+x0, feed/2+thick, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {-thick+x0, -feed/2-thick, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+x0, -feed/2-thick, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+b+x0, -app/2-thick, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+b+x0, -app/2, 0, lc0} ;
pObs[]+=newp ; Point(newp) = {a+x0, -feed/2, 0, lc0} ;
For i In {0:#pObs[]-1}
  lObs[]+=newl ; Line(newl) = {pObs[i],pObs[(i+1)%#pObs[]]} ;
EndFor

llObs=newll ; Line Loop(newll) = lObs[] ;

Physical Line(GAMMA_SOURCE) = {-lObs[{0}]} ;
Physical Line(GAMMA_WALL) = {-lObs[{1:11}]} ;


//--------------------------------------------------------
// Main domain with its boundary
//--------------------------------------------------------

cen0 = newp ; Point(newp) = {0,0,0,lc0} ;
pi[]+=newp ; Point(newp) = {Ro,0,0,lc1} ;
pi[]+=newp ; Point(newp) = {0,Ro,0,lc1} ;
pi[]+=newp ; Point(newp) = {-Ro,0,0,lc1} ;
pi[]+=newp ; Point(newp) = {0,-Ro,0,lc1} ;
li[]+=newl ; Circle(newl) = {pi[0], cen0, pi[1]} ;
li[]+=newl ; Circle(newl) = {pi[1], cen0, pi[2]} ;
li[]+=newl ; Circle(newl) = {pi[2], cen0, pi[3]} ;
li[]+=newl ; Circle(newl) = {pi[3], cen0, pi[0]} ;

llOmega=newll ; Line Loop(llOmega) = li[];
surfOmega=news ; Plane Surface(news) = {llOmega, llObs};

Physical Line(GAMMA_DOM) = li[] ;
Physical Surface(DOMAIN) = {surfOmega};
