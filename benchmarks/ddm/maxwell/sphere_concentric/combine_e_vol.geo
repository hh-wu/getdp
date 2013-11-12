Include "params.geo";

For i In {0:(N_DOM-1)}
  Merge Sprintf("e_vol_%g.pos", i);
EndFor

Combine ElementsFromVisibleViews;
View[0].Name = "e_vol_ddm";

// View[0].Visible = 0;
Merge "e_lag_vol.pos";
