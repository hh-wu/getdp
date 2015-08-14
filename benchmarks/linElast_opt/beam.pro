Include "beam_data.geo";

DefineConstant[
  Flag_testBench = {2,  
    Choices {
      0="Short Cantiler Beam", 
      1="MBB Beam",
      2="Plate with hole"
      }, Visible 1,
    Name "Geo/Test Case"},
  E0  = {210e6, Name "Input/ Materials/ Young modulus"},
  nu0 = {0.3, Name "Input/ Materials/ Poisson coeficient"},
  rh = {1.,Name "Input/ Materials/ Mass density"}
];

Group {
  // Primal problem
  Domain_Force_Vol = Region[ {} ];
  Domain_Force_Sur = Region[ {} ];
  Domain_Force_Lin = Region[ {} ];
  If(Flag_testBench==0) //short cantilever beam
    If(Flag_2D)
      Domain_Force_Lin = Region[ POINT_5 ];
    EndIf
    If(!Flag_2D)
      Domain_Force_Lin = Region[ LINE_BAS ];
    EndIf
  EndIf
  If(Flag_testBench==1) //MBB-beam
    Domain_Force_Lin = Region[{POINT_4}];  // force sur le point 4
  EndIf
  If(Flag_testBench==2) //plate-hole
    Domain_Force_Lin = Region[{SURF_BAS,SURF_HAUT,SURF_DROITE,SURF_GAUCHE}];  
  EndIf
  Domain_Force = Region[{Domain_Force_Sur,Domain_Force_Lin}];
  Domain = Region[{BLOC}];

  // Optimization problem
  DomainOpt = Region[{Domain}];
  DomainFunc = Region[{Domain}];    
  //skin = Region[{HOLE}];
  //TL = ElementsOf[Domain,OnOneSideOf skin ];
/*
  If(!StrCmp[Flag_PerfType,"vonMises"])
    DomainFunc = ElementsOf[Domain,OnOneSideOf Region[HOLE] ]; 
  EndIf
*/
}

Function {
  DefineFunction[ 
    E,d_E,C,d_C,
    rmin2,prod_x_dC,designVar,nu,nu_prime,
    norm_eig,d_eig
    dFdb,dFdb2,dFdb_TO,dF_adjoint_lie,dMass
  ];
  /* ------------------------------------------------------------------- */
  // Primal problem: 
  /* ------------------------------------------------------------------- */
  If(Flag_testBench == 2)
    force_mec[#SURF_BAS] = Vector[0, -22.5e6, 0]; 
    force_mec[#SURF_HAUT] = Vector[0, 22.5e6, 0]; 
    force_mec[#SURF_DROITE] = Vector[45e6, 0, 0]; 
    force_mec[#SURF_GAUCHE] = Vector[-45e6, 0, 0]; 
  EndIf
  If(Flag_testBench != 2)
    force_mec[Domain_Force] = Vector[0, -1.0, 0]; 
  EndIf

  If(StrCmp(Flag_optType,"topology")) // no topology optimization
    E[] = E0;
    rho_mec[] = rh;
  EndIf
  If(!StrCmp(Flag_optType,"topology")) // topology optimization
    designVar[] = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};
    rho_mec[] = rh * designVar[]; // vol. mas
    d_rho_mec[] = rh; // vol. mas
    If(!StrCmp(Flag_InterpLaw,"simp")) // simp-law
      Printf["simp law"];
      E[] = E0 * designVar[] ^ degree_SIMP;
      d_E[] = degree_SIMP * E0 * designVar[] ^ (degree_SIMP - 1.0);
    EndIf
  EndIf

  // Hooke matrix
  If(Flag_2D)
    C0[] = TensorSym[ 1.0, nu0, 0, 1.0, 0, 0.5*(1-nu0) ];
    ff[] = E[]/(1-nu0^2);
    C[] = ff[] * C0[];
    If(!StrCmp(Flag_optType,"topology")) // topology optimization
      d_ff[] =  d_E[]/(1-nu0^2);
      d_C[] = d_ff[] * C0[];
    EndIf
  EndIf
  If(!Flag_2D)
    C1[] = TensorSym[1-nu0, nu0, nu0, 1-nu0, nu0, 1-nu0];
    C2[] = TensorSym[(1-2*nu0)*0.5, 0, 0, (1-2*nu0)*0.5, 0, (1-2*nu0)*0.5];
    ff[] = E[]/(1+nu0)/(1-2*nu0);
    C11[] = ff[] * C1[]; C22[] = ff[] * C2[];
    C12[] = Tensor[0,0,0, 0,0,0, 0,0,0]; C21[] = C12[];
    If(!StrCmp(Flag_optType,"topology")) // topology optimization
      d_ff[] =  d_E[]/(1+nu0)/(1-2*nu0);
      d_C11[] = d_ff[] * C1[];d_C22[] = d_ff[] * C2[];
      d_C12[] = C12[];d_C21[] = C21[];
    EndIf
  EndIf

  /* ------------------------------------------------------------------- */
  // Optimization problem: performance functions and derivatives 
  /* ------------------------------------------------------------------- */
  If(Flag_2D) // operators for 2D 
    sigma[] = C[]*$1; //[sigma_11,sigma_22,sigma_12]
    sigmaVM[] = Sqrt[ CompX[sigma[$1]#2]^2.0 - CompX[#2]*CompY[#2]
                   + CompY[#2]^2.0 + 3.0*CompZ[#2]^2.0 ];
  EndIf
  If(!Flag_2D) // operators for 3D
    sigma_ii[] = C11[]*$1; //[sigma_11,sigma_22,sigma_12], $1:{D1 u}
    sigma_ij[] = C12[]*$1; //[sigma_12,sigma_23,sigma_13], $1:{D2 u}
    sigmaVM[]  = Sqrt[ 0.5*(CompX[sigma_ii[$1]#2]-CompY[#2])^2.0  
                      +0.5*(CompY[#2]-CompZ[#2])^2.0 + 0.5*(CompZ[#2]-CompX[#2])^2.0
                      +3.0*SquNorm[sigma_ij[$2]] ];
  EndIf
  If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
    // 1) operators used for lie derivative 
    velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};
    dV[] = Transpose[GradVectorField[XYZ[],0,1]{VELOCITY_FIELD}]; 
    du[] = Transpose[GradVectorField[XYZ[],0,1]{STATE_FIELD}]; 
    dlambda[] = Transpose[GradVectorField[XYZ[],0,1]{ADJOINT_FIELD}]; 
    dVdu[] = dV[]*du[]; 
    dVdlam[] = dV[]*dlambda[]; 
    If(Flag_2D)
      d_D1_2D_u[]=Vector[CompXX[dVdu[]#991],CompYY[#991],CompXY[#991]+CompYX[#991]];
      d_D1_2D_lam[]=Vector[CompXX[dVdlam[]#992],CompYY[#992],CompXY[#992]+CompYX[#992]];
    EndIf
    If(!Flag_2D)    
      // 3D: derivative of D1 and D2 operator for fixed u and lambda
      d_D1_3D_u[] = Vector[ CompXX[dVdu[]#1991], CompYY[#1991], CompZZ[#1991] ];
      d_D1_3D_lam[] = Vector[ CompXX[dVdlam[]#2992], CompYY[#2992], CompZZ[#2992] ];
      d_D2_3D_u[] = Vector[ CompXY[dVdu[]#993]+CompYX[#993], 
                            CompYZ[#993]+CompZY[#993],
                            CompXZ[#993]+CompZX[#993] ];
      d_D2_3D_lam[] = Vector[ CompXY[dVdlam[]#994]+CompYX[#994], 
                              CompYZ[#994]+CompZY[#994],
                              CompXZ[#994]+CompZX[#994] ];
    EndIf
   
    // 2) Derivative of performance function
    If(Flag_2D) // 2D 
      If(!StrCmp[Flag_PerfType,"Compliance"])
        Func[] = 0.5 * (C[] * $1) * $1; //F = C * (D u)^2
        dFdb_TO[] = 0.5*(d_C[]*$1)*$1; 
        dFdb[] = C[] * $1; //dF/db = 2 * C * (D u)
        dF_adjoint_lie[] = - dFdb[$1] * d_D1_2D_u[]
                           + Func[$1] * TTrace[ dV[] ];
      EndIf
      If(!StrCmp[Flag_PerfType,"vonMises"])
        Func[] = sigmaVM[$1]^2.0; //F = Sqrt[s11^2-s11*s22+s22^2+3*s12^2]
        dFdb_TO[] = (d_C[]*Vector[2.0*CompX[sigma[$1]#3]-CompY[#3],
                     2.0*CompY[#3]-CompX[#3],
                     6.0*CompZ[#3]])*$1; 
        dFdb[] = C[]*Vector[2.0*CompX[sigma[$1]#3]-CompY[#3],
                      2.0*CompY[#3]-CompX[#3],
                      6.0*CompZ[#3]]; 
        dF_adjoint_lie[] = - dFdb[$1] * d_D1_2D_u[]
                           + Func[$1] * TTrace[dV[]]; 
      EndIf
    EndIf
    If(!Flag_2D) // 3D
      If(!StrCmp[Flag_PerfType,"Compliance"])
        Func[] = 0.5 *( (C11[]*$1)*$1 + (C12[]*$2)*$1
                       +(C21[]*$1)*$2 + (C22[]*$2)*$2 ); //$1:{D1 u}, $2:{D2 u}
        dFdb_TO[] = 0.5*( (d_C11[]*$1)*$1+(d_C12[]*$2)*$1
                         +(d_C21[]*$1)*$2+(d_C22[]*$2)*$2 );//$1:{D1 u},$2:{D2u}        
	dFdb[]  = C11[] * $1 + 0.5 * ( C12[] + C21[] ) * $2;//dF/d1
	dFdb2[] = C22[] * $2 + 0.5 * ( C12[] + C21[] ) * $1;//dF/d2
        //$1:{D1 u}, $2:{D2 u}
        dF_adjoint_lie[] = - dFdb[$1,$2] * d_D1_3D_u[]
                           - dFdb2[$1,$2] * d_D2_3D_u[]
                           + Func[$1,$2] * TTrace[dV[]];
      EndIf
      If(!StrCmp[Flag_PerfType,"vonMises"])
        Func[] = sigmaVM[$1,$2]^2.0; 
        dFdb[] = C11[]*Vector[2.0*CompX[sigma_ii[$1,$2]#3]-CompY[#3]-CompZ[#3],
                              2.0*CompY[#3]-CompX[#3]-CompZ[#3],
                              2.0*CompZ[#3]-CompX[#3]-CompY[#3]]; 
        dFdb2[] = C22[]*6.0*sigma_ij[$1,$2]; 

        dF_adjoint_lie[] = - dFdb[$1,$2] * d_D1_3D_u[]
                           - dFdb2[$1,$2] * d_D2_3D_u[]
                           + Func[$1,$2] * TTrace[dV[]]; 
      EndIf
    EndIf
    dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];
    dMass[] = rho_mec[] * TTrace[dV[]];
  EndIf
}

Constraint{
  { Name DisplacementX ; Type Assign ;
    Case {
      If(Flag_testBench == 0)
        { Region #SURF_GAUCHE;  Value 0.; }
      EndIf
      If(Flag_testBench == 1)
        { Region #SURF_GAUCHE;  Value 0.; } 
      EndIf
    }
  }
  { Name DisplacementY; Type Assign ;
    Case {
      If(Flag_testBench == 0) //short beam
        { Region #SURF_GAUCHE;  Value 0.; } 
      EndIf
      If(Flag_testBench == 1) //mbb beam
        { Region #POINT_2;  Value 0.; } 
      EndIf
    }
  }
  { Name DisplacementZ; Type Assign ;
    Case {
      If(Flag_testBench == 0) //short beam
        { Region #SURF_GAUCHE;  Value 0.; } 
      EndIf
      If(Flag_testBench == 1) //mbb beam
        { Region #POINT_2;  Value 0.; } 
      EndIf
    }
  }
}

// Primal system analysis and sensitivity analysis
Include "Elasticity.pro";
Include "optim_post.pro" ;

If(!StrCmp(Flag_optType,"shape") 
   || !StrCmp(Flag_optType,"topology"))
  Include "../optimization/sensitivity.pro";
  Include "optim_post_elast.pro" ;//optim_post_sens.pro
EndIf

DefineConstant[
  R_ = {"u_Mec", Name "GetDP/1ResolutionChoices", Visible 1},
  C_ = {"-solve -v 5 -slepc -v2", Name "GetDP/9ComputeCommand", Visible 1},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 1}
];


