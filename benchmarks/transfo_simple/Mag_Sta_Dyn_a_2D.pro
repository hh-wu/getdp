/*
  MagDyn_av_2D
    Magnetodynamics - Magnetic vector potential and
    electric scalar potential a-v formulation (2D),
    with massive and stranded inductors
    and electrical circuit coupling
*/

/* I N P U T
   ---------

  GlobalGroup :  (Extension '_Mag' is for Magnetic problem)
  -----------
    Domain_Mag               Whole magnetic domain
    DomainCC_Mag             Nonconducting regions
    DomainC_Mag              Conducting regions (All)
    DomainS_Mag              Stranded inductor regions (Sources)
    DomainS0_Mag             Elementary stranded inductor regions (Sources)
    DomainV_Mag              All regions in movement (for speed term)
    DomainMagnet_Mag         Magnet regions

    DomainCWithI_Mag         Portion of DomainC_Mag with total current (I) definition
    DomainSWithU_Mag         Portion of DomainS_Mag with total voltage (U) definition

  Function :
  --------
    js0[]                    Source current density

    nu[]                     Magnetic reluctivity
    sigma[]                  Electric conductivity

    Velocity[]               Velocity of regions

    br[]                     remnant magnetic flux density in magnets

  Constraint :
  ----------
    MagneticVectorPotential_2D
                             Fixed magnetic vector potential (2D)
                             (essential boundary condition)

    Voltage_2D               Fixed voltage
    Current_2D               Fixed current

    Convention: voltage and current are given the same reference direction
                (e.g. leads to 'voltage+resistance*current=0' in a resistance)

  Parameters :
  ----------
    Freq                     Frequency (Hz)

    Flag_DomainCWithI        DomainCWithI_Mag is reduced (1) or not (0)
    Flag_DomainSWithU        DomainSWithU_Mag is reduced (1) or not (0)

    CoefGeos[]               In case of some symmetries (e.g. 2*Pi for Axi)
    CoefGeo                  Single value considered in any CoefGeos[.] if
                             Flag_CoefGeos == 0
    Flag_CoefGeos            see above

    Flag_Degree_a            Interpolation degree of 'a', if > 1, change the number
                             of Gauss integration points

    Flag_CircuitCoupling     Circuit coupling (1) or not (0)

    CoefPower                1 or 0.5 (in Complex with amplitude)

  Parameters for time loop with theta scheme :
    Mag_Time0, Mag_TimeMax, Mag_DTime[]
                             Initial time, Maximum time, Time step  (s)
    Mag_Theta[]              Theta  (e.g. 1.  : Implicit Euler,
                                          0.5 : Cranck Nicholson)

*/

// --------------------------------------------------------------------------

Group {
  DefineGroup[ Domain_Mag, DomainCC_Mag, DomainC_Mag,
	       DomainCWithI_Mag, DomainSWithU_Mag,
               DomainS_Mag, DomainS0_Mag, DomainV_Mag,
	       DomainMagnet_Mag,
               SurfaceElec_Mag ] ;
}

Function {
  DefineFunction[ js0 ] ;
  DefineFunction[ nu, sigma ] ;
  DefineFunction[ br, Velocity ] ;
  DefineFunction[ Ns, Sc ] ;
  DefineVariable[ Freq ] ;
  DefineConstant[ SymHalfCurrent = 1. ] ; // 2. if symmetry
  DefineVariable[ Mag_Time0, Mag_TimeMax ] ;
  DefineFunction[ Mag_DTime, Mag_Theta ] ; // Warning: Mag_DTime[] & Mag_Theta[]
  DefineVariable[ Flag_DomainCWithI = 0, Flag_DomainSWithU = 0 ] ;
  DefineVariable[ Flag_Degree_a = 1 ] ;

  DefineVariable[ Flag_CircuitCoupling = 0 ] ;
  DefineVariable[ CoefPower = 0.5 ] ;

  DefineVariable[ Flag_CoefGeos = 0, CoefGeo = 1 ] ;
  DefineFunction[ CoefGeos ] ;
}

If (Flag_CircuitCoupling)
  Group {
    DefineGroup[ DomainZt_Cir, DomainSource_Cir,
                 Resistance_Cir, Inductance_Cir, Capacitance_Cir, Diode_Cir,
	         Capacitance1_Cir, Capacitance2_Cir ] ;
  }
  Function {
    DefineVariable[ ITR_CritRef ] ;
    DefineVariable[ ITR_NbrMaxIt, ITR_Crit, ITR_Flag, ITR_DivCoef, ITR_Crit2 ] ;

    DefineFunction[ Resistance, Inductance, Capacitance ] ;
  }
EndIf

Group {
  If (!Flag_DomainCWithI)  DomainCWithI_Mag  = Region[ {DomainC_Mag} ];  EndIf
  // ... else: to be defined by the user to avoid global equations in matrix system.
  // The current can be a posteriori computed with Ipos in PostProcessing MagDyn_av_2D_pos
  If (!Flag_DomainSWithU)  DomainSWithU_Mag  = Region[ {DomainS_Mag} ];  EndIf
}


// --------------------------------------------------------------------------

FunctionSpace {

  // Magnetic vector potential a (b = curl a)
  { Name Hcurl_a_Mag_2D ; Type Form1P ;
    BasisFunction {
      // a = a_e s_e
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain_Mag ; Entity NodesOf[ All ] ; }
      If (Flag_Degree_a == 2)
        { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
          Support Domain_Mag ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef ae ;
        EntityType NodesOf ; NameOfConstraint MagneticVectorPotential_2D ; }
      If (Flag_Degree_a == 2)
	{ NameOfCoef ae2 ; // Only OK if homogeneous BC, otherwise specify zero-BC
          EntityType EdgesOf ; NameOfConstraint MagneticVectorPotential_2D ; }
      EndIf
    }
  }

  // Gradient of Electric scalar potential (2D)
  { Name Hregion_u_Mag_2D ; Type Form1P ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_RegionZ ;
        Support DomainC_Mag ; Entity DomainC_Mag ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ;
        EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef I ;
        EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }

  // Current in stranded coil (2D)
  { Name Hregion_i_Mag_2D ; Type Vector ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_RegionZ ;
        Support DomainS_Mag ; Entity DomainS_Mag ; }
    }
    GlobalQuantity {
      { Name Is ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Us ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Us ;
        EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef Is ;
        EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }

}

If (Flag_CircuitCoupling)
  // UZ and IZ for impedances
  FunctionSpace {
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
        { NameOfCoef Uz ;
          EntityType Region ; NameOfConstraint Voltage_Cir ; }
        { NameOfCoef Iz ;
          EntityType Region ; NameOfConstraint Current_Cir ; }
      }
    }
  }
EndIf


Formulation {
  { Name Magnetostatics_a_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_Mag_2D ; }
      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ; In Domain_Mag ;
                 Jacobian Vol ; Integration Gauss_dv_dv ; }

      Galerkin { [ -nu[] * br[] , {d a} ] ; In DomainMagnet_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }

      Galerkin { [ - sigma[] * (Velocity[] *^ Dof{d a}) , {a} ] ;
                 In DomainV_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }

      Galerkin { [ - js0[] , {a} ] ; In DomainS0_Mag ;
                 Jacobian Vol ; Integration Gauss_v_v ; }

      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Galerkin { [ - (js0[]*Vector[0,0,1]) * Dof{ir} , {a} ] ; In DomainS_Mag ;
                 Jacobian Vol ; Integration Gauss_v_v ; }
    }
  }
}


Formulation {
  { Name Magnetodynamics_av_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_Mag_2D ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_Mag_2D ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [U] ; }
      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Us ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Us] ; }
      { Name Is ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Is] ; }
      If (Flag_CircuitCoupling)
        { Name Uz ; Type Global ; NameOfSpace Hregion_Z [Uz] ; }
        { Name Iz ; Type Global ; NameOfSpace Hregion_Z [Iz] ; }
      EndIf
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ; In Domain_Mag ;
                 Jacobian Vol ; Integration Gauss_dv_dv ; }

      Galerkin { [ -nu[] * br[] , {d a} ] ; In DomainMagnet_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }

      Galerkin { DtDof [ sigma[] * Dof{a} , {a} ] ; In DomainC_Mag ;
                 Jacobian Vol ; Integration Gauss_v_v ; }
      Galerkin { [ sigma[] * Dof{ur} / CoefGeos[] , {a} ] ; In DomainC_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }

      Galerkin { [ - sigma[] * (Velocity[] *^ Dof{d a}) , {a} ] ;
                 In DomainV_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }

      Galerkin { [ - js0[] , {a} ] ; In DomainS0_Mag ;
                 Jacobian Vol ; Integration Gauss_v_v ; }

      Galerkin { DtDof [ sigma[] * Dof{a} , {ur} ] ; In DomainCWithI_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }
      Galerkin { [ sigma[] * Dof{ur} / CoefGeos[] , {ur} ] ; In DomainCWithI_Mag ;
                 Jacobian Vol ; Integration Gauss_dv_dv ; }
      //      GlobalTerm { [ Dof{I} , {U} ] ; In DomainCWithI_Mag ; }
      GlobalTerm { [ Dof{I} *(CoefGeos[]/Fabs[CoefGeos[]]) , {U} ] ; In DomainCWithI_Mag ; }

      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Galerkin { [ - (js0[]*Vector[0,0,1]) * Dof{ir} , {a} ] ; In DomainS_Mag ;
                 Jacobian Vol ; Integration Gauss_v_v ; }

      Galerkin { DtDof [ Ns[]/Sc[] * Dof{a} , {ir} ] ; In DomainSWithU_Mag ;
                 Jacobian Vol ; Integration Gauss_v_dv ; }
      Galerkin { [ Ns[]/Sc[] / sigma[] * (js0[]*Vector[0,0,1]) * Dof{ir} , {ir} ] ;
                 In DomainSWithU_Mag ;
                 Jacobian Vol ; Integration Gauss_dv_dv ; }
      //      GlobalTerm { [ Dof{Us} / CoefGeo , {Is} ] ; In DomainSWithU_Mag ; }
      GlobalTerm { [ Dof{Us} / CoefGeos[] , {Is} ] ;
                   In DomainSWithU_Mag ; } // for Us in direction of Is
      // Attention: CoefGeo[.] = 2*Pi for Axi

      If (Flag_CircuitCoupling)
	GlobalTerm { NeverDt[ Dof{Uz}                , {Iz} ] ; In Resistance_Cir ; }
        GlobalTerm { NeverDt[ Resistance[] * Dof{Iz} , {Iz} ] ; In Resistance_Cir ; }

	GlobalTerm { [ Dof{Uz}                      , {Iz} ] ; In Inductance_Cir ; }
	GlobalTerm { DtDof [ Inductance[] * Dof{Iz} , {Iz} ] ; In Inductance_Cir ; }

	GlobalTerm { [ Dof{Iz}        , {Iz} ] ; In Capacitance1_Cir ; }
	GlobalTerm { NeverDt[ Dof{Iz} , {Iz} ] ; In Capacitance2_Cir ; } /* Attention */
	GlobalTerm { DtDof [ Capacitance[] * Dof{Uz} , {Iz} ] ; In Capacitance_Cir ; }

	GlobalTerm { NeverDt[ Dof{Uz}             , {Iz} ] ; In Diode_Cir ; }
	GlobalTerm { NeverDt[ Resistance[{Uz}] * Dof{Iz} , {Iz} ] ; In Diode_Cir ; }

	GlobalTerm { [ 0. * Dof{Iz} , {Iz} ] ; In DomainSource_Cir ; }

	GlobalEquation {
	  Type Network ; NameOfConstraint ElectricalCircuit ;
	  { Node {I};  Loop {U};  Equation {I};  In DomainC_Mag ; }
	  { Node {Is}; Loop {Us}; Equation {Us}; In DomainSWithU_Mag ; }
	  { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir ; }
	}
      EndIf

    }
  }
}


Resolution {

  { Name MagSta_av_2D ;
    System {
      { Name Sys_Mag ; NameOfFormulation Magnetostatics_a_2D ; }
    }
    Operation {
      Generate Sys_Mag ; Solve Sys_Mag ; SaveSolution Sys_Mag ;
    }
  }

  { Name MagDyn_av_2D ;
    System {
      { Name Sys_Mag ; NameOfFormulation Magnetodynamics_av_2D ;
        Type ComplexValue ; Frequency Freq ; }
    }
    Operation {
      Generate Sys_Mag ; Solve Sys_Mag ; SaveSolution Sys_Mag ;
    }
  }

  { Name MagDyn_av_2D_t ;
    System {
      { Name Sys_Mag ; NameOfFormulation Magnetodynamics_av_2D ; }
    }
    Operation {
      InitSolution Sys_Mag ; SaveSolution Sys_Mag ;
      TimeLoopTheta{ Time0 Mag_Time0 ; TimeMax Mag_TimeMax ;
                     DTime Mag_DTime[] ; Theta Mag_Theta[] ;
                     Operation {
		       Generate Sys_Mag ; Solve Sys_Mag ;
		       SaveSolution Sys_Mag ;
		     }
      }
    }
  }

}


PostProcessing {
  { Name MagDyn_av_2D ; NameOfFormulation Magnetodynamics_av_2D ;
  // Can be used also after a 'MagSta_av_2D' Resolution
  // (only for 'a' and js0[] related quantities) (for 'j', DomainC_Mag must be empty)
    PostQuantity {
      { Name a ; Value { Term { [ {a} ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name az ; Value { Term { [ CompZ[{a}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name raz ; Value { Term { [ CompZ[{a}]*X[] ] ; In Domain_Mag ; Jacobian Vol ;  } } }
      { Name b ; Value { Term { [ {d a} ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name bm; Value { Term { [ Norm[{d a}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name h ; Value {
	Term { [ nu[] * {d a} ] ; In Domain_Mag ; Jacobian Vol ; }
	Term { [ -nu[] * br[] ] ; In DomainMagnet_Mag ; Jacobian Vol ; } } }
      { Name j ; Value {
          Term { [ - sigma[]*(Dt[{a}]+{ur}/CoefGeos[]) ] ; In DomainC_Mag ; Jacobian Vol ; }
          Term { [(js0[]*Vector[0,0,1])*{ir}] ; In DomainS_Mag ; Jacobian Vol ; } } }
      { Name jm ; Value {
          Term { [ Norm[- sigma[]*(Dt[{a}]+{ur}/CoefGeos[])] ] ; In DomainC_Mag ; Jacobian Vol ; }
          Term { [Norm[(js0[]*Vector[0,0,1])*{ir}]] ; In DomainS_Mag ; Jacobian Vol ; } } }
      { Name jz ; Value {
          Term { [ - sigma[]*CompZ[Dt[{a}]+{ur}/CoefGeos[]] ] ; In DomainC_Mag ; Jacobian Vol ; }
          Term { [CompZ[(js0[]*Vector[0,0,1])*{ir}]] ; In DomainS_Mag ; Jacobian Vol ; } } }

      { Name jxb ; Value {
          Term { [ CrossProduct[- sigma[]*(Dt[{a}]+{ur}/CoefGeos[]), {d a}] ] ;
	         In DomainC_Mag ; Jacobian Vol ; }
          Term { [ CrossProduct[(js0[]*Vector[0,0,1])*{ir}, {d a}] ] ;
	         In DomainS_Mag ; Jacobian Vol ; }
      } }

      { Name jxb_total ;
        Value {
	  Integral { [ CrossProduct[- sigma[]*(Dt[{a}]+{ur}/CoefGeos[]), {d a}] ] ;
	             In DomainC_Mag ; Jacobian Vol ; Integration Gauss_v_dv ; }
	  Integral { [ CrossProduct[(js0[]*Vector[0,0,1])*{ir}, {d a}] ] ;
	             In DomainS_Mag ; Jacobian Vol ; Integration Gauss_dv_dv ; }
	}
      }

      { Name roj2 ;
        Value { Term { [ CoefPower * sigma[]*SquNorm[Dt[{a}]+{ur}/CoefGeos[]] ] ;
                       In DomainC_Mag ; Jacobian Vol ; }
	        Term { [ CoefPower * 1./sigma[]*SquNorm[(js0[]*Vector[0,0,1])*{ir}] ] ;
		       In DomainS_Mag ; Jacobian Vol ; }
	}
      }
      { Name JouleLosses ;
      Value {
	  Integral { [ CoefPower * sigma[]*SquNorm[Dt[{a}]+{ur}/CoefGeos[]]
		       * SymHalfCurrent ] ;
	             In DomainC_Mag ; Jacobian Vol ; Integration Gauss_v_v ; }

	  Integral { [ CoefPower * 1./sigma[]*SquNorm[(js0[]*Vector[0,0,1])*{ir}]
		       * SymHalfCurrent ] ;
	             In DomainS_Mag ; Jacobian Vol ; Integration Gauss_dv_dv ; }
	}
      }
      { Name MagneticEnergy ;
        Value { Integral { [ 1./nu[]*SquNorm[nu[] * {d a}] ] ;
	                   In Domain_Mag ; Jacobian Vol ; Integration Gauss_dv_dv ; }
	}
      }
      //+++
      { Name MagneticEnergy2 ;
        Value { Integral { [ 1./nu[]*SquNorm[nu[] * {d a}] / SurfaceArea[] ] ;
	                   In Domain_Mag ; Jacobian Vol ; Integration Gauss_dv_dv ; }
	}
      }


      { Name uB ; Value { Term { [ -Dt[{a}] - Ns[]*{ir}/Sc[]/sigma[] ] ;
                          In DomainS_Mag  ; Jacobian Vol; } } }

      If (!Flag_CircuitCoupling)
      { Name U ; Value { Term { [ {U} ]   ; In DomainC_Mag ; }
                         Term { [ {Us} ]  ; In DomainS_Mag ; } } }
      { Name I ; Value { Term { [ {I} ]   ; In DomainC_Mag ; }
                         Term { [ {Is} ]  ; In DomainS_Mag ; } } }
      { Name S ; Value { Term { [ CoefPower * {U}*Conj[{I}] ]   ; In DomainC_Mag ; }
                         Term { [ CoefPower * {Us}*Conj[{Is}] ]  ; In DomainS_Mag ; } } }
      { Name R ;
        Value {
	  Term { [ -({U}*Conj[{I}])/SquNorm[{I}] ] ; In DomainC_Mag ; }
	  Term { [ -({Us}*Conj[{Is}])/SquNorm[{I}] ] ; In DomainS_Mag ; }
	}
      }
      { Name L ; Value { Term { [ -Im[{U}/{I}]/(2*Pi*Freq) ]   ; In DomainC_Mag ; }
                         Term { [ -Im[{Us}/{Is}]/(2*Pi*Freq) ]  ; In DomainS_Mag ; } } }
      EndIf

      If (Flag_CircuitCoupling)
      { Name U ; Value { Term { [ {U} ]   ; In DomainC_Mag ; }
                         Term { [ {Us} ]  ; In DomainS_Mag ; }
                         Term { [ {Uz} ]  ; In DomainZt_Cir ; } } }
      { Name I ; Value { Term { [ {I} ]   ; In DomainC_Mag ; }
                         Term { [ {Is} ]  ; In DomainS_Mag ; }
                         Term { [ {Iz} ]  ; In DomainZt_Cir ; } } }
      { Name AbsU ; Value { Term { [ Norm[{U}] ]   ; In DomainC_Mag ; }
                         Term { [ Norm[{Us}] ]  ; In DomainS_Mag ; }
                         Term { [ Norm[{Uz}] ]  ; In DomainZt_Cir ; } } }
      { Name AbsI ; Value { Term { [ Norm[{I}] ]   ; In DomainC_Mag ; }
                         Term { [ Norm[{Is}] ]  ; In DomainS_Mag ; }
                         Term { [ Norm[{Iz}] ]  ; In DomainZt_Cir ; } } }
      { Name S ; Value { Term { [ CoefPower * {U}*Conj[{I}] ]   ; In DomainC_Mag ; }
                         Term { [ CoefPower * {Us}*Conj[{Is}] ]  ; In DomainS_Mag ; }
                         Term { [ CoefPower * {Uz}*Conj[{Iz}] ]  ; In DomainZt_Cir ; } } }
      { Name R ;
        Value {
	  Term { [ -({U}*Conj[{I}])/SquNorm[{I}] ] ; In DomainC_Mag ; }
	  Term { [ -({Us}*Conj[{Is}])/SquNorm[{Is}] ] ; In DomainS_Mag ; }
	  Term { [ -({Uz}*Conj[{Iz}])/SquNorm[{Iz}] ] ; In DomainZt_Cir ; }
	}
      }
      { Name L ; Value { Term { [ -Im[{U}/{I}]/(2*Pi*Freq) ]   ; In DomainC_Mag ; }
                         Term { [ -Im[{Us}/{Is}]/(2*Pi*Freq) ]  ; In DomainS_Mag ; } } }
      EndIf


      { Name Lint ;
        Value { Integral { [ 1./nu[]*SquNorm[nu[] * {d a}] / SquNorm[#1] ] ;
	                   In Domain_Mag ; Jacobian Vol ; Integration Gauss_dv_dv ; }
	}
      }

    }
  }
}

PostProcessing {
  { Name MagDyn_av_2D_pos ; NameOfFormulation Magnetodynamics_av_2D ;
    PostQuantity {

      { Name U ; Value { Term { [ {U} ]   ; In DomainC_Mag ; }
                         Term { [ {Us} ]  ; In DomainSWithU_Mag ; } } }

      { Name Ipos ;
        Value {
	  Integral { Type Global ;
	    [ -sigma[] * ((Dt[{a}] + {ur}/CoefGeos[]) * BF{ur}) ] ; In DomainC_Mag ;
	    Jacobian Vol ; Integration Gauss_v_dv ;
	  }
	}
      }

      { Name Upos ;
        Value {
	  Integral { Type Global ;
	    [ -CoefGeos[]
	      * (Ns[]/Sc[] * Dt[{a}]
		 + Ns[]/Sc[] / sigma[] * (js0[]*Vector[0,0,1]) * {ir})
	      * BF{ir} ];
	    In DomainS_Mag ;
	    Jacobian Vol ; Integration Gauss_v_dv ;
	  }
	}
      }

      { Name Flux ;
        Value {
	  Integral { Type Global ;
	    [ CoefGeos[]
	      * (Ns[]/Sc[] * {a})
	      * BF{ir} ];
	    In DomainS_Mag ;
	    Jacobian Vol ; Integration Gauss_v_dv ;
	  }
	}
      }

      { Name RI ; // Resistance
        Value {
	  Integral { Type Global ;
	    [ -CoefGeos[]
	      * (Ns[]/Sc[] / sigma[] * (js0[]*Vector[0,0,1]) * {ir})
	      * BF{ir} ];
	    In DomainS_Mag ;
	    Jacobian Vol ; Integration Gauss_v_dv ;
	  }
	}
      }

    }
  }
}

// --------------------------------------------------------------------------
