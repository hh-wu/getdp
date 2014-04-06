Include "waveguide2D_MMI.dat" ;

p[] += newp ; Point(newp) = {Lwg+L,W/2,0, res} ;
p[] += newp ; Point(newp) = {Lwg,W/2,0, res} ;
p[] += newp ; Point(newp) = {Lwg,yBot~{1}+Wwg,0, res} ;
p[] += newp ; Point(newp) = {0,yBot~{1}+Wwg,0, res} ;
p[] += newp ; Point(newp) = {0,yBot~{1},0, res} ;
p[] += newp ; Point(newp) = {Lwg,yBot~{1},0, res} ;
p[] += newp ; Point(newp) = {Lwg,-W/2,0, res} ;
p[] += newp ; Point(newp) = {Lwg+L,-W/2,0, res} ;

For n In {2:NbPorts}
  p[] += newp ; Point(newp) = { Lwg+L, yBot~{n},  0, res} ;
  p[] += newp ; Point(newp) = { 2*Lwg+L, yBot~{n},  0, res} ;
  p[] += newp ; Point(newp) = { 2*Lwg+L, yBot~{n}+Wwg,  0, res} ;
  p[] += newp ; Point(newp) = { Lwg+L, yBot~{n}+Wwg,  0, res} ;
EndFor

For n In {0:#p[]-2}
 l[] += newl ; Line(newl) = { p[n], p[n+1]} ;
EndFor
l[] += newl ; Line(newl) = { p[#p[]-1], p[0]} ;

ll = newll ; Line Loop(newll) = {l[]} ;
s = news ; Plane Surface(news) = {ll} ;

lPort[] = l[3];
For n In {0:NbPorts-2}
  lPort[] += l[9+4*n];
EndFor
l[] -= lPort[];

Physical Line(BND_LAT) = {l[]} ;
For n In {1:NbPorts}
  Physical Line(BND_PORT~{n}) = {lPort[n-1]} ;
EndFor
Physical Surface(DOM) = {s} ;
