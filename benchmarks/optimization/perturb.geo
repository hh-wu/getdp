DefineConstant[
  PerturbMesh = {0, Choices{0,1},
    Name StrCat(pInOpt,"Compute perturbation velocity field"), Visible 1},
  Perturbation = {1e-6,
    Name StrCat(pInOpt,"Perturbation value"), Visible 1},
  SensitivityParameter = {"Input/Constructive parameters/Magnet length",
    Name StrCat(pInOpt,"Parameter to perturb"), Visible 1}
];

If(PerturbMesh == 1)
  Solver.AutoMesh = 0;
  If(!StrCmp(OnelabAction, "compute")) 
    ParamValue = GetNumber(Str(SensitivityParameter));
    SetNumber(Str(SensitivityParameter), ParamValue + Perturbation);
    Printf(StrCat("Perturbing parameter: ",SensitivityParameter));
    Printf("Parameter value:%g",ParamValue);
    Printf("Perturbed parameter value:%g",ParamValue + Perturbation);
    OnelabRun("Gmsh_NoAutoRun", StrCat(GmshExecutableName, " ",
        modelpath,General.FileName," -setnumber PerturbMesh 2 -run"));
    SetNumber(Str(SensitivityParameter), ParamValue);
    Merge StrCat(ResDir, "velocity.pos");
  EndIf
EndIf

If(PerturbMesh == 2)
  SyncModel;
  Printf("Computing perturbation velocity field...");
  Merge StrCat(modelpath,StrPrefix(StrRelative(General.FileName)), ".msh");
  Plugin(NewView).Run;
  Plugin(MathEval).View = 0;
  Plugin(MathEval).Expression0 = "x";
  Plugin(MathEval).Expression1 = "y";
  Plugin(MathEval).Expression2 = "z";
  Plugin(MathEval).Run;
  Delete View[0];

  RelocateMesh Point "*";
  RelocateMesh Line "*";
  RelocateMesh Surface "*" ;
  Save StrCat(modelpath, StrPrefix(StrRelative(General.FileName)), "Perturb.msh");
  Plugin(NewView).Run;
  Plugin(MathEval).View = 1;
  Plugin(MathEval).Expression0 = "x";
  Plugin(MathEval).Expression1 = "y";
  Plugin(MathEval).Expression2 = "z";
  Plugin(MathEval).Run;
  Delete View[1];

  Plugin(MathEval).View = 0;
  Plugin(MathEval).OtherView = 1;
  Plugin(MathEval).Expression0 = Sprintf("(w0 - v0)/%g", Fabs[Perturbation]);
  Plugin(MathEval).Expression1 = Sprintf("(w1 - v1)/%g", Fabs[Perturbation]);
  Plugin(MathEval).Expression2 = Sprintf("(w2 - v2)/%g", Fabs[Perturbation]);
  Plugin(MathEval).Run;
  Delete View[0];
  Delete View[0];
  View.Name = "velocity";
  CreateDir Str(ResDir);
  Save View[0] StrCat(ResDir, "velocity.pos");
EndIf
