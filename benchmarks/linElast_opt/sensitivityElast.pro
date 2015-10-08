FunctionSpace{

  { Name H_lambda_Mec2D; Type Vector ; // adjoint variable 2D
    BasisFunction {
      { Name sxn ; NameOfCoef lambdaxn ; Function BF_NodeX ; 
        dFunction {BF_NodeX_D12, BF_Zero};
        Support Region[{Domain,Domain_Force}] ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef lambdayn ; Function BF_NodeY ; 
        dFunction {BF_NodeY_D12, BF_Zero};
        Support Region[{Domain,Domain_Force}] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef lambdaxn ;
        EntityType NodesOf ; NameOfConstraint DisplacementX; }
      { NameOfCoef lambdayn ;
        EntityType NodesOf ; NameOfConstraint DisplacementY; }
    }
  }

  { Name H_dState_Mec2D ; Type Vector ; // direct sensitivity 2D
      BasisFunction {
        { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
          dFunction {BF_NodeX_D12, BF_Zero}; //??
          Support Domain; Entity NodesOf[ All ] ; }
        { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
          dFunction {BF_NodeY_D12, BF_Zero};
          Support Domain; Entity NodesOf[ All ] ; }
      }
      Constraint {
        { NameOfCoef uxn ;
          EntityType NodesOf ; NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn ;
          EntityType NodesOf ; NameOfConstraint DisplacementY ; }
      }
    }
   { Name H_lambda_Mec3D ; Type Vector ; 
      BasisFunction{
        { Name sxn; NameOfCoef uxn; Function BF_NodeX; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name syn; NameOfCoef uyn; Function BF_NodeY; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name szn; NameOfCoef uzn; Function BF_NodeZ; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      }
      Constraint{
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
        { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
      }
    }
    { Name H_dState_Mec3D ; Type Vector ; 
      BasisFunction{
        { Name sxn; NameOfCoef uxn; Function BF_NodeX; 
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name syn; NameOfCoef uyn; Function BF_NodeY; 
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name szn; NameOfCoef uzn; Function BF_NodeZ; 
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      }
      Constraint{
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
        { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
      }
    }
}

Formulation{
  { Name velocity ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local ; NameOfSpace H_v ;}
    }
    Equation {
      Galerkin { [ 0*Dof{v}, {v} ] ;
        In Domain; Jacobian Vol ; Integration I1 ; }
    }
  }
  If (Flag_2D) // 2D formulation
    //If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
      { Name Direct_u_Mec ; Type FemEquation ;
        Quantity {
          { Name u ; Type Local  ; NameOfSpace H_u_Mec2D ; }
          { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec2D ; }
        }
        Equation {
          Galerkin { [ C[]*Dof{D1 d_u}, {D1 d_u}] ; 
            In Domain; Jacobian Vol ; Integration I1 ; }
        }
      }
      { Name Adjoint_u_Mec ; Type FemEquation ;
        Quantity {
          { Name u  ; Type Local  ; NameOfSpace H_u_Mec2D; }
          { Name v  ; Type Local  ; NameOfSpace H_v; }
          { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec2D; }
        } 
        Equation {
          Galerkin { [ C[] * Dof{D1 lambda}, {D1 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ -dFdb[{D1 u}], {D1 lambda} ] ;
            In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
        }
      }
    //EndIf  
  EndIf
  If (!Flag_2D) // 3D formulation
      { Name Adjoint_u_Mec ; Type FemEquation ;
        Quantity {
          { Name u  ; Type Local  ; NameOfSpace H_u_Mec3D; }
          { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec3D; }

        }
        Equation {
          Galerkin { [ C11[] * Dof{D1 lambda}, {D1 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ C12[] * Dof{D2 lambda}, {D1 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ C21[] * Dof{D1 lambda}, {D2 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ C22[] * Dof{D2 lambda}, {D2 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ -dFdb[{D1 u},{D2 u}], {D1 lambda} ] ;
            In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
          Galerkin { [ -dFdb2[{D1 u},{D2 u}], {D2 lambda} ] ;
            In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
        }
      }
      { Name Direct_u_Mec ; Type FemEquation ;
        Quantity {
          { Name u ; Type Local  ; NameOfSpace H_u_Mec3D ; }
          { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec3D ; }
        }
        Equation {
          // u formulation
         Galerkin { [ C11[] * Dof{D1 d_u}, {D1 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
         Galerkin { [ C12[] * Dof{D2 d_u}, {D1 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
         Galerkin { [ C21[] * Dof{D1 d_u}, {D2 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
         Galerkin { [ C22[] * Dof{D2 d_u}, {D2 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
        }
      }
    //EndIf
  EndIf
}

Resolution{
  // FIXME
  // group  (direct,adjoint) -> Sens_u_Mec
  // give "u_Mec" as input -> other resolutions depend on "u_Mec"
  // gmsh read directly in command line !!! -> postpro without solve

  // velocity field
  { Name velocity; // mechanic 2D/3D
    System {
      { Name A; NameOfFormulation velocity; }
    }
    Operation{
      CreateDir[ResDir];
      InitSolution[A];Generate[A];Solve[A];SaveSolution[A];
      PostOperation[velocity];
    }
  }

  // adjoint variable
  { Name Adjoint_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      PostOperation[u_Mec];//generate useful coeff !!
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Adjoint_u_Mec];
    }
  }

  // direct variable
  { Name Direct_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Direct_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Post_Direct_u_Mec];
    }
  }

  // sensitivities -> only postOperation is useful
  { Name Lie_Adjoint_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      PostOperation[u_Mec];//generate useful coeff !!

      // load useful maps   
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
      GmshRead[StrCat[ResDir,"lambda.pos"], ADJOINT_FIELD];
  
      PostOperation[Lie_Adjoint_u_Mec];
    }
  }

  { Name TO_Adjoint_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      // load useful maps   
      GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      
      PostOperation[TO_Adjoint_u_Mec];
    }
  }

  { Name Sens_Adjoint_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable and adjoint variable
      ReadSolution[A];ReadSolution[B]; 
     
      //Generate useful coeff !!
      PostOperation[u_Mec];

      //Load useful maps 
      If(!StrCmp(Flag_optType,"shape"))   
        GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
        GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
        GmshRead[StrCat[ResDir,"lambda.pos"], ADJOINT_FIELD];
      EndIf
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      EndIf

      //Run post-operation
      PostOperation[Sens_Adjoint_u_Mec];
    }
  }

   // provide "u_Mec" as input !!!
  { Name /*StrCat["Sens_",SysName]*/Sens_u_Mec; 
    // Pourait être transformé en PostOperation (gmshRead!)
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      If (!StrCmp[Flag_SensitivityMethod,"adjoint"])
        { Name B; NameOfFormulation Adjoint_u_Mec; }
      EndIf
      If (!StrCmp[Flag_SensitivityMethod,"direct"])
        { Name B; NameOfFormulation Direct_u_Mec; }
      EndIf
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable and adjoint/direct variable
      ReadSolution[A];
      If (!StrCmp[Flag_SensitivityMethod,"direct"]
          || !StrCmp[Flag_SensitivityMethod,"adjoint"])
        ReadSolution[B]; 
      EndIf
   
      //Generate useful coeff !!
      PostOperation[u_Mec];

      //Load useful maps 
      If(!StrCmp(Flag_optType,"shape") 
         || !StrCmp(Flag_SensitivityMethod,"noSystem"))   
        GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      EndIf
      If(!StrCmp(Flag_optType,"shape"))   
        GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
        GmshRead[StrCat[ResDir,"lambda.pos"], ADJOINT_FIELD];
      EndIf
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      EndIf

      //Run post-operation
      If(!StrCmp(Flag_SensitivityMethod,"noSystem")) //ex: volume   
        PostOperation[Analytic_Sens_u_Mec];
      EndIf
      If(!StrCmp(Flag_optType,"shape")) 
        PostOperation[Sens_Adjoint_u_Mec];
      EndIf
      If(!StrCmp(Flag_optType,"topology")) 
        PostOperation[Sens_Direct_u_Mec];
      EndIf    
    }
  }

  // Direct sensitivity
  { Name Lie_Direct_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Direct_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable
      ReadSolution[A];ReadSolution[B]; 
     
      // load useful maps   
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
      GmshRead[StrCat[ResDir,"lambda.pos"], ADJOINT_FIELD];
  
      PostOperation[GetShapeOptDirectSens];
    }
  }

  // Analytic sensitivity
  { Name Analytic_Sens_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable and useful maps
      ReadSolution[A]; 
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      
      PostOperation[Analytic_Sens_u_Mec];
    }
  }

  { Name Analytic_Sens_u_Mec_eig; 
    System {
      { Name A; NameOfFormulation u_Mec_eig; } //more than 1!
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable and useful maps
      ReadSolution[A]; 
      GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
      
      PostOperation[Analytic_Sens_u_Mec_eig];
    }
  }

  { Name TO_Analytic_Sens_u_Mec_eig; 
    System {
      { Name A; NameOfFormulation u_Mec_eig; } //more than 1!
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable and useful maps
      ReadSolution[A]; 
      GmshRead[StrCat[ResDir,"designVariable.pos"], DES_VAR_FIELD];
      
      PostOperation[TO_Analytic_Sens_u_Mec_eig];
    }
  }

}
