DefineConstant[
  PerturbMesh = {0, Choices{0,1},
    Name "Sensitivity/Compute perturbation velocity field"},
  Perturbation = {1e-6,
    Name "Sensitivity/Perturbation value"},
  SensitivityParameter = {"",
    Name "Sensitivity/Parameter to perturb"}
];

If(PerturbMesh == 1)
  Solver.AutoMesh = 0;
  If(!StrCmp(OnelabAction, "compute")) 
    Printf("Perturbing parameter...");
    ParamValue = GetNumber(Str(SensitivityParameter));
    SetNumber(Str(SensitivityParameter), ParamValue + Perturbation);
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
  Plugin(MathEval).Expression0 = Sprintf("(w0 - v0)/(%g)", Perturbation);
  Plugin(MathEval).Expression1 = Sprintf("(w1 - v1)/(%g)", Perturbation);
  Plugin(MathEval).Expression2 = Sprintf("(w2 - v2)/(%g)", Perturbation);
  Plugin(MathEval).Run;
  Delete View[0];
  Delete View[0];
  View.Name = "velocity";
  CreateDir Str(ResDir);
  Save View[0] StrCat(ResDir, "velocity.pos");
EndIf
