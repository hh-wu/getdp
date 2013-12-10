/*
Time reversal experiment, 2D, rectangular volume mirror (thickness > 0).
Helmholtz equation.
Free space
Perfectly Matched Layer
*/
Include "TR_data.pro";
Include "TR_getdp_data.pro";

Group{
// Time Reversal Mirror (TRM)
TRM = Region[{1}];
TRM_Bnd = Region[{11}];
//Exterior domain (Propagation without TRM, without source)
Exterior_Domain = Region[{2}];
//Inter interne au domaine (troncature domaine de propagation)
Exterior_Bnd = Region[{12}];
// PML
PML = Region[{3}];
PML_Bnd = Region[{13}];

//Propagation domain (all without PML)
Propagation_Domain = Region[{Exterior_Domain, TRM}];
Propagation_Bnd = Region[{Exterior_Bnd, TRM_Bnd}];
}

// =======================================================================================

If(!MultiFreq)
  Include "TimeReversal.pro";
EndIf
If(MultiFreq)
  Include "TimeReversal_Broadband.pro";
EndIf
DefineConstant[
  C_ = {"-solve -pos -bin", Name "GetDP/9ComputeCommand"}
];

