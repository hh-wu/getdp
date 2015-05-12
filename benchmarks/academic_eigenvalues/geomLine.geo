//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (line)
//========================================================

DefineConstant[
  res = { 200, Min 1, Max 10000, Step 1,
    Name StrCat[OnelabParamMesh,"1Number of cells"]}
];

p[] += newp ; Point(newp) = {-0.5, 0, 0} ;
p[] += newp ; Point(newp) = { 0.5, 0, 0} ;
l = newl ; Line(newl) = {p[0],p[1]} ;

Physical Point(BND) = {p[]} ;
Physical Line(DOM) = {l} ;

Transfinite Line {l} = res+1 ;
