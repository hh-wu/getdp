//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GetDP simulation (choice of the problem)
//========================================================

Include "main.dat" ;

FLAG_EQN = DefineNumber[1, Name "Input/02Problem", Highlight "Black",
     Choices {1="Scalar Helmholtz equation", 2="Vector Helmholtz equation"}];

If (FLAG_EQN==1)
  FLAG_FORM = 0 ; // Nodal elements - Form0
EndIf

If ((FLAG_EQN==2) && ((DIM==1) || (DIM==2)))
  FLAG_FORM = 10 ; // Edge elements - Form1P (with rotation for 1D/2D)
EndIf

If ((FLAG_EQN==2) && (DIM==3))
  FLAG_FORM = 1 ; // Edge elements - Form1 (only for 3D)
EndIf

Group {
  Bnd = Region[{BND}] ;
  Dom = Region[{DOM}] ;
  Tot = Region[{Bnd,Dom}] ;
}

Include "formulation.pro" ;
