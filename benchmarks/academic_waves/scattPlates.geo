//========================================================
// Benchmark "scattering of a scalar wave by plates"
// File: GMSH geometry
//========================================================

Include "scattPlates.dat";


//--------------------------------------------------------
// Obstacle 1
//--------------------------------------------------------

pObs1[]+=newp ; Point(newp) = { dx/2,-dy/2+dist, 0, lc0} ;
pObs1[]+=newp ; Point(newp) = { dx/2, dy/2+dist, 0, lc0} ;
pObs1[]+=newp ; Point(newp) = {-dx/2, dy/2+dist, 0, lc0} ;
pObs1[]+=newp ; Point(newp) = {-dx/2,-dy/2+dist, 0, lc0} ;

lObs1[]+=newl ; Line(newl) = {pObs1[0],pObs1[1]} ;
lObs1[]+=newl ; Line(newl) = {pObs1[1],pObs1[2]} ;
lObs1[]+=newl ; Line(newl) = {pObs1[2],pObs1[3]} ;
lObs1[]+=newl ; Line(newl) = {pObs1[3],pObs1[0]} ;

llObs1=newll ; Line Loop(newll) = {lObs1[]} ;
ll[] += llObs1 ;

Physical Line(GAMMA_OBS1) = {-lObs1[]} ;


//--------------------------------------------------------
// Obstacle 2
//--------------------------------------------------------

pObs2[]+=newp ; Point(newp) = { dx/2,-dy/2-dist, 0, lc0} ;
pObs2[]+=newp ; Point(newp) = { dx/2, dy/2-dist, 0, lc0} ;
pObs2[]+=newp ; Point(newp) = {-dx/2, dy/2-dist, 0, lc0} ;
pObs2[]+=newp ; Point(newp) = {-dx/2,-dy/2-dist, 0, lc0} ;

lObs2[]+=newl ; Line(newl) = {pObs2[0],pObs2[1]} ;
lObs2[]+=newl ; Line(newl) = {pObs2[1],pObs2[2]} ;
lObs2[]+=newl ; Line(newl) = {pObs2[2],pObs2[3]} ;
lObs2[]+=newl ; Line(newl) = {pObs2[3],pObs2[0]} ;

llObs2=newll ; Line Loop(newll) = {lObs2[]} ;
ll[] += llObs2 ;

Physical Line(GAMMA_OBS2) = {-lObs2[]} ;


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

