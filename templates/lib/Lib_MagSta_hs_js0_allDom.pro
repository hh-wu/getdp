/*
  MagSta_hs_js0
    Magnetostatics - hs formulation
    (for computation of source magnetic fields associated with inductors)
*/

/* I N P U T
   ---------

  GlobalGroup :
  -----------
    Domain               Whole magnetic domain

    DomainS_SF{}
                             Stranded inductor regions

    Domain_SF{}          Domain of extension of each source field
    SkinDomain_SF_Zero{}
                             Boundary of the domain of extension of each source 
			     field with zero tangential source magnetic field
    SkinDomain_SF_Gauge{}
                             Skin of the domain of extension of each source field
			     (optional, must contain at least the surface with 
			     zero tangential hs-h, i.e. Constraint MagneticField).
			     The tree of edges for the gauge condition will start
			     on this skin.

  Function :
  --------
    js0[]                    Source current density

  Constraint :
  ----------
    MagneticField_Source     Fixed source magnetic field

    SourceCurrentDensityZ    Fixed source current density (in Z direction)

  Parameters :
  ----------
    Nb_DomainS_SF            Number of sources (inductors) and thus source fields

    Flag_Save_MagSta_hs_Solution
                             1 for saving solutions of hs
			     (only needed when hs is not used as a global
			      basis function via another formulation)

*/

// --------------------------------------------------------------------------

DefineConstant[ iP = 1 ];

Include "Lib_JacInt.pro";


DefineConstant[ Nb_DomainS_SF~{iP} = 0 ];
DefineConstant[ Flag_Save_MagSta_hs_Solution~{iP} = 0 ];

Function {
  DefineFunction[ js0~{iP} ];
}

For iInd In { 1:Nb_DomainS_SF~{iP} }
Group {
  DefineGroup[ DomainS_SF~{iInd}~{iP},
	       Domain_SF~{iInd}~{iP}, 
	       SkinDomain_SF_Zero~{iInd}~{iP},
	       SkinDomain_SF_Gauge~{iInd}~{iP} ];
}
EndFor

// --------------------------------------------------------------------------

//
For iInd In {1:Nb_DomainS_SF~{iP}}

Constraint {
  { Name MagneticField_Source~{iInd}~{iP};
    Case {
      { Region SkinDomain_SF_Zero~{iInd}~{iP}; Value 0.; }
    }
  }
  { Name GaugeCondition_hs~{iInd}~{iP}; Type Assign;
    Case {
      { Region Domain_SF~{iInd}~{iP};
        SubRegion SkinDomain_SF_Gauge~{iInd}~{iP};
        Value 0.; }
    }
  }
}


FunctionSpace {
  // Magnetic field hs (generalized source field)
  { Name Hcurl_hs~{iInd}~{iP}; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef he; Function BF_Edge;
        Support Domain_SF~{iInd}~{iP}; Entity EdgesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef he;
        EntityType EdgesOf; NameOfConstraint MagneticField_Source~{iInd}~{iP}; }
      { NameOfCoef he;  // Gauge condition
        EntityType EdgesOfTreeIn; EntitySubType StartingOn;
        NameOfConstraint GaugeCondition_hs~{iInd}~{iP}; }
    }
  }
}


Formulation {
  { Name Magnetostatics_hs~{iP}~{iInd}; Type FemEquation; // this order!
    Quantity {
      { Name hs; Type Local; NameOfSpace Hcurl_hs~{iInd}~{iP}; }
    }
    Equation {
      Integral { [ Dof{d hs} , {d hs} ]; In Domain_SF~{iInd}~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      /*
      Integral { [ Dof{d hs} , {d hs} ];
        In #{(dim_+SKIN_IND_PLUS_1)}; Jacobian Sur; Integration Gauss_v~{iP}; }
      */
      Integral { [ - js0~{iP}[] , {d hs} ]; In DomainS_SF~{iInd}~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}


Resolution {
  { Name MagSta_hs~{iP}~{iInd}; // this order!
    System {
      { Name Sys_Mag; NameOfFormulation Magnetostatics_hs~{iP}~{iInd}; }
    }
    Operation {
      Generate Sys_Mag; Solve Sys_Mag;
      If (Flag_Save_MagSta_hs_Solution~{iP})  SaveSolution Sys_Mag;  EndIf
    }
  }
}


PostProcessing {
  { Name MagSta_hs~{iInd}~{iP}; NameOfFormulation Magnetostatics_hs~{iP}~{iInd};
    PostQuantity {
      { Name hs; Value { Term { [ {hs} ]; Jacobian Vol~{iP};
        In Domain_SF~{iInd}~{iP}; } } }
      { Name js; Value { Term { [ {d hs} ]; Jacobian Vol~{iP};
        In Domain_SF~{iInd}~{iP}; } } }
      { Name js0; Value { Term { [ js0~{iP}[] ];
        In DomainS_SF~{iInd}~{iP}; } } }
      { Name jsx; Value { Term { [ CompX[{d hs}] ];
        In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
      { Name jsy; Value { Term { [ CompY[{d hs}] ];
        In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
      { Name jsz; Value { Term { [ CompZ[{d hs}] ];
        In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
    }
  }
}

EndFor 
//
