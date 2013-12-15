Include "params.geo";

//to compare to the full or exact solution, getdp needs to store u_init
If(FULL_SOLUTION || EXACT_SOLUTION)
  STORE_U_INIT = 1;
EndIf

For idom In {0:N_DOM-1}
  Merge Sprintf("e_vol_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;

View[0].Name = "e_DDM";
Save View[0] Sprintf("e_DDM_vol.pos") ;

/*
If(geo3d)
  General.Clip0A = 0;
  General.Clip0B = 0;
  General.Clip0C = -1;
  General.Clip0D = 0;

  View[0].Clip = 1;
  View[0].IntervalsType = 0;

  View[1].Clip = 1;
  View[1].IntervalsType = 0;

  General.Trackball = 0;
  General.RotationY = -45;
  General.RotationX = 45;
  General.RotationZ = -15;
EndIf
*/
