Include "cavitySchrod2d_data.geo";

For idom In {0:N_DOM-1}
  Merge Sprintf("out/u_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;

View[0].Visible = 0;

For idom In {0:N_DOM-1}
  Merge Sprintf("out/f_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;

View[0].Visible = 1;

// Plugin(MathEval).Expression0 = "v0-w0";
// Plugin(MathEval).View = 0;
// Plugin(MathEval).OtherView = 1;
// Plugin(MathEval).ForceInterpolation = 0;
// Plugin(MathEval).Run;
