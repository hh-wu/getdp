DefineConstant[
  PerturbMesh = {0, Choices{0,1}, Name "Sensitivity/Create mesh and perturbation directly in the script"},
  OnelabParamName = {StrCat(pp, "Magnet height [m]"), Name "Sensitivity/ONELAB parameter to perturb"},
  GmshParamName = {"lm", Name "Sensitivity/Gmsh variable associated with parameter"}
];

If(PerturbMesh == 1)
  Mesh.SaveParametric = 1;
  Solver.AutoMesh = 0;
  If(!StrCmp(OnelabAction, "compute"))
    Printf("Meshing non-perturbed geometry...");
    BoundingBox;
    Mesh 3;
    Save StrCat(StrPrefix(StrRelative(General.FileName)), ".msh");
    Printf("Creating perturbed mesh...");
    ParamValue = DefineNumber(0, Name Str(OnelabParamName)) + 1e-3;
    SystemCall StrCat(GmshExecutableName, " ", General.FileName,
      " -setnumber PerturbMesh 2",
      " -setnumber ", GmshParamName, Sprintf(" %g ", ParamValue),
      " -");
  EndIf
EndIf

If(PerturbMesh == 2)
  SyncModel;
  Merge StrCat(StrPrefix(StrRelative(General.FileName)), ".msh");
  Plugin(NewView).Run;
  Plugin(MathEval).View = 0;
  Plugin(MathEval).Expression0 = "x";
  Plugin(MathEval).Expression1 = "y";
  Plugin(MathEval).Expression2 = "z";
  Plugin(MathEval).Run;
  Delete View[0];

  RelocateMesh Point "*";
  RelocateMesh Line "*";
  //Save "perturbed.msh";
  Plugin(NewView).Run;
  Plugin(MathEval).View = 1;
  Plugin(MathEval).Expression0 = "x";
  Plugin(MathEval).Expression1 = "y";
  Plugin(MathEval).Expression2 = "z";
  Plugin(MathEval).Run;
  Delete View[1];

  Plugin(MathEval).View = 0;
  Plugin(MathEval).OtherView = 1;
  Plugin(MathEval).Expression0 = "(w0 - v0)/1e-3";
  Plugin(MathEval).Expression1 = "(w1 - v1)/1e-3";
  Plugin(MathEval).Expression2 = "(w2 - v2)/1e-3";
  Plugin(MathEval).Run;
  Delete View[0];
  Delete View[0];
  Save View[0] "velocity.pos";
EndIf
