DefineConstant[
  MeshPerturbId = "",
  GeoPerturbedId = ""
] ;

// Load Perturbed CAO
Merge StrCat["beam", StrCat[GeoPerturbedId, ".geo"]];

// Load Initial mesh
Merge StrCat["beam", StrCat[MeshPerturbId, "Params.msh"] ];

// Relocalisation of initial mesh nodes in perturbed CAO
RelocateMesh Point "*";
RelocateMesh Line "*";
RelocateMesh Surface "*";

//Save "vPerturb.msh";
Save StrCat["beam", StrCat[GeoPerturbedId,StrCat[MeshPerturbId, "Perturb.msh"]]];



