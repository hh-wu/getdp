// Authors - J. Gyselinck, R.V. Sabariego (2013)
//
// Circuit for shaded pole machine
//

Group{
  // Dummy numbers for circuit definition
  Input1 = Region[10001] ;
  Input2 = Region[10002] ;
  Input3 = Region[10003] ;

  R1 = Region[55551] ;
  R2 = Region[55552] ;
  R3 = Region[55553] ;

  L1 = Region[55561] ;
  L2 = Region[55562] ;
  L3 = Region[55563] ;

  Resistance_Cir  = Region[{}];
  Inductance_Cir  = Region[{}];

  DomainZ_Cir = Region[ {Resistance_Cir, Inductance_Cir} ];

  If(Flag_Case < 2)
    DomainSource_Cir = Region[ {Input1, Input2, Input3} ] ;
  EndIf
  If(Flag_Case == 2) // Non-conducting rings
    DomainSource_Cir = Region[ {Input1} ] ;
  EndIf

  DomainZt_Cir    = Region[ {DomainZ_Cir, DomainSource_Cir} ];
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Constraint {
  If (Flag_Case<2)
    { Name ElectricalCircuit ; Type Network ;
      Case Circuit1 { // Coil
        { Region Input1        ; Branch {101,102} ; }
        { Region Stator_Ind_Am ; Branch {102,103} ; }
        { Region Stator_Ind_Ap ; Branch {101,103} ; }
      }
      Case Circuit2 { // Ring up
        { Region Input2        ; Branch {201,202} ; }
        { Region Stator_Ring_0 ; Branch {202,203} ; } // left
        { Region Stator_Ring_1 ; Branch {201,203} ; } // right
      }
      Case Circuit3 { // Ring down
        { Region Input3        ; Branch {301,302} ; }
        { Region Stator_Ring_2 ; Branch {302,303} ; } // left
        { Region Stator_Ring_3 ; Branch {301,303} ; } // right
      }
    }
  EndIf

  If (Flag_Case==2)
    { Name ElectricalCircuit ; Type Network ;
      Case Circuit1 { // Coil
        { Region Input1        ; Branch {101,102} ; }
        { Region Stator_Ind_Am ; Branch {102,103} ; }
        { Region Stator_Ind_Ap ; Branch {101,103} ; }
      }
    }
  EndIf
}
