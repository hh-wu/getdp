Group {
  Ein1 = # 10000 ;
  R1   = # 10001 ;

  Ein2 = # 20000 ;
  R2  =  # 20001 ;

  R12 =   # 1200012 ;

  R4 = # 40001;

  SourceI_Cir = Region[ {} ] ;

  If (Flag_TestCase==1 || Flag_TestCase==2)
    Resistance_Cir  = Region[ {R12} ] ;
    SourceV_Cir = Region[ {Ein1} ] ;
  EndIf
  If (Flag_TestCase==3)
    Resistance_Cir  = Region[ {R1, R2} ] ;
    SourceV_Cir = Region[ {Ein1, Ein2} ] ;
  EndIf
  If (Flag_TestCase==4)
    Resistance_Cir  = Region[ {R1, R4} ] ;
    SourceV_Cir = Region[ {Ein1} ] ;
  EndIf

  DomainZ_Cir = Region[ {Resistance_Cir} ] ;
  DomainSource_Cir = Region[ {SourceV_Cir, SourceI_Cir} ] ;
  DomainZt_Cir = Region[ {DomainZ_Cir, DomainSource_Cir} ] ;
}

Function {
  Resistance[R1] = Rp + Rwinding ;
  Resistance[R2] = Rs + Rwinding ;
  Resistance[R12] = Rp + 2*Rwinding ;
  Resistance[R4] = Rwinding + Rload ;
}


Constraint {

  { Name Current_Cir ;
    Case {
    }
  }

  { Name Voltage_Cir ;
    Case {
      { Region Ein1 ; Value val_Voltage1 ; TimeFunction I1[]; }
      If (Flag_TestCase==3)
        { Region Ein2 ; Value val_Voltage2 ; TimeFunction I2[]; }
      EndIf
    }
  }

  { Name ElectricalCircuit ; Type Network ;

  If(Flag_3Dmodel==0)
      If (Flag_TestCase==1 || Flag_TestCase==2)
      Case Circuit12 {
        { Region Ein1 ; Branch {1,2} ; }
        { Region R12 ;   Branch {2,3} ; }
        { Region IndB~{1} ; Branch {3,4} ; }
        { Region IndA~{1} ; Branch {4,5} ; }
        { Region IndB~{2} ; Branch {6,5} ; }
        { Region IndA~{2} ; Branch {1,6} ; }
      }
      EndIf

      If (Flag_TestCase==3)
      Case Circuit1 {
        { Region Ein1 ; Branch {1,2} ; }
        { Region R1 ;   Branch {2,3} ; }
        { Region IndB~{1} ; Branch {3,4} ; }
        { Region IndA~{1} ; Branch {4,1} ; }
      }
      Case Circuit2 {
        { Region Ein2 ; Branch {1,2} ; }
        { Region R2   ; Branch {2,3} ; }
        { Region IndB~{2} ; Branch {3,4} ; }
        { Region IndA~{2} ; Branch {4,1} ; }
      }
      EndIf
      If (Flag_TestCase==4)
      Case Circuit1 {
        { Region Ein1 ; Branch {1,2} ; }
        { Region R1 ;   Branch {2,3} ; }
        { Region IndB~{1} ; Branch {3,4} ; }
        { Region IndA~{1} ; Branch {4,1} ; }
      }
      Case Circuit2 {
        { Region R4   ; Branch {1,2} ; }
        { Region IndB~{2} ; Branch {2,3} ; }
        { Region IndA~{2} ; Branch {3,1} ; }
      }
      EndIf
  EndIf

  If(Flag_3Dmodel==1)
      If (Flag_TestCase==1 || Flag_TestCase==2)
      Case Circuit12 {
        { Region Ein1 ; Branch {1,2} ; }
        { Region R12 ;   Branch {2,3} ; }
        { Region Ind~{1} ; Branch {3,4} ; }
        { Region Ind~{2} ; Branch {4,1} ; }
      }
      EndIf

      If (Flag_TestCase==3)
      Case Circuit1 {
        { Region Ein1 ; Branch {1,2} ; }
        { Region R1 ;   Branch {2,3} ; }
        { Region Ind~{1} ; Branch {3,1} ; }
      }
      Case Circuit2 {
        { Region Ein2 ; Branch {1,2} ; }
        { Region R2   ; Branch {2,3} ; }
        { Region Ind~{2} ; Branch {3,1} ; }
      }
      EndIf
      If (Flag_TestCase==4)
      Case Circuit1 {
        { Region Ein1 ; Branch {1,2} ; }
        { Region R1 ;   Branch {2,3} ; }
        { Region Ind~{1} ; Branch {3,1} ; }
      }
      Case Circuit2 {
        { Region R4   ; Branch {1,2} ; }
        { Region Ind~{2} ; Branch {2,1} ; }
      }
      EndIf
  EndIf
  }
}