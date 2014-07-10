/*
  MagSta_hs
    Magnetostatics - hs formulation
    (for computation of source magnetic fields associated with inductors)
*/

Function{
  DefineVariable[ Nbr_DomainS = 0] ; // Number of stranded inductors
}

Group {
  DefineGroup[ DomainS_Mag{Nbr_DomainS}, SkinDomainS_Mag{Nbr_DomainS},
               SurfaceCutS_Mag{Nbr_DomainS},
               SkinDomainS2_Mag{Nbr_DomainS}, DomainCC2_Mag{Nbr_DomainS},
	       SurfaceGh0, Domain_Mag] ;
}

// --------------------------------------------------------------------------

Group {
  For iInd In { 1:Nbr_DomainS }
    SkinDomainStot_Mag~{iInd} = Region[ {SkinDomainS_Mag~{iInd}, SurfaceGh0} ] ;
    DomainCCmS_Mag~{iInd} = Region[ {DomainCC2_Mag~{iInd}, -DomainS_Mag~{iInd}} ] ;

    _TransitionLayer_SkinDomainS~{iInd} =
    ElementsOf[SkinDomainS2_Mag~{iInd}, OnOneSideOf SurfaceCutS_Mag~{iInd}] ;
  EndFor
}


////////////////////////////
For iInd In {1:Nbr_DomainS}
////////////////////////////

Constraint {
  { Name GaugeCondition_hs_Mag~{iInd} ; Type Assign ;
    Case {
      { Region DomainS_Mag~{iInd} ; SubRegion SkinDomainStot_Mag~{iInd} ; Value 0. ; }
    }
  }
}

FunctionSpace {

  // Magnetic field hs (generalized source field)
  { Name Hcurl_hs_Mag~{iInd} ; Type Form1 ;
    BasisFunction {
      { Name se ; NameOfCoef he ; Function BF_Edge ;
        Support DomainS_Mag~{iInd} ; Entity EdgesOf[ All, Not SkinDomainStot_Mag~{iInd} ] ; }
      { Name sc ; NameOfCoef Ic ; Function BF_GradGroupOfNodes ;
        Support ElementsOf[DomainCCmS_Mag~{iInd}, OnOneSideOf SurfaceCutS_Mag~{iInd} ] ;
        Entity GroupsOfNodesOf[ SurfaceCutS_Mag~{iInd} ] ; }
      { Name sc ; NameOfCoef Icc ; Function BF_GroupOfEdges ;
        Support DomainS_Mag~{iInd} ;
        Entity GroupsOfEdgesOf[ SurfaceCutS_Mag~{iInd},
                                InSupport _TransitionLayer_SkinDomainS~{iInd} ] ; }
    }
    SubSpace {
      { Name BF_Cut ; NameOfBasisFunction { sc } ; }
    }
    Constraint {
      { NameOfCoef he ; EntityType EdgesOf ; NameOfConstraint MagneticField ; }

      { NameOfCoef he ;  // Gauge condition
        EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
	NameOfConstraint GaugeCondition_hs_Mag~{iInd} ; }

      { NameOfCoef Icc ;
        EntityType GroupsOfNodesOf ; NameOfConstraint I_Unit ; }
    }
  }
}

Formulation {
  { Name Magnetostatics_hs~{iInd} ; Type FemEquation ;
    Quantity {
      { Name hs ; Type Local ; NameOfSpace Hcurl_hs_Mag~{iInd} ; }
    }
    Equation {
      Integral { [ Dof{d hs} , {d hs} ] ;
        In DomainS_Mag~{iInd} ; Jacobian Vol ; Integration II ; }
      Integral { [    -js0[] , {d hs} ] ;
        In DomainS_Mag~{iInd} ; Jacobian Vol ; Integration II ; }
    }
  }
}


Resolution {
  { Name MagSta_hs~{iInd} ;
    System {
      { Name Sys ; NameOfFormulation Magnetostatics_hs~{iInd} ; }
    }
    Operation {
      Generate[Sys] ; Solve[Sys] ;
      //SaveSolution[Sys] ;
    }
  }
}


PostProcessing {
  { Name MagSta_hs~{iInd} ; NameOfFormulation Magnetostatics_hs~{iInd} ;
    PostQuantity {
      { Name hs  ; Value { Term { [ {hs} ]          ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name js  ; Value { Term { [ {d hs} ]        ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name js0 ; Value { Term { [ js0[] ]         ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name jsx ; Value { Term { [ CompX[{d hs}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name jsy ; Value { Term { [ CompY[{d hs}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name jsz ; Value { Term { [ CompZ[{d hs}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name phis; Value { Term { [ {dInv hs} ]     ; In Domain_Mag ; Jacobian Vol ; } } }
    }
  }
}

PostOperation Map_hs~{iInd} UsingPost MagSta_hs~{iInd} {
  Print[ hs,  OnElementsOf DomainS_Mag~{iInd}, File Sprintf("hs%g.pos",iInd) ] ;
  Print[ js,  OnElementsOf DomainS_Mag~{iInd}, File Sprintf("js%g.pos",iInd) ] ;
  Print[ js0, OnElementsOf DomainS_Mag~{iInd}, File Sprintf("js0%g.pos",iInd) ] ;
}

///////
EndFor
//////
