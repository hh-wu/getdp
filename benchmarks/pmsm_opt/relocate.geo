DefineConstant[
  MeshPerturbId = "",
  GeoPerturbedId = ""
] ;

nameMachine = "pmsm";

// Load Perturbed CAO
Merge StrCat[nameMachine, StrCat[GeoPerturbedId, ".geo"]];

// Load Initial mesh
Merge StrCat[nameMachine, StrCat[MeshPerturbId, "Params.msh"] ];

// Relocalisation of initial mesh nodes in perturbed CAO
RelocateMesh Point "*";
RelocateMesh Line "*";
//RelocateMesh Surface "*";

Save StrCat[nameMachine, StrCat[GeoPerturbedId,StrCat[MeshPerturbId, "Perturb.msh"]]];
