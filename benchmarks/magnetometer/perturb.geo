DefineConstant[
  modelpath = "",
  ResDir = "",
  pInOpt = "",
  Flag_optType = "shape",
  PerturbMesh = {0, Choices{0,1}, Closed 1,
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
    OnelabRun("Gmsh_NoAutoRun", StrCat(General.ExecutableFileName, " ",
      modelpath, General.FileName, " -v 3 -setnumber PerturbMesh 2 -run"));
    SetNumber(Str(SensitivityParameter), ParamValue);
  EndIf
ElseIf(PerturbMesh == 2)
  Printf("Computing velocity field ...");
  modelName = StrPrefix(StrRelative(General.FileName));

  If (StructuredGrid)
    // mesh perturbed geometry (we cannot relocate structured meshes, as they
    // currently don't contain parametric node information; but we can safely
    // simply remesh, as the number of elements and the connections will not
    // change)
    Mesh 3;
    Save StrCat(modelpath, modelName, "Perturb.msh");

    // create a new, empty model
    NewModel;
  Else
    SyncModel;
  EndIf

  // Merge the original mesh
  Merge StrCat(modelpath, modelName, ".msh");

  // create a view with the original node coordinates as a vector dataset
  Plugin(NewView).Dimension = 3;
  Plugin(NewView).Run;
  Plugin(ModifyComponents).View = 0;
  Plugin(ModifyComponents).Expression0 = "x";
  Plugin(ModifyComponents).Expression1 = "y";
  Plugin(ModifyComponents).Expression2 = "z";
  Plugin(ModifyComponents).Run;

  If (StructuredGrid)
    // create a new, empty model
    NewModel;
    // merge the perturbed mesh
    Merge StrCat(modelpath, modelName, "Perturb.msh");
  Else
    // relocate the vertices of the original mesh on the perturbed geometry
    RelocateMesh Point "*";
    RelocateMesh Line "*";
    RelocateMesh Surface "*" ;
    // save the perturbed mesh
    Save StrCat(modelpath, modelName, "Perturb.msh");
  EndIf

  // Create a view with the perturbed node coordinates as vector dataset
  Plugin(NewView).Dimension = 3;
  Plugin(NewView).Run;
  Plugin(ModifyComponents).View = 1;
  Plugin(ModifyComponents).Expression0 = "x";
  Plugin(ModifyComponents).Expression1 = "y";
  Plugin(ModifyComponents).Expression2 = "z";
  Plugin(ModifyComponents).Run;

  // compute the velocity field by subtracting the two vector datasets
  Plugin(ModifyComponents).View = 0;
  Plugin(ModifyComponents).OtherView = 1;
  Plugin(ModifyComponents).Expression0 = Sprintf("(w0 - v0)/(%g)", Perturbation);
  Plugin(ModifyComponents).Expression1 = Sprintf("(w1 - v1)/(%g)", Perturbation);
  Plugin(ModifyComponents).Expression2 = Sprintf("(w2 - v2)/(%g)", Perturbation);
  Plugin(ModifyComponents).Run;
  View.Name = "velocity";
  Delete View[1];
  CreateDir Str(ResDir);
  Save View[0] StrCat(ResDir, "velocity.msh");
EndIf
