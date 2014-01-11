Include "params.geo";

//to compare to the full or exact solution, getdp needs to store u_init
If(FULL_SOLUTION || EXACT_SOLUTION)
  STORE_U_INIT = 1;
EndIf

For idom In {0:N_DOM-1}
  Merge Sprintf("e_vol_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;

General.Trackball = 0;
General.RotationX = 30 ;
General.RotationY = 30 ;
General.RotationZ = 0 ;

Merge "e_lag_vol.pos";

Plugin(MathEval).Expression0= "v0-w0";
Plugin(MathEval).Expression1= "v1-w1";
Plugin(MathEval).Expression2= "v2-w2";
Plugin(MathEval).View=0;
Plugin(MathEval).OtherView=1;
Plugin(MathEval).ForceInterpolation=1;
Plugin(MathEval).Run;
