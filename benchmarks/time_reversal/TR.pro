/*
Time reversal experiment, 2D, rectangular volume mirror (thickness > 0).
Helmholtz equation.
Free space
Perfectly Matched Layer
*/
Include "TR_data.pro";

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
// Functions
Function {
  I[] = Complex[0., 1.] ;

  // Distance between a point (X,Y,Z) and the source (XS,YS,ZS):
  R[]= Sqrt[(X[] - XS)^2 + (Y[] - YS)^2 + (Z[] - ZS)^2];
  KR[] = k*R[];

  // Green2D[] = i/4*Hankel_0^{(1)}(kR[])
  Green2D[] = 0.25*Complex[-Yn[0,KR[]],Jn[0,KR[]]];
  // Green2D[] conjugated: 
  GreenConjug[] = -0.25*Complex[Yn[0,KR[]],Jn[0,KR[]]];
}

Include "TimeReversal.pro";
