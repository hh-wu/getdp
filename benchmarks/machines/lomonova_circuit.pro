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
    DomainSource_Cir += Region[ {Input1, Input2, Input3} ] ;
  EndIf

  DomainZt_Cir    = Region[ {DomainZ_Cir, DomainSource_Cir} ];
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {
  DefineConstant[ ZR = {200, Choices{1e-8, 200, 1e8},
      Name "Input/8Load resistance", Highlight "AliceBlue"} ];
  Resistance[Region[{R1, R2, R3}]]  = ZR ;
}


// --------------------------------------------------------------------------

Constraint {
  If (SymmetryFactor==1 && Flag_Type==0)
    If(Flag_SrcType_Stator==0)
       { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region R1            ; Branch {100,102} ; }
          { Region Stator_Ind_1  ; Branch {102,103} ; } // Up
          { Region Stator_Ind_3  ; Branch {103,104} ; }
          { Region Stator_Ind_5  ; Branch {104,105} ; }

          { Region Stator_Ind_2  ; Branch {100,109} ; } // Um
          { Region Stator_Ind_4 ; Branch {109,108} ; }
          { Region Stator_Ind_18 ; Branch {108,105} ; }
        }
        Case Circuit2 {
          { Region R2            ; Branch {200,202} ; }
          { Region Stator_Ind_7  ; Branch {202,203} ; } // Vp
          { Region Stator_Ind_9  ; Branch {203,204} ; }
          { Region Stator_Ind_11 ; Branch {204,205} ; }

          { Region Stator_Ind_6  ; Branch {200,209} ; } // Vm
          { Region Stator_Ind_8 ; Branch {209,208} ; }
          { Region Stator_Ind_10 ; Branch {208,205} ; }
        }
        Case Circuit3 {
          { Region R3            ; Branch {300,302} ; }
          { Region Stator_Ind_13 ; Branch {302,303} ; } // Wp
          { Region Stator_Ind_15 ; Branch {303,304} ; }
          { Region Stator_Ind_17 ; Branch {304,305} ; }

          { Region Stator_Ind_12  ; Branch {300,309} ; } // Wm
          { Region Stator_Ind_14 ; Branch {309,308} ; }
          { Region Stator_Ind_16 ; Branch {308,305} ; }
        }
      }
    EndIf
    If(Flag_SrcType_Stator==2)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region Input1        ; Branch {100,101} ; }
          { Region R1            ; Branch {101,102} ; }
          { Region Stator_Ind_1  ; Branch {102,103} ; } // Up
          { Region Stator_Ind_3  ; Branch {103,104} ; }
          { Region Stator_Ind_5  ; Branch {104,105} ; }

          { Region Stator_Ind_2  ; Branch {100,109} ; } // Um
          { Region Stator_Ind_4 ; Branch {109,108} ; }
          { Region Stator_Ind_18 ; Branch {108,105} ; }
        }
        Case Circuit2 {
          { Region Input2        ; Branch {200,201} ; }
          { Region R2            ; Branch {201,202} ; }
          { Region Stator_Ind_7  ; Branch {202,203} ; } // Vp
          { Region Stator_Ind_9  ; Branch {203,204} ; }
          { Region Stator_Ind_11 ; Branch {204,205} ; }

          { Region Stator_Ind_6  ; Branch {200,209} ; } // Vm
          { Region Stator_Ind_8 ; Branch {209,208} ; }
          { Region Stator_Ind_10 ; Branch {208,205} ; }
        }
        Case Circuit3 {
          { Region Input3        ; Branch {300,301} ; }
          { Region R3            ; Branch {301,302} ; }
          { Region Stator_Ind_13 ; Branch {302,303} ; } // Wp
          { Region Stator_Ind_15 ; Branch {303,304} ; }
          { Region Stator_Ind_17 ; Branch {304,305} ; }

          { Region Stator_Ind_12 ; Branch {300,309} ; } // Wm
          { Region Stator_Ind_14 ; Branch {309,308} ; }
          { Region Stator_Ind_16 ; Branch {308,305} ; }
        }
      }
    EndIf
  EndIf
  If (SymmetryFactor==1 && Flag_Type>0)
    If(Flag_SrcType_Stator==0)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region R1            ; Branch {100,102} ; }
          { Region Stator_Ind_1  ; Branch {102,103} ; } // Up
          { Region Stator_Ind_7  ; Branch {103,104} ; }
          { Region Stator_Ind_13 ; Branch {104,105} ; }
          { Region Stator_Ind_19 ; Branch {105,106} ; }

          { Region Stator_Ind_4  ; Branch {100,109} ; } // Um
          { Region Stator_Ind_10 ; Branch {109,108} ; }
          { Region Stator_Ind_16 ; Branch {108,107} ; }
          { Region Stator_Ind_22 ; Branch {107,106} ; }
        }
        Case Circuit2 {
          { Region R2            ; Branch {200,202} ; }
          { Region Stator_Ind_2  ; Branch {202,203} ; } // Vp
          { Region Stator_Ind_8  ; Branch {203,204} ; }
          { Region Stator_Ind_14 ; Branch {204,205} ; }
          { Region Stator_Ind_20 ; Branch {205,206} ; }

          { Region Stator_Ind_5  ; Branch {200,209} ; } // Vm
          { Region Stator_Ind_11 ; Branch {209,208} ; }
          { Region Stator_Ind_17 ; Branch {208,207} ; }
          { Region Stator_Ind_23 ; Branch {207,206} ; }
        }
        Case Circuit3 {
          { Region R3            ; Branch {300,302} ; }
          { Region Stator_Ind_3  ; Branch {302,303} ; } // Wp
          { Region Stator_Ind_9  ; Branch {303,304} ; }
          { Region Stator_Ind_15 ; Branch {304,305} ; }
          { Region Stator_Ind_21 ; Branch {305,306} ; }

          { Region Stator_Ind_6  ; Branch {300,309} ; } // Wm
          { Region Stator_Ind_12 ; Branch {309,308} ; }
          { Region Stator_Ind_18 ; Branch {308,307} ; }
          { Region Stator_Ind_24 ; Branch {307,306} ; }
        }
      }
    EndIf
    If(Flag_SrcType_Stator==2)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region Input1        ; Branch {100,101} ; }
          { Region R1            ; Branch {101,102} ; }
          { Region Stator_Ind_1  ; Branch {102,103} ; } // Up
          { Region Stator_Ind_7  ; Branch {103,104} ; }
          { Region Stator_Ind_13 ; Branch {104,105} ; }
          { Region Stator_Ind_19 ; Branch {105,106} ; }

          { Region Stator_Ind_4  ; Branch {100,109} ; } // Um
          { Region Stator_Ind_10 ; Branch {109,108} ; }
          { Region Stator_Ind_16 ; Branch {108,107} ; }
          { Region Stator_Ind_22 ; Branch {107,106} ; }
        }
        Case Circuit2 {
          { Region Input2        ; Branch {200,201} ; }
          { Region R2            ; Branch {201,202} ; }
          { Region Stator_Ind_2  ; Branch {202,203} ; } // Vp
          { Region Stator_Ind_8  ; Branch {203,204} ; }
          { Region Stator_Ind_14 ; Branch {204,205} ; }
          { Region Stator_Ind_20 ; Branch {205,206} ; }

          { Region Stator_Ind_5  ; Branch {200,209} ; } // Vm
          { Region Stator_Ind_11 ; Branch {209,208} ; }
          { Region Stator_Ind_17 ; Branch {208,207} ; }
          { Region Stator_Ind_23 ; Branch {207,206} ; }
        }
        Case Circuit3 {
          { Region Input3        ; Branch {300,301} ; }
          { Region R3            ; Branch {301,302} ; }
          { Region Stator_Ind_3  ; Branch {302,303} ; } // Wp
          { Region Stator_Ind_9  ; Branch {303,304} ; }
          { Region Stator_Ind_15 ; Branch {304,305} ; }
          { Region Stator_Ind_21 ; Branch {305,306} ; }

          { Region Stator_Ind_6  ; Branch {300,309} ; } // Wm
          { Region Stator_Ind_12 ; Branch {309,308} ; }
          { Region Stator_Ind_18 ; Branch {308,307} ; }
          { Region Stator_Ind_24 ; Branch {307,306} ; }
        }
      }
    EndIf
  EndIf
  If(SymmetryFactor==4)
    If(Flag_SrcType_Stator==0)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region R1            ; Branch {100,102} ; }
          { Region Stator_Ind_1  ; Branch {102,103} ; } // Up
          { Region Stator_Ind_4  ; Branch {100,103} ; } // Um
        }
        Case Circuit2 {
          { Region R2            ; Branch {200,202} ; }
          { Region Stator_Ind_2  ; Branch {202,203} ; } // Vp
          { Region Stator_Ind_5  ; Branch {200,203} ; } // Vm
        }
        Case Circuit3 {
          { Region R3            ; Branch {300,302} ; }
          { Region Stator_Ind_3  ; Branch {302,303} ; } // Wp
          { Region Stator_Ind_6  ; Branch {300,303} ; } // Wm
        }
      }
    EndIf
    If(Flag_SrcType_Stator==2)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region Input1        ; Branch {100,101} ; }
          { Region R1            ; Branch {101,102} ; }
          { Region Stator_Ind_1  ; Branch {102,103} ; } // Up
          { Region Stator_Ind_4  ; Branch {100,103} ; } // Um
        }
        Case Circuit2 {
          { Region Input2        ; Branch {200,201} ; }
          { Region R2            ; Branch {201,202} ; }
          { Region Stator_Ind_2  ; Branch {202,203} ; } // Vp
          { Region Stator_Ind_5  ; Branch {200,203} ; } // Vm
        }
        Case Circuit3 {
          { Region Input3        ; Branch {300,301} ; }
          { Region R3            ; Branch {301,302} ; }
          { Region Stator_Ind_3  ; Branch {302,303} ; } // Wp
          { Region Stator_Ind_6  ; Branch {300,303} ; } // Wm
        }
      }
    EndIf
  EndIf
  If(SymmetryFactor==8)
    If(Flag_SrcType_Stator==0)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region R1            ; Branch {100,102} ; }
          { Region Stator_Ind_1  ; Branch {102,100} ; } // Up
        }
        Case Circuit2 {
          { Region R2            ; Branch {200,202} ; }
          { Region Stator_Ind_2  ; Branch {202,200} ; } // Vp
        }
        Case Circuit3 {
          { Region R3            ; Branch {300,302} ; }
          { Region Stator_Ind_3  ; Branch {302,300} ; } // Wp
        }
      }
    EndIf
    If(Flag_SrcType_Stator==2)
      { Name ElectricalCircuit ; Type Network ;
        Case Circuit1 {
          { Region Input1        ; Branch {100,101} ; }
          { Region R1            ; Branch {101,102} ; }
          { Region Stator_Ind_1  ; Branch {102,100} ; } // Up
        }
        Case Circuit2 {
          { Region Input2        ; Branch {200,201} ; }
          { Region R2            ; Branch {201,202} ; }
          { Region Stator_Ind_2  ; Branch {202,200} ; } // Vp
        }
        Case Circuit3 {
          { Region Input3        ; Branch {300,301} ; }
          { Region R3            ; Branch {301,302} ; }
          { Region Stator_Ind_3  ; Branch {302,300} ; } // Wp
        }
      }
    EndIf

  EndIf

}
