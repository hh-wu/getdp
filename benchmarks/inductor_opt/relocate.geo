DefineConstant[
  MeshPerturbId = "",
  GeoPerturbedId = ""
];

// Load Perturbed CAO
//Merge "v.geo"; //pq v.geo n'est pas pris en compte?
//Merge "vPerturb.geo";
Merge StrCat["inductor", StrCat[GeoPerturbedId, "Perturb.geo"]];
Save "SkinGeo0.pos";

// Load Initial mesh
//Merge "vParams.msh";
Merge StrCat["inductor", StrCat[MeshPerturbId, "Params.msh"] ];

// Relocalisation of initial mesh nodes in perturbed CAO
RelocateMesh Point "*";
RelocateMesh Line "*";
RelocateMesh Surface "*";

//Save "vPerturb.msh";
Save StrCat["inductor", StrCat[GeoPerturbedId,StrCat[MeshPerturbId, "Perturb.msh"]]];
