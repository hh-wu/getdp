/*
  MagSta_hs
    Magnetostatics - hs formulation
    (for computation of source magnetic fields associated with inductors)
*/

Function{
  DefineVariable[ Nbr_DomainB = 0] ; // Number of stranded inductors
}

Group {
  DefineGroup[ DomainB{Nbr_DomainB}, SkinDomainB{Nbr_DomainB},
               SurfaceCutB{Nbr_DomainB},
               SkinDomainB2{Nbr_DomainB}, DomainCC2{Nbr_DomainB},
	       SurfaceGh0, Domain] ;
}

// --------------------------------------------------------------------------

Group {
  For iInd In { 1:Nbr_DomainB }
    SkinDomainBtot~{iInd} = Region[ {SkinDomainB~{iInd}, SurfaceGh0} ] ;
    DomainCCmB~{iInd} = Region[ {DomainCC2~{iInd}, -DomainB~{iInd}} ] ;

    _TransitionLayer_SkinDomainB~{iInd} =
    ElementsOf[SkinDomainB2~{iInd}, OnOneSideOf SurfaceCutB~{iInd}] ;
  EndFor
}


////////////////////////////
For iInd In {1:Nbr_DomainB}
////////////////////////////

Constraint {
  { Name GaugeCondition_hs~{iInd} ; Type Assign ;
    Case {
      { Region DomainB~{iInd} ; SubRegion SkinDomainBtot~{iInd} ; Value 0. ; }
    }
  }
}

FunctionSpace {

  // Magnetic field hs (generalized source field)
  { Name Hcurl_hs~{iInd} ; Type Form1 ;
    BasisFunction {
      { Name se ; NameOfCoef he ; Function BF_Edge ;
        Support DomainB~{iInd} ; Entity EdgesOf[ All, Not SkinDomainBtot~{iInd} ] ; }
      { Name sc ; NameOfCoef Ic ; Function BF_GradGroupOfNodes ;
        Support ElementsOf[DomainCCmB~{iInd}, OnOneSideOf SurfaceCutB~{iInd} ] ;
        Entity GroupsOfNodesOf[ SurfaceCutB~{iInd} ] ; }
      { Name sc ; NameOfCoef Icc ; Function BF_GroupOfEdges ;
        Support DomainB~{iInd} ;
        Entity GroupsOfEdgesOf[ SurfaceCutB~{iInd},
          InSupport _TransitionLayer_SkinDomainB~{iInd} ] ; }
    }
    SubSpace {
      { Name BF_Cut ; NameOfBasisFunction { sc } ; }
    }
    Constraint {
      { NameOfCoef he ; EntityType EdgesOf ; NameOfConstraint MagneticField ; }

      { NameOfCoef he ;  // Gauge condition
        EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_hs~{iInd} ; }

      { NameOfCoef Icc ;
        EntityType GroupsOfNodesOf ; NameOfConstraint I_Unit ; }
    }
  }
}

Formulation {
  { Name Magnetostatics_hs~{iInd} ; Type FemEquation ;
    Quantity {
      { Name hs ; Type Local ; NameOfSpace Hcurl_hs~{iInd} ; }
    }
    Equation {
      Integral { [ Dof{d hs} , {d hs} ] ;
        In DomainB~{iInd} ; Jacobian Vol ; Integration II ; }
      Integral { [    -js0[] , {d hs} ] ;
        In DomainB~{iInd} ; Jacobian Vol ; Integration II ; }
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
      //PostOperation[Map_hs~{iInd}];
      //SaveSolution[Sys] ;
    }
  }
}


PostProcessing {
  { Name MagSta_hs~{iInd} ; NameOfFormulation Magnetostatics_hs~{iInd} ;
    PostQuantity {
      { Name hs  ; Value { Term { [ {hs} ]          ; In Domain ; Jacobian Vol ; } } }
      { Name js  ; Value { Term { [ {d hs} ]        ; In Domain ; Jacobian Vol ; } } }
      { Name js0 ; Value { Term { [ js0[] ]         ; In Domain ; Jacobian Vol ; } } }
      { Name jsx ; Value { Term { [ CompX[{d hs}] ] ; In Domain ; Jacobian Vol ; } } }
      { Name jsy ; Value { Term { [ CompY[{d hs}] ] ; In Domain ; Jacobian Vol ; } } }
      { Name jsz ; Value { Term { [ CompZ[{d hs}] ] ; In Domain ; Jacobian Vol ; } } }
      { Name phis; Value { Term { [ {dInv hs} ]     ; In Domain ; Jacobian Vol ; } } }
    }
  }
}

PostOperation Map_hs~{iInd} UsingPost MagSta_hs~{iInd} {
  Print[ hs,  OnElementsOf DomainB~{iInd}, File Sprintf("res3d/hs%g.pos",iInd) ] ;
  Print[ js,  OnElementsOf DomainB~{iInd}, File Sprintf("res3d/js%g.pos",iInd) ] ;
  Print[ js0, OnElementsOf DomainB~{iInd}, File Sprintf("res3d/js0%g.pos",iInd) ] ;
}

///////
EndFor
//////
