// File "LaplacianNeumann.geo".

// We include the file containing the numbering of the geometry.
// This is usefull at the end of this file, and used to "synchronise" GMSH and GetDP
Include "LaplacianNeumann.param";

//Caracteristic length of the finite elements (reffinement is also possible after the mesh is built):
lc = 0.05;
// This parameter could be placed for instance in "param.geo", to separate more easyly the geometry
// 	and the discretization parameters.

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
// Remarks:
// -"newp" is a GMSH function that give the first available number for describing a point.
// 	For any other entity, like Line, Surface, etc. We recommand the use of "newreg" (see below).
// - By default, GMSH create a 3D domain. The z-coordinate must always be precised.


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
// "Omega" is a number imported from the file "param.geo".
Physical Surface(Omega) = {SurfaceOmega};
// Do not forget to let a blank line at the end, this could make GMSH crash...

