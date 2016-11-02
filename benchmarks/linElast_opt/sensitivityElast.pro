FunctionSpace{
  For i In {1:3}
    { Name H_v~{i}; Type Form0; 
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_Node ;
          Support Domain; Entity NodesOf[ All ] ; }
      }
      Constraint {
        { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint velocity~{i}; }
      }
    }
    { Name H_fv~{i}; Type Form0;
      BasisFunction{
        { Name wn; NameOfCoef vn; Function BF_Node;
          Support  Region[{Domain,SkinPerturb,SkinNonPerturb}]; Entity NodesOf[All];}
      }
    }
  EndFor

  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Region[{DomainOpt}] ; Entity NodesOf[ All ] ; }
    }
  }

  If (Flag_2D) 
    { Name H_lambda_Mec; Type Vector; 
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
    { Name H_dState_Mec; Type Vector; 
      BasisFunction {
        { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
          dFunction {BF_NodeX_D12, BF_Zero}; //??
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
        { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
          dFunction {BF_NodeY_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
      }
      Constraint {
        { NameOfCoef uxn ;
          EntityType NodesOf ; NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn ;
          EntityType NodesOf ; NameOfConstraint DisplacementY ; }
      }
    }
  Else
    { Name H_lambda_Mec; Type Vector; 
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
    { Name H_dState_Mec; Type Vector; 
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
      }
    }
  EndFor

 { Name FilterTopOpt ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
      }
    Equation {
       Galerkin { [ Dof{d psi}*Rmin^2.0, {d psi} ] ;
         In Domain; Jacobian Vol ; Integration I1 ; }
       Galerkin { [ Dof{psi}, {psi} ] ;
         In Domain; Jacobian Vol; Integration I1; }
       Galerkin { [ -filtSource[], {psi} ] ;
         In Domain; Jacobian Vol; Integration I1; }
      }
  }
 { Name FilterTopOpt_dXdx ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
      }
    Equation {
       Galerkin { [ Dof{d psi}*Rmin^2.0, {d psi} ] ;
         In Domain; Jacobian Vol ; Integration I1 ; }
       Galerkin { [ Dof{psi}, {psi} ] ;
         In Domain; Jacobian Vol; Integration I1; }
       Galerkin { [ -1.0, {psi} ] ;
         In Domain; Jacobian Vol; Integration I1; }
      }
  }

  If (Flag_2D) 
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

        Galerkin { [ -C[]*d_D1[du[],dV[{d v_1},{d v_2},{d v_3}]], {D1 d_u} ]; 
          In Domain; Jacobian Vol ; Integration I1 ; }
        //Galerkin { [ -C[]*{D1 u}, d_D1[{d d_u},dV[{d v_1},{d v_2},{d v_3}]] ]; 
        //  In Domain; Jacobian Vol ; Integration I1 ; }
        Galerkin {[C[]*{D1 u}*TTrace[dV[{d v_1},{d v_2},{d v_3}]],{D1 d_u}]; 
          In Domain; Jacobian Vol ; Integration I1 ; }
        Galerkin{[-sigmaV[sigmaTensLie[{D1 u}]*dV[{d v_1},{d v_2},{d v_3}]],{D1 d_u}]; 
          In Domain; Jacobian Vol ; Integration I1 ; }
        Galerkin{[-0.5*sigmaV[sigmaTensLie[{D1 u}]
	  *dV[{d v_1},{d v_2},{d v_3}]],{D1 d_u}]; 
          In Domain; Jacobian Vol ; Integration I1 ; }
        Galerkin{[-0.5*sigmaV[Transpose[dV[{d v_1},{d v_2},{d v_3}]]
	  *sigmaTensLie[{D1 u}]],{D1 d_u}]; 
          In Domain; Jacobian Vol ; Integration I1 ; }

        For i In {1:3}
          Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
            In Domain; Jacobian Vol ; Integration I1 ; }
        EndFor
      }
    }

    { Name Adjoint_u_Mec; Type FemEquation;
      Quantity {
        { Name u; Type Local; NameOfSpace H_u; }
        { Name lambda; Type Local; NameOfSpace H_lambda_Mec; }
        { Name xe; Type Local; NameOfSpace H_xe;}
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
  Else 
    { Name Adjoint_u_Mec ; Type FemEquation ;
      Quantity {
        { Name u  ; Type Local  ; NameOfSpace H_u; }
        { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec; }
        { Name xe ; Type Local ; NameOfSpace H_xe;}
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

  { Name Sensitivity; Type FemEquation;
    Quantity {
      { Name u; Type Local; NameOfSpace H_u; }
      If (!StrCmp(SensitivityMethod,"direct"))
        { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec ; }
      ElseIf (!StrCmp(SensitivityMethod,"adjoint") 
        || !StrCmp(SensitivityMethod,"semi-adjoint"))
        { Name lambda; Type Local; NameOfSpace H_lambda_Mec;}
      EndIf
      { Name xe; Type Local; NameOfSpace H_xe;}
      For i In {1:3}
        { Name v~{i}; Type Local; NameOfSpace H_v~{i};}
      EndFor
    } 
    Equation {
      // DO NOT REMOVE!!!
      // Keeping track of perturbation field Dofs in the domain 
      For i In {1:3}
        Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
      EndFor
    }
  }
  
}

Resolution{

  // filter velocity field
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

  { Name FilterTO; 
    System {
      { Name A; NameOfFormulation FilterTopOpt; } 
      If (!StrCmp[Flag_FilterMethod, "density"])     
        { Name B; NameOfFormulation FilterTopOpt_dXdx; }
      EndIf
    }
    Operation{
      CreateDir[ResDir];
      GmshRead[StrCat[ResDir,"filterIn.pos"],SOURCE_FILT_FIELD];
      Generate[A]; Solve[A]; SaveSolution[A];PostOperation[FilterTopOpt];
      If(!StrCmp[Flag_FilterMethod,"density"])
        Generate[B];Solve[B];SaveSolution[B];PostOperation[FilterTopOpt_dXdx];
      EndIf
    }
  }

  { Name Adjoint_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } 
      { Name B; NameOfFormulation Adjoint_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];

      // Load the unknown field of the physical problem
      ReadSolution[A]; 

      //If(!StrCmp(Flag_optType,"topology") && !Flag_projFuncSpace_xe)
      //  GmshRead[StrCat[ResDir0,"designVariable.pos"],DES_VAR_FIELD]; 
      //EndIf
      If(!StrCmp(Flag_optType,"topology"))
        PostOperation[u_TO];
      Else
        PostOperation[u_Mec];
      EndIf

      // Solve the adjoint problem for a given performance function
      SetGlobalSolverOptions["-petsc_prealloc 500"];
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];

      // Show the adjoint field
      PostOperation[Adjoint_u_Mec];
    }
  }

  { Name Direct_u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; } //more than 1!
      { Name B; NameOfFormulation Direct_u_Mec; }
    }
    Operation{
      CreateDir[ResDir];

      // Load the unknown field of the physical problem
      ReadSolution[A];
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir0,"designVariable.pos"],DES_VAR_FIELD]; 
      EndIf
      GmshRead[StrCat[ResDir0,"u.pos"], STATE_FIELD]; 

      // Solve the direct problem for a given design variable (velocity field)
      InitSolution[B];Generate[B];Solve[B];SaveSolution[B];

      // Show the derivative of the unknown field wrt the design variable
      PostOperation[Direct_u_Mec];
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

  // sensitivity of f_i(\tau_j, z*) wrt \tau_j 
  // for a given z*, (lambda or direct) field
  { Name Sensitivity; 
    System {
      { Name A; NameOfFormulation u_Mec; } 
      If (!StrCmp(SensitivityMethod,"direct"))
        { Name B; NameOfFormulation Direct_u_Mec; } 
      ElseIf (!StrCmp(SensitivityMethod,"adjoint")
        || !StrCmp(SensitivityMethod,"semi-adjoint"))
        { Name B; NameOfFormulation Adjoint_u_Mec; } 
      EndIf
      { Name C; NameOfFormulation Sensitivity; }
    }
    Operation{
      // Load the solution field of the physical problem       
      ReadSolution[A];
      If (!StrCmp(SensitivityMethod,"adjoint")
        || !StrCmp(SensitivityMethod,"semi-adjoint") 
        || !StrCmp(SensitivityMethod,"direct"))
        ReadSolution[B];
      EndIf
      
      // Load local fields (FIXME)
      GmshRead[StrCat[ResDir0,"u.pos"], STATE_FIELD];
      If (!StrCmp(SensitivityMethod,"adjoint"))
        GmshRead[StrCat[ResDir0,"lambda.pos"], ADJOINT_FIELD];
      EndIf

      // Compute the sensitivity wrt a given design variable (velocity field)
      CreateDir[ResDir0]; PostOperation[Sensitivity];  
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
