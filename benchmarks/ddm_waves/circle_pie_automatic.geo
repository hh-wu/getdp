// Circle decomposition in N_DOM (> 1) different parts
// Decomposition as a pie (from the center to the border)

// Normals are all pointing outside subdomains and full domain (normal vector is
// pointing inside the obstacle)

Include "circle_pie_automatic_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh

//center
Point(1) = {0, 0, 0, LC};

Point(2) = {R_INT, 0, 0, LC};
Point(3) = {0, R_INT, 0, LC};
Point(4) = {-R_INT, 0, 0, LC};
Point(5) = {0, -R_INT, 0, LC};

Point(6) = {R_EXT, 0, 0, LC};
Point(7) = {0, R_EXT, 0, LC};
Point(8) = {-R_EXT, 0, 0, LC};
Point(9) = {0, -R_EXT, 0, LC};

Circle(1) = {2, 1, 3};
Circle(2) = {3, 1, 4};
Circle(3) = {4, 1, 5};
Circle(4) = {5, 1, 2};

Circle(5) = {6, 1, 7};
Circle(6) = {7, 1, 8};
Circle(7) = {8, 1, 9};
Circle(8) = {9, 1, 6};

Line Loop(1) = {6, 7, 8, 5};
Line Loop(2) = {2, 3, 4, 1};
Plane Surface(1) = {1, 2};

Physical Line("GammaDir", GAMMA_DIR) = {1, 2, 3, 4};
Physical Line("GammaInf", GAMMA_INF) = {5, 6, 7, 8};

If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Mesh 2;
  CreateDir Str(DIR);
  Mesh.MshFileVersion = 4.0;
  Mesh.PartitionCreatePhysicals = 1;
  Mesh.PartitionCreatePhysicals = 1;
  Mesh.PartitionSplitMeshFiles = 1;
  Mesh.PartitionTopologyFile = 1;
  PartitionMesh N_DOM;
  Save StrCat(DIR, StrCat(MSH_BASE_NAME, ".msh"));
EndIf
