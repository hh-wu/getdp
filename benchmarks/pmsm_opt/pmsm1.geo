Include "pmsm.geo";

//Recombine Surface{sr};
Mesh 2;
Mesh.SaveParametric = 0; 
Save StrCat[mshName,""]; 

Mesh.SaveParametric = 1; 
Save StrCat[mshParamName,""];


