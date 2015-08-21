Group {
  DefineGroup[Domain,DomainFunc] ;
}

Jacobian {
  { Name Vol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Triangle ; NumberOfPoints 4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints 4 ; }
          { GeoElement Tetrahedron  ; NumberOfPoints 4 ; }
	}
      }
    }
  }
}

FunctionSpace {
  // scalar magnetic potential
  { Name Hgrad_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
  // direct derivative of vector magnetic potential
  { Name H_dState_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
  // adjoint variable for the vector magnetic potential
  { Name H_lambda_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
  // vector magnetic potential
  { Name Hcurl_a; Type Form1;
    BasisFunction {
      { Name se;  NameOfCoef ae;  Function BF_Edge; Support Domain ;
        Entity EdgesOf[ All ]; }
      If (Flag_Degree)
        { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ; 
          Support Domain; Entity EdgesOf [All];}
      EndIf
    }
    Constraint {
      { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_a ; }
        If (Flag_Degree)
          { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint a ; }
        EndIf
    }
  }
  // direct derivative of vector magnetic potential
  { Name H_dState_Hcurl_a ; Type Form1;
    BasisFunction {
      { Name se;NameOfCoef ae;Function BF_Edge; Support Domain;Entity EdgesOf[ All ]; }
        If (Flag_Degree)
          { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ; 
            Support Domain; Entity EdgesOf [All];}
        EndIf
    }
    Constraint {
      { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_a ; }
        If (Flag_Degree)
          { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint a ; }
        EndIf
    }
  }
  // adjoint variable for the vector magnetic potential
  { Name H_lambda_Hcurl_a; Type Form1 ; // adjoint variable
    BasisFunction {
    { Name se;NameOfCoef ae;Function BF_Edge;Support Domain;Entity EdgesOf[ All ]; }
      If (Flag_Degree)
        { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ; 
          Support Domain; Entity EdgesOf [All];}
      EndIf
    }
    Constraint {
      { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_a ; }
        If (Flag_Degree)
          { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint a ; }
        EndIf
    }
  }
  For i In {1:NumMagnets}
    // auxiliary field on layer of elements touching each magnet, for the
    // accurate integration of the Maxwell stress tensor (the gradient of this
    // field converges to the outside normal to the magnet when the mesh is
    // refined)
    { Name Magnet~{i} ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_GroupOfNodes ;
          Support Air ; Entity GroupsOfNodesOf[ SkinMagnet~{i} ] ; }
      }
      Constraint {
        { NameOfCoef un ; EntityType GroupsOfNodesOf ; NameOfConstraint Magnet~{i} ; }
      }
    }
  EndFor
}

Formulation {
  { Name MagSta_a; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
      For i In {1:NumMagnets}
        { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ nu[] * br[] , {d a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
      EndFor
    }
  }
  { Name MagSta_phi ; Type FemEquation ;
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
      For i In {1:NumMagnets}
        { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ - mu[] * Dof{d phi} , {d phi} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ - mu[] * hc[] , {d phi} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
      EndFor
    }
  }

  // direct formulation
  { Name Direct_MagSta_a ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
        For i In {1:NumMagnets}
          { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
        EndFor
      { Name d_a ; Type Local  ; NameOfSpace H_dState_Hcurl_a ; }
    }
    Equation {
      // bilinear(Lambda,Lambda')
      Galerkin { [ nu[] * Dof{d d_a} , {d d_a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
      EndFor
      // pseudo-load -> depend on design variable (velocity)
      Galerkin { [ nu[ {d a} ] * {d a}, ETA[]*{d d_a} ] ; 
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ nu[ {d a} ] * LV1[ br[] ], {d d_a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
    }
  }
  { Name Direct_MagSta_phi ; Type FemEquation ;
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
        For i In {1:NumMagnets}
         { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
        EndFor
      { Name d_phi ; Type Local  ; NameOfSpace H_dState_phi ; }
    }
    Equation {
      Galerkin { [ - mu[] * Dof{d d_phi} , {d d_phi} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space ???
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
      EndFor
      Galerkin { [ mu[] * {d phi}, ETA[]*{d d_phi} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ -mu[] * LV2[ hc[] ], {d d_phi} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
    }
  }

  // adjoint formulation
  { Name Adjoint_MagSta_phi ; Type FemEquation ; //phi
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
        For i In {1:NumMagnets}
         { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
       EndFor
      { Name lambda ; Type Local  ; NameOfSpace Hgrad_phi ; }
    }
    Equation {
      Galerkin { [  mu[] * Dof{d lambda} , {d lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space ???
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
      EndFor
      Galerkin { [ -dFdb[{d phi}], {d phi}] ;
        In DomainFunc ; Jacobian Vol ; Integration I1 ; }
   }
  }
  { Name Adjoint_MagSta_a ; Type FemEquation ; //a
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
        For i In {1:NumMagnets}
          { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
        EndFor
      { Name lambda ; Type Local  ; NameOfSpace H_lambda_Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[]* Dof{d lambda}  , {d lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
      EndFor
      // adjoint load
      Galerkin { [ -dFdb[{d a}], {d lambda} ] ;
        In DomainFunc ; Jacobian Vol ; Integration I1 ; }
    }
  }
}

Resolution {
  // FIXME: Name StrCat["MagSta_",sys] !!!  
  // primal system
    { Name MagSta_a ;
      System {
        { Name A ; NameOfFormulation MagSta_a ; } //MagSta_a should be parameter
      }
      Operation {
        Generate[A] ; Solve[A] ; SaveSolution[A] ;
        PostOperation[MagSta_a] ;
      }
    }
    { Name MagSta_phi ;
      System {
        { Name A ; NameOfFormulation MagSta_phi ; }
      }
      Operation {
        Generate[A] ; Solve[A] ; SaveSolution[A] ;
        PostOperation[MagSta_phi] ;
      }
    }
//  { Name primalSystem ;
//    System {
//      If(primal_sys == 0)
//        { Name A ; NameOfFormulation MagSta_a ; }
//      EndIf
//      If(primal_sys == 1)
//        { Name A ; NameOfFormulation MagSta_phi ; }
//      EndIf
//    }
//    Operation {
//      Generate[A] ; Solve[A] ; SaveSolution[A] ;
//      If(primal_sys == 0)
//        PostOperation[MagSta_a] ;
//      EndIf
//      If(primal_sys == 1)
//        PostOperation[MagSta_phi] ;
//      EndIf
//    }
//  }

  // adjoint system
  { Name Adjoint_MagSta_a; 
    System {
      { Name A; NameOfFormulation MagSta_a; } 
      { Name B; NameOfFormulation Adjoint_MagSta_a; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Adjoint_MagSta_a];
    }
  }
  { Name Adjoint_MagSta_phi; 
    System {
      { Name A; NameOfFormulation MagSta_phi; } 
      { Name B; NameOfFormulation Adjoint_MagSta_phi; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Adjoint_MagSta_phi];
    }
  }

  // direct system
  { Name Direct_MagSta_a; 
    System {
      { Name A; NameOfFormulation MagSta_a; } //more than 1!
      { Name B; NameOfFormulation Direct_MagSta_a; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Direct_MagSta_a];
    }
  }
  { Name Direct_MagSta_phi; 
    System {
      { Name A; NameOfFormulation MagSta_phi; } //more than 1!
      { Name B; NameOfFormulation Direct_MagSta_phi; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Direct_MagSta_phi];
    }
  }

  // Lie derivative
  { Name Lie_Adjoint_MagSta_a; //same as phi -> fixme !!
    System {
      { Name A; NameOfFormulation MagSta_a; } //more than 1!
      { Name B; NameOfFormulation Adjoint_MagSta_a; }
    }
    Operation{
      // TODO: gmsh read directly in command line !!!
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      // load useful maps   
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  
      PostOperation[Lie_Adjoint_MagSta_a];
    }
  }
  { Name Lie_Adjoint_MagSta_phi; //same as phi -> fixme !!
    System {
      { Name A; NameOfFormulation MagSta_a; } //more than 1!
      { Name B; NameOfFormulation Adjoint_MagSta_phi; }
    }
    Operation{
      // TODO: gmsh read directly in command line !!!
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      // load useful maps   
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  
      PostOperation[Lie_Adjoint_MagSta_phi];
    }
  }

  { Name Lie_Direct_MagSta_a; 
    System {
      { Name A; NameOfFormulation MagSta_a; } //more than 1!
      { Name B; NameOfFormulation Direct_MagSta_a; }
    }
    Operation{
      // TODO: gmsh read directly in command line !!!
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      // load useful maps   
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  
      PostOperation[Lie_Direct_MagSta_a];
    }
  }
  { Name Lie_Direct_MagSta_phi; 
    System {
      { Name A; NameOfFormulation MagSta_a; } //more than 1!
      { Name B; NameOfFormulation Direct_MagSta_phi; }
    }
    Operation{
      // TODO: gmsh read directly in command line !!!
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      // load useful maps   
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  
      PostOperation[Lie_Direct_MagSta_phi];
    }
  }

}


