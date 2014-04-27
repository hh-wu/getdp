// File "LaplacianDirichlet.geo".

// This file is exactly the same as "LaplacianNeumann.geo" EXCEPT
// for the creation of the Physical Entity "Gama" (the boundary), at the end of the file

// We include the file containing the numbering of the geometry.
Include "LaplacianDirichlet.param";

//Caracteristic length of the finite elements (reffinement is also possible after the mesh is built):
lc = 0.05;

// The parameters of the border of the domain :
x_max = 1;
x_min = 0;
y_max= 1;
y_min = 0;

//Creation of the 4 angle points of the domain Omega (=square)
p1 = newp; Point(p1) = {x_min,y_min,0,lc};
p2 = newp; Point(p2) = {x_min,y_max,0,lc};
p3 = newp; Point(p3) = {x_max,y_max,0,lc};
p4 = newp; Point(p4) = {x_max,y_min,0,lc};

//The four edges of the square
L1 = newreg; Line(L1) = {p1,p2};
L2 = newreg; Line(L2) = {p2,p3};
L3 = newreg; Line(L3) = {p3,p4};
L4 = newreg; Line(L4) = {p4,p1};

// Line Loop (= boundary of the square)
Bound = newreg; Line Loop(Bound) = {L1,L2,L3,L4};

//Surface of the square
SurfaceOmega = newreg; Plane Surface(SurfaceOmega) = {Bound};

// To conclude, we define the physical entities, that is "what GetDP could see/use".
// Both "Omega" and "Gama" are imported from the file "param.geo".
Physical Surface(Omega) = {SurfaceOmega};
Physical Line(Gamma) = {L1,L2,L3,L4}; // the Physical Line Gama is composed of the four lines of te boundary (not of the Line Loop !)
// Do not forget to let a blank line at the end, this could make GMSH crash...

