/*
    Magnetodynamics - Magnetic vector potential a formulation (3D)

  GlobalGroup :
  -----------
    Domain_Mag             Whole magnetic domain
    DomainCC_Mag           Nonconducting regions
    DomainC_Mag            Conducting regions
    SkinDomainC_Mag        Skin of conducting regions (surfaces)
    DomainS_Mag            Stranded inductor regions (Sources)

    SurfaceElec_Mag           Surfaces of sources in inductors

    Surface_FixedMVP3D        Surface of fixed magnetic vector potential (a, 3D)

  Function :
  --------
    js0[]                  Source current density
    nu[]                   Magnetic reluctivity
    sigma[]                Electric conductivity

  Constraints :
  ----------
    MVP_3D                 Fixed magnetic vector potential circulation (3D)
    V_3D                   Fixed voltage
    I_3D                   Fixed Current

  Parameters :
  ----------
    Freq                   Frequency (Hz)
*/
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Group {
  DefineGroup[ Domain_Mag, DomainCC_Mag, DomainC_Mag,
	       SkinDomainC_Mag,
               DomainS0_Mag, DomainS_Mag,
               SurfaceElec_Mag, Surface_FixedMVP3D ] ;
}

If (Flag_CircuitCoupling)
  Group {
    DefineGroup[ DomainZtot_Cir, DomainSource_Cir,
                 Resistance_Cir, Inductance_Cir, Capacitance_Cir, Diode_Cir,
	         Capacitance1_Cir, Capacitance2_Cir ] ;
  }
  Function {
    DefineFunction[ Resistance, Inductance, Capacitance ] ;
  }
EndIf

Function {
  DefineFunction[ mu, nu, sigma, rho, js0 ] ;
  DefineVariable[ Freq ] ;
  DefineVariable[ CoefGeo = 1];
  DefineVariable[ time0, timeMax, dtime];
  DefineVariable[ thetaFactor = 1];
}

Group{
  DefineGroup[ DomainKin ] ;
}

Function{
  DefineFunction[ Friction, Fmag ] ;
  DefineVariable[ Inertia ];
}


// --------------------------------------------------------------------------
// MagSta_hs: Magnetostatics - hs formulation

Include "Mag_Sta_hs_js0.pro" ;

// --------------------------------------------------------------------------

Group {
  Surface_a_3D_NoGauge = Region [ {Surface_FixedMVP3D, SkinDomainC_Mag} ] ;
}

Constraint {

  { Name GaugeCondition_a_Mag_3D ; Type Assign ;
    Case {
      { Region DomainCC_Mag ; SubRegion Surface_a_3D_NoGauge ; Value 0. ; }
    }
  }

}

FunctionSpace {

  // Magnetic vector potential a (b = curl a)
  { Name Hcurl_a_Mag_3D ; Type Form1 ;
    BasisFunction {
      // a = a_e * s_e
      { Name se ; NameOfCoef ae ; Function BF_Edge ;
        Support Domain_Mag ; Entity EdgesOf[ All, Not SkinDomainC_Mag ] ; }
      { Name se2 ; NameOfCoef ae2 ; Function BF_Edge ;
        Support Domain_Mag ; Entity EdgesOf[ SkinDomainC_Mag ] ; }
    }
    Constraint {
      { NameOfCoef ae  ; EntityType EdgesOf ; NameOfConstraint MVP_3D ; }
      { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_3D ; }
      { NameOfCoef ae  ; EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
	NameOfConstraint GaugeCondition_a_Mag_3D ; }
    }
  }

  // Electric scalar potential (3D)
  { Name Hregion_u_Mag_3D ; Type Form0 ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_GroupOfNodes ;
        Support DomainC_Mag ; Entity GroupsOfNodesOf[ SurfaceElec_Mag ] ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ; EntityType GroupsOfNodesOf ; NameOfConstraint V_3D ; }
      { NameOfCoef I ; EntityType GroupsOfNodesOf ; NameOfConstraint I_3D ; }
    }
  }

  // Source magnetic field
  { Name Hregion_Mag_3D_hs ; Type Form1 ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ;  // Global Basis Function
	Function BF_Global { Quantity hs ;
	                     Formulation Magnetostatics_hs {Nbr_DomainS} ;
	                     Group DomainS_Mag ; Resolution MagSta_hs {Nbr_DomainS} ; } ;
        Support Domain_Mag ; Entity Global [DomainS_Mag] ; }
    }
    GlobalQuantity {
      { Name Is ; Type AliasOf        ; NameOfCoef ur ; }
      { Name Us ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef Is ; EntityType Global ; NameOfConstraint I_3D ; }
      { NameOfCoef Us ; EntityType Global ; NameOfConstraint V_3D ; }
    }
  }

 If(Flag_CircuitCoupling)
  // Uz et Iz for circuit relations
  { Name Hregion_Cir ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainZtot_Cir ; Entity DomainZtot_Cir ; }
    }
    GlobalQuantity {
      { Name Iz ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Uz ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Uz ; EntityType Region ; NameOfConstraint V_Cir ; }
      { NameOfCoef Iz ; EntityType Region ; NameOfConstraint I_Cir ; }
    }
  }
EndIf

  { Name Position ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainKin ; Entity DomainKin ; }
    }
    GlobalQuantity {
      { Name P ; Type AliasOf  ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef P ; EntityType Region ; NameOfConstraint CurrentPosition ; }
    }
  }

  { Name Velocity ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainKin ; Entity DomainKin ; } }
    GlobalQuantity {
      { Name V ; Type AliasOf  ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef V ; EntityType Region ; NameOfConstraint CurrentVelocity ; }
    }
  }


}

//---------------------------------------------------------------------------------------------

Formulation {

  { Name Magnetodynamics_a_3D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_Mag_3D ; }

      { Name v  ; Type Local ; NameOfSpace Hregion_u_Mag_3D ; } //Massive conductor
      { Name U  ; Type Global ; NameOfSpace Hregion_u_Mag_3D [U] ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_Mag_3D [I] ; }

      { Name hs ; Type Local  ; NameOfSpace Hregion_Mag_3D_hs ; } // Stranded
      { Name Is ; Type Global ; NameOfSpace Hregion_Mag_3D_hs [Is] ; }
      { Name Us ; Type Global ; NameOfSpace Hregion_Mag_3D_hs [Us] ; }

      If(Flag_CircuitCoupling)
        { Name Uz ; Type Global ; NameOfSpace Hregion_Cir [Uz] ; }//Circuit
        { Name Iz ; Type Global ; NameOfSpace Hregion_Cir [Iz] ; }
      EndIf
    }

    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ;
        In Domain_Mag ; Jacobian Vol ; Integration II ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC_Mag ; Jacobian Vol ; Integration II ; }
      Galerkin { [ sigma[] * Dof{d v} , {a} ] ;
        In DomainC_Mag ; Jacobian Vol ; Integration II ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ] ;
        In DomainC_Mag ; Jacobian Vol ; Integration II ; }
      Galerkin { [ sigma[] * Dof{d v} , {d v} ] ;
        In DomainC_Mag ; Jacobian Vol ; Integration II ; }
      GlobalTerm { [ Dof{I}*CoefGeo, {U} ] ; In SurfaceElec_Mag ; }

      Galerkin { [ -js0[], {a} ] ;
        In  DomainS0_Mag ; Jacobian Vol ; Integration II ; }

      // Stranded coil with imposed voltage
      Galerkin { [ -Dof{d hs}, {a} ] ;
        In DomainS_Mag ; Jacobian Vol ; Integration II ; }

     Galerkin { DtDof[ Dof{a} , {d hs} ] ;
        In DomainS_Mag ; Jacobian Vol ; Integration II ; }
      Galerkin { [ 1/sigma[] * Dof{d hs} , {d hs} ] ;
        In DomainS_Mag ; Jacobian Vol ; Integration II ; }
      GlobalTerm { [ Dof{Us}/CoefGeo, {Is} ] ; In DomainS_Mag ; }

      If(Flag_CircuitCoupling)
        GlobalTerm { NeverDt[ Dof{Uz}               , {Iz} ] ; In Resistance_Cir; }
        GlobalTerm { NeverDt[ Resistance[] * Dof{Iz}, {Iz} ] ; In Resistance_Cir; }

        GlobalTerm { [ Dof{Uz}                      , {Iz} ] ; In Inductance_Cir ; }
	GlobalTerm { DtDof [ Inductance[] * Dof{Iz} , {Iz} ] ; In Inductance_Cir ; }

	GlobalTerm { [ Dof{Iz}        , {Iz} ] ; In Capacitance1_Cir ; }
	GlobalTerm { NeverDt[ Dof{Iz} , {Iz} ] ; In Capacitance2_Cir ; } // Attention
	GlobalTerm { DtDof [ Capacitance[] * Dof{Uz} , {Iz} ] ; In Capacitance_Cir ; }

        GlobalTerm { [ 0 * Dof{Uz} , {Iz} ] ; In DomainSource_Cir ; } // +++ added

        GlobalEquation {
          Type Network ; NameOfConstraint ElectricalCircuit ;
            { Node {I};  Loop {U};  Equation {I};  In SurfaceElec_Mag ; } // Massive Conductors
            { Node {Is}; Loop {Us}; Equation {Us}; In DomainS_Mag ;  } // Stranded Conductors
            { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZtot_Cir ;  }
        }
      EndIf
    }
  }


 { Name Projection ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_Mag_3D ; }
    }
    Equation {
      Galerkin { [  Dof{a}, {a} ] ;
        In Region[{DomainC_Mag, DomainS_Mag}] ; Jacobian Vol ; Integration II ; }
      Galerkin { [ -a_previousstep[], {a} ] ;
        In Region[{DomainC_Mag, DomainS_Mag}] ; Jacobian Vol ; Integration II ; }
    }
  }



  //--------------------------------------------------------------------------
  // Mechanics
  //--------------------------------------------------------------------------
  { Name Mechanical ; Type FemEquation ;
    Quantity {
      { Name V ; Type Global ; NameOfSpace Velocity [V] ; } // velocity
      { Name P ; Type Global ; NameOfSpace Position [P] ; } // position
    }
    Equation {
      GlobalTerm { DtDof [ Inertia * Dof{V} , {V} ] ; In DomainKin ; }
      GlobalTerm { [ Friction[] * Dof{V} , {V} ] ; In DomainKin ; }
      GlobalTerm { [             -Fmag[] , {V} ] ; In DomainKin ; }

      GlobalTerm { DtDof [ Dof{P} , {P} ] ; In DomainKin ; }
      GlobalTerm {       [-Dof{V} , {P} ] ; In DomainKin ; }
    }
  }

}


Resolution {

  { Name MagDyn_a_3D ;
    System {
      { Name Sys ; NameOfFormulation Magnetodynamics_a_3D ;
        Type ComplexValue ; Frequency Freq ; }
    }
    Operation {
      SetTime Freq ;
      Generate[Sys] ; Solve[Sys] ; SaveSolution[Sys] ;
    }
  }

  { Name MagDyn_a_3D_t ;
    System {
      { Name Sys ; NameOfFormulation Magnetodynamics_a_3D ; }
    }
    Operation {
      InitSolution[Sys] ;
      TimeLoopTheta[ time0, timeMax, dtime, thetaFactor]{
        Generate[Sys];  Solve[Sys]; SaveSolution[Sys] ;
      }
    }
  }

  { Name ProjectionInit ;
    System {
      { Name Pr ; NameOfFormulation Projection ; DestinationSystem Sys; }
    }
    Operation {
      If[timei != 0]{ GmshRead["a_restart.pos"]; }
      Generate[Pr] ; Solve[Pr] ; TransferSolution[Pr] ;
    }
  }

  { Name MagDyn_a_3D_t_stepbystep ; // For movement with remeshing via Gmsh
    System {
      { Name Sys ; NameOfFormulation Magnetodynamics_a_3D ; }
    }
    Operation {
      SetTime[timei];
      InitSolution[Sys] ;
      TimeLoopTheta[ timei, timei+dtime, dtime, thetaFactor]{
        Generate[Sys];  Solve[Sys]; SaveSolution[Sys] ;
        PostOperation[Map_local_StepByStep];
        //PostOperation[Force] ;
      }
    }
  }

}


PostProcessing {

  { Name MagDyn_a_3D ; NameOfFormulation Magnetodynamics_a_3D ;
    PostQuantity {
      { Name a ; Value { Term { [ {a} ]          ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name b ; Value { Term { [ {d a} ]        ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name h ; Value { Term { [ nu[] * {d a} ] ; In Domain_Mag ; Jacobian Vol ; } } }

      { Name v ; Value { Term { [ {v} ]          ; In DomainC_Mag ; Jacobian Vol ; } } }
      { Name e ; Value { Term { [ -Dt[{a}]+{d v} ] ; In DomainC_Mag ; Jacobian Vol ; } } }
      { Name j ; Value { Term { [ sigma[]*(-Dt[{a}]+{d v}) ] ; In DomainC_Mag ; Jacobian Vol ; } } }
      { Name js0 ; Value { Term { [ js0[] ]      ; In DomainS0_Mag ; Jacobian Vol ; } } }
      { Name js  ; Value { Term { [ {d hs} ]     ; In DomainS_Mag  ; Jacobian Vol ; } } }
      { Name hs  ; Value { Term { [ {hs} ]       ; In DomainS_Mag  ; Jacobian Vol ; } } }

      { Name Force_VirtualWork ; Value {
          Integral { Type Global ;
            [ 0.5 * nu[] * VirtualWork[{d a}] ] ;
            In Domain_Force; Jacobian Vol ; Integration II ;} } }

      { Name ForceX_VirtualWork ; Value {
          Integral { Type Global ;
            [ CompX[0.5 * nu[] * VirtualWork[{d a}]] ] ;
            In Domain_Force; Jacobian Vol ; Integration II ;} } }


      { Name JouleLosses ;
        Value { Integral {
            [ CoefGeo * sigma[]*SquNorm[-Dt[{a}]+{d v}] ] ;
            In DomainC_Mag ; Jacobian Vol ; Integration II ; }
        }
      }
      { Name MagEnergy ;
        Value { Integral {
	    [ CoefGeo * 1/2 * nu[] * {d a} * {d a} ] ;
	    In Domain_Mag ; Jacobian Vol ; Integration II ; }
	}
      }

      { Name Upos ;
        Value { Integral { Type Global ;
            [ -sigma[] * (Dt[{a}] + {d v}) * BF{d v} ] ;
            In DomainC_Mag ; Jacobian Vol ; Integration II ;
          }
        }
      }

      { Name Upos_js ;
        Value { Integral { Type Global ;
	  [ -( Dt[{a}] * js0[] + rho[] * js0[]*js0[] ) ] ;
	    In DomainS_Mag ; Jacobian Vol ; Integration II ;
	} }
      }

      If(!Flag_CircuitCoupling)
      { Name U ; Value {
          Term { [ {U} ]   ; In SurfaceElec_Mag ; }
          Term { [ {Us} ]  ; In DomainS_Mag ; } } }
      { Name I ; Value {
          Term { [ {I} ]   ; In SurfaceElec_Mag ; }
          Term { [ {Is} ]  ; In DomainS_Mag ; } } }
      EndIf

      If(Flag_CircuitCoupling)
      { Name U ; Value {
          Term { [ {U} ]   ; In SurfaceElec_Mag ; }
          Term { [ {Us} ]  ; In DomainS_Mag ; }
          Term { [ {Uz} ]  ; In DomainZtot_Cir ; } } }
      { Name I ; Value {
          Term { [ {I} ]   ; In SurfaceElec_Mag ; }
          Term { [ {Is} ]  ; In DomainS_Mag ; }
          Term { [ {Iz} ]  ; In DomainZtot_Cir ; } } }
      EndIf
    }
  }
}


