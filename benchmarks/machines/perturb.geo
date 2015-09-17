DefineConstant[
  PerturbMesh = {0, Choices{0,1},
    Name "Sensitivity/Compute perturbation velocity field"},
  Perturbation = {1e-3,
    Name "Sensitivity/Perturbation value"},
  SensitivityParameter = {"",
    Name "Sensitivity/Parameter to perturb"}
];

If(PerturbMesh == 1)
  Mesh.SaveParametric = 1;
  Solver.AutoMesh = 0;
  If(!StrCmp(OnelabAction, "compute"))
    Printf("Meshing non-perturbed geometry...");
    BoundingBox;
    Mesh 3;
    Save StrCat(StrPrefix(StrRelative(General.FileName)), ".msh");
    Printf("Perturbing parameter...");
    ParamValue = GetNumber(Str(SensitivityParameter));
    SetNumber(Str(SensitivityParameter), ParamValue + Perturbation);
    OnelabRun("Gmsh_NoAutoRun", StrCat(GmshExecutableName, " ", General.FileName,
        " -setnumber PerturbMesh 2 -run"));
    SetNumber(Str(SensitivityParameter), ParamValue);
    Merge "velocity.pos";
  EndIf
EndIf

If(PerturbMesh == 2)
  SyncModel;
  Printf("Computing perturbation velocity field...");
  Merge StrCat(StrPrefix(StrRelative(General.FileName)), ".msh");
  Plugin(NewView).Dimension = 3;
  Plugin(NewView).Run;
  Plugin(ModifyComponents).View = 0;
  Plugin(ModifyComponents).Expression0 = "x";
  Plugin(ModifyComponents).Expression1 = "y";
  Plugin(ModifyComponents).Expression2 = "z";
  Plugin(ModifyComponents).Run;

  RelocateMesh Point "*";
  RelocateMesh Line "*";
  //Save "perturbed.msh";
  Plugin(NewView).Run;
  Plugin(ModifyComponents).View = 1;
  Plugin(ModifyComponents).Expression0 = "x";
  Plugin(ModifyComponents).Expression1 = "y";
  Plugin(ModifyComponents).Expression2 = "z";
  Plugin(ModifyComponents).Run;

  Plugin(ModifyComponents).View = 0;
  Plugin(ModifyComponents).OtherView = 1;
  Plugin(ModifyComponents).Expression0 = Sprintf("(w0 - v0)/%g", Perturbation);
  Plugin(ModifyComponents).Expression1 = Sprintf("(w1 - v1)/%g", Perturbation);
  Plugin(ModifyComponents).Expression2 = Sprintf("(w2 - v2)/%g", Perturbation);
  Plugin(ModifyComponents).Run;
  Delete View[1];
  Save View[0] "velocity.msh";
EndIf
