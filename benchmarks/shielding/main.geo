//========================================================
// Benchmarks "Shielding effectiveness"
// File: GMSH geometry (choice of the problem)
//========================================================

Include "main.dat";

FreqName = StrCat[catParam3,"0Frequency [Hz]"];
lambdaName = StrCat[catParam3,"1Wavelength [m]"];

If(Flag_SizeMeshCell==0)
  lc = lcValue;
  UndefineConstant[ FreqName, lambdaName ];
EndIf
If(Flag_SizeMeshCell==1)
  DefineConstant[
    Freq = { 500e6, Min 400e6, Max 1e9, Step 20e6, Name Str[FreqName], Loop 1, Highlight Str[colorpp]},
    lambda = { c0/(Freq), Name Str[lambdaName], ReadOnly 1, Highlight Str[colorro]}
  ];
  lc = lambda/lambdaOnlc;
  If(lc>lcMax)
    lc = lcMax;
  EndIf
EndIf

If(Flag_Geometry==0)
  Include "cavity2D.geo";
EndIf
If(Flag_Geometry==1)
  Include "cavity2D_Wall.geo";
EndIf
If(Flag_Geometry==2)
  Include "cavity3D.geo";
EndIf
