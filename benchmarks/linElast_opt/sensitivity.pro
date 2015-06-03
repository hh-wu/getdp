// execution
NONE = 0;
SEMI_AVM = 1;
FIXDOM_AVM = 2;
VARDOM_AVM = 3;
VARDOM_DIR = 4;

PRIMAL_SYSTEM = 1;
ADJOINT_METHOD = 2;
DIRECT_METHOD = 3;

SENS_FILT = 1;
VELOCITY_FILT = 2;

// postpro views tag
VELOCITY_FIELD = 7;
EPS_U_FIELD = 8;
EPS_LAMBDA_FIELD = 9;
DES_VAR_FIELD = 21;
SENS_FIELD = 22;
TORQUE_VAR_FIELD = 20;//user provided

ppOpt = "Input/OptParam/";

DefineConstant[
  Flag_AnalysisMethod = {NONE,
    Choices{
      NONE = "none",
      PRIMAL_SYSTEM = "state variable",
      ADJOINT_METHOD = "adjoint varibale",
      DIRECT_METHOD = "direct derivative"
    },
    Name StrCat[ppOpt, "analysisMethod"], Label "analysis method" },
  
  Flag_SensitivityMethod = {NONE,
    Choices{
      NONE="none",
      SEMI_AVM="semi-analytic avm",
      FIXDOM_AVM="fixed domain avm",
      VARDOM_AVM="var. domain avm",//lie
      VARDOM_DIR="var. domain direct" //lie
    },
    Name StrCat[ppOpt, "sensMethod"], Label "derivative method" },

  Flag_FilterMethod = {NONE,
    Choices{
      NONE="none",
      SENS_FILT="filter sensitivity",
      VELOCITY_FILT="filter velocity"
    },
    Name StrCat[ppOpt, "Filter"], Label "filter" },

  Rmin = {0.001*10, 
    Name "Input/OptParam/RadiusSensFilter",Label "Sensitivity Filter Radius", 
    Visible (Flag_FilterMethod==SENS_FILT)},

  Flag_filterMeshCoordinates = {0, 
    Choices {0, 1},
    Name "Input/OptParam/filterMeshCoord", Label "Filter mesh nodes coordinates?", 
    Visible (Flag_FilterMethod==SENS_FILT)}
];

Group {
   DefineGroup[
     DomainOpt,DomainFunc
  ];
}

Function{
  DefineFunction[
    dFdb,dF_adjoint_lie
  ];

}

Function {
  rmin2[] = Rmin*Rmin;
  prod_x_dC[] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  
  // lie derivative
  velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};
//  d_u[] = Transpose[GradVectorField[XYZ[],0,1]{999}];
//  d_lambda[] = Transpose[GradVectorField[XYZ[],0,1]{9999}];
//  epsilon_du_v[] = 0.5 * ( Transpose[GradVectorField[XYZ[],0,1]{1999}#1] + #1 );
//  epsilon_dlambda_v[] = 0.5* ( Transpose[GradVectorField[XYZ[],0,1]{19999}#2] + #2);

  d_epsLambda[] = Transpose[GradVectorField[XYZ[],0,1]{EPS_LAMBDA_FIELD}];  
  d_epsU[] = Transpose[GradVectorField[XYZ[],0,1]{EPS_U_FIELD}];  
  dV[] = Transpose[GradVectorField[XYZ[],0,1]{VELOCITY_FIELD}]; 
  ETA[] = dV[]#1 + Transpose [ #1 ] + TTrace [ #1 ] * TensorDiag[1,1,1];//(1,2)-form
  LV1[] = dV[] * $1 ;
  LV2[] = TTrace [ dV[]#1 ] * $1 - Transpose [ #1 ] * $1 ;
  LV3[] = Transpose [ dV[]#1 ] - TTrace [ #1 ] * TensorDiag[1,1,1];
  
  // Derivative of performance function
  If(Flag_PerfType == COMPLIANCE)
    Func[] = 0.5* (C[] * $1) * $1; //F = C * (D u)^2 
    dFdb[] = C[] * $1; //dF/db = 2 * C * (D u)
    //dF_adjoint_lie[] = -0.5* (C[] * $1) * ( ETA[] * $1 ) ;
    dF_adjoint_lie[] = 0.5 * $1 * ( (C[] * ETA[]) * $1 ); 
//    dF_adjoint_lie[] =  0.5*(( C[] * ( Transpose[ dV[]#1 ] * $1 ) ) * $1
//                 + ( C[] * $1 ) * ( Transpose[ #1 ] * $1 )
//                 + ( ( C[] * $1 ) * $1 ) * TTrace[ #1 ]); 

  EndIf
  dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];

  // derivative of bilinear form ($1:{D1 u}, $2:{D1 lambda})
  d_bilin_lie[] = $2 * ( (C[] * ETA[]) * $1 ); 

//  d_bilin_lie[] = - $1 * ( ( C[] * ETA[] ) * $2 ) 
//                  + velocityField[] * ( ( d_epsLambda[] * C[] ) * $1 )  
//                  + $2 * ( ( C[] * Transpose[d_epsU[]] ) * velocityField[] );

//  d_bilin_lie[] =  ( C[] * ( Transpose[ dV[]#1 ] * $1 ) ) * $2
//                 + ( C[] * $1 ) * ( Transpose[ #1 ] * $2 )
//                 + ( ( C[] * $1 ) * $2 ) * TTrace[ #1 ]; 
                  
//  d_bilin_lie[] = - (C[] * $1)* ( d_lambda[] * velocityField[] ) 
//                  - (C[] * ( d_u[] * velocityField[] ))* $2  
//                  + TTrace [ dV[] ]*(C[] * $1) * $2;

//  d_bilin_lie[] = - (C[] * Transpose[epsilon_dlambda_v[]]) * $1 
//                  - (C[] * epsilon_du_v[])* $2  
//                  + TTrace [ dV[] ] * (C[] * $1) * $2;
}

FunctionSpace {
  //-----------------------------------------------------------------
  //  Direct differentiation variable 
  //-----------------------------------------------------------------
  { Name H_d_u_Mec2D ; Type Vector ; 
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
        dFunction {BF_NodeX_D12, BF_Zero}; //??
        Support Domain; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
        dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain; Entity NodesOf[ All ] ; }
    }
      SubSpace {
        { Name u_x ; NameOfBasisFunction { sxn } ; }
        { Name u_y ; NameOfBasisFunction { syn } ; }
      }
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint DisplacementX_Mec ; }
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint DisplacementY_Mec ; }
    }
  }
  //-----------------------------------------------------------------
  //  Adjoint variable --> homogenous constraints
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
  //-----------------------------------------------------------------
  // Filtered sensitivity
  //-----------------------------------------------------------------
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
  }
}

Formulation {
  //-----------------------------------------------------------------
  // Direct sensitivity Formulation 
  //-----------------------------------------------------------------
  // Compute the derivative of the state variable for each design variable
  // design variable:tau -> Velocity
  // Apply this method if the nb. of design function >>> nb. of design variables 

  { Name DirectDerivFormulation ; Type FemEquation ;
    Quantity {
     { Name u ; Type Local  ; NameOfSpace H_Mec2D_u ; }
     { Name d_u ; Type Local  ; NameOfSpace H_d_u_Mec2D ; }
   }
   Equation {
      // u formulation
      Galerkin { [ C[]*Dof{D1 d_u}, {D1 d_u}] ; 
        In Domain; Jacobian Vol ; Integration I1 ; }

   }
  }
 //-----------------------------------------------------------------
 // Adjoint weak formulation
 //-----------------------------------------------------------------
 // Compute the adjoint variable for a given design function
 // Apply this method if the nb. of design function <<< nb. of design variables 
  { Name AdjointFormulation ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local  ; NameOfSpace H_Mec2D_u; }
      { Name u_x ; Type Local ; NameOfSpace H_Mec2D_u[u_x] ;}
      { Name u_y ; Type Local ; NameOfSpace H_Mec2D_u[u_y] ;}
      { Name u_dum_x ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_x] ;}
      { Name u_dum_y ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_y] ;}
      { Name lambda ; Type Local  ; NameOfSpace H_Mec2D_lambda; }
    }
    Equation {
      // bilinear(Lambda,Lambda')
      Galerkin { [ C[] * Dof{D1 lambda}, {D1 lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }

      // Adjoint load
      Galerkin { [ -dFdb[{D1 u}], {D1 lambda} ] ;
         In DomainFunc ; Jacobian Vol ; Integration I1 ; }
   }
  }
 //-----------------------------------------------------------------
 // Sensitivity filtering
 //-----------------------------------------------------------------
 { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
      }
    Equation {
       Galerkin { [ Dof{d psi}*Rmin^2.0, {d psi} ] ; 
                   In DomainOpt; Jacobian Vol ; Integration I1 ; }

       Galerkin { [ Dof{psi}, {psi} ] ; 
                   In DomainOpt; Jacobian Vol; Integration I1; }

       Galerkin { [ -prod_x_dC[], {psi} ] ; 
                   In DomainOpt; Jacobian Vol; Integration I1; }
      }
  }
}

Include "SensitivityMacros.pro";

Resolution {

  { Name OptimStep ;
    System {
          { Name A ; NameOfFormulation Mec2D_u ; } //state variable
          { Name B ; NameOfFormulation AdjointFormulation ; } //adjoint variable
          { Name C ; NameOfFormulation DirectDerivFormulation ; }  //direct variable
          { Name D ; NameOfFormulation Filt_sens ; }
    }
    Operation {
     CreateDir["res/"];
     //-------------------------------------
     If(Flag_AnalysisMethod == PRIMAL_SYSTEM) // state variable
       Call SolvePrimalSystem;
     EndIf
     If(Flag_AnalysisMethod == ADJOINT_METHOD) // adjoint variable
       Call SolveAdjointSystem; 
     EndIf
     If(Flag_AnalysisMethod == DIRECT_METHOD) // direct derivative of state variable
       Call SolveDirectSystem;// FIXME
     EndIf
     //-------------------------------------
     If(Flag_SensitivityMethod == FIXDOM_AVM) // adjoint method sens. - fixed mesh
	Call GetFixDomAdjointSens;
     EndIf
     If(Flag_SensitivityMethod == VARDOM_AVM) //shape optimization derative (avm lie)
	Call GetVarDomAdjointSens;
     EndIf
     If(Flag_SensitivityMethod == VARDOM_DIR) //shape optimization derative (avm lie)
	Call GetVarDomDirectSens;
     EndIf
     If(Flag_SensitivityMethod == SEMI_AVM) // semi-analytic avm quantitys
	Call GetSemiAdjointSens;
     EndIf
     If(Flag_FilterMethod == SENS_FILT) // Filter sensitivity (only if TO)
	Call FilterSens;
     EndIf
     //-------------------------------------
    }
  }
}

Include "optim_post_elast.pro" ;


