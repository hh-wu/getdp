DefineConstant[
  nbMesh = {0,Name StrCat[pInOpt,"nb of refined mesh"], Visible 1}
];

If(nbMesh > 0 && !StrCmp(OnelabAction, "compute") )
  Printf("Mesh cao (parametric)");
  pFile = StrPrefix(StrRelative(General.FileName));
  Mesh.SaveParametric = 1;
  Mesh 3; 
  //SetOrder 2; 
  Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g.msh"), 0)); 
  For i In {1:nbMesh} 
    Printf("Refine Mesh (parametric): %g", i);
    RefineMesh; 
    //SetOrder 2; 
    Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g.msh"), i)); 
  EndFor 
EndIf
// 2D machine: 17122,60507,226069,872361,3425617,13574817
// 2D square beam (l=0.4)(#elem): 1249, 4821, 18949, 75141, 296197, 1182213
// 3D (#elem):

