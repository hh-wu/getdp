Include "beam_data.geo";

If (Flag_2D) //2D
  Include "beam2D.geo";
EndIf
If (!Flag_2D) //3D
  Include "beam3D.geo";
EndIf

// Velocity field for shape perturbation
If(!StrCmp(Flag_optType,"shape"))
  Merge "../optimization/perturb.geo";
EndIf
