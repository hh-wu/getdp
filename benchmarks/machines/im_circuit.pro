//
// Circuit for induction motor
//

Group{
  // Dummy numbers for circuit definition
  R1 = #55551 ;
  R2 = #55552 ;
  R3 = #55553 ;

  L1 = #55561 ;
  L2 = #55562 ;
  L3 = #55563 ;

  Input1 = #10001 ;
  Input2 = #10002 ;
  Input3 = #10003 ;

  Resistance_Cir  = Region[{}];
  Inductance_Cir  = Region[{L1, L2, L3}];
  DomainZ_Cir = Region[ {Resistance_Cir, Inductance_Cir} ];
  DomainSource_Cir = Region[ {Input1, Input2, Input3} ] ;

  DomainZt_Cir    = Region[ {DomainZ_Cir, DomainSource_Cir} ];
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {
  DefineConstant[ ZR = { 1e-8, Choices{ 1e8 ="Open circuit",
                                        200 ="Load",
                                        1e-8="Short Circuit"}, Visible 0} ];
  Resistance[#{R1, R2, R3}]  = ZR ;
  Inductance[#{L1, L2, L3}]  = Ls ; // end windings

}


// --------------------------------------------------------------------------

Constraint {

  If (SymmetryFactor<4)
    { Name ElectricalCircuit ; Type Network ;
      Case Circuit1 {
        { Region Input1        ; Branch {100,101} ; }
        { Region L1            ; Branch {101,102} ; }
        { Region Stator_Ind_Ap ; Branch {102,103} ; }
        { Region Stator_Ind_Am ; Branch {100,103} ; }
      }
      Case Circuit2 {
        { Region Input2        ; Branch {200,201} ; }
        { Region L2            ; Branch {201,202} ; }
        { Region Stator_Ind_Bp ; Branch {202,203} ; }
        { Region Stator_Ind_Bm ; Branch {200,203} ; }
      }
      Case Circuit3 {
        { Region Input3        ; Branch {300,301} ; }
        { Region L3            ; Branch {301,302} ; }
        { Region Stator_Ind_Cp ; Branch {302,303} ; }
        { Region Stator_Ind_Cm ; Branch {300,303} ; }
      }
    }
  EndIf

  If(SymmetryFactor==4) // Only one physical region in geo allow per branch
  { Name ElectricalCircuit ; Type Network ;
    Case Circuit1 {
      { Region Input1        ; Branch {100,101} ; }
      { Region L1            ; Branch {101,102} ; }
      { Region Stator_Ind_Ap ; Branch {102,100} ; }
    }
    Case Circuit2 {
      { Region Input2        ; Branch {200,201} ; }
      { Region L2            ; Branch {201,202} ; }
      { Region Stator_Ind_Bp ; Branch {202,200} ; }
    }
    Case Circuit3 {
      { Region Input3        ; Branch {300,301} ; }
      { Region L3            ; Branch {301,302} ; }
      { Region Stator_Ind_Cm ; Branch {300,302} ; }
    }
  }
  EndIf
}

