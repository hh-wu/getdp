Include "waveguide3d_data.geo";

If(ANALYSIS == 0)
  name = "u";
EndIf
If(ANALYSIS == 1)
  name = "e";
EndIf

For i In {1:N_DOM}
  Merge StrCat(DIR, StrCat(name, Sprintf("_%g.pos", i)));
EndFor
Combine ElementsFromVisibleViews;

If (ANALYSIS == 0)
  View.IntervalsType = 1;
EndIf

General.Trackball = 0;
General.RotationX = 30 ;
General.RotationY = 30 ;
General.RotationZ = 0 ;

General.Clip2C = -1.;
General.Clip2D = .5;
View[0].Clip = 4;

