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

Save View[PostProcessing.NbViews-1] "uiter.pos";

Merge "u0.pos";
View[PostProcessing.NbViews-1].Name = "u_Full";
