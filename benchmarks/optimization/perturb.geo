DefineConstant[
  modelpath = "",
  pInOpt = "",
  Flag_optType = "shape",
  PerturbMesh = {0, Choices{0,1},
    Name StrCat(pInOpt,"Compute perturbation velocity field"),
    Visible (!StrCmp(Flag_optType,"shape"))},
  StructuredGrid = {0, Choices{0,1},
    Name StrCat(pInOpt,"Structured grid?"),
    Visible (!StrCmp(Flag_optType,"shape"))},
  Perturbation = {1e-10,
    Name StrCat(pInOpt,"Perturbation value"),
    Visible (!StrCmp(Flag_optType,"shape"))},
  SensitivityParameter = {"",
    Name StrCat(pInOpt,"Parameter to perturb"),
    Visible (!StrCmp(Flag_optType,"shape"))}
];
If(PerturbMesh == 1)
  Solver.AutoMesh = -1;
  If(!StrCmp(OnelabAction, "compute")) 
    Printf("Perturbing parameter...");
    ParamValue = GetNumber(Str(SensitivityParameter));
    SetNumber(Str(SensitivityParameter), ParamValue + Perturbation);
    OnelabRun("Gmsh_NoAutoRun", StrCat(GmshExecutableName, " ",
      modelpath,General.FileName," -setnumber PerturbMesh 2 -run"));
    SetNumber(Str(SensitivityParameter), ParamValue);
  EndIf
ElseIf(PerturbMesh == 2)
  Printf("Computing velocity field ...");
  modelName = StrPrefix(StrRelative(General.FileName));  

  If (StructuredGrid)
    // Relocate the initial mesh onto the perturbed CAD
    Mesh 3;
    Save StrCat(modelpath, modelName, "Perturb.msh");

    // Extract the nodes coordinates from the initial mesh
    NewModel;
    Merge StrCat(modelpath, modelName, ".msh");
    Plugin(NewView).Dimension = 3;
    Plugin(NewView).Run;
    Plugin(ModifyComponents).View = 0;
    Plugin(ModifyComponents).Expression0 = "x";
    Plugin(ModifyComponents).Expression1 = "y";
    Plugin(ModifyComponents).Expression2 = "z";
    Plugin(ModifyComponents).Run;

    // Extract the nodes coordinates from the perturbed mesh
    NewModel;
    Merge StrCat(modelpath, modelName, "Perturb.msh");
    Plugin(NewView).Dimension = 3;
    Plugin(NewView).Run;
    Plugin(ModifyComponents).View = 1;
    Plugin(ModifyComponents).Expression0 = "x";
    Plugin(ModifyComponents).Expression1 = "y";
    Plugin(ModifyComponents).Expression2 = "z";
    Plugin(ModifyComponents).Run;
  Else
    // Extract the nodes coordinates from the initial mesh
    SyncModel;
    Merge StrCat(modelpath, modelName, ".msh");
    Plugin(NewView).Dimension = 3;
    Plugin(NewView).Run;
    Plugin(ModifyComponents).View = 0;
    Plugin(ModifyComponents).Expression0 = "x";
    Plugin(ModifyComponents).Expression1 = "y";
    Plugin(ModifyComponents).Expression2 = "z";
    Plugin(ModifyComponents).Run;

    // Relocate
    RelocateMesh Point "*";
    RelocateMesh Line "*";
    RelocateMesh Surface "*" ;
    Save StrCat(modelpath, modelName, "Perturb.msh");

    // Extract the nodes coordinates from the perturbed mesh
    Plugin(NewView).Dimension = 3;
    Plugin(NewView).Run;
    Plugin(ModifyComponents).View = 1;
    Plugin(ModifyComponents).Expression0 = "x";
    Plugin(ModifyComponents).Expression1 = "y";
    Plugin(ModifyComponents).Expression2 = "z";
    Plugin(ModifyComponents).Run;
  EndIf

  // Compute velocity field
  Plugin(ModifyComponents).View = 0;
  Plugin(ModifyComponents).OtherView = 1;
  Plugin(ModifyComponents).Expression0 = Sprintf("(w0 - v0)/(%g)", Perturbation);
  Plugin(ModifyComponents).Expression1 = Sprintf("(w1 - v1)/(%g)", Perturbation);
  Plugin(ModifyComponents).Expression2 = Sprintf("(w2 - v2)/(%g)", Perturbation);
  Plugin(ModifyComponents).Run;
  View.Name = "velocity";
  Delete View[1];
  //CreateDir Str(ResDirVel);
  Save View[0] StrCat(modelpath, "velocity.msh");

EndIf

