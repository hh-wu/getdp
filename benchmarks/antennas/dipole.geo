Include "dipole_data.geo";

If(Flag_3Dmodel==0)
  Include "dipole2d.geo";
EndIf
If(Flag_3Dmodel==1)
  Include "dipole3d.geo";
  // Rectangular PML --> 1:one eight, 2:one fourth, 3:full
  // Cylindrical PML --> more freedom for choosing the wedge angle
EndIf

// Value scale type (1=linear, 2=logarithmic, 3=double logarithmic)
//View[PostProcessing.NbViews-1].ScaleType = 2;
View[PostProcessing.NbViews-1].NbIso = 25; // Number of intervals
View[PostProcessing.NbViews-1].IntervalsType = 1;
