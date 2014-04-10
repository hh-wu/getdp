Group {
  E1 = #1 ;       // voltage source

  Resistance_Cir  = #{};
  Inductance_Cir  = #{} ;
  SourceV_Cir = #{E1};

  DomainSource_Cir = #SourceV_Cir ;
  DomainZ_Cir = #{Resistance_Cir,Inductance_Cir};
  DomainZt_Cir = #{DomainZ_Cir, DomainSource_Cir} ;
}


Function {
  Resistance[DomainB] = 0.034/2/2 ; // 1 ohm per side
  Voltage[] = ($Time < 0.0004)? $Time/0.0004 : (($Time < 0.01)? 1.: 0.) ; //unit voltage step with initial slope
}

Constraint {
  { Name Current_2D ;
    Case {
    }
  }
  { Name Voltage_2D ;
    Case {
    }
  }

  { Name Current_Cir ;
    Case {
    }
  }
  { Name Voltage_Cir ;
    Case {
      { Region E1 ; Value VV ; TimeFunction  Voltage[] ;}
    }
  }

  { Name ElectricalCircuit ; Type Network ;
    Case Circuit1 {
     { Region E1    ; Branch {1,2} ; }
     { Region CoilL_down ; Branch {2,3} ; }
     { Region CoilR_down ; Branch {1,3} ; }
    }
  }

}

FunctionSpace{
  { Name Hregion_i_Mag_2D ; Type Vector ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_RegionZ ;
        Support DomainB ; Entity DomainB ; }
    }
    GlobalQuantity {
      { Name Ib ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Ub ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Ub ; EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef Ib ; EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }

  { Name Hregion_Z ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainZt_Cir ; Entity DomainZt_Cir ; }
    }
    GlobalQuantity {
      { Name Iz ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Uz ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Uz ; EntityType Region ; NameOfConstraint Voltage_Cir ; }
      { NameOfCoef Iz ; EntityType Region ; NameOfConstraint Current_Cir ; }
    }
  }

}








