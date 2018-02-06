// Square divided in two subdomains with overlap
// Used to validate HPDDM library

Include "laplace_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh

SetFactory("OpenCASCADE");

Mesh.CharacteristicLengthMin = LC;
Mesh.CharacteristicLengthMax = LC;


Rectangle(1) = {0,0,0, dx/2 - delta/2, dy};
Rectangle(2) = {dx/2 + delta/2, 0, 0, dx/2 - delta/2, dy};
Rectangle(3) = {dx/2 - delta/2, 0, 0, delta, dy}; // overlap

//Delete duplicates
BooleanFragments{Surface{2:3};Delete;}{Surface{1};Delete;}

//Physicals
Physical Surface(100) = {1}; //Omega_0 (minus overlap)
Physical Surface(101) = {2}; //Omega_1 (minus overlap)
Physical Surface(102) = {3}; //overlap

Physical Line(12) = {6}; // Sigma_12 (1 to 2)
Physical Line(21) = {2}; // Sigma_21 (2 to 1)

Physical Line(200) = {8:10}; // Gamma_0 minus overlap
Physical Line(201) = {1,3,4}; // Gamma_1 minus overlap
Physical Line(202) = {5,7}; // Gamma_Overlap


/////////////////////////////////////////////////////////////:
// for the full version
If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Mesh 2;
  CreateDir Str(DIR);
  Save StrCat(MSH_NAME, "full.msh");
  //Domain 1
  idom = 0;
  Delete Physicals;
  Physical Surface(100) = {1}; //Omega_1 (minus overlap)
  Physical Surface(102) = {3}; //overlap
  
  Physical Line(01) = {6}; // Sigma_01 (0 to 1)
  Physical Line(10) = {2}; // Sigma_10 (1 to 0)

  Physical Line(200) = {8:10}; // Gamma_1 minus overlap
  Physical Line(202) = {5,7}; // Gamma_Overlap (minus Sigma)
  Printf("Meshing circle_pie subdomain %g...", idom);
  Save StrCat(MSH_NAME, Sprintf("%g.msh", idom));
  //Domain 2
  idom = 1;
  Delete Physicals;
  Physical Surface(101) = {2}; //Omega_2 (minus overlap) 
  Physical Surface(102) = {3}; //overlap
  
  Physical Line(01) = {6}; // Sigma_01 (0 to 1)
  Physical Line(10) = {2}; // Sigma_10 (1 to 2)

  Physical Line(201) = {1,3,4}; // Gamma_2 minus overlap
  Physical Line(202) = {5,7}; // Gamma_Overlap (minus Sigma)
  Printf("Meshing circle_pie subdomain %g...", idom);
  Save StrCat(MSH_NAME, Sprintf("%g.msh", idom));
EndIf


BoundingBox {0, dx,0,dy, 0, 0};
