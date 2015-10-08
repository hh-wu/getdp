// TODO:
// - add verbosity level (show a , lambda, ... according to the value of the verbosity)
// - define properly DomainFunc !!! for each function (user input)
// postpro views tag
SENS_FIELD = 22;
SOURCE_FILT_FIELD = 99;

DefineConstant[
  Flag_SysType = {"LinearElast2D",
    Choices{
      "MagnetoStatic",
      "LinearElast2D"
    }, Name StrCat[pInOpt, "System Type"]},

//  Flag_AnalysisMethod = {"none",
//    Choices{
//      "state",
//      "adjoint",
//      "direct"
//    }, Name StrCat[pInOpt, "Analysis Method"]},

  Flag_SensitivityMethod = {"none",
    Choices{
      "noSystem",
      "adjoint",
      "direct"
    }, Name StrCat[pInOpt, "Derivative Method"]},

//  Flag_AnalyticSensitivity = {1,//analytic or semi-analytic
//    Choices{0,1}, Name StrCat[pInOpt, "Analytic Derivative?"]},

  Flag_FilterMethod = {"none",
    Choices{
      "sensitivity",
      "density"
    },
    Name StrCat[pInOpt, "Filter"],
    Visible (!StrCmp(Flag_optType,"topology"))},

  Rmin = {0.001,
    Name StrCat[pInOpt,"Radius"],
    Visible (!StrCmp[Flag_FilterMethod,"sensitivity"]
             || !StrCmp[Flag_FilterMethod,"density"])},

  Flag_NL = 0
];

Group {
   DefineGroup[
    DomainOpt,DomainOptFix,DomainOptMV
  ];
}

Function {
  DefineFunction[ br_mag,dhdb_NL,ETA,LV1,LV2,LV3,js, filtSource ];
  // FIXME: where to write eta,lv1, ... ?  (here)

  // derivative of bilinear form and linear load
//  If(!StrCmp[Flag_SysType,"MagnetoStatic"] || !StrCmp[Flag_SysType,"MagnetoStatic3D"])
//    dot_er[] = (et[] * velocityField[])/Norm[XYZ[]] * et[];
//    d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ;
//    d_bilin_lie_NL[] = $2 * (( dhdb_NL[$1] * LV3[] ) * $1);
//    d_M_lie[] = nu[$1] * ( LV1[ br[] ] ) * $2
//              + nu[$1] * br_mag[] * (dot_er[]*$2);
//    d_J_lie[] = LV2[js[]]* $1;//-( LV3[] * js[] ) * $1 ;
//  EndIf
//  If(!StrCmp[Flag_SysType,"LinearElast2D"])
//    //$1:{D1 u},$2:{D1 lambda}
//    d_bilin_lie[] = -( C[] * d_D1[ du[] ] ) * $2
//                    -( C[] * $1 ) * d_D1[ dlam[] ]
//                    +( (C[] * $1) * $2 ) * TTrace[ dV[] ];
//    d_bilin[] = (d_C[] * $1) * $2;
//  EndIf
//  If(!StrCmp[Flag_SysType,"LinearElast3D"])
//    //$1:{D1 u}, $2:{D1 lambda}, $3:{D2 u}, $4:{D2 lambda}
//    d_bilin_lie[] = -( C11[]*d_D1[du[]]#1001)*$2 -( C11[]*$1)*d_D1[dlam[]#51]#1003
//                    -( C12[]*d_D2[du[]]#1002)*$2 -( C12[] * $3 ) * #1003
//                    -( C21[] * #1001 ) * $4 -( C21[] * $1 ) * d_D2[dlam[]]#1004
//                    -( C22[] * #1002 ) * $4 -( C22[] * $3 ) * #1004
//                    +( (C11[] * $1) * $2 + (C12[] * $3) * $2
//                      +(C21[] * $1) * $4 + (C22[] * $3) * $4 ) * TTrace[ dV[] ];
//    d_bilin[] = (d_C11[] * $1) * $2 + (d_C12[] * $3) * $2
//               +(d_C21[] * $1) * $4 + (d_C22[] * $3) * $4;
//  EndIf

  // filter sensitivity (topology optimization)
  If(!StrCmp[Flag_SysType,"MagnetoStatic"])
    filtSource[#{DomainOptMV}] = ScalarField[RotateZ_desVar[],0,1]{SENS_FIELD};
    filtSource[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  EndIf
  If(StrCmp[Flag_SysType,"MagnetoStatic"])
    filtSource[#{DomainOpt}] = ScalarField[XYZ[],0,1]{SOURCE_FILT_FIELD};
  EndIf
}

// FIXME: add FunctionSpace to each primal system template => sensitivity script simple!
FunctionSpace {
  // Direct method SA: derivative of state variable
//  If(!StrCmp[Flag_SysType,"MagnetoStatic"])
//    { Name H_dState ; Type Form1P ;
//      BasisFunction {
//        { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
//          Support Region[{ Domain, Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
//	  If (Flag_Degree)
//            { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
//              Support Region[{ Domain, Rotor_Bnd_MBaux}];
//              Entity EdgesOf [ All ] ; }
//	  EndIf
//      }
//      Constraint {
//        { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
//        If (Flag_Degree)
//          { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_2D ; }
//        EndIf
//      }
//    }
//  EndIf
//  If(!StrCmp[Flag_SysType,"MagnetoStatic3D"])
//    { Name H_dState ; Type Form1;
//      BasisFunction {
//        { Name se;NameOfCoef ae;Function BF_Edge; Support Domain;Entity EdgesOf[ All ]; }
//          If (Flag_Degree)
//            { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
//              Support Domain; Entity EdgesOf [All];}
//          EndIf
//      }
//      Constraint {
//        { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
//        { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
//          NameOfConstraint GaugeCondition_a ; }
//          If (Flag_Degree)
//            { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint a ; }
//          EndIf
//      }
//    }
//  EndIf

//  // Adjoint method SA: adjoint variable
//  If(!StrCmp[Flag_SysType,"MagnetoStatic"])
//    { Name H_lambda ; Type Form1P ; // adjoint variable
//      BasisFunction {
//        { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
//          Support Region[{ Domain , Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
//	  If (Flag_Degree)
//            { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
//              Support Region[{ Domain, Rotor_Bnd_MBaux}];
//              Entity EdgesOf [ All ] ; }
// 	  EndIf
//     }
//      Constraint {
//        { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D; }
//        If (Flag_Degree)
//          { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_2D ; }
//        EndIf
//      }
//    }
//  EndIf
//  If(!StrCmp[Flag_SysType,"MagnetoStatic3D"])
//    { Name H_lambda; Type Form1 ; // adjoint variable
//      BasisFunction {
//        { Name se;NameOfCoef ae;Function BF_Edge;Support Domain;Entity EdgesOf[ All ]; }
//        If (Flag_Degree)
//          { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
//            Support Domain; Entity EdgesOf [All];}
//        EndIf
//      }
//      Constraint {
//        { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
//        { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
//          NameOfConstraint GaugeCondition_a ; }
//          If (Flag_Degree)
//           { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint a ; }
//          EndIf
//      }
//    }
//  EndIf

  // SA filter
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Region[{DomainOpt}] ; Entity NodesOf[ All ] ; }
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
//  If(!StrCmp[Flag_SysType,"MagnetoStatic"])
//    { Name DirectFormulation ; Type FemEquation ;
//      Quantity {
//        { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
//        { Name d_a ; Type Local  ; NameOfSpace H_dState ; }
//      }
//      Equation {
//        // bilinear(Lambda,Lambda')
//        Galerkin { [ nu[ {d a} ] * Dof{d d_a} , {d d_a} ] ;
//          In Domain ; Jacobian Vol ; Integration I1 ; }
//        Galerkin { [ dhdb_NL[ {d a} ] * Dof{d d_a} , {d d_a} ] ;
//          In DomainNL ; Jacobian Vol ; Integration I1 ; }

//        // DO NOT REMOVE!!!
//        // Keeping track of Dofs in auxiliar line of MB if Symmetry==1
//        Galerkin {  [  0*Dof{d d_a} , {d d_a} ]  ;
//          In Rotor_Bnd_MBaux; Jacobian Sur; Integration I1; }

//        // pseudo-load -> depend on design variable (velocity)
//        Galerkin { [ nu[ {d a} ] * {d a}, ETA[]*{d d_a} ] ;
//          In Domain ; Jacobian Vol ; Integration I1 ; }
//        Galerkin { [( dhdb_NL[{d a}] * LV3[]) * {d a}, {d d_a}]  ;
//          In DomainNL ; Jacobian Vol ; Integration I1 ; }
//
//        Galerkin { [ -nu[ {d a} ] * LV1[ br[] ], {d d_a} ] ;
//          In DomainM ; Jacobian Vol ; Integration I1 ; }
////     Galerkin { [ -nu[ {d a} ] * dV[]*br[], {d d_a} ] ;
////       In DomainM ; Jacobian Vol ; Integration I1 ; }
//        Galerkin { [ -nu[ {d a} ] * br_mag[]*dot_er[],{d d_a} ] ;
//          In DomainM ; Jacobian Vol ; Integration I1 ; }
//        Galerkin { [ -LV2[js[]], {d_a} ] ;
//          In DomainS ; Jacobian Vol ; Integration I1 ; }
//      }
//    }
//  EndIf
//  If(!StrCmp[Flag_SysType,"MagnetoStatic3D"])
//    { Name DirectFormulation ; Type FemEquation ;
//      Quantity {
//        { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
//        For i In {1:NumMagnets}
//          { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
//        EndFor
//        { Name d_a ; Type Local  ; NameOfSpace H_dState ; }
//      }
//      Equation {
//        // bilinear(Lambda,Lambda')
//        Galerkin { [ nu[] * Dof{d d_a} , {d d_a} ] ;
//          In Domain ; Jacobian Vol ; Integration I1 ; }

//        For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
//          Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
//            In Domain ; Jacobian Vol ; Integration I1 ; }
//        EndFor

//        // pseudo-load -> depend on design variable (velocity)
//        Galerkin { [ nu[ {d a} ] * {d a}, ETA[]*{d d_a} ] ; //fixme: sign
//          In Domain ; Jacobian Vol ; Integration I1 ; }

//        Galerkin { [ nu[ {d a} ] * LV1[ br[] ], {d d_a} ] ;
//          In DomainM ; Jacobian Vol ; Integration I1 ; }
//      }
//    }
//  EndIf

 //-----------------------------------------------------------------
 // Adjoint weak formulation
 //-----------------------------------------------------------------
 // Compute the adjoint variable for a given design function
 // Apply this method if the nb. of design function <<< nb. of design variables
// If(!StrCmp[Flag_SysType,"MagnetoStatic"])
//   { Name AdjointFormulation ; Type FemEquation ;
//     Quantity {
//       { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
//       { Name lambda ; Type Local  ; NameOfSpace H_lambda ; }
//     }
//     Equation {
//       Galerkin { [ nu[ {d a} ]* Dof{d lambda}  , {d lambda} ] ;
//         In Domain ; Jacobian Vol ; Integration I1 ; }
//       Galerkin { [ dhdb_NL[ {d a} ] * Dof{d lambda} , {d lambda} ] ;
//         In DomainNL ; Jacobian Vol ; Integration I1 ; }

//       // DO NOT REMOVE!!!
//       // Keeping track of Dofs in auxiliar line of MB if Symmetry==1
//       Galerkin {  [  0*Dof{d lambda} , {d lambda} ]  ;
//         In Rotor_Bnd_MBaux; Jacobian Sur; Integration I1; }

//       // adjoint load
//       Galerkin { [ -dFdb[{d a}], {d lambda}] ;
//         In DomainFunc ; Jacobian Vol ; Integration I1 ; }
//      }
//   }
// EndIf
// If(!StrCmp[Flag_SysType,"MagnetoStatic3D"])
//   { Name AdjointFormulation ; Type FemEquation ;
//     Quantity {
//       { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
//         For i In {1:NumMagnets}
//           { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
//         EndFor
//       { Name lambda ; Type Local  ; NameOfSpace H_lambda ; }
//     }
//     Equation {
//       Galerkin { [ nu[]* Dof{d lambda}  , {d lambda} ] ;
//         In Domain ; Jacobian Vol ; Integration I1 ; }

//       For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
//         Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
//           In Domain ; Jacobian JVol ; Integration I1 ; }
//       EndFor

//       // adjoint load
//       Galerkin { [ -dFdb[{d a}], {d lambda} ] ;
//         In DomainFunc ; Jacobian Vol ; Integration I1 ; }
//     }
//   }
// EndIf
 //-----------------------------------------------------------------
 // TO filtering
 //-----------------------------------------------------------------
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

}

Include "sensitivityMacros.pro";

Resolution {

  { Name OptimStep ;
    System {
      //{ Name A ; NameOfFormulation PrimalSystem ; }
      //{ Name B ; NameOfFormulation AdjointFormulation ; }
      //{ Name C ; NameOfFormulation DirectFormulation ; }
      { Name D ; NameOfFormulation FilterTopOpt ; }
      { Name E ; NameOfFormulation FilterTopOpt_dXdx ; }
    }
    Operation {
      // create result directory
      CreateDir[ResDir];

      If(!StrCmp[Flag_SysType,"MagnetoStatic"])
        ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
        InitMovingBand2D[MB];
        MeshMovingBand2D[MB];
      EndIf

      // FIXME: let it to each model!!!
//      // compute state varible, adjoint variable or derivative of state varibale
//      If(!StrCmp[Flag_AnalysisMethod,"state"]) // state variable
//        Call SolvePrimalSystem;
//      EndIf
//      If(!StrCmp[Flag_AnalysisMethod,"adjoint"]) // adjoint variable
//        Call SolveAdjointSystem;
//      EndIf
//      If(!StrCmp[Flag_AnalysisMethod,"direct"]) // direct derivative of state
//        Call SolveDirectSystem;
//      EndIf

//      // Sensitivity analysis method
//      If(!StrCmp[Flag_SensitivityMethod,"noSystem"])
//        Call GetAnalyticSens;
//      EndIf
//      If(!StrCmp[Flag_SensitivityMethod,"adjoint"])
//        Call GetAdjointSens;
//      EndIf
//      If(!StrCmp[Flag_SensitivityMethod,"direct"])
//        Call GetDirectSens;
//      EndIf

      // Sensitivity analysis filtering method
      If(!StrCmp[Flag_FilterMethod,"sensitivity"]
          || !StrCmp[Flag_FilterMethod,"density"]) // Filter sensitivity (TO)
        Call FilterTopOpt;
      EndIf

     If(!StrCmp[Flag_SysType,"MagnetoStatic"])
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
    }
  }
}

If(!StrCmp[Flag_SysType,"MagnetoStatic"])
  Include "optim_post_magsta.pro" ;
EndIf
If(!StrCmp[Flag_SysType,"MagnetoStatic3D"])
  Include "optim_post_magsta3D.pro" ;
EndIf
//If(!StrCmp[Flag_SysType,"LinearElast2D"] ||
//   !StrCmp[Flag_SysType,"LinearElast3D"])
//  Include "optim_post_elast.pro" ;
//EndIf

