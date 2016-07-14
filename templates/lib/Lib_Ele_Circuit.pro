// For electric circuit (strong) coupling

DefineConstant[ iP = 1 ];

/////
Macro Lib_Ele_Circuit

Group {
  DefineGroup[ DomainZt_Cir~{iP}, DomainSource_Cir~{iP},
               Resistance_Cir~{iP}, Inductance_Cir~{iP}, Capacitance_Cir~{iP}, Diode_Cir~{iP},
               Capacitance1_Cir~{iP}, Capacitance2_Cir~{iP} ];

  DomainZt_Cir~{iP} =
    Region[{Resistance_Cir~{iP}, Inductance_Cir~{iP},
            Capacitance_Cir~{iP}, Diode_Cir~{iP},
            Capacitance1_Cir~{iP}, Capacitance2_Cir~{iP},
            DomainSource_Cir~{iP}}];

}
Function {
  DefineFunction[ Resistance~{iP}, Inductance~{iP}, Capacitance~{iP} ];
}

Constraint{
  { Append; Name Voltage_Cir~{iP}; }
  { Append; Name Current_Cir~{iP}; }
}

// UZ and IZ for lumped impedances
FunctionSpace {
  { Name Hregion_Z~{iP}; Type Scalar;
    BasisFunction {
      { Name sr; NameOfCoef ir; Function BF_Region;
        Support DomainZt_Cir~{iP}; Entity DomainZt_Cir~{iP}; }
    }
    GlobalQuantity {
      { Name Iz; Type AliasOf       ; NameOfCoef ir; }
      { Name Uz; Type AssociatedWith; NameOfCoef ir; }
    }
    Constraint {
      { NameOfCoef Uz;
        EntityType Region; NameOfConstraint Voltage_Cir~{iP}; }
      { NameOfCoef Iz;
        EntityType Region; NameOfConstraint Current_Cir~{iP}; }
    }
  }
}

Return
//////


//
Macro Lib_Ele_Circuit_FO
Quantity {
  { Name Uz; Type Global; NameOfSpace Hregion_Z~{iP} [Uz]; }
  { Name Iz; Type Global; NameOfSpace Hregion_Z~{iP} [Iz]; }
}

Equation {
  GlobalTerm { NeverDt[ Dof{Uz}                     , {Iz} ]; In Resistance_Cir~{iP}; }
  GlobalTerm { NeverDt[ Resistance~{iP}[] * Dof{Iz} , {Iz} ]; In Resistance_Cir~{iP}; }

  GlobalTerm { [ Dof{Uz}                           , {Iz} ]; In Inductance_Cir~{iP}; }
  GlobalTerm { DtDof [ Inductance~{iP}[] * Dof{Iz} , {Iz} ]; In Inductance_Cir~{iP}; }

  GlobalTerm { [ Dof{Iz}        , {Iz} ]; In Capacitance1_Cir~{iP}; }
  GlobalTerm { NeverDt[ Dof{Iz} , {Iz} ]; In Capacitance2_Cir~{iP}; }
  GlobalTerm { DtDof [ Capacitance~{iP}[] * Dof{Uz} , {Iz} ]; In Capacitance_Cir~{iP}; }

  GlobalTerm { NeverDt[ Dof{Uz}                         , {Iz} ]; In Diode_Cir~{iP}; }
  GlobalTerm { NeverDt[ Resistance~{iP}[{Uz}] * Dof{Iz} , {Iz} ]; In Diode_Cir~{iP}; }
  // Keep the line below!
  GlobalTerm { [ 0. * Dof{Iz} , {Iz} ]; In DomainSource_Cir~{iP}; }
}

Return


//
Macro Lib_Ele_Circuit_PP

PostQuantity {

  { Name U; Value { Term { [ {Uz} ]; In DomainZt_Cir~{iP}; } } }
  { Name I; Value { Term { [ {Iz} ]; In DomainZt_Cir~{iP}; } } }

  { Name Z; Value { Term { [ ({Iz}!=0)? {Uz}/{Iz} : 0. ]; In DomainZt_Cir~{iP}; } } }

  { Name Um; Value { Term { [ Norm[{Uz}] ]; In DomainZt_Cir~{iP}; } } }
  { Name Im; Value { Term { [ Norm[{Iz}] ]; In DomainZt_Cir~{iP}; } } }


  { Name ModPhaseDegReg10;
    Value {
      Term {
        Type Global;
        [ Complex[ Norm[#10], Atan2[Im[#10], Re[#10]]/Pi*180. ] ];
        In DomainZt_Cir~{iP}; }
    }
  }

}

Return
