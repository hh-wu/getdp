// This file is part of a mechanism that detects if the mesh currently
// on disk does not match the current parameters, and remeshes if
// needed.  Written by Alexandre Vion.

Include "params.geo";

MTL = "V";
If (!SPLIT_V) MTL = "H"; EndIf
MESHTESTSTRING = StrCat[MTL, Sprintf["%g",N_DOM]];
Include "lastMesh.pro";

If(StrCmp(MESHTESTSTRING, LASTMESHSTRING))
Printf(" *** Wrong mesh detected, remeshing *** ");
  Include "marmousi_split.geo";
EndIf
