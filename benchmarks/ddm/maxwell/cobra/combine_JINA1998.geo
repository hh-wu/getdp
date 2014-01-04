Include "params_JINA1998.geo";

N_DOM = 0;
For i In {0:4}
N_DOM += nDomList[i];
EndFor

//to compare to the full or exact solution, getdp needs to store u_init
If(FULL_SOLUTION || EXACT_SOLUTION)
  STORE_U_INIT = 1;
EndIf

For idom In {0:N_DOM-1}
  Merge Sprintf("e_vol_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;


Merge "e_lag_vol.pos";

Plugin(MathEval).Expression0= "v0-w0";
Plugin(MathEval).Expression1= "v1-w1";
Plugin(MathEval).Expression2= "v2-w2";
Plugin(MathEval).Expression3= "";
Plugin(MathEval).Expression4= "";
Plugin(MathEval).Expression5= "";
Plugin(MathEval).Expression6= "";
Plugin(MathEval).Expression7= "";
Plugin(MathEval).Expression8= "";
Plugin(MathEval).TimeStep=-1;
Plugin(MathEval).View=0;
Plugin(MathEval).OtherTimeStep=-1;
Plugin(MathEval).OtherView=1;
Plugin(MathEval).ForceInterpolation=1;
Plugin(MathEval).PhysicalRegion=-1;
Plugin(MathEval).Run;
