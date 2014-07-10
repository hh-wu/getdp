Include "circles_param.pro";

Mesh.Triangles = 0;

Merge Sprintf("a%g.pos", 1);
View[PostProcessing.NbViews-1].Visible = 0;
Merge Sprintf("phi_extend%g.pos", 1);
View[PostProcessing.NbViews-1].Visible = 0;
Plugin(FieldFromAmplitudePhase).MeshFile = "circles_fine.msh";
Plugin(FieldFromAmplitudePhase).Wavenumber = k0;
Plugin(FieldFromAmplitudePhase).AmplitudeView = PostProcessing.NbViews-2;
Plugin(FieldFromAmplitudePhase).PhaseView = PostProcessing.NbViews-1;
Plugin(FieldFromAmplitudePhase).Run;
View[PostProcessing.NbViews-1].Visible = 0;

Merge Sprintf("a%g.pos", 2);
View[PostProcessing.NbViews-1].Visible = 0;
Merge Sprintf("phi_extend%g.pos", 2);
View[PostProcessing.NbViews-1].Visible = 0;
Plugin(FieldFromAmplitudePhase).AmplitudeView = PostProcessing.NbViews-2;
Plugin(FieldFromAmplitudePhase).PhaseView = PostProcessing.NbViews-1;
Plugin(FieldFromAmplitudePhase).Run;
View[PostProcessing.NbViews-1].Visible = 0;


Plugin(MathEval).Expression0= "v0+w0";
Plugin(MathEval).View=PostProcessing.NbViews-1;
Plugin(MathEval).OtherView=PostProcessing.NbViews-4;
Plugin(MathEval).ForceInterpolation=0;
Plugin(MathEval).Run;

For iSub In {3:Nbr_SubProblems:1}
  Merge Sprintf("a%g.pos", iSub);
  View[PostProcessing.NbViews-1].Visible = 0;
  Merge Sprintf("phi_extend%g.pos", iSub);
  View[PostProcessing.NbViews-1].Visible = 0;
  Plugin(FieldFromAmplitudePhase).AmplitudeView = PostProcessing.NbViews-2;
  Plugin(FieldFromAmplitudePhase).PhaseView = PostProcessing.NbViews-1;
  Plugin(FieldFromAmplitudePhase).Run;
  View[PostProcessing.NbViews-1].Visible = 0;

  Plugin(MathEval).View=PostProcessing.NbViews-1;
  Plugin(MathEval).OtherView=PostProcessing.NbViews-4;
  Plugin(MathEval).Run;

  View[PostProcessing.NbViews-1].Visible = 0;
  Delete View[PostProcessing.NbViews-5];
EndFor

View[PostProcessing.NbViews-1].Visible = 1;
View[PostProcessing.NbViews-1].Name = "u_Iter";


PostProcessing.Format=1;

// Save View[PostProcessing.NbViews-1] "my_uiter.pos";

Merge "u0.pos";
View[PostProcessing.NbViews-1].Name = "u_Full";


Plugin(MathEval).View = PostProcessing.NbViews-1; // new view
Plugin(MathEval).OtherView = PostProcessing.NbViews-2;
Plugin(MathEval).Expression0 = "(v0-w0)^2"; // |ucal - uref|^2
Plugin(MathEval).Run;

Plugin(ModifyComponent).View = PostProcessing.NbViews-2; // in place => in View[PostProcessing.NbViews-2]
Plugin(ModifyComponent).Expression = "(v0)^2"; // |uref|^2
Plugin(ModifyComponent).Run;

Plugin(Integrate).View = PostProcessing.NbViews-1; // \int |ucal - uref|^2 dOmega
Plugin(Integrate).Run;

Plugin(Integrate).View = PostProcessing.NbViews-3; // \int |uref|^2 dOmega
Plugin(Integrate).Run;

num = View[PostProcessing.NbViews-2].Max;
denom = View[PostProcessing.NbViews-1].Max;

err = Sqrt(num/denom);

Printf("%g",View[PostProcessing.NbViews-2].Max);
Printf("%g",View[PostProcessing.NbViews-1].Max);

Printf("%g",err);

// Save View[PostProcessing.NbViews-1] "my_error.pos";

