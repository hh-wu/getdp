Include "params.geo";

For idom In {0:N_DOM-1}
  Merge Sprintf("u%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;

Merge "u.pos";

// Plugin(MathEval).Expression0 = "v0-w0";
// Plugin(MathEval).View = 0;
// Plugin(MathEval).OtherView = 1;
// Plugin(MathEval).ForceInterpolation = 0;
// Plugin(MathEval).Run;
