Constraint{
  For i In {1:3}
    { Name Dir_v~{i}; Type Assign;
      Case{ // FIXME: specify only skin
        { Region SkinPerturb; Value velocity~{i}[]; }
        { Region SkinNonPerturb; Value 0.; }
      }
    }
  EndFor
}

FunctionSpace{

  For i In {1:3}
    { Name H_fv~{i}; Type Form0;
      BasisFunction{
        { Name wn; NameOfCoef vn; Function BF_Node;
          Support  Region[{Domain,SkinPerturb}]; Entity NodesOf[All];}
      }
      If ( !Flag_NeumanVel )
        Constraint{
	  { NameOfCoef vn; EntityType NodesOf; NameOfConstraint Dir_v~{i};}
        }
      EndIf
    }
  EndFor

  If (Flag_2D) // 2D formulation
    { Name H_lambda_Mec; Type Vector ; // adjoint variable 2D
      BasisFunction {
        { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
          dFunction {BF_NodeX_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}] ; Entity NodesOf[ All ] ; }
        { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
          dFunction {BF_NodeY_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}] ; Entity NodesOf[ All ] ; }
        If (Flag_degree2)
          { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
            dFunction {BF_NodeX_D12_2E, BF_Zero};
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
          { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
            dFunction {BF_NodeY_D12_2E, BF_Zero};
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        EndIf
      }
      Constraint {
        { NameOfCoef uxn ;
          EntityType NodesOf ; NameOfConstraint DisplacementX; }
        { NameOfCoef uyn ;
          EntityType NodesOf ; NameOfConstraint DisplacementY; }
        If (Flag_degree2)
          { NameOfCoef uxn2;EntityType EdgesOf;NameOfConstraint DisplacementX ; }
          { NameOfCoef uyn2;EntityType EdgesOf ; NameOfConstraint DisplacementY ; }
        EndIf
      }
    }
    { Name H_dState_Mec ; Type Vector ; // direct sensitivity 2D
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
  Else
    { Name H_lambda_Mec ; Type Vector ; 
      BasisFunction{
        { Name sxn; NameOfCoef uxn; Function BF_NodeX; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name syn; NameOfCoef uyn; Function BF_NodeY; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name szn; NameOfCoef uzn; Function BF_NodeZ; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        If (Flag_degree2)
          { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
          { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
          { Name szn2 ; NameOfCoef uzn2 ; Function BF_NodeZ_2E ;
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        EndIf
      }
      Constraint{
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
        { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
        If (Flag_degree2)
          { NameOfCoef uxn2; EntityType EdgesOf; NameOfConstraint DisplacementX ; }
          { NameOfCoef uyn2; EntityType EdgesOf; NameOfConstraint DisplacementY ; }
          { NameOfCoef uzn2; EntityType EdgesOf; NameOfConstraint DisplacementZ ; }
        EndIf
      }
    }
    { Name H_dState_Mec ; Type Vector ; 
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
  EndIf
}

Formulation{
  For i In {1:3}
    { Name Filter_v~{i} ; Type FemEquation ;
      Quantity {
        { Name fv~{i} ; Type Local ; NameOfSpace H_fv~{i};}
      }
      Equation {
        Galerkin{ [Dof{d fv~{i}}, {d fv~{i}}];
          In Domain; Jacobian Vol; Integration I1;}
//        If ( Flag_NeumanVel )
//          Galerkin{ [-velocity~{i}[], {fv~{i}}];
//            In SkinPerturb; Jacobian Lin; Integration I1;}
//        EndIf
      }
    }
  EndFor

  If (Flag_2D) // 2D formulation
    { Name Direct_u_Mec ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local  ; NameOfSpace H_u ; }
        { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec ; }
        For i In {1:3}
          { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
        EndFor
      }
      Equation {
        Galerkin { [ C[]*Dof{D1 d_u}, {D1 d_u}] ; 
          In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }
    { Name Adjoint_u_Mec ; Type FemEquation ;
      Quantity {
        { Name u  ; Type Local  ; NameOfSpace H_u; }
        { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec; }
        { Name xe ; Type Local ; NameOfSpace H_xe;}
        For i In {1:3}
          { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
        EndFor
      } 
      Equation {
        Galerkin { [ C[{xe}] * Dof{D1 lambda}, {D1 lambda} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -dFdb[{D1 u},{D2 u},{xe}], {D1 lambda} ] ;
          In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
        Galerkin { [ 0*Dof{xe}, {xe} ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }
  Else // 3D formulation
    { Name Adjoint_u_Mec ; Type FemEquation ;
      Quantity {
        { Name u  ; Type Local  ; NameOfSpace H_u; }
        { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec; }
        { Name xe ; Type Local ; NameOfSpace H_xe;}
        For i In {1:3}
          { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
        EndFor
      }
      Equation {
        Galerkin { [ C11[{xe}] * Dof{D1 lambda}, {D1 lambda} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C12[{xe}] * Dof{D2 lambda}, {D1 lambda} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C21[{xe}] * Dof{D1 lambda}, {D2 lambda} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C22[{xe}] * Dof{D2 lambda}, {D2 lambda} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -dFdb[{D1 u},{D2 u},{xe}], {D1 lambda} ] ;
          In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
        Galerkin { [ -dFdb2[{D1 u},{D2 u},{xe}], {D2 lambda} ] ;
          In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
      }
    }
    { Name Direct_u_Mec ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local  ; NameOfSpace H_u ; }
        { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec ; }
        For i In {1:3}
          { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
        EndFor
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
  EndIf
}

Resolution{
  // FIXME
  // group  (direct,adjoint) -> Sens_u_Mec
  // give "u_Mec" as input -> other resolutions depend on "u_Mec"
  // gmsh read directly in command line !!! -> postpro without solve

  // filter velocity
  For i In {1:3}
    { Name Filter_v~{i}; 
      System {
        { Name A; NameOfFormulation Filter_v~{i}; } 
      }
      Operation{
        CreateDir[ResDir];
        InitSolution[A];Generate[A];Solve[A];
        PostOperation[Filter_v~{i}];
      }
    }
  EndFor

  // adjoint variable
  { Name Adjoint_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable

      If(!StrCmp(Flag_optType,"topology") && !Flag_projFuncSpace_xe)
        GmshRead[StrCat[ResDir0,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      //generate useful coeff !!
      If(!StrCmp(Flag_optType,"topology"))
        PostOperation[u_TO];
      Else
        PostOperation[u_Mec];
      EndIf

      SetGlobalSolverOptions["-petsc_prealloc 500"];
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      If(!StrCmp(Flag_optType,"shape"))
        PostOperation[Adjoint_u_Mec];
      EndIf
    }
  }

  { Name Adjoint_u_Mec_2; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];
      ReadSolution[A]; //Load state variable

      If(!StrCmp(Flag_optType,"topology") && !Flag_projFuncSpace_xe)
        GmshRead[StrCat[ResDir0,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      //generate useful coeff !!
      If(!StrCmp(Flag_optType,"topology"))
        PostOperation[u_TO];
      Else
        PostOperation[u_Mec];
      EndIf

      SetGlobalSolverOptions["-petsc_prealloc 500"];
      InitSolution[B];
      For i In {1:numPerf}
        Evaluate[ $perf = i ];
        If ( (i == 1 && StrFind[PerfsList, "compliance"]) ||
             (i == 2 && StrFind[PerfsList, "vonMisesElem"]) ||
             (i == 3 && StrFind[PerfsList, "vonMisesPnorm"]) )
          Printf[Sprintf["compute lambda %g", i]];
	  Generate[B]; SolveAgain[B]; SaveSolution[B];
          PostOperation[Adjoint_u_Mec];
          RenameFile["beam.res", Sprintf["beam_%g.res",i]];
          RenameFile[StrCat[ResDir,"lambda.pos"],
	    Sprintf[StrCat[ResDir,"lambda","_%g.pos"],i]];
        EndIf
      EndFor
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
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir0,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];
      PostOperation[Post_Direct_u_Mec];
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
//      If(!StrCmp(Flag_optType,"shape") 
//         || !StrCmp(Flag_SensitivityMethod,"noSystem"))   
//        GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
//      EndIf
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

  // Analytic sensitivity
  { Name Analytic_Sens_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
    }
    Operation{
      CreateDir[ResDir];

      //Load state variable and useful maps
      ReadSolution[A]; 
      //GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      
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
      //GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
      GmshRead[StrCat[ResDir0,"u.pos"], STATE_FIELD];
      
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
      GmshRead[StrCat[ResDir0,"designVariable.pos"], DES_VAR_FIELD];
      
      PostOperation[TO_Analytic_Sens_u_Mec_eig];
    }
  }

}
