DefineConstant[
  nbMesh = {0,Name StrCat[pInOpt,"nb of refined mesh"], Visible 1}
];

If(nbMesh > 0 && !StrCmp(OnelabAction, "compute") )
  Printf("Mesh cao (parametric and non parametric)");
  pFile = StrPrefix(StrRelative(General.FileName));
  Mesh.Algorithm = 6; // Frontal
  Mesh 3;
  Mesh.SaveParametric = 1;
  Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g.msh"), 1)); 
  Mesh.SaveParametric = 0;
  Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g_noParam.msh"), 1)); 
  For i In {2:nbMesh} 
    Printf("Refine Mesh (parametric and non parametric): %g", i);
    RefineMesh; 
    Mesh.SaveParametric = 1;
    Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g.msh"), i)); 
    Mesh.SaveParametric = 0;
    Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g_noParam.msh"), i)); 
  EndFor 
EndIf

