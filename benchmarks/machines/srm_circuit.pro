//
// Circuit for Permanent Magnet Synchronous Generator - cbmag
//

Group{
  // Dummy numbers for circuit definition
  R1 = Region[55551] ;
  R2 = Region[55552] ;
  R3 = Region[55553] ;

  Input1 = Region[10001] ;
  Input2 = Region[10002] ;
  Input3 = Region[10003] ;

  Resistance_Cir  = Region[{R1, R2, R3}];
  DomainZ_Cir = Region[ {Resistance_Cir} ];

  DomainSource_Cir = Region[ {} ] ;
  If(Flag_SrcType_Stator>1)
    DomainSource_Cir += Region[ {Input1} ] ; // Only one phase is fed
  EndIf

  DomainZt_Cir    = Region[ {DomainZ_Cir, DomainSource_Cir} ];
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {
  // Open circuit - load - short circuit
  DefineConstant[ ZR = {1, Choices{1e-8, 1, 1e8},
      Name "Input/8Load resistance [Ohm]", Highlight "AliceBlue"} ];
  Resistance[R1]     = ZR ;
  Resistance[Region[{R2, R3}]] = 1e8 ;
}

// --------------------------------------------------------------------------

Constraint {
    { Name ElectricalCircuit ; Type Network ;
      Case Circuit1 { // Only one phase is fed
        If(SymmetryFactor==2) // Inverted connexion
          { Region Input1        ; Branch {100,101} ; }
          { Region R1            ; Branch {101,102} ; }
          { Region Stator_Ind_Ap ; Branch {102,103} ; }
          { Region Stator_Ind_Am ; Branch {100,103} ; }
        EndIf
        If(SymmetryFactor==1)
          { Region Input1         ; Branch {100,101} ; }
          { Region R1             ; Branch {101,102} ; }
          { Region Stator_Ind_Ap  ; Branch {102,103} ; }
          { Region Stator_Ind_Ap_ ; Branch {104,103} ; }
          { Region Stator_Ind_Am  ; Branch {105,104} ; }
          { Region Stator_Ind_Am_ ; Branch {105,100} ; }
        EndIf
      }
      // In this example, only phase A is fed
      Case Circuit2 {
        If(SymmetryFactor==2)
          { Region R2            ; Branch {201,202} ; }
          { Region Stator_Ind_Bp ; Branch {202,203} ; }
          { Region Stator_Ind_Bm ; Branch {201,203} ; }
        EndIf
        If(SymmetryFactor==1)
          { Region R2             ; Branch {201,202} ; }
          { Region Stator_Ind_Bp  ; Branch {202,203} ; }
          { Region Stator_Ind_Bp_ ; Branch {204,203} ; }
          { Region Stator_Ind_Bm  ; Branch {205,204} ; }
          { Region Stator_Ind_Bm_ ; Branch {205,201} ; }
        EndIf
      }
      Case Circuit3 {
        If(SymmetryFactor==2)
          { Region R3            ; Branch {301,302} ; }
          { Region Stator_Ind_Cp ; Branch {302,303} ; }
          { Region Stator_Ind_Cm ; Branch {301,303} ; }
        EndIf
        If(SymmetryFactor==1)
          { Region R3             ; Branch {301,302} ; }
          { Region Stator_Ind_Cp  ; Branch {302,303} ; }
          { Region Stator_Ind_Cp_ ; Branch {304,303} ; }
          { Region Stator_Ind_Cm  ; Branch {305,304} ; }
          { Region Stator_Ind_Cm_ ; Branch {305,301} ; }
        EndIf
      }
    }
}
