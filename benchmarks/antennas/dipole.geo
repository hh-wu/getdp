Include "dipole_data.geo";

If(Flag_model==0)
  Include "dipole2d.geo";
EndIf
If(Flag_model==1)
  Include "dipole3d.geo"; // one eight or one fourth
EndIf

// Value scale type (1=linear, 2=logarithmic, 3=double logarithmic)
//View[PostProcessing.NbViews-1].ScaleType = 2;
View[PostProcessing.NbViews-1].NbIso = 25; // Number of intervals
View[PostProcessing.NbViews-1].IntervalsType = 1;
