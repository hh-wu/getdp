Include "dipole_data.geo";

If(Flag_3Dmodel==0)
  Include "dipole2d.geo";
EndIf
If(Flag_3Dmodel>0)
  //Include "dipole3d.geo"; // only one fourth
  Include "dipole3d_.geo"; // one eight or one fourth
EndIf

// Value scale type (1=linear, 2=logarithmic, 3=double logarithmic)
//View[PostProcessing.NbViews-1].ScaleType = 2;
View[PostProcessing.NbViews-1].NbIso = 25; // Number of intervals
View[PostProcessing.NbViews-1].IntervalsType = 1;
