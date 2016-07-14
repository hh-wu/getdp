/*

  MagDyn_hphi
    Magnetodynamics - Magnetic field and magnetic scalar potential
    h-phi formulation with source magnetic field hs

  MagSta_phi
  MagSta_hphi
    Magnetostatics - Magnetic scalar potential
    phi formulation with source magnetic field hs

  uses

  MagSta_hs_js0
    Magnetostatics - hs formulation
    (for computation of source magnetic fields associated with inductors)

  References :

    P. Dular, C. Geuzaine, W. Legros
    "A natural method for coupling magnetostatic h-formulations and circuit equations",
    IEEE Transactions on Magnetics, Vol. 35, No. 3, May 1999, pp. 1626-1629

    P. Dular et al.
    "Dual magnetodynamic formulations and their source fields associated with
     massive and stranded inductors",
    IEEE Transactions on Magnetics, Vol. 36, No. 4, July 2000, pp. 1293-1299

*/

//+++
DefineConstant[ iP = 1 ];

Include "Lib_JacInt.pro";

/* I N P U T
   ---------

  GlobalGroup :
  -----------
    Domain               Whole magnetic domain
    DomainCC             Nonconducting regions

    DomainC              Conducting regions (including massive inductors)
    SkinDomainC          Skin of conducting regions (surfaces)
    SurfaceCut           All cuts for multiply connected regions
                             (for magnetic scalar potential phi)

    DomainS              All stranded inductor regions
    DomainSref_SF
                             Reference number of each inductor with a source field

    DomainSref_SF_WithU
                             Portion of DomainSref_SF with total 
                             voltage (U) definition

    + see in file `MagSta_hs_js0.pro'

    DomainCC2            Nonconducting regions (simulation OnOneSide ...)
    SkinDomainC2         Skin of conducting regions (surfaces) (OnOneSide ...)

    DomainMagnet         Magnet regions

  Function :
  --------
    mu[]                     Magnetic permeability
    ro[]                     Electric resistivity

    br[]                     remnant magnetic flux density in magnets

  Constraint :
  ----------
    MagneticScalarPotential  Fixed magnetic scalar potential
                             (classical boundary condition)

    MagneticField            Fixed magnetic field (for the source fields as well)

    Voltage                  Fixed voltage
    Current                  Fixed current

    Convention: voltage and current are given the same reference direction
                (e.g. leads to 'voltage+resistance*current=0' in a resistance)

  Parameters :
  ----------
    Freq                     Frequency (Hz)

    CoefGeo                  In case of some symmetries (e.g. 2*Pi for Axi)

    Flag_DomainSref_SF_WithU
                             DomainSref_SF_WithU is reduced (1) or not (0)

  Parameters for time loop with theta scheme :
    Mag_Time0, Mag_TimeMax, Mag_DTime
                             Initial time, Maximum time, Time step  (s)
    Mag_Theta                Theta  (e.g. 1.  : Implicit Euler,
                                          0.5 : Cranck Nicholson)

*/

// --------------------------------------------------------------------------

Group {
  DefineGroup[ Domain~{iP}, DomainCC~{iP},
               DomainC~{iP}, SkinDomainC~{iP}, SurfaceCut~{iP},
	       DomainSref_SF_WithU~{iP},
               DomainCC2~{iP}, SkinDomainC2~{iP},
               DomainS~{iP}, SkinDomainS~{iP}, SurfaceCutB~{iP},
	       DomainMagnet~{iP},
               DomainSref_SF~{iP}, DomainSref_SF_WithU~{iP}
	     ];
}

DefineConstant[
  Flag_MagDyn_Thermal_Coupling_Mag~{iP} = 0, // not used yet
  Coef_JouleLosses~{iP} = 1. // 0.5 if Joule losses not from rms values
];

DefineConstant[ Freq~{iP} ];
DefineConstant[ Mag_Time0, Mag_TimeMax, Mag_DTime, Mag_Theta ];
DefineConstant[ CoefGeo~{iP} = 1. ];
DefineConstant[ Flag_DomainSref_SF_WithU~{iP} = 0 ];
DefineConstant[ Nb_DomainS_SF~{iP} = 0 ];

Function {
  DefineFunction[ mu~{iP}, ro~{iP} ];
  DefineFunction[ br~{iP} ];
  DefineFunction[ Ns~{iP}, Sc~{iP} ];
}

Group {
  If (!Flag_DomainSref_SF_WithU~{iP})
    DomainSref_SF_WithU~{iP}  = Region[ {DomainSref_SF~{iP}} ];
  EndIf
  // ... else: to be defined by the user, to avoid global equations in matrix system.
  // The voltage can be a posteriori computed with xxx in PostProcessing xxx
}


// --------------------------------------------------------------------------

// MagSta_hs_js0: Magnetostatics - hs formulation

Include "Lib_MagSta_hs_js0_allDom.pro"


// --------------------------------------------------------------------------
//  M a g n e t o s t a t i c s
// --------------------------------------------------------------------------

FunctionSpace {
  // Magnetic scalar potential phi (h = grad phi)
  { Name Hgrad_phi~{iP}; Type Form0;
    BasisFunction {
      // phi = phi_n s_n
      { Name sn; NameOfCoef phin; Function BF_Node;
        Support Domain~{iP}; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef phin;
        EntityType NodesOf; NameOfConstraint MagneticScalarPotential~{iP}; }
    }
  }

  { Name Hcurl_hs~{iP}; Type Form1;
    BasisFunction {
      { Name sb; NameOfCoef ib;  // Global Basis Function
        Function BF_Global {
	  Quantity hs;
	  Formulation Magnetostatics_hs~{iP} {Nb_DomainS_SF~{iP}};
	  Group DomainSref_SF~{iP}; Resolution MagSta_hs~{iP} {Nb_DomainS_SF~{iP}};
	};
        Support Domain~{iP}; Entity Global [DomainSref_SF~{iP}]; }
    }
    Constraint {
      { NameOfCoef ib;
        EntityType Region; NameOfConstraint Current~{iP}; }
    }
  }

}


Formulation {
  { Name MagSta_phi~{iP}; Type FemEquation;
    Quantity {
      { Name phi; Type Local; NameOfSpace Hgrad_phi~{iP}; }
      { Name hs ; Type Local; NameOfSpace Hcurl_hs~{iP}; }
    }
    Equation {
      Galerkin { [ mu~{iP}[] * Dof{d phi} , {d phi} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ mu~{iP}[] * Dof{hs} , {d phi} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ br~{iP}[] , {d phi} ]; In DomainMagnet~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}


Resolution {
  { Name MagSta_phi~{iP};
    System {
      { Name Sys_Mag; NameOfFormulation MagSta_phi~{iP}; }
    }
    Operation {
      Generate Sys_Mag; Solve Sys_Mag; SaveSolution Sys_Mag;
    }
  }
}


PostProcessing {
  { Name MagSta_phi~{iP}; NameOfFormulation MagSta_phi~{iP};
    PostQuantity {

      { Name h  ; Value { Term { [ {d phi}+{hs} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name b  ; Value { Term { [ mu~{iP}[] * ({d phi}+{hs}) ]; In Domain~{iP}; Jacobian Vol~{iP}; }
                           Term { [ br~{iP}[] ]; In DomainMagnet~{iP}; Jacobian Vol~{iP}; } } }
      { Name br ; Value { Term { [ mu~{iP}[] * {d phi} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name hr ; Value { Term { [ {d phi} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name phi; Value { Term { [ -{phi} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name phit; Value { Term { [ -{phi}-{dInv hs} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }

      { Name j   ; Value { Term { [ {d hs} ]; In #{DomainC~{iP}, DomainS~{iP}}; Jacobian Vol~{iP}; } } }
      { Name jnorm; Value { Term { [ Norm[{d hs}] ]; In #{DomainC~{iP}, DomainS~{iP}}; Jacobian Vol~{iP}; } } }
      { Name jz  ; Value { Term { [ CompZ[{d hs}] ]; In #{DomainC~{iP}, DomainS~{iP}}; Jacobian Vol~{iP}; } } }

    }
  }
}


// --------------------------------------------------------------------------
//  M a g n e t o d y n a m i c s
// --------------------------------------------------------------------------

Group {
  _TransitionLayer_SkinDomainC_~{iP} =
    ElementsOf[SkinDomainC2~{iP}, OnOneSideOf SurfaceCut~{iP}];
}

FunctionSpace {

  { Name Hcurl_hphi~{iP}; Type Form1;
    BasisFunction {
      // h = h_e s_e + v_n s_n  + I_c  s_c
      { Name se; NameOfCoef he; Function BF_Edge;
        Support DomainC~{iP}; Entity EdgesOf[ All, Not SkinDomainC~{iP} ]; }

      { Name sn; NameOfCoef vn; Function BF_GradNode;
        Support DomainCC~{iP}; Entity NodesOf[ All ]; }
      { Name sn; NameOfCoef vnc; Function BF_GroupOfEdges;
        Support DomainC~{iP}; Entity GroupsOfEdgesOnNodesOf[ SkinDomainC~{iP} ]; }

      { Name sc; NameOfCoef Ic; Function BF_GradGroupOfNodes;
        Support ElementsOf[DomainCC2~{iP}, OnOneSideOf SurfaceCut~{iP}];
        Entity GroupsOfNodesOf[ SurfaceCut~{iP} ]; }
      { Name sc; NameOfCoef Icc; Function BF_GroupOfEdges;
        Support DomainC~{iP};
        Entity GroupsOfEdgesOf[ SurfaceCut~{iP},
                                InSupport _TransitionLayer_SkinDomainC_~{iP} ]; }

      { Name sb; NameOfCoef ib;  // Global Basis Function
        Function BF_Global {
	  Quantity hs;
	  Formulation Magnetostatics_hs~{iP} {Nb_DomainS_SF~{iP}};
	  Group DomainSref_SF~{iP}; Resolution MagSta_hs~{iP} {Nb_DomainS_SF~{iP}};
	};
        Support Domain~{iP}; Entity Global [DomainSref_SF~{iP}]; }
    }
    SubSpace {
      { Name hcut; NameOfBasisFunction sc; }
      { Name hb; NameOfBasisFunction sb; }
    }
    GlobalQuantity {
      { Name I; Type AliasOf       ; NameOfCoef Ic; }
      { Name U; Type AssociatedWith; NameOfCoef Ic; }

      { Name Is; Type AliasOf       ; NameOfCoef ib; }
      { Name Us; Type AssociatedWith; NameOfCoef ib; }
    }
    Constraint {
      { NameOfCoef vn;
        EntityType NodesOf; NameOfConstraint MagneticScalarPotential~{iP}; }
      { NameOfCoef vnc;
        EntityType NodesOf; NameOfConstraint MagneticScalarPotential~{iP}; }
      { NameOfCoef he;
        EntityType EdgesOf; NameOfConstraint MagneticField~{iP}; }

      { NameOfCoef Ic;
        EntityType GroupsOfNodesOf; NameOfConstraint Current~{iP}; }
      { NameOfCoef Icc;
        EntityType GroupsOfNodesOf; NameOfConstraint Current~{iP}; }
      { NameOfCoef U;
        EntityType GroupsOfNodesOf; NameOfConstraint Voltage~{iP}; }

      { NameOfCoef Is;
        EntityType Region; NameOfConstraint Current~{iP}; }
      { NameOfCoef Us;
        EntityType Region; NameOfConstraint Voltage~{iP}; }
    }
  }

}


Formulation {
  { Name MagDyn_hphi~{iP}; Type FemEquation;
    Quantity {
      { Name h ; Type Local  ; NameOfSpace Hcurl_hphi~{iP} ; }
      { Name hb; Type Local  ; NameOfSpace Hcurl_hphi~{iP} [hb] ; }
      { Name U ; Type Global ; NameOfSpace Hcurl_hphi~{iP} [U]; }
      { Name I ; Type Global ; NameOfSpace Hcurl_hphi~{iP} [I]; }
      { Name Us; Type Global ; NameOfSpace Hcurl_hphi~{iP} [Us]; }
      { Name Is; Type Global ; NameOfSpace Hcurl_hphi~{iP} [Is]; }
    }
    Equation {
      Galerkin { Dt [ mu~{iP}[] * Dof{h} , {h} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ ro~{iP}[] * Dof{d h} , {d h} ]; In #{DomainC~{iP}, DomainS~{iP}};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ br~{iP}[] , {h} ]; In DomainMagnet~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      GlobalTerm { [ Dof{U} / CoefGeo~{iP} , {I} ]; In SurfaceCut~{iP}; }

      GlobalTerm { [ Dof{Us} / CoefGeo~{iP} , {Is} ]; In DomainSref_SF_WithU~{iP}; }
    }
  }
}


Formulation {
  { Name MagSta_phi_h~{iP}; Type FemEquation;
    Quantity {
      { Name h ; Type Local; NameOfSpace Hcurl_hphi~{iP}; }
      { Name hb; Type Local; NameOfSpace Hcurl_hphi~{iP} [hb]; }
    }
    Equation {
      Galerkin { [ mu~{iP}[] * Dof{h} , {h} ]; In Domain~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ br~{iP}[] , {h} ]; In DomainMagnet~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}


Resolution {

  { Name MagSta_hphi~{iP};
    System {
      { Name Sys_Mag; NameOfFormulation MagSta_phi_h~{iP}; }
    }
    Operation {
      Generate Sys_Mag; Solve Sys_Mag; SaveSolution Sys_Mag;
    }
  }

  { Name MagDyn_hphi~{iP};
    System {
      { Name Sys_Mag; NameOfFormulation MagDyn_hphi~{iP};
        Type ComplexValue; Frequency Freq~{iP}; }
    }
    Operation {
      Generate Sys_Mag; Solve Sys_Mag; SaveSolution Sys_Mag;
    }
  }

  { Name MagDyn_hphi_t~{iP};
    System {
      { Name Sys_Mag; NameOfFormulation MagDyn_hphi~{iP}; }
    }
    Operation {
      InitSolution Sys_Mag; SaveSolution Sys_Mag;
      TimeLoopTheta{ Time0 Mag_Time0; TimeMax Mag_TimeMax;
                     DTime Mag_DTime; Theta Mag_Theta;
                     Operation { Generate Sys_Mag; Solve Sys_Mag;
                                 SaveSolution Sys_Mag; } }
    }
  }

}


PostProcessing {
  { Name MagDyn_hphi~{iP}; NameOfFormulation MagDyn_hphi~{iP};
    PostQuantity {
      { Name h  ; Value { Term { [ {h} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }

      { Name hb ; Value { Term { [ {hb} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name dhb ; Value { Term { [ {d hb} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }

      { Name b  ; Value { Term { [ mu~{iP}[]*{h} ]; In Domain~{iP}; Jacobian Vol~{iP}; }
                           Term { [ br~{iP}[] ]; In DomainMagnet~{iP}; Jacobian Vol~{iP}; } } }
      { Name bnorm; Value { Term {  [Norm[ mu~{iP}[]*{h} ]];
                            In #{Domain~{iP}, -DomainMagnet~{iP}}; Jacobian Vol~{iP}; }
                            Term {  [Norm[ br~{iP}[] + mu~{iP}[]*{h} ]];
			    In DomainMagnet~{iP}; Jacobian Vol~{iP}; } } }
      { Name j   ; Value { Term { [ {d h} ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
                            Term { [ {d h} ]; In DomainS~{iP}; Jacobian Vol~{iP}; } } }
      { Name jm; Value { Term { [ Norm[{d h}] ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
                            Term { [ Norm[{d h}] ]; In DomainS~{iP}; Jacobian Vol~{iP}; } } }
      { Name jz  ; Value { Term { [ CompZ[{d h}] ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
                            Term { [ CompZ[{d h}] ]; In DomainS~{iP}; Jacobian Vol~{iP}; } } }
      { Name phi; Value { Term { [ -{dInv h} ]   ; In DomainCC~{iP}; Jacobian Vol~{iP}; } } }

      { Name U; Value { Term { [ {U } ]  ; In SurfaceCut~{iP}; }
                         Term { [ {Us} ]  ; In DomainSref_SF_WithU~{iP}; } } }
      { Name I; Value { Term { [ {I } ]  ; In SurfaceCut~{iP}; } 
                         Term { [ {Is} ]  ; In DomainSref_SF~{iP}; } } }

      { Name mj ; Value { Term { [ Norm[{d h}] ] ; In DomainC~{iP}; Jacobian Vol~{iP}; } } }
    }
  }
}

PostProcessing {
  { Name MagDyn_hphi_pos~{iP}; NameOfFormulation MagDyn_hphi~{iP};
    PostQuantity {

      { Name I; Value { Term { [ {I } ]  ; In SurfaceCut~{iP}; } 
                        Term { [ {Is} ]  ; In DomainSref_SF~{iP}; } } }

      { Name Upos;
        Value {
	  Integral { Type Global;
	    [ - CoefGeo~{iP} * (Dt[mu~{iP}[]*{h}] * BF{hb}) ];
	    // BF{h} could be used but BF{hb} is enough
	    In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
	  }
	  Integral { Type Global;
	    [ - CoefGeo~{iP} * (ro~{iP}[]*{d h} * BF{d hb}) ];
	    // BF{d h} could be used but BF{d hb} is enough
	    In #{DomainC~{iP}, DomainS~{iP}}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
	  }
	}
      }

      { Name Flux;
        Value {
	  Integral { Type Global;
	    [ CoefGeo~{iP} * ((mu~{iP}[]*{h}) * BF{hb}) ];
	    // BF{h} could be used but BF{hb} is enough
	    In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
	  }
	}
      }

      { Name RI;
        Value {
	  Integral { Type Global;
	    [ -CoefGeo~{iP} * (ro~{iP}[]*{d h} * BF{d hb}) ];
	    // BF{d h} could be used but BF{d hb} is enough
	    In #{DomainC~{iP}, DomainS~{iP}}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
	  }
	}
      }

    }
  }
}

// For Thermal coupling
//
Macro Def_ThermalCoupling_Formulation

Quantity {
  { Name h; Type Local ; NameOfSpace Hcurl_hphi~{iP_Mag} ; }
}

Equation {
  // Only for sources from DomainC~{iP} & DomainS~{iP}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}*ro~{iP_Mag}[Re[{T}]]*<h>[SquNorm[{d h}]] , {T} ];
    // Joule source
    In Region[{DomainJoule_The~{iP}, -DomainS0~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }
  // Only for sources from DomainS0~{iP}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}*ro~{iP_Mag}[Re[{T}]]*<h>[SquNorm[js0~{iP}[]]] , {T} ];
    // Joule source
    In Region[{DomainJoule_The~{iP}, -DomainC~{iP_Mag}, -DomainS~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }
}

Return
//////
