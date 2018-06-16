Include "sphere_concentric_data.geo";

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
General.RotationX = 0 ;
General.RotationY = 90 ;
General.RotationZ = 0 ;
View.IntervalsType = 1;
View.Clip = 1;
If(ANALYSIS == 1)
  General.ClipOnlyDrawIntersectingVolume = 1;
  General.ClipWholeElements = 1;
EndIf

