Include "circles_param.pro";

Merge Sprintf("u%g.pos", 1);
View[0].Visible = 0;
Merge Sprintf("u%g.pos", 2);
View[1].Visible = 0;

Plugin(MathEval).Expression0= "v0+w0";
Plugin(MathEval).View=0;
Plugin(MathEval).OtherView=1;
Plugin(MathEval).ForceInterpolation=0;
Plugin(MathEval).Run;

For iSub In {3:Nbr_SubProblems:1}
  Merge Sprintf("u%g.pos", iSub);
  Plugin(MathEval).View=iSub-1;
  Plugin(MathEval).OtherView=iSub;
  Plugin(MathEval).Run;

  View[iSub].Visible = 0;
  Delete View[iSub-1];
EndFor

View[iSub-1].Name = "u_Iter";
Merge "u0.pos";
View[iSub].Name = "u_Full";
