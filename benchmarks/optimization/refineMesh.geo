DefineConstant[
  nbMesh = {0,Name StrCat[pInOpt,"nb of refined mesh"], Visible 1}
];

If(nbMesh > 0 && !StrCmp(OnelabAction, "compute") )
  Printf("Mesh cao (parametric and non parametric)");
  pFile = StrPrefix(StrRelative(General.FileName));
  Mesh 3; 
  Mesh.SaveParametric = 1;
  Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g.msh"), 0)); 
  Mesh.SaveParametric = 0;
  Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g_noParam.msh"), 0)); 
  For i In {1:nbMesh} 
    Printf("Refine Mesh (parametric and non parametric): %g", i);
    RefineMesh; 
    Mesh.SaveParametric = 1;
    Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g.msh"), i)); 
    Mesh.SaveParametric = 0;
    Save StrCat(modelpath, Sprintf(StrCat(pFile,"%g_noParam.msh"), i)); 
  EndFor 
EndIf

