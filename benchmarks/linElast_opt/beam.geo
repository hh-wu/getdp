Include "beam_data.geo";

If(!StrCmp(Flag_cao,"square"))
  Include "square.geo";
//  If (Flag_2D) //2D
//    Include "beam2D.geo";
//  EndIf
//  If (!Flag_2D) //3D
//    Include "beam3D.geo";
//  EndIf
EndIf
If(!StrCmp(Flag_cao,"rotor"))
  Include "v.geo";
EndIf
// Velocity field for shape perturbation
If(!StrCmp(Flag_optType,"shape"))
  Merge "../optimization/perturb_2.geo";
EndIf

Merge "../optimization/refineMesh.geo";



