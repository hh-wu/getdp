Include "freespace_data.geo";

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

General.Trackball = 0;
General.RotationX = -45 ;
General.RotationY = 0 ;
General.RotationZ = 15 ;

View[0].NormalRaise += View[0].Max*D ; // helpful to detect discontinuities
