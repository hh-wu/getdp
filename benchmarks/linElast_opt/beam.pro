Include "beam_data.geo";

DefineConstant[
  //-------------------------------------------------------------
  // optimization stuff ...
  //-------------------------------------------------------------
  Flag_SolveStateVar = {1, Name "Input/OptParam/SolveStateVar",
                           Label "Get State Variable", Choices {0,1}, Visible 1},

  Flag_SolveAdjointVar = {0, Name "Input/OptParam/SolveAdjointVar",
                             Label "Get Adjoint Variable",Choices {0,1}, Visible 1},

  Flag_PerfType = {COMPLIANCE, Name "Input/OptParam/PerfType",
                               Label "performance function type",
                               Choices {NO_PERF="No performance function",
                                        COMPLIANCE="compliance"},
			       Visible Flag_SolveAdjointVar},

  Flag_AvmFixedDomSens = {0, Name "Input/OptParam/AdjointMethodSensFixedDom",
                             Label "fixed domain derivative (avm)", 
                             Choices {0,1}, Visible 1},

  // Filter
  Flag_filterSensitivity = {0, Name "Input/OptParam/filterSens", 
                               Label "Filter Derivatives?",
                               Choices {0, 1}, Visible (Flag_topopt==1)}, 

  Rmin = {0.001*10, Name "Input/OptParam/RadiusSensFilter",
                    Label "Sensitivity Filter Radius", 
                    Visible (Flag_filterSensitivity==1)},

  Flag_InterpLaw = {0, Name "Input/OptParam/MaterialInterpLaw",
                       Label "material interpolation law",
                       Choices {0="SIMP",1="RAMP"},Visible (Flag_topopt==1)},

  degree_SIMP = {3.0, Name "Input/OptParam/SimpPenalDegree",
                      Label "Degree SIMP", Visible (Flag_topopt==1)}

  Flag_testBench = {1, Name "Geo/Test Case", 
                    Choices {0="Short Cantiler Beam", 1="MBB Beam",2="tst"}, Visible 1},

  E0 = 1,//210e09,//(Acier) N/m2
  nu = 0.3,

  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices", 
	Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];


Group {
  Bloc = #BLOC;
  //BlocForce = #POINT_5;
  If(Flag_testBench == 0) //short cantilever beam
    BlocForce = #SURF_DROITE;//force sur toute le coté de droite
  EndIf
  If(Flag_testBench == 1) //MBB-beam
    BlocForce = #POINT_4; // force sur le point 4
  EndIf
  If(Flag_testBench == 2) //MBB-beam
    BlocForce = #POINT_5; // force sur le point 5
  EndIf
  Domain_Disp = Region[{Bloc}];
  Domain_Force = Region[{BlocForce}]; 
  Domain = Region[{Domain_Disp}];
  DomainOpt = Region[{Domain_Disp}];
  DomCompl = Region[{Domain_Disp}];
  SurfTot = Region[{SURF_BAS, SURF_HAUT, SURF_GAUCHE, SURF_DROITE}];
}

Function {

  If(!Flag_topopt)
    E[] = E0;
  EndIf
  If(Flag_topopt)
     designVar[] = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};
     If(Flag_InterpLaw == 0.0) //SIMP
       E[] = (E0 - 1.0e-03)*designVar[]^degree_SIMP + 1.0e-03;
       E_prime[] = degree_SIMP*(E0 - 1.0e-03)*designVar[]^(degree_SIMP-1.0);
     EndIf
     If(Flag_InterpLaw == 1.0) // RAMP
       E[] = ( designVar[]/(1.0 + degree_SIMP*(1 - designVar[])) )*E0 ;
       E_prime[] = ( (1.0 + degree_SIMP)/( 1.0 + degree_SIMP*(1-designVar[]) )^2.0 )*E0 ;
     EndIf
     If(Flag_InterpLaw == 1.0) // alpha-law
       alpha = 1.6;
       E[] = (((1.0-alpha)/alpha)*designVar[]^degree_SIMP + designVar[]/alpha)*E0 ;
       E_prime[] = ( ( (1.0-alpha)/alpha)*degree_SIMP*designVar[]^(degree_SIMP-1) 
                       + 1.0/alpha)*E0 ;
     EndIf
  EndIf
  f[]  = E[]/(1-nu*nu);
  If(Flag_topopt) 
    f_prime[]  = E_prime[]/(1-nu*nu);
  EndIf
  c11  = 1 ; c12  = nu ; c22  = 1  ; c33  = (1-nu)/2 ; 
  C[ Bloc ]  = f[]*TensorSym[ c11, c12, 0, c22, 0, c33 ];

  If(Flag_topopt)
    C_prime[ Bloc ]  = f_prime[]*TensorSym[ c11, c12, 0, c22, 0, c33 ];
  EndIf
  s_disp = 1;
  Flag_Disp = 2; // 1: point, 2: line

  //u_fixed[] = Vector[dy/8, dy/8*2, 0] * s_disp;
  u_fixed[] = Vector[0, 0, 0] * s_disp;
  u_fixed_line[] = u_fixed[]; // * Y[]/dy;
  force_node[] = Vector[0, -1.0e-02/*1e6*/, 1]; //???
  //force_density[] = Vector[0,-9.81,0]; //???

  If(Flag_filterSensitivity)
    rmin2[] = Rmin*Rmin;
    prod_x_dC[] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  EndIf

}

Group {
  Domain_Disp_Tot = Region[{Domain_Disp, Domain_Force}];
}

Constraint {
  { Name dummy ; // [rad/s]
    Case {
      { Region Domain_Disp_Tot ; Value 1. ; }
    }
  }
}
Constraint {

 // Dirichlet constraint for Elasticity problem
 { Name DisplacementX_Mec ; Type Assign ;
  Case {
    If(Flag_testBench == 0)
      { Region #SURF_GAUCHE;  Value 0.; }
    EndIf
    If(Flag_testBench == 1)
      { Region #SURF_GAUCHE;  Value 0.; } //bloquer déplacement selon x du coté gauche
    EndIf
    If(Flag_testBench == 2)
      { Region #POINT_1;  Value 0.; } //bloquer déplacement selon x du coté gauche
      { Region #POINT_4;  Value 0.; } //bloquer déplacement selon x du coté gauche
    EndIf
  }
 }
 { Name DisplacementY_Mec; Type Assign ;
   Case {
    If(Flag_testBench == 0) //short beam
      { Region #SURF_GAUCHE;  Value 0.; } //bloquer déplacement selon y
    EndIf
    If(Flag_testBench == 1) //mbb beam
      { Region #POINT_2;  Value 0.; } //bloquer déplacement selon y du point en bas à droite
    EndIf
    If(Flag_testBench == 2)
      { Region #POINT_1;  Value 0.; } //bloquer déplacement selon x du coté gauche
      { Region #POINT_4;  Value 0.; } //bloquer déplacement selon x du coté gauche
    EndIf

  }
 }

 { Name DisplacementX_Mec_d2 ; Type Assign ;
  Case {
    //    { Region SurfTot;  Value 0.; }
  }
 }
 { Name DisplacementY_Mec_d2; Type Assign ;
   Case {
     //    { Region SurfTot;  Value 0.; }
  }
 }

}


Integration {
  { Name I1 ;
    Case { {Type Gauss ;
            Case {
              { GeoElement Point        ; NumberOfPoints  2 ; }
	      { GeoElement Line         ; NumberOfPoints  4 ; }
	      { GeoElement Triangle     ; NumberOfPoints  3 ; }
	      { GeoElement Quadrangle   ; NumberOfPoints  4 ; }
           }
         }
    }
  }
}

Jacobian {
  { Name Vol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name Sur ;
    Case {
      { Region All ; Jacobian Sur ; }
    }
  }
}

Group {
  DefineGroup[Domain_Disp, Domain_Force];
}
Function {
  DefineFunction[ 
    C,C_prime,force_density,force_node,
    rmin2, prod_x_dC, designVar 
  ];
}

FunctionSpace{
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain_Disp ; Entity NodesOf[ All ] ; }
    }
  }
  //----------------------------------------------
  { Name H_Mec2D_u ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      If (Flag_degree == 2)
       { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ; dFunction {BF_NodeX_D12_2E, BF_Zero};
         Support Domain_Disp_Tot ; Entity EdgesOf[ All ] ; }
       { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ; dFunction {BF_NodeY_D12_2E, BF_Zero};
         Support Domain_Disp_Tot ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    If (Flag_degree == 1)
      SubSpace {
        { Name u_x ; NameOfBasisFunction { sxn } ; }
        { Name u_y ; NameOfBasisFunction { syn } ; }
      }
    EndIf
    If (Flag_degree == 2)
      SubSpace {
        { Name u_x ; NameOfBasisFunction { sxn, sxn2 } ; }
        { Name u_y ; NameOfBasisFunction { syn, syn2 } ; }
      }
    EndIf
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint DisplacementX_Mec ; }
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint DisplacementY_Mec ; }
      If (Flag_degree == 2)
       { NameOfCoef uxn2 ;
         EntityType EdgesOf ; NameOfConstraint DisplacementX_Mec_d2 ; }
       { NameOfCoef uyn2 ;
         EntityType EdgesOf ; NameOfConstraint DisplacementY_Mec_d2 ; }
      EndIf
    }
  }
  //-----------------------------------------------------------------
  { Name H_Mec2D_lambda; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef lambdaxn ; Function BF_NodeX ; 
             dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef lambdayn ; Function BF_NodeY ; 
             dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
    }
      SubSpace {
        { Name lambda_x ; NameOfBasisFunction { sxn } ; }
        { Name lambda_y ; NameOfBasisFunction { syn } ; }
      }
    Constraint {
      { NameOfCoef lambdaxn ;
        EntityType NodesOf ; NameOfConstraint DisplacementX_Mec; }
      { NameOfCoef lambdayn ;
        EntityType NodesOf ; NameOfConstraint DisplacementY_Mec; }
    }
  }
}

// +++ for dummy space
Constraint {
  { Name Displacement_Mec_dum ; Type Assign ;
    Case {
      { Region Domain_Disp_Tot ; Value 1; }
    }
  }
}

FunctionSpace{
  { Name H_Mec2D_u_dum ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
    }
    SubSpace {
      { Name u_dum_x ; NameOfBasisFunction { sxn } ; }
      { Name u_dum_y ; NameOfBasisFunction { syn } ; }
    }
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint Displacement_Mec_dum ; }
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint Displacement_Mec_dum ; }
    }
  }
}

FunctionSpace{
{ Name dummy ; Type Form1P ;
    BasisFunction {
      { Name s_dummy ; NameOfCoef s_dummy1 ; Function BF_RegionZ;
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
   }
    Constraint {
      { NameOfCoef s_dummy1 ; EntityType NodesOf ; NameOfConstraint dummy ; }
    }
  }
}

Formulation {
  { Name Mec2D_u ; Type FemEquation ;
    Quantity {
       { Name u ; Type Local ; NameOfSpace H_Mec2D_u ;}
       { Name u_x ; Type Local ; NameOfSpace H_Mec2D_u[u_x] ;}
       { Name u_y ; Type Local ; NameOfSpace H_Mec2D_u[u_y] ;}
       { Name u_dum_x ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_x] ;}
       { Name u_dum_y ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_y] ;}
    }
    Equation {
       // u formulation
      Galerkin { [ C[]*Dof{D1 u}, {D1 u}] ; //D1 --> grad ??
                 In Domain_Disp; Jacobian Vol ; Integration I1 ; }

      // densite de force imposee
      If (0)
      Galerkin { [ force_density[], {u}] ;
                 In Domain_Force ; Jacobian Vol ; Integration I1; }
      EndIf

      // Pour forces nodales imposees
      If (1)
        Galerkin { [ -AssDiag[]{1}*CompX[force_node[]]*Unit[Dof{u_dum_x}],Unit[{u_x}]];
                   In Domain_Force ; Jacobian Sur ; Integration I1; }
        Galerkin { [ -AssDiag[]{1}*CompY[force_node[]]*Unit[Dof{u_dum_y}],Unit[{u_y}]];
                   In Domain_Force ; Jacobian Sur ; Integration I1; }
      EndIf
    }
   }
  // Filter of objective function sensitivities
  { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
      }
    Equation {
      Galerkin{ [rmin2[]*Dof{Grad psi}, {Grad psi}];
        In Domain_Disp; Jacobian Vol; Integration I1;}
 
      Galerkin{ [  Dof{psi}, {psi}];
       In Domain_Disp; Jacobian Vol; Integration I1;}
 
      Galerkin{ [-prod_x_dC[], {psi}];
        In Domain_Disp; Jacobian Vol; Integration I1;}
      }
  }
  //-----------------------------------------------------------------
  // Adjoint Formulation
  //-----------------------------------------------------------------
  { Name AdjointFormulation ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local  ; NameOfSpace H_Mec2D_u; }
      { Name lambda ; Type Local  ; NameOfSpace H_Mec2D_lambda; }
    }
    Equation {
      // bilinear(Lambda,Lambda')
      Galerkin { [ C[]*Dof{D1 lambda}, {D1 lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }

      // Adjoint load
      If(Flag_PerfType == COMPLIANCE) //Int(C*u^2)
        Printf["-- Compliance Pseudoload --"];
        Galerkin { [ -2.0*C[]*{D1 u}, {D1 lambda} ] ;
         In Domain ; Jacobian Vol ; Integration I1 ; }
      EndIf
   }
  }

  // Direct method sensitivity formulation --> compute du/dx
  { Name DirectSystem ; Type FemEquation ;
    Quantity {
	{ Name u ; Type Local ; NameOfSpace H_Mec2D_u ;}
	{ Name u_prime ; Type Local ; NameOfSpace H_Mec2D_u ;}	
    }
    Equation {
     //écriture correcte??
     Galerkin { [ C[]*Dof{D1 u_prime}, {D1 u_prime}] ; 
                 In Domain_Disp; Jacobian Vol ; Integration I1 ; }
     Galerkin { [ C_prime[]*{D1 u}, {D1 u_prime}] ; 
                 In Domain_Disp; Jacobian Vol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name OptimStep ;
    System {
        { Name A ; NameOfFormulation Mec2D_u ; }
        { Name B ; NameOfFormulation AdjointFormulation ; }
        { Name C ; NameOfFormulation Filt_sens ; }
    }
    Operation { 
      CreateDir[ResDir];
      //-------------------------------------------------------------------
      If(Flag_SolveStateVar) //Solve for u ?
        Printf["-- Compute State Variable --"];
        If(Flag_topopt)
          GmshRead[StrCat[ResDir,"designVariable.pos"], DES_VAR_FIELD]; 
        EndIf
        InitSolution[A];Generate[A];Solve[A];SaveSolution[A];
        PostOperation[Get_PrimalSystem];
      EndIf
      //-------------------------------------------------------------------
      If(Flag_SolveAdjointVar) 
        Printf["-- Compute Adjoint Variable --"];
        ReadSolution[A]; //Load state variable (potential vector)
        If(Flag_topopt)
          GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
        EndIf
        InitSolution[B]; Generate[B]; Solve[B]; 
        SaveSolution[A]; SaveSolution[B]; 
        PostOperation[Get_AdjointSystem];
      EndIf
      //-------------------------------------------------------------------
      If(Flag_AvmFixedDomSens) // adjoint method sens. - fixed mesh
        Printf["-- Compute AVM sensitivity analysis (fixed domain) --"];
        ReadSolution[A];ReadSolution[B];//A and Lambda   
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
        PostOperation[Get_AvmFixedDomSens];
      EndIf
      //-------------------------------------------------------------------
      If(Flag_filterSensitivity) // Filter sensitivity (only if TO)
        Printf["-- Filter Sensitivity --"];
        GmshRead[StrCat[ResDir,"Sensitivity_DesVar.pos"], SENS_FIELD]; 
        Generate[C]; Solve[C]; SaveSolution[C];
        PostOperation[Get_FilteredSens];
      EndIf
    }
  }
}

Include "optim_post_elast.pro";



