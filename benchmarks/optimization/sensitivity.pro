// TODO: 
// - add perturb.geo (automatic computation of velocity field)
// - provide design variables with onelab parameter names instead of x_0, ...
// - add verbosity level (show a , lambda, ... according to the value of the verbosity)

// execution step
NONE = 0;
SEMI_AVM = 1;
TOPOPT_AVM = 2;
SHAPEOPT_AVM = 3;
SHAPEOPT_DIR = 4;

PRIMAL_SYSTEM = 1;
ADJOINT_SYSTEM = 2;
DIRECT_SYSTEM = 3;

SENS_FILT = 1;
VELOCITY_FILT = 2;

// postpro views tag
DES_VAR_FIELD = 21;
SENS_FIELD = 22;

DefineConstant[
  Flag_AnalysisMethod = {NONE,
    Choices{
      NONE = "none",
      PRIMAL_SYSTEM = "state variable",
      ADJOINT_SYSTEM = "adjoint varibale",
      DIRECT_SYSTEM = "direct derivative"
    },
    Name StrCat[pInOpt, "analysisMethod"], Label "analysis method" },
  
  Flag_SensitivityMethod = {NONE,
    Choices{
      NONE="none",
      SEMI_AVM="semi-analytic avm",
      TOPOPT_AVM="topology opt. adjoint",
      SHAPEOPT_AVM="shape opt. adjoint (Lie)",
      SHAPEOPT_DIR="shape opt. direct (Lie)" 
    },
    Name StrCat[pInOpt, "sensMethod"], Label "derivative method" },

  Flag_FilterMethod = {NONE,
    Choices{
      NONE="none",
      SENS_FILT="filter sensitivity",
      VELOCITY_FILT="filter velocity"
    },
    Name StrCat[pInOpt, "Filter"], Label "filter" },

  Rmin = {0.001*10, 
    Name "Input/OptParam/RadiusSensFilter",Label "Sensitivity Filter Radius", 
    Visible (Flag_FilterMethod==SENS_FILT)}

];

Group {
   DefineGroup[
    DomainOpt,DomainOptFix,DomainOptMV
  ];
}


Function {
  // FIXME: where to write eta,lv1, ... ?  (here)   
  // derivative of bilinear form
  d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ; 
  d_bilin_lie_NL[] = $2 * (( dhdb_NL[$1] * LV3[] ) * $1);

  // derivative of linear load
  d_M_lie[] = nu[$1] * ( LV1[ br[] ] ) * $2 ; 
  d_J_lie[] = LV2[js[]]* $1;//-( LV3[] * js[] ) * $1 ;

  prod_x_dC[#{DomainOptMV}] = ScalarField[RotateZ_desVar[],0,1]{SENS_FIELD};
  prod_x_dC[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{SENS_FIELD};
}

FunctionSpace {
  { Name Hcurl_d_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain, Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
	If (Flag_Degree)
          { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
            Support Region[{ Domain, Rotor_Bnd_MBaux}]; 
            Entity EdgesOf [ All ] ; }
	EndIf
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
      If (Flag_Degree)
        { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_2D ; }
      EndIf
    }
  }

  { Name Hcurl_lambda_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain , Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
	If (Flag_Degree)
          { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
            Support Region[{ Domain, Rotor_Bnd_MBaux}]; 
            Entity EdgesOf [ All ] ; }
	EndIf
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D; }
      If (Flag_Degree)
        { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_2D ; }
      EndIf
    }

  }

  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
  }

}

Formulation {
  //-----------------------------------------------------------------
  // Direct method Formulation 
  //-----------------------------------------------------------------
  // Compute the derivative of the state variable for each design variable
  // design variable:tau -> Velocity
  // Apply this method if the nb. of design function >>> nb. of design variables 

  { Name DirectFormulation ; Type FemEquation ;
    Quantity {
     { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
     { Name d_a ; Type Local  ; NameOfSpace Hcurl_d_a_2D ; }
   }
   Equation {
     // bilinear(Lambda,Lambda')
     Galerkin { [ nu[ {d a} ] * Dof{d d_a} , {d d_a} ] ;
       In Domain ; Jacobian Vol ; Integration I1 ; }
     Galerkin { [ dhdb_NL[ {d a} ] * Dof{d d_a} , {d d_a} ] ; 
       In DomainNL ; Jacobian Vol ; Integration I1 ; }

     // DO NOT REMOVE!!!
     // Keeping track of Dofs in auxiliar line of MB if Symmetry==1
     Galerkin {  [  0*Dof{d d_a} , {d d_a} ]  ;
       In Rotor_Bnd_MBaux; Jacobian Sur; Integration I1; }

     // pseudo-load -> depend on design variable (velocity)
     Galerkin { [ nu[ {d a} ] * {d a}, ETA[]*{d d_a} ] ; 
       In Domain ; Jacobian Vol ; Integration I1 ; }
     Galerkin { [( dhdb_NL[{d a}] * LV3[]) * {d a}, {d d_a}]  ; 
       In DomainNL ; Jacobian Vol ; Integration I1 ; }
          
     Galerkin { [ -nu[ {d a} ] * LV1[ br[] ], {d d_a} ] ;
       In DomainM ; Jacobian Vol ; Integration I1 ; }
     Galerkin { [ -LV2[js[]], {d_a} ] ;
       In DomainS ; Jacobian Vol ; Integration I1 ; }
   }
  }
 //-----------------------------------------------------------------
 // Adjoint weak formulation
 //-----------------------------------------------------------------
 // Compute the adjoint variable for a given design function
 // Apply this method if the nb. of design function <<< nb. of design variables 
 { Name AdjointFormulation ; Type FemEquation ;
    Quantity {
      { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
      { Name lambda ; Type Local  ; NameOfSpace Hcurl_lambda_2D ; }
    }
    Equation {
      Galerkin { [ nu[ {d a} ]* Dof{d lambda}  , {d lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ dhdb_NL[ {d a} ] * Dof{d lambda} , {d lambda} ] ; 
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      // DO NOT REMOVE!!!
      // Keeping track of Dofs in auxiliar line of MB if Symmetry==1
      Galerkin {  [  0*Dof{d lambda} , {d lambda} ]  ;
        In Rotor_Bnd_MBaux; Jacobian Sur; Integration I1; }

      // adjoint load
      Galerkin { [ -dFdb[{d a}], {d lambda}] ;
                 In DomainFunc ; Jacobian Vol ; Integration I1 ; }

   }
  }
 //-----------------------------------------------------------------
 // Sensitivity filtering
 //-----------------------------------------------------------------
 { Name FilterSensitivity ; Type FemEquation ;
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
      { Name A ; NameOfFormulation MagStaDyn_a_2D ; } 
      { Name B ; NameOfFormulation AdjointFormulation ; } 
      { Name C ; NameOfFormulation DirectFormulation ; }  
      { Name D ; NameOfFormulation FilterSensitivity ; }
    }
    Operation {
      CreateDir[ResDir];
      ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
      InitMovingBand2D[MB];
      MeshMovingBand2D[MB];
      
      // compute state varible, adjoint variable or derivative of state varibale
      If(Flag_AnalysisMethod == PRIMAL_SYSTEM) // state variable
        Call SolvePrimalSystem;
      EndIf
      If(Flag_AnalysisMethod == ADJOINT_SYSTEM) // adjoint variable
        Call SolveAdjointSystem; 
      EndIf
      If(Flag_AnalysisMethod == DIRECT_SYSTEM) // direct derivative of state variable
        Call SolveDirectSystem;
      EndIf

      // Sensitivity analysis method
      If(Flag_SensitivityMethod == TOPOPT_AVM) 
        Call GetTopOptAdjointSens;
      EndIf
      If(Flag_SensitivityMethod == SHAPEOPT_AVM) 
        Call GetShapeOptAdjointSens;
      EndIf
      If(Flag_SensitivityMethod == SHAPEOPT_DIR) 
        Call GetShapeOptDirectSens;
      EndIf
      If(Flag_SensitivityMethod == SEMI_AVM) 
        Call GetSemiAdjointSens;
      EndIf

      // Sensitivity analysis filtering method
      If(Flag_FilterMethod == SENS_FILT) // Filter sensitivity (only if TO)
        Call FilterSens;
      EndIf

     ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
    }
  }
}

Include "optim_post.pro" ;
