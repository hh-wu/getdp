DefineConstant[
  pInOpt = "",
  Flag_optType = "shape",
  PerturbMesh = {0, Choices{0,1},
    Name StrCat(pInOpt,"Compute perturbation velocity field"),
    Visible (!StrCmp(Flag_optType,"shape"))},
  Perturbation = {1e-6,
    Name StrCat(pInOpt,"Perturbation value"),
    Visible (!StrCmp(Flag_optType,"shape"))},
  SensitivityParameter = {"",
    Name StrCat(pInOpt,"Parameter to perturb"),
    Visible (!StrCmp(Flag_optType,"shape"))}
];
If(PerturbMesh == 1)
  Solver.AutoMesh = -1;
  Printf(OnelabAction);
  If(!StrCmp(OnelabAction, "compute")) 
    Printf("Perturbing parameter...");
    Printf(SensitivityParameter);
    ParamValue = GetNumber(Str(SensitivityParameter));
    SetNumber(Str(SensitivityParameter), ParamValue + Perturbation);
    Printf("%g",ParamValue);
    Printf("%g",ParamValue + Perturbation);
    OnelabRun("Gmsh_NoAutoRun", StrCat(GmshExecutableName, " ",
      modelpath,General.FileName," -setnumber PerturbMesh 2 -run"));
    SetNumber(Str(SensitivityParameter), ParamValue);
  EndIf
ElseIf(PerturbMesh == 2)
  SyncModel;
  Printf("Computing velocity field ...");
  Merge StrCat(modelpath,StrPrefix(StrRelative(General.FileName)), ".msh");
  Plugin(NewView).Dimension = 3;
  Plugin(NewView).Run;
  Plugin(ModifyComponents).View = 0;
  Plugin(ModifyComponents).Expression0 = "x";
  Plugin(ModifyComponents).Expression1 = "y";
  Plugin(ModifyComponents).Expression2 = "z";
  Plugin(ModifyComponents).Run;

  RelocateMesh Point "*";
  RelocateMesh Line "*";
  RelocateMesh Surface "*" ;
  Save StrCat(modelpath, StrPrefix(StrRelative(General.FileName)), "Perturb.msh");
  Plugin(NewView).Run;
  Plugin(ModifyComponents).View = 1;
  Plugin(ModifyComponents).Expression0 = "x";
  Plugin(ModifyComponents).Expression1 = "y";
  Plugin(ModifyComponents).Expression2 = "z";
  Plugin(ModifyComponents).Run;

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







