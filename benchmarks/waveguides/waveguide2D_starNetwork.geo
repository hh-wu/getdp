//========================================================
// Benchmark "EM waveguide 2D - star-shaped network"
// File: GMSH geometry
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide2D_starNetwork.dat" ;

p0 = newp ; Point(newp) = {0,0,0, res} ;

If (angleInter == 0)
  For n In {0:(NbPorts-1)}
    phi1 = 2*Pi*(n-0.5)/NbPorts ;
    phi2 = 2*Pi*(n    )/NbPorts ;
    phi3 = 2*Pi*(n+0.5)/NbPorts ;
    p[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi1], R*Sin[phi2]+L*Sin[phi1], 0, res} ;
    p[] += newp ; Point(newp) = { R*Cos[phi2]            , R*Sin[phi2]            , 0, res} ;
    p[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi3], R*Sin[phi2]+L*Sin[phi3], 0, res} ;
  EndFor
  For n In {0:(NbPorts-1)}
    l[] += newl ; Line(newl) = { p[3*n], p[3*n+1]} ;
    lBnd[] += newl-1 ;
    l[] += newl ; Line(newl) = { p[3*n+1], p[3*n+2]} ;
    lBnd[] += newl-1 ;
    l[] += newl ; Line(newl) = { p[3*n+2], p[(3*n+3) % (3*NbPorts)]} ;
    lPort[] += newl-1 ;
  EndFor
EndIf

If (angleInter != 0)
  For n In {0:(NbPorts-1)}
    phi1 = 2*Pi*(n-0.5)/NbPorts ;
    phi2 = 2*Pi*(n)/NbPorts - angleInter/2 ;
    phi3 = 2*Pi*(n)/NbPorts + angleInter/2 ;
    phi4 = 2*Pi*(n+0.5)/NbPorts ;
    p[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi1], R*Sin[phi2]+L*Sin[phi1], 0, res} ;
    p[] += newp ; Point(newp) = { R*Cos[phi2]            , R*Sin[phi2]            , 0, res} ;
    p[] += newp ; Point(newp) = { R*Cos[phi3]            , R*Sin[phi3]            , 0, res} ;
    p[] += newp ; Point(newp) = { R*Cos[phi3]+L*Cos[phi4], R*Sin[phi3]+L*Sin[phi4], 0, res} ;
  EndFor
  For n In {0:(NbPorts-1)}
    l[] += newl ; Line(newl) = {p[4*n], p[4*n+1]} ;
    lBnd[] += newl-1 ;
    l[] += newl ; Circle(newl) = {p[4*n+1], p0, p[4*n+2]} ;
    lBnd[] += newl-1 ;
    l[] += newl ; Line(newl) = {p[4*n+2], p[4*n+3]} ;
    lBnd[] += newl-1 ;
    l[] += newl ; Line(newl) = {p[4*n+3], p[(4*n+4) % (4*NbPorts)]} ;
    lPort[] += newl-1 ;
  EndFor
EndIf

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

Physical Line(BND_LAT) = {lBnd[]} ;
For n In {1:NbPorts}
  Physical Line(BND_PORT~{n}) = {lPort[n-1]} ;
EndFor
Physical Surface(DOM) = {s} ;
