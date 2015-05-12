//========================================================
// Benchmark "scattering of a scalar wave"
// File: GMSH geometry
//========================================================

Include "scattKite.dat" ;


//--------------------------------------------------------
// Obstacle 1
//--------------------------------------------------------

cen0=newp ; Point(newp) = {0,0,0,lc0} ;
pObs[]+=newp ; Point(newp) = {R0,0,0,lc0} ;
pObs[]+=newp ; Point(newp) = {0,R1,0,lc0} ;
pObs[]+=newp ; Point(newp) = {-R0,0,0,lc0} ;
pObs[]+=newp ; Point(newp) = {0,-R1,0,lc0} ;
lObs[]+=newl ; Ellipsis(newl) = {pObs[0], cen0, pObs[0], pObs[1]} ;
lObs[]+=newl ; Ellipsis(newl) = {pObs[1], cen0, pObs[1], pObs[2]} ;
lObs[]+=newl ; Ellipsis(newl) = {pObs[2], cen0, pObs[2], pObs[3]} ;
lObs[]+=newl ; Ellipsis(newl) = {pObs[3], cen0, pObs[3], pObs[0]} ;

llellipsis=newll ; Line Loop(newll) = {lObs[]} ;
surfellipsis=news ; Plane Surface(news) = {llellipsis} ;

ll[] += llellipsis ;

Rotate {{0, 0, 1}, {0, 0, 0}, phi} { Surface{surfellipsis}; }
Translate {cenx, ceny, 0} { Surface{surfellipsis}; }

Physical Line(GAMMA_OBS1) = {-lObs[]} ;


//--------------------------------------------------------
// Obstacle 2 : Kite shaped domain
// .. x(t) = (cos(t) + 0.65*cos(2t) - 0.65, 1.5*sin(t))
// .. 0 <= t <= 2*Pi
//--------------------------------------------------------

t[] = {0:2*Pi:(2*Pi/50)} ;
For kk In {0:#t[]-1}
  pk[]+=newp ; Point(newp) = { factor*(Cos(t[kk])+0.65*Cos(2*t[kk])-0.65), factor*(1.5*Sin(t[kk])), 0., lc0 } ;
EndFor
lkite=newl ; Spline(newl) = {pk[],pk[0]} ;

llkite=newll ; Line Loop(newll) = {lkite} ;
skite=news ; Plane Surface(news) = {newll-1} ;

ll[] += llkite ;

Physical Line(GAMMA_OBS2) = {-lkite} ;


//--------------------------------------------------------
// Main domain and Layers with the boundaries (CIRCLE)
//--------------------------------------------------------

If (Flag_DomTruncShape==1)
  
  cen0 = newp ; Point(newp) = {0,0,0,lc0} ;
  pi[]+=newp ; Point(newp) = {Rdom,0,0,lc1} ;
  pi[]+=newp ; Point(newp) = {0,Rdom,0,lc1} ;
  pi[]+=newp ; Point(newp) = {-Rdom,0,0,lc1} ;
  pi[]+=newp ; Point(newp) = {0,-Rdom,0,lc1} ;
  li[]+=newl ; Circle(newl) = {pi[0], cen0, pi[1]} ;
  li[]+=newl ; Circle(newl) = {pi[1], cen0, pi[2]} ;
  li[]+=newl ; Circle(newl) = {pi[2], cen0, pi[3]} ;
  li[]+=newl ; Circle(newl) = {pi[3], cen0, pi[0]} ;
  
  llOmega=newll ; Line Loop(llOmega) = li[];
  surfOmega=news ; Plane Surface(news) = {llOmega, ll[]};
  
  Physical Line(GAMMA_DOM) = li[] ;
  Physical Surface(DOMAIN) = {surfOmega};
  
  If (Flag_DomTruncMethod==9)
    
    cen0 = newp ; Point(newp) = {0,0,0,lc0} ;
    pe[]+=newp ; Point(newp) = {Rdom+Lpml,0,0,lc1} ;
    pe[]+=newp ; Point(newp) = {0,Rdom+Lpml,0,lc1} ;
    pe[]+=newp ; Point(newp) = {-Rdom-Lpml,0,0,lc1} ;
    pe[]+=newp ; Point(newp) = {0,-Rdom-Lpml,0,lc1} ;
    le[]+=newl ; Circle(newl) = {pe[0], cen0, pe[1]} ;
    le[]+=newl ; Circle(newl) = {pe[1], cen0, pe[2]} ;
    le[]+=newl ; Circle(newl) = {pe[2], cen0, pe[3]} ;
    le[]+=newl ; Circle(newl) = {pe[3], cen0, pe[0]} ;
    
    llLayer=newll ; Line Loop(llLayer) = le[];
    surfLayer=news ; Plane Surface(news) = {llOmega, llLayer};
    
    Physical Line(GAMMA_LAY) = le[] ;
    Physical Surface(LAYER) = {surfLayer};
    
  EndIf

EndIf


//--------------------------------------------------------
// Main domain and Layers with the boundaries (SQUARE)
//--------------------------------------------------------

If (Flag_DomTruncShape==2)
  
  cen0=newp ; Point(newp) = {0,0,0,lc0} ;
  pi[]+=newp ; Point(newp) = { Ldom/2, Ldom/2,0,lc1} ;
  pi[]+=newp ; Point(newp) = {-Ldom/2, Ldom/2,0,lc1} ;
  pi[]+=newp ; Point(newp) = {-Ldom/2,-Ldom/2,0,lc1} ;
  pi[]+=newp ; Point(newp) = { Ldom/2,-Ldom/2,0,lc1} ;
  li[]+=newl ; Line(newl) = {pi[0], pi[1]} ;
  li[]+=newl ; Line(newl) = {pi[1], pi[2]} ;
  li[]+=newl ; Line(newl) = {pi[2], pi[3]} ;
  li[]+=newl ; Line(newl) = {pi[3], pi[0]} ;
  
  llOmega=newll ; Line Loop(llOmega) = li[];
  surfOmega=news ; Plane Surface(news) = {llOmega, ll[]};
  
  Physical Line(GAMMA_DOM) = li[] ;
  Physical Surface(DOMAIN) = {surfOmega};
  
  If (Flag_DomTruncMethod==9)
    
    pe[]+=newp ; Point(newp) = { Ldom/2+Lpml, Ldom/2+Lpml,0,lc1} ;
    pe[]+=newp ; Point(newp) = {-Ldom/2-Lpml, Ldom/2+Lpml,0,lc1} ;
    pe[]+=newp ; Point(newp) = {-Ldom/2-Lpml,-Ldom/2-Lpml,0,lc1} ;
    pe[]+=newp ; Point(newp) = { Ldom/2+Lpml,-Ldom/2-Lpml,0,lc1} ;
    le[]+=newl ; Line(newl) = {pe[0], pe[1]} ;
    le[]+=newl ; Line(newl) = {pe[1], pe[2]} ;
    le[]+=newl ; Line(newl) = {pe[2], pe[3]} ;
    le[]+=newl ; Line(newl) = {pe[3], pe[0]} ;
    
    llLayer=newll ; Line Loop(llLayer) = le[];
    surfLayer=news ; Plane Surface(news) = {llOmega, llLayer};
    
    Physical Line(GAMMA_LAY) = le[] ;
    Physical Surface(LAYER) = {surfLayer};
    
  EndIf
  
EndIf

