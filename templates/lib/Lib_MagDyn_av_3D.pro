/*
  MagSta_a_3D
    Magnetostatics - Magnetic vector potential a formulation (3D)
*/

/* I N P U T
   ---------

  GlobalGroup :
  -----------
    Domain                   Whole magnetic domain
    DomainS0                 Inductor regions (Source) with function js0[]

    Surface_FixedMagneticVectorPotential
                             Surface of fixed magnetic vector potential (a)

  Function :
  --------
    nu[]                     Magnetic reluctivity
    js0[]                    fixed current density in DomainS~{MAG}

  Constraint :
  ----------
    MagneticVectorPotential  Fixed magnetic vector potential circulation
                             (classical boundary condition)

*/

/* --------------------------------------------------------------------------*/

DefineConstant[ iP = 1 ];

// INIT

DefineConstant[ ResDir = "Res/" ];

//+++
DefineConstant[
  TYPE_GAUGE_NONE              = 0,
  TYPE_GAUGE_TREE_COTREE       = 1,
  TYPE_GAUGE_ORTHOGONALITYCOND = 2,

  type_Gauge = TYPE_GAUGE_TREE_COTREE
];


DefineConstant[
  // TYPES
  // Levels of complexity
 T_MAGDYN_AV_A_ONLY                     = 1,
 T_MAGDYN_AV_MASSIVE_CONDUCTOR_RELATION = 2,
 T_MAGDYN_AV_COIL_RELATION              = 3,
 T_MAGDYN_AV_CIRCUIT_COUPLING           = 4,
 // Other types
 T_MAGDYN_AV_FLUX_TUBE         = 11,
 T_MAGDYN_AV_SURFACE_IMPEDANCE = 12,
 T_MAGDYN_AV_PERFECT_COND      = 13,

 T_MAGDYN_AV_CIRCUIT_COUPLING  = 21,

 T_MAGDYN_AV_THERMAL_COUPLING  = 22
];


DefineConstant[
  DimPro~{iP} = 2,

  Coef_JouleLosses~{iP} = 1. // 0.5 if Joule losses not from rms values
];

DefineConstant[

  Flag_Lib~{T_MAGDYN_AV_SURFACE_IMPEDANCE}~{iP} = 0,
  Flag_Lib~{T_MAGDYN_AV_PERFECT_COND}~{iP} = 0,
  Flag_Lib~{T_MAGDYN_AV_FLUX_TUBE}~{iP} = 1

  Flag_CircuitCoupling~{iP} = 0,
  Flag_Lib~{T_MAGDYN_AV_CIRCUIT_COUPLING}~{iP} = Flag_CircuitCoupling~{iP},


  Level_Lib~{iP} =
    (!Flag_CircuitCoupling~{iP})?
      T_MAGDYN_AV_COIL_RELATION
      :
      T_MAGDYN_AV_CIRCUIT_COUPLING
];



Include "Lib_JacInt.pro";


Group {
  DefineGroup[ Domain~{iP}, DomainCC~{iP}, DomainC~{iP}, DomainS0~{iP} ];

  DomainWithSurf~{iP} = Region[ {Domain~{iP}} ];
}

Function {
  DefineFunction[ nu~{iP}, sigma~{iP} ];
  DefineFunction[ js0~{iP} ];

  DefineConstant[ Freq~{iP} = 0. ];

  DefineConstant[
    Flag_MagDyn_Thermal_Coupling_Mag~{iP} = 0,
    Coef_JouleLosses~{iP} = 1. // 0.5 if Joule losses not from rms values
  ];
}

// Magnetostatics - hs formulation for computing the source
Include "Lib_MagSta_hs_js0.pro";

//+++
If (Flag_Lib~{T_MAGDYN_AV_CIRCUIT_COUPLING}~{iP})
  Include "Lib_Ele_Circuit.pro";
EndIf


//

FunctionSpace {
  // Magnetic vector potential a (b = curl a)
  { Name Hcurl_a~{iP}; Type Form1;
    BasisFunction {
      { Name s_e; NameOfCoef a_e; Function BF_Edge;
        Support DomainWithSurf~{iP}; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef a_e;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential~{iP}; }
    }
  }
}


Formulation {
  { Name MagSta_a~{iP}; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a~{iP}; }
    }
    Equation {
      Galerkin { [ nu~{iP}[] * Dof{d a} , {d a} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      Galerkin { [ - js0~{iP}[] , {a} ]; In DomainS0~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}

Formulation {
  { Name MagDyn_a~{iP}; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a~{iP}; }
    }
    Equation {
      Galerkin { [ nu~{iP}[] * Dof{d a} , {d a} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ - js0~{iP}[] , {a} ]; In DomainS0~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { DtDof[ sigma~{iP}[] * Dof{a} , {a} ]; In DomainC~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}


Resolution {
  { Name MagSta_a~{iP};
    System {
      { Name Sys_Mag; NameOfFormulation MagSta_a~{iP}; }
    }
    Operation {
      Generate Sys_Mag; Solve Sys_Mag; SaveSolution Sys_Mag;
    }
  }
  { Name MagDyn_a~{iP};
    System {
      { Name Sys_Mag; NameOfFormulation MagDyn_a~{iP}; Frequency Freq~{iP}; }
    }
    Operation {
      Generate Sys_Mag; Solve Sys_Mag; SaveSolution Sys_Mag;
    }
  }
}


PostProcessing {
  { Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name a; Value { Term { [ {a} ]; Jacobian Vol~{iP}; In Domain~{iP}; }}}

      { Name az; Value { Term { [ CompZ[{a}] ]  ; Jacobian Vol~{iP}; In Domain~{iP}; }}}
      { Name b ; Value { Term { [ {d a} ]       ; Jacobian Vol~{iP}; In Domain~{iP}; }}}
      { Name h ; Value { Term { [ nu~{iP}[]*{d a} ]; Jacobian Vol~{iP}; In Domain~{iP}; }}}

      { Name js; Value { Term { [ js0~{iP}[] ]; Jacobian Vol~{iP}; In DomainS0~{iP}; }}}

      { Name js0; Value { Term { [ js0~{iP}[] ]; Jacobian Vol~{iP}; In DomainS0~{iP}; }}}

      { Name j;
        Value {
          Term { [ js0~{iP}[] ]; Jacobian Vol~{iP}; In DomainS0~{iP}; }
          Term { [ -sigma~{iP}[] * Dt[{a}] ]; Jacobian Vol~{iP}; In DomainC~{iP}; }
        }
      }

      { Name show_region;
        Value {
          Term { [ 1 ]; In DomainCC~{iP}; Jacobian Vol~{iP}; }
          Term { [ 2 ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
        }
      }

    }
  }
}


// EXTENSIONS

Group {
  DefineGroup[ SkinDomainC~{iP} ];
  DomainWithSurf~{iP} += Region[ {SkinDomainC~{iP}} ];

  //+++
  DefineGroup[ Domain_Dim_2~{iP} ];
  DomainC_in_Domain_Dim_2~{iP} = Region[{Domain_Dim_2~{iP}, -DomainCC~{iP}}];

  DefineGroup[ Surface_SkinC_BFs~{iP} ];
  Surface_SkinC_BFs~{iP} += Region[{SkinDomainC~{iP}}];
  Surface_SkinC_BFs~{iP} += Region[{DomainC_in_Domain_Dim_2~{iP}}];
}


//
If (Flag_Lib~{T_MAGDYN_AV_FLUX_TUBE}~{iP})

Group {
  DefineGroup[ Sur_FluxTube~{iP}, TLayer~{iP}, CutLine_FluxTube~{iP} ];
  DefineGroup[ Surface_Global_BFs~{iP} ];
  Surface_Global_BFs~{iP} += Region[{Sur_FluxTube~{iP}}];

  _TransitionLayer_SurfaceNoFlux_~{iP} =
    ElementsOf[TLayer~{iP}, OnOneSideOf CutLine_FluxTube~{iP}];
}

FunctionSpace {

  { Append;
    Name Hcurl_a~{iP}; Type Form1;
    BasisFunction {
      { Name s_ft; NameOfCoef a_ft; Function BF_GroupOfEdges;
        Support DomainWithSurf~{iP};
        Entity GroupsOfEdgesOf[ CutLine_FluxTube~{iP},
                                InSupport _TransitionLayer_SurfaceNoFlux_~{iP} ]; }
    }
    GlobalQuantity {
      { Name Flux; Type AliasOf       ; NameOfCoef a_ft; }
      { Name MMF ; Type AssociatedWith; NameOfCoef a_ft; }
    }
    SubSpace {
      { Name a_ft; NameOfBasisFunction {s_ft}; }
    }
    Constraint {
      { NameOfCoef a_ft;
        EntityType GroupsOfEdgesOf; NameOfConstraint MagneticFlux~{iP}; }
      { NameOfCoef Flux;
        EntityType GroupsOfEdgesOf; NameOfConstraint MagneticFlux~{iP}; }
      { NameOfCoef MMF;
        EntityType GroupsOfEdgesOf; NameOfConstraint MMF~{iP}; }
    }
  }

}

Formulation {
  { Append;
    Name MagSta_a~{iP}; Type FemEquation;
    Quantity {
      { Name a_ft; Type Local ; NameOfSpace Hcurl_a~{iP} [a_ft]; }
      { Name Flux; Type Global; NameOfSpace Hcurl_a~{iP} [Flux]; }
      { Name MMF ; Type Global; NameOfSpace Hcurl_a~{iP} [MMF]; }
    }
    Equation {
      GlobalTerm { [ Dof{MMF} , {Flux} ]; In CutLine_FluxTube~{iP}; }
    }
  }
}

Formulation {
  { Append;
    Name MagDyn_a~{iP}; Type FemEquation;
    Quantity {
      { Name a_ft; Type Local ; NameOfSpace Hcurl_a~{iP} [a_ft]; }
      { Name Flux; Type Global; NameOfSpace Hcurl_a~{iP} [Flux]; }
      { Name MMF ; Type Global; NameOfSpace Hcurl_a~{iP} [MMF]; }
    }
    Equation {
      GlobalTerm { [ Dof{MMF} , {Flux} ]; In CutLine_FluxTube~{iP}; }
    }
  }
}


PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name a_ft;
        Value {
          Term { [ {a_ft} ]; Jacobian Vol~{iP}; In #{Domain~{iP}}; }
          Term { [ {a_ft} ]; Jacobian Sur~{iP}; In #{Sur_FluxTube~{iP}}; }
        }
      }

      { Name Flux; Value { Term { [ {Flux} ]; In CutLine_FluxTube~{iP}; } } }
      { Name MMF ; Value { Term { [ {MMF}  ]; In CutLine_FluxTube~{iP}; } } }
      { Name Reluctance; Value { Term { [ {MMF}/{Flux} ]; In CutLine_FluxTube~{iP}; } } }
    }
  }
}


EndIf


//
If (Level_Lib~{iP} >= T_MAGDYN_AV_MASSIVE_CONDUCTOR_RELATION)

Group {
  DefineGroup[ SurfaceElec~{iP} ];
}



PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name j; Value { /* ... */ }}

      /*
      { Name U; Value { Term { [ {U} ]; In SurfaceElec~{iP}; } } }
      { Name I; Value { Term { [ {I} ]; In SurfaceElec~{iP}; } } }
      { Name Z; Value { Term { [ ({I}!=0)? {U}/{I} : 0. ]; In SurfaceElec~{iP}; } } }
      { Name Um; Value { Term { [ Norm[{U}] ]; In SurfaceElec~{iP}; } } }
      { Name Im; Value { Term { [ Norm[{I}] ]; In SurfaceElec~{iP}; } } }
      */
    }
  }
}

EndIf


//
If (Level_Lib~{iP} >= T_MAGDYN_AV_COIL_RELATION)

Group {
  DefineGroup[ DomainS~{iP} ];
  DefineGroup[ DomainSref_SF~{iP} ];
}

Function {
  DefineConstant[ Nb_DomainS_SF~{iP} = NbrRegions[DomainS~{iP}] ];
}


//
If (type_Js == TYPE_JS_CURL_HS)

FunctionSpace {
  // Source magnetic field
  { Name Hregion_hs~{iP}; Type Form1;
    BasisFunction {
      { Name s_r; NameOfCoef i_r;  // Global Basis Function
	Function BF_Global { Quantity hs;
	                     Formulation Magnetostatics_hs {Nb_DomainS_SF~{iP}};
                             //+++ to be modified with Sref when union of portions of ind.
	                     Group DomainS~{iP} /*DomainSref_SF~{iP}*/;
                             Resolution MagSta_hs~{iP} {Nb_DomainS_SF~{iP}}; };
        //+++
        Support DomainS~{iP}; Entity Global [DomainS~{iP} /*DomainSref_SF~{iP}*/]; }
    }
    GlobalQuantity {
      { Name Is; Type AliasOf       ; NameOfCoef i_r; }
      { Name Us; Type AssociatedWith; NameOfCoef i_r; }
    }
    Constraint {
      { NameOfCoef Is;
        EntityType Global; NameOfConstraint Current~{iP}; }
      { NameOfCoef Us;
        EntityType Global; NameOfConstraint Voltage~{iP}; }
    }
  }
}

Formulation {
  { Append;
    Name MagDyn_a~{iP}; Type FemEquation;
    Quantity {
      // LEVEL_MAGDYN_AV_3D_COIL_RELATION
      { Name hs; Type Local ; NameOfSpace Hregion_hs~{iP}; }
      { Name Is; Type Global; NameOfSpace Hregion_hs~{iP} [Is]; }
      { Name Us; Type Global; NameOfSpace Hregion_hs~{iP} [Us]; }
    }
    Equation {
      Galerkin { [ - Dof{d hs} , {a} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { DtDof[ Dof{a} , {d hs} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      Galerkin { [ (1/sigma~{iP}[]) * Dof{d hs} , {d hs} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      GlobalTerm { [ Dof{Us} , {Is} ]; In DomainS~{iP}; }
    }
  }
}


PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name js; Value { Term { [ {d hs} ]; Jacobian Vol~{iP}; In DomainS~{iP}; }}}
      { Name hs; Value { Term { [ {hs} ]; Jacobian Vol~{iP}; In DomainS~{iP}; }}}
      { Name j; Value { Term { [ {d hs} ]; Jacobian Vol~{iP}; In DomainS~{iP}; }}}
    }
  }
}


ElseIf (type_Js == TYPE_JS_ELEKIN_VS)

FunctionSpace {
  { Name Hregion_vs~{iP}; Type Form0;
    BasisFunction {
      { Name s_r; NameOfCoef i_r;  // Global Basis Function
	Function BF_Global { Quantity vs;
	                     Formulation EleKin_vs~{iP} {Nb_DomainS_SF~{iP}};
                             //+++ modified with Sref when union of portions of ind.
	                     Group DomainSref_SF~{iP};
                             Resolution EleKin_vs~{iP} {Nb_DomainS_SF~{iP}}; };
        //+++
        Support DomainS~{iP}; Entity Global [DomainSref_SF~{iP}]; }
    }
    GlobalQuantity {
      { Name Is; Type AliasOf       ; NameOfCoef i_r; }
      { Name Us; Type AssociatedWith; NameOfCoef i_r; }
    }
    Constraint {
      { NameOfCoef Is;
        EntityType Global; NameOfConstraint Current~{iP}; }
      { NameOfCoef Us;
        EntityType Global; NameOfConstraint Voltage~{iP}; }
    }
  }
}

Formulation {
  { Append;
    Name MagDyn_a~{iP}; Type FemEquation;
    Quantity {
      { Name vs; Type Local ; NameOfSpace Hregion_vs~{iP}; }
      { Name Is; Type Global; NameOfSpace Hregion_vs~{iP} [Is]; }
      { Name Us; Type Global; NameOfSpace Hregion_vs~{iP} [Us]; }
    }
    Equation {
      Galerkin { [ Dof{d vs} , {a} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { DtDof[ Dof{a} , {d vs} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      Galerkin { [ - (1/sigma~{iP}[]) * Dof{d vs} , {d vs} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      GlobalTerm { [ Dof{Us} , {Is} ]; In DomainS~{iP}; }
    }
  }
}

PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name js; Value { Term { [ -{d vs} ]; Jacobian Vol~{iP}; In DomainS~{iP}; }}}
      { Name hs; Value { Term { [ -{vs} ]; Jacobian Vol~{iP}; In DomainS~{iP}; }}}
      { Name j; Value { Term { [ -{d vs} ]; Jacobian Vol~{iP}; In DomainS~{iP}; }}}
    }
  }
}

EndIf


PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {

      { Name js0;
        Value {
          Term { [ js0~{iP}[] ]; Jacobian Vol~{iP}; In DomainS~{iP}; }
        }
      }

      { Name U; Value { Term { [ {Us} ]; In DomainS~{iP}; } } }
      { Name I; Value { Term { [ {Is} ]; In DomainS~{iP}; } } }
      { Name Z; Value { Term { [ ({Is}!=0)? {Us}/{Is} : 0. ]; In DomainS~{iP}; } } }
      { Name Um; Value { Term { [ Norm[{Us}] ]; In DomainS~{iP}; } } }
      { Name Im; Value { Term { [ Norm[{Is}] ]; In DomainS~{iP}; } } }

    }
  }
}

EndIf


//
If (Flag_Lib~{T_MAGDYN_AV_SURFACE_IMPEDANCE}~{iP})

Group {
  DefineGroup[ SkinDomainC_SurImp~{iP} ];
  //+++ Must also be already in SkinDomainC~{iP}
  DomainCWithSurf~{iP} += Region[ {SkinDomainC_SurImp~{iP}} ];
  DomainWithSurf~{iP} += Region[ {SkinDomainC_SurImp~{iP}} ];

  DefineGroup[ Surface_SkinC_BFs~{iP} ];
  Surface_SkinC_BFs~{iP} += Region[{SkinDomainC_SurImp~{iP}}];
}

Function {
  DefineFunction[ Ysur~{iP} ];
}

Formulation {
  { Append;
    Name MagDyn_a~{iP}; Type FemEquation;
    Equation {
      Galerkin { DtDof [ Ysur~{iP}[] * Dof{a} , {a} ];
                 In SkinDomainC_SurImp~{iP};
                 Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }

      If (Level_Lib~{iP} >= T_MAGDYN_AV_MASSIVE_CONDUCTOR_RELATION)
        //+++ extend with {d v}
      EndIf
    }
  }
}


PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {

    }
  }
}

EndIf


//+++ Last case
If (type_Gauge == TYPE_GAUGE_TREE_COTREE)

Group {
  DefineGroup[ Surface_FixedMagneticVectorPotential~{iP} ];
  DefineGroup[ Surface_Local_BFs~{iP}, Surface_Global_BFs~{iP}, Surface_SkinC_BFs~{iP} ];
  Surface_Complete_Tree~{iP} =
    Region [ {Surface_FixedMagneticVectorPotential~{iP},
              Surface_Local_BFs~{iP}, Surface_Global_BFs~{iP},
              Surface_SkinC_BFs~{iP}} ];
}

Constraint {
  { Name GaugeCondition_a~{iP}; Type Assign;
    Case {
      { Region DomainCC~{iP}; SubRegion Surface_Complete_Tree~{iP};
        Value 0.; }
    }
  }
}

FunctionSpace {
  { Append;
    Name Hcurl_a~{iP}; Type Form1;

    BasisFunction {
      { Name s_e_skin; NameOfCoef a_e_skin; Function BF_Edge;
        Support DomainWithSurf~{iP}; Entity EdgesOf[ {Surface_SkinC_BFs~{iP}} ]; }
      // Surface_Global/Local_BFs~{iP} already support other BasisFunctions
    }
    Constraint {
      { NameOfCoef a_e_skin;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential~{iP}; }

      { NameOfCoef a_e;  // Gauge condition
        EntityType EdgesOfTreeIn; EntitySubType StartingOn;
	NameOfConstraint GaugeCondition_a~{iP}; }
    }
  }
}



ElseIf (type_Gauge == TYPE_GAUGE_ORTHOGONALITYCOND)

Group {
  DefineGroup[ Surface_FixedMagneticVectorPotential~{iP} ];
  Surface_NoOrthogonalityGauge~{iP} =
    Region [ {Surface_FixedMagneticVectorPotential~{iP},
              /*Surface_Local_BFs~{iP},*/ Surface_Global_BFs~{iP},
              Surface_SkinC_BFs} ];
}

Constraint {
  { Name Xsi_Fixed;
    Case {
      { Region Surface_NoOrthogonalityGauge~{iP}; Value 0.; }
    }
  }
}

FunctionSpace {
  { Name H0_xsi~{iP}; Type Form0;
    BasisFunction {
      { Name s_n; NameOfCoef xsi_n; Function BF_Node;
        Support Domain~{iP}; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef xsi_n;
        EntityType NodesOf; NameOfConstraint Xsi_Fixed~{iP}; }
    }
  }
}

Formulation {
  { Append;
    Name MagDyn_a~{iP}; Type FemEquation;
    Quantity {
      { Name xsi; Type Local; NameOfSpace H0_xsi~{iP}; }
    }
    Equation {
      Galerkin { [ Dof{a} , {d xsi} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ Dof{d xsi} , {a} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}

PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name xsi; Value { Term { [ {xsi} ]; Jacobian Vol~{iP}; In Domain~{iP}; } } }
      { Name dxsi; Value { Term { [ {d xsi} ]; Jacobian Vol~{iP}; In Domain~{iP}; } } }
    }
  }
}

EndIf



//+++
If (Flag_Lib~{T_MAGDYN_AV_CIRCUIT_COUPLING}~{iP})

Call Lib_Ele_Circuit;

Formulation {
  { Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Call Module_Ele_Circuit_FO;

    Equation {

      GlobalEquation {
        Type Network; NameOfConstraint ElectricalCircuit~{iP};
        { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir~{iP}; }
        /*
        If (Level_Lib~{iP} >= T_MAGDYN_AV_MASSIVE_CONDUCTOR_RELATION ||
            Flag_Lib~{T_MAGDYN_AV_SURFACE_IMPEDANCE}~{iP})
          { Node {I};  Loop {U};  Equation {I};  In DomainC~{iP}; }
        EndIf
        */
        If (Level_Lib~{iP} >= T_MAGDYN_AV_COIL_RELATION)
          { Node {Is}; Loop {Us}; Equation {Us}; In DomainS~{iP}; }
        EndIf
      }

    }

  }
}


PostProcessing {
  { Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};

    Call Module_Ele_Circuit_PP;
  }
}


EndIf


// Last definitions!
//
Group {
  DefineGroup[ Surface_Local_BFs~{iP}, Surface_Global_BFs~{iP}, Surface_SkinC_BFs~{iP},
               Surface_Existing_BFs~{iP} ];
  Surface_Specific_BFs~{iP} = Region[ {Surface_Local_BFs~{iP}, Surface_Global_BFs~{iP}} ];
  Surface_Specific_BFs~{iP}+= Region[ {Surface_SkinC_BFs~{iP}} ];

  DomainWithSurf~{iP} += Region[ {Surface_Specific_BFs~{iP}, Surface_Existing_BFs~{iP}} ];
  //+++ With static Group, DomainWithSurf~{iP} must be alone in Support (not in RHS Group); will be solved with dynamic Group
}

FunctionSpace {
  {
    Append;
    Name Hcurl_a~{iP}; Type Form1;

    BasisFunction {
      { Append; //+++ To change Entity (will be useless with dynamic Group)
        Name s_e; //NameOfCoef a_e; Function BF_Edge;
        // Support DomainWithSurf~{iP};
        Entity EdgesOf[All, Not {Surface_Specific_BFs~{iP}}]; }
    }
  }
}



// For Thermal coupling
//
Macro Lib_MagDyn_av_ThermalCoupling_FO_

Quantity {
  { Name a; Type Local; NameOfSpace Hcurl_a~{iP_Mag}; }
  If (type_Js == TYPE_JS_CURL_HS)
    { Name hs; Type Local; NameOfSpace Hregion_hs~{iP_Mag}; }
  ElseIf (type_Js == TYPE_JS_ELEKIN_VS)
    { Name vs; Type Local; NameOfSpace Hregion_vs~{iP_Mag}; }
  EndIf
}

Equation {

  // Only for sources from DomainC~{iP_Mag}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}*sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[Dt[{a}]]] , {T} ];
    // Joule source
    In Region[{DomainJoule~{iP}, -DomainS~{iP_Mag}, -DomainS0~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }

  If (type_Js == TYPE_JS_CURL_HS)
    // Only for sources from DomainS~{iP_Mag}
    Galerkin {
      [ - Coef_JouleLosses~{iP_Mag}/sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[{d hs}]] , {T} ];
      // Joule source
      In Region[{DomainJoule~{iP}, -DomainC~{iP_Mag}, -DomainS0~{iP_Mag}}];
      Integration Gauss_v~{iP}; Jacobian Vol~{iP};
    }

  ElseIf (type_Js == TYPE_JS_ELEKIN_VS)
    Galerkin {
      [ - Coef_JouleLosses~{iP_Mag}/sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[{d vs}]] , {T} ];
      // Joule source
      In Region[{DomainJoule~{iP}, -DomainC~{iP_Mag}, -DomainS0~{iP_Mag}}];
      Integration Gauss_v~{iP}; Jacobian Vol~{iP};
    }
  EndIf

  // Only for sources from DomainS0~{iP_Mag}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}/sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[js0~{iP_Mag}[]]] , {T} ];
    // Joule source
    In Region[{DomainJoule~{iP}, -DomainC~{iP_Mag}, -DomainS~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }
}

Return
//////
