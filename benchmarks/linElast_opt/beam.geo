Include "beam_data.geo";

//unstructured or transfinite
//Geometry.CopyMeshingMethod = 1;
//If(!transfiniteMesh)
//  Mesh.Algorithm = 8;
//EndIf
nbPtSpline = 10;
//=================================================
// Define Points
//=================================================
Point(1) = {0, 0, 0, lc};
Point(2) = {dx, 0, 0, lc};
Point(3) = {dx, dy, 0, lc};
Point(4) = {0, dy, 0, lc};
Point(5) = {dx, dy/2, 0, lc};
If(Flag_squhole)
  Point(6) = {dx/6, dy/4, 0, lc};
  Point(7) = {dx/6+hole_length, dy/4, 0, lc};
  Point(8) = {dx/6+hole_length, dy/4+hole_width, 0, lc};
  Point(9) = {dx/6, dy/4+hole_width, 0, lc};
EndIf
//=================================================
// Define Lines
//=================================================
Line(1) = {1, 2};
Line(2) = {2, 5};
Line(3) = {5, 3};
Line(4) = {3, 4};
Line(5) = {4, 1};
If(Flag_squhole)
  Line(6) = { 6, 7 };
  Line(7) = { 7, 8 };
  Line(8) = { 8, 9 };
  Line(9) = { 9, 6 };
EndIf
If(transfiniteMesh)
  Transfinite Line{5} = nbElemPerLineVert;//Using Progression 1.3;
  Transfinite Line{3} = nbElemPerLineVert2; //Using Progression 1.2;
  Transfinite Line{2} = nbElemPerLineVert2;//Using Progression 1.2;
  Transfinite Line{1} = nbElemPerLineHor;
  Transfinite Line{4} = nbElemPerLineHor;
EndIf
//=================================================
// Define surface
//=================================================
Line Loop(5) = {1, 2, 3, 4, 5};
If(Flag_squhole)
  Line Loop(6) = {6, 7, 8, 9};
  Plane Surface(7) = {6};//list of line loops
  Plane Surface(6) = {5,-6};//list of line loops
EndIf
If(!Flag_squhole)
  Plane Surface(6) = {5};//list of line loops
EndIf

// Tell Gmsh what the corner points are
// (going clockwise or counter-clockwise):
If(transfiniteMesh)
  Transfinite Surface{6} = {1,2,3,4};
  Transfinite Surface{7} = {6,7,8,9};
EndIf
//=================================================
// TAG mesh nodes
//=================================================
Physical Surface(BLOC) = {6};

Physical Line(SURF_BAS) = {1};
Physical Line(SURF_HAUT) = {4};
Physical Line(SURF_GAUCHE) = {5};
Physical Line(SURF_DROITE) = {2,3};

Physical Point(POINT_1) = {1};
Physical Point(POINT_2) = {2};
Physical Point(POINT_3) = {3};
Physical Point(POINT_4) = {4};
Physical Point(POINT_5) = {5};

If(Flag_squhole)
  Physical Surface(BLOC_HOLE) = {7};
  Physical Line(SURF_BAS_HOLE) = {6};
  Physical Line(SURF_DROITE_HOLE) = {7};
  Physical Line(SURF_HAUT_HOLE) = {8};
  Physical Line(SURF_GAUCHE_HOLE) = {9};
  Physical Point(POINT_1_HOLE) = {6};
  Physical Point(POINT_2_HOLE) = {7};
  Physical Point(POINT_3_HOLE) = {8};
  Physical Point(POINT_4_HOLE) = {9};
EndIf
//=================================================
// Recombine the triangles into quads ?
//=================================================
Mesh.RecombineAll = Flag_meshRecombine;
If(Flag_meshRecombine==0.0)
  Mesh.Algorithm = 2; // auto 
EndIf
If(Flag_meshRecombine==1.0)
  Mesh.Algorithm = 8; // DelQuad (experimental)
EndIf

// Velocity field for shape perturbation
If(Flag_opt && !StrCmp(Flag_optType,"shape"))
  Merge "../optimization/perturb.geo";
EndIf

