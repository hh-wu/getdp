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
SENS_FIELD = 22;

MAGSTADYN = 0;
ELAST2D = 1;
ELAST3D = 2;

DefineConstant[
  Flag_SysType = {MAGSTADYN,
    Choices{
      MAGSTADYN = "magnetostatic",
      ELAST2D = "lin. elast."
    },
    Name StrCat[pInOpt, "systemType"], Label "system type" },

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
    Visible (Flag_FilterMethod==SENS_FILT)},

  Flag_NL = 0
];

Group {
   DefineGroup[
    DomainOpt,DomainOptFix,DomainOptMV
  ];
}



Function {
  DefineFunction[ 
    br_mag
  ];
  // FIXME: where to write eta,lv1, ... ?  (here)
   
  // derivative of bilinear form and linear load 
  If(Flag_SysType == MAGSTADYN)
    dot_er[] = (et[] * velocityField[])/Norm[XYZ[]] * et[];
    d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ; 
    d_bilin_lie_NL[] = $2 * (( dhdb_NL[$1] * LV3[] ) * $1);
    d_M_lie[] = nu[$1] * ( LV1[ br[] ] ) * $2 
              + nu[$1] * br_mag[] * (dot_er[]*$2); 
    d_J_lie[] = LV2[js[]]* $1;//-( LV3[] * js[] ) * $1 ;
  EndIf
  If(Flag_SysType == ELAST2D)
    d_bilin_lie[] = -( C[] * d_e_u[] ) * $2 
                    -( C[] * $1 ) * d_e_lam[] 
                    +( (C[] * $1) * $2 ) * TTrace[dV[]];
  EndIf

  // filter sensitivity (topology optimization)
  If(Flag_SysType == MAGSTADYN)
    prod_x_dC[#{DomainOptMV}] = ScalarField[RotateZ_desVar[],0,1]{SENS_FIELD};
    prod_x_dC[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  EndIf
  If(Flag_SysType != MAGSTADYN)
    prod_x_dC[#{DomainOpt}] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  EndIf
}

FunctionSpace {
  // Direct method SA: derivative of state variable
  If(Flag_SysType == MAGSTADYN)
    { Name H_dState ; Type Form1P ;
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
  EndIf
  If(Flag_SysType == ELAST2D)
    { Name H_dState ; Type Vector ; 
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
  EndIf

  // Adjoint method SA: adjoint variable
  If(Flag_SysType == MAGSTADYN)
    { Name H_lambda ; Type Form1P ; // adjoint variable
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
  EndIf
  If(Flag_SysType == ELAST2D)
    { Name H_lambda; Type Vector ; // adjoint variable
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
  EndIf

  // SA filter
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
  If(Flag_SysType == MAGSTADYN)
    { Name DirectFormulation ; Type FemEquation ;
      Quantity {
        { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
        { Name d_a ; Type Local  ; NameOfSpace H_dState ; }
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
//     Galerkin { [ -nu[ {d a} ] * dV[]*br[], {d d_a} ] ;
//       In DomainM ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -nu[ {d a} ] * br_mag[]*dot_er[],{d d_a} ] ;
          In DomainM ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -LV2[js[]], {d_a} ] ;
          In DomainS ; Jacobian Vol ; Integration I1 ; }
      }
    }
  EndIf
  If(Flag_SysType == ELAST2D)
    { Name DirectFormulation ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local  ; NameOfSpace H_Mec2D_u ; }
        { Name d_u ; Type Local  ; NameOfSpace H_dState ; }
      }
      Equation {
        // u formulation
        Galerkin { [ C[]*Dof{D1 d_u}, {D1 d_u}] ; 
          In Domain; Jacobian Vol ; Integration I1 ; }

//      Galerkin { [ C[] * d_e_u[], {D1 d_u}] ; 
//        In Domain; Jacobian Vol ; Integration I1 ; }
//      Galerkin { [ C[] * {D1 u}, {D1 d_u}] ; 
//        In Domain; Jacobian Vol ; Integration I1 ; }
//      Galerkin { [ -C[] * {D1 u} * TTrace[dV[]], {D1 d_u}] ; 
//        In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }
  EndIf  
 //-----------------------------------------------------------------
 // Adjoint weak formulation
 //-----------------------------------------------------------------
 // Compute the adjoint variable for a given design function
 // Apply this method if the nb. of design function <<< nb. of design variables 
 If(Flag_SysType == MAGSTADYN)
   { Name AdjointFormulation ; Type FemEquation ;
     Quantity {
       { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
       { Name lambda ; Type Local  ; NameOfSpace H_lambda ; }
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
   EndIf
 If(Flag_SysType == ELAST2D)
   { Name AdjointFormulation ; Type FemEquation ;
     Quantity {
       { Name u  ; Type Local  ; NameOfSpace H_Mec2D_u; }
       { Name u_x ; Type Local ; NameOfSpace H_Mec2D_u[u_x] ;}
       { Name u_y ; Type Local ; NameOfSpace H_Mec2D_u[u_y] ;}
       { Name u_dum_x ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_x] ;}
       { Name u_dum_y ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_y] ;}
       { Name lambda ; Type Local  ; NameOfSpace H_lambda; }
     }
     Equation {
       Galerkin { [ C[] * Dof{D1 lambda}, {D1 lambda} ] ;
         In Domain ; Jacobian Vol ; Integration I1 ; }

       // Adjoint load
       Galerkin { [ -dFdb[{D1 u}], {D1 lambda} ] ;
         In DomainFunc ; Jacobian Vol ; Integration I1 ; }
     }
   }
 EndIf
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
      { Name A ; NameOfFormulation PrimalSystem ; } 
      { Name B ; NameOfFormulation AdjointFormulation ; } 
      { Name C ; NameOfFormulation DirectFormulation ; }  
      { Name D ; NameOfFormulation FilterSensitivity ; }
    }
    Operation {
      // create result directory
      CreateDir[ResDir];

      If(Flag_SysType == MAGSTADYN)
        ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
        InitMovingBand2D[MB];
        MeshMovingBand2D[MB];
      EndIf
      
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
 
     If(Flag_SysType == MAGSTADYN)
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
    }
  }
}

If(Flag_SysType == MAGSTADYN)
  Include "optim_post_magsta.pro" ;
EndIf
If(Flag_SysType == ELAST2D)
  Include "optim_post_elast.pro" ;
EndIf

