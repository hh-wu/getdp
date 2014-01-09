//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GetDP simulation (choice of the problem)
//========================================================

Include "eigenvalues.dat" ;

DefineConstant[
  FLAG_EQN = {1, Choices{1="Scalar Helmholtz equation", 2="Vector Helmholtz equation"},
    Name "Input/02Problem", Highlight "Black"}
] ;

If (FLAG_EQN==1)
  FLAG_FORM = 0 ; // Nodal elements - Form0
EndIf
If (FLAG_EQN==2)
  If ((DIM==1) || (DIM==2))
    FLAG_FORM = 10 ; // Edge elements - Form1P (with rotation for 1D/2D)
  EndIf
  If (DIM==3)
    FLAG_FORM = 1 ; // Edge elements - Form1 (only for 3D)
  EndIf
EndIf

Group {
  Boundary = Region[{BND}] ;
  Domain = Region[{DOM}] ;
  Tot = Region[{Boundary,Domain}] ;
}

Constraint {
  { Name uConstraint ; Type Assign ;
    Case {
      { Region Boundary ; Value 0. ; }
    }
  }
}

Include "formulation.pro" ;
