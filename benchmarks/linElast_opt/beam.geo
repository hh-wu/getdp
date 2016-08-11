Include "beam_data.geo";

// load geometry
If( !StrCmp(Flag_cao,"square2") )
  Include "square2.geo";
ElseIf( !StrCmp(Flag_cao,"square") )
  Include "square.geo";
ElseIf( !StrCmp(Flag_cao,"rotor") )
  Include "v.geo";
EndIf

// Velocity field for shape perturbation
//If(!StrCmp(Flag_optType,"shape"))
  Merge "../optimization/perturb_2.geo";
//EndIf

Merge "../optimization/refineMesh.geo";


