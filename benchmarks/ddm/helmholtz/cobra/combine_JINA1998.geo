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
  Merge Sprintf("u%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;


Merge "u.pos";

General.Trackball = 0;
General.RotationY = -45;
