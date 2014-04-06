//========================================================
// Benchmark "EM waveguide 2D - star-shaped network"
// File: GMSH geometry
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide3D_starNetwork.dat" ;
Mesh.Optimize = 1;

If (angleInter == 0)
  For n In {0:(NbPorts-1)}
    phi1 = 2*Pi*(n-0.5)/NbPorts ;
    phi2 = 2*Pi*(n    )/NbPorts ;
    phi3 = 2*Pi*(n+0.5)/NbPorts ;
    pM[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi1], R*Sin[phi2]+L*Sin[phi1], -Wz/2, res} ;
    pM[] += newp ; Point(newp) = { R*Cos[phi2]            , R*Sin[phi2]            , -Wz/2, res} ;
    pM[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi3], R*Sin[phi2]+L*Sin[phi3], -Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi1], R*Sin[phi2]+L*Sin[phi1],  Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi2]            , R*Sin[phi2]            ,  Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi3], R*Sin[phi2]+L*Sin[phi3],  Wz/2, res} ;
  EndFor
  For n In {0:(3*NbPorts-1)}
    lM[] += newl ; Line(newl) = { pM[n], pM[(n+1) % (3*NbPorts)] } ;
    lP[] += newl ; Line(newl) = { pP[n], pP[(n+1) % (3*NbPorts)] } ;
    lT[] += newl ; Line(newl) = { pM[n], pP[n] } ;
  EndFor
  For n In {0:(NbPorts-1)}
    Line Loop(newll) = {lM[3*n],lT[3*n+1],-lP[3*n],-lT[3*n]} ;
    sBnd[] += news ; Plane Surface(news) = {newll-1} ;
    Line Loop(newll) = {lM[3*n+1],lT[3*n+2],-lP[3*n+1],-lT[3*n+1]} ;
    sBnd[] += news ; Plane Surface(news) = {newll-1} ;
    Line Loop(newll) = {lM[3*n+2],lT[(3*n+3) % (3*NbPorts)],-lP[3*n+2],-lT[3*n+2]} ;
    sPort[] += news ; Plane Surface(news) = {newll-1} ;
  EndFor
EndIf

If (angleInter != 0)
  pM0 = newp ; Point(newp) = {0,0,-Wz/2} ;
  pP0 = newp ; Point(newp) = {0,0, Wz/2} ;
  For n In {0:(NbPorts-1)}
    phi1 = 2*Pi*(n-0.5)/NbPorts ;
    phi2 = 2*Pi*(n)/NbPorts - angleInter/2 ;
    phi3 = 2*Pi*(n)/NbPorts + angleInter/2 ;
    phi4 = 2*Pi*(n+0.5)/NbPorts ;
    pM[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi1], R*Sin[phi2]+L*Sin[phi1], -Wz/2, res} ;
    pM[] += newp ; Point(newp) = { R*Cos[phi2]            , R*Sin[phi2]            , -Wz/2, res} ;
    pM[] += newp ; Point(newp) = { R*Cos[phi3]            , R*Sin[phi3]            , -Wz/2, res} ;
    pM[] += newp ; Point(newp) = { R*Cos[phi3]+L*Cos[phi4], R*Sin[phi3]+L*Sin[phi4], -Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi2]+L*Cos[phi1], R*Sin[phi2]+L*Sin[phi1],  Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi2]            , R*Sin[phi2]            ,  Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi3]            , R*Sin[phi3]            ,  Wz/2, res} ;
    pP[] += newp ; Point(newp) = { R*Cos[phi3]+L*Cos[phi4], R*Sin[phi3]+L*Sin[phi4],  Wz/2, res} ;
  EndFor
  For n In {0:(NbPorts-1)}
    lM[] += newl ; Line(newl) = {pM[4*n], pM[4*n+1]} ;
    lM[] += newl ; Circle(newl) = {pM[4*n+1], pM0, pM[4*n+2]} ;
    lM[] += newl ; Line(newl) = {pM[4*n+2], pM[4*n+3]} ;
    lM[] += newl ; Line(newl) = {pM[4*n+3], pM[(4*n+4) % (4*NbPorts)]} ;
    lP[] += newl ; Line(newl) = {pP[4*n], pP[4*n+1]} ;
    lP[] += newl ; Circle(newl) = {pP[4*n+1], pP0, pP[4*n+2]} ;
    lP[] += newl ; Line(newl) = {pP[4*n+2], pP[4*n+3]} ;
    lP[] += newl ; Line(newl) = {pP[4*n+3], pP[(4*n+4) % (4*NbPorts)]} ;
    lT[] += newl ; Line(newl) = { pM[4*n], pP[4*n] } ;
    lT[] += newl ; Line(newl) = { pM[4*n+1], pP[4*n+1] } ;
    lT[] += newl ; Line(newl) = { pM[4*n+2], pP[4*n+2] } ;
    lT[] += newl ; Line(newl) = { pM[4*n+3], pP[4*n+3] } ;
  EndFor
  For n In {0:(NbPorts-1)}
    Line Loop(newll) = {lM[4*n],lT[4*n+1],-lP[4*n],-lT[4*n]} ;
    sBnd[] += news ; Plane Surface(news) = {newll-1} ;
    Line Loop(newll) = {lM[4*n+1],lT[4*n+2],-lP[4*n+1],-lT[4*n+1]} ;
    sBnd[] += news ; Ruled Surface(news) = {newll-1} ;
    Line Loop(newll) = {lM[4*n+2],lT[4*n+3],-lP[4*n+2],-lT[4*n+2]} ;
    sBnd[] += news ; Plane Surface(news) = {newll-1} ;
    Line Loop(newll) = {lM[4*n+3],lT[(4*n+4) % (4*NbPorts)],-lP[4*n+3],-lT[4*n+3]} ;
    sPort[] += news ; Plane Surface(news) = {newll-1} ;
  EndFor
EndIf

Line Loop(newll) = {-lM[]} ;
sM = news ; Plane Surface(news) = {newll-1} ;
Line Loop(newll) = {lP[]} ;
sP = news ; Plane Surface(news) = {newll-1} ;

sl = newsl ; Surface Loop(newsl) = {sBnd[],sPort[],sM,sP} ;
v = newv ; Volume(newv) = {sl} ;

Physical Surface(BND_LAT) = {sBnd[],sM,sP} ;
For n In {1:NbPorts}
  Physical Surface(BND_PORT~{n}) = {sPort[n-1]} ;
EndFor
Physical Volume(DOM) = {v} ;
