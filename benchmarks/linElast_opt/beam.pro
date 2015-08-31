Include "beam_data.geo";

DefineConstant[
  Flag_testBench = {3,  
    Choices {
      0="Short Cantiler Beam", 
      1="MBB Beam",
      2="Plate with hole",
      3="Rotor"}, Visible 1,
    Name "Input/Loading/case"},
  E0  = {210e6, Name "Input/Materials/ Young modulus",Visible 0},
  nu0 = {0.3, Name "Input/Materials/ Poisson coeficient",Visible 0},
  rh = {1000.,Name "Input/Materials/ Mass density",Visible 0}
];

Group {
  /* ----------------------------------------------------------------- 
     Primal problem: 
     ----------------------------------------------------------------- */
  If(!StrCmp(Flag_cao,"square"))
    Domain = Region[{BLOC}];
  EndIf
  If(!StrCmp(Flag_cao,"rotor")) 
    Rotor_int    = #LINTERIEUR;
    Rotor_Fe     = #ROTOR_FE ;
    Rotor_Air    = #ROTOR_AIR ;
    Rotor_Airgap = #ROTOR_ENTREFER ;
    Rotor_Bnd_A0 = #ROTOR_BND_A0 ;
    Rotor_Bnd_A1 = #ROTOR_BND_A1 ;
    For k In {1:NbrMagnets}
      Rotor_Magnet~{k} = Region[ (ROTOR_AIMANT1+k-1) ];
      Rotor_Magnets += Region[ Rotor_Magnet~{k} ];
    EndFor
    Domain = Region[{Rotor_Fe,Rotor_Magnets}];
  EndIf

  // Force
  Domain_Force_Vol = Region[ {} ];
  Domain_Force_Sur = Region[ {} ];
  Domain_Force_Lin = Region[ {} ];
  If(Flag_testBench==0) //short cantilever beam
    If(Flag_2D)
      Domain_Force_Lin = Region[ POINT_2 ];
    EndIf
    If(!Flag_2D)
      Domain_Force_Lin = Region[ LINE_BAS ];
    EndIf
  EndIf
  If(Flag_testBench==1) //MBB-beam
    Domain_Force_Lin = Region[{POINT_4}];  // force sur le point 4
  EndIf
  If(Flag_testBench==2) //plate-hole
    If(Flag_2D)
      Domain_Force_Lin = Region[{SURF_BAS,SURF_HAUT,SURF_DROITE,SURF_GAUCHE}]; 
    EndIf
    If(!Flag_2D)
      Domain_Force_Sur = Region[{SURF_BAS,SURF_HAUT,SURF_DROITE,SURF_GAUCHE}]; 
    EndIf 
  EndIf
  If(Flag_testBench==3) //rotor
    Domain_Force_Lin = Region[Rotor_Bnd_A0];
  EndIf
  Domain_Force = Region[{Domain_Force_Sur,Domain_Force_Lin}];

  // Optimization problem: comment spécifier ça??
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
    d_E,C,d_C,d_C11,d_C12,d_C21,d_C22,
    du,dV,dlam,dEps,velocityField,d_D1,d_D2,
    dV_x,dV_y,dV_z,du_x,du_y,du_z,
    rmin2,prod_x_dC,designVar,nu,nu_prime,
    mass_eig,d_eig,
    dFdb,dFdb2,dF_TO,dF_lie,dMass
  ];
  /* ----------------------------------------------------------------- 
     Primal problem: 
     ----------------------------------------------------------------- */
  If(Flag_testBench == 2)
    force_mec[#SURF_BAS] = Vector[0, -2e6, 0]; 
    force_mec[#SURF_HAUT] = Vector[0, 2e6, 0]; 
    force_mec[#SURF_DROITE] = Vector[4e6, 0, 0]; 
    force_mec[#SURF_GAUCHE] = Vector[-4e6, 0, 0]; 
  EndIf
  If(Flag_testBench != 2)
    force_mec[Domain_Force] = Vector[0, -1.0e6, 0]; 
  EndIf

  If(StrCmp(Flag_optType,"topology")) // no topology optimization
    If(StrCmp(Flag_cao,"rotor")) 
      E[Domain] = E0;
      rho[Domain] = rh;
    EndIf
    If(!StrCmp(Flag_cao,"rotor")) // rotor 
      E[#{Domain,-Rotor_Fe}] = 210e09;
      E[Rotor_Fe] = 196e09;
      rho[#{Domain,-Rotor_Fe}] = 8100.0;
      rho[Rotor_Fe] = 7860.0;
    EndIf
  EndIf
  If(!StrCmp(Flag_optType,"topology")) // topology optimization
    designVar[] = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};
    rho[] = rh * designVar[]; // vol. mas
    d_rho[] = rh; // vol. mas
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

  eig2[] = $ReOmega^2;
  mass_eig[] = rho[] * $1 * $1; //$1:u  
  If(Flag_2D) // operators for 2D
    bilin_uu[] = (C[] * $1) * $1; 
    bilin[] = (C[] * $1) * $2; //$1:{D1 u} 
    sigma[] = C[]*$1; //[sigma_11,sigma_22,sigma_12]
    sigmaVM[] = Sqrt[ CompX[sigma[$1]#2]^2.0 - CompX[#2]*CompY[#2]
                    + CompY[#2]^2.0 + 3.0*CompZ[#2]^2.0 ];
  EndIf
  If(!Flag_2D) // operators for 3D
    bilin_uu[] = (C11[] * $1) * $1 + (C12[] * $2) * $1
                +(C21[] * $1) * $2 + (C22[] * $2) * $2 ; //$1:{D1 u}, $2:{D2 u}
    bilin[] = (C11[] * $1) * $2 + (C12[] * $3) * $2
             +(C21[] * $1) * $4 + (C22[] * $3) * $4 ; 
    sigma_ii[] = C11[]*$1; //[sigma_11,sigma_22,sigma_12], $1:{D1 u}
    sigma_ij[] = C12[]*$1; //[sigma_12,sigma_23,sigma_13], $1:{D2 u}
    sigmaVM[]  = Sqrt[ 0.5*(CompX[sigma_ii[$1]#2]-CompY[#2])^2.0  
                      +0.5*(CompY[#2]-CompZ[#2])^2.0 + 0.5*(CompZ[#2]-CompX[#2])^2.0
                      +3.0*SquNorm[sigma_ij[$2]] ];
  EndIf
  
  /* ----------------------------------------------------------------- 
     Optimization problem: 
     ----------------------------------------------------------------- */
  If( !StrCmp(Flag_optType,"shape") )
    // Operators used for lie derivative 
    velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};
    dV[] = Transpose[GradVectorField[XYZ[],0,1]{VELOCITY_FIELD}];
    du[] = Transpose[GradVectorField[XYZ[],0,1]{STATE_FIELD}]; 
    dlam[] = Transpose[GradVectorField[XYZ[],0,1]{ADJOINT_FIELD}]; 
    dEps[] = 0.5*(dV[]#20 * $1#21 + Transpose[#21] * Transpose[#20]); 
    // debug
    dV_x[] = Vector[CompXX[dV[]#10000], CompYX[#10000],CompZX[#10000]]; 
    dV_y[] = Vector[CompXY[dV[]#10000], CompYY[#10000],CompZY[#10000]];
    dV_z[] = Vector[CompXZ[dV[]#10000], CompYZ[#10000],CompZZ[#10000]]; 
    du_x[] = Vector[CompXX[du[]#10002], CompYX[#10002],CompZX[#10002]]; 
    du_y[] = Vector[CompXY[du[]#10002], CompYY[#10002],CompZY[#10002]];
    du_z[] = Vector[CompXZ[du[]#10002], CompYZ[#10002],CompZZ[#10002]];
    // end debug 
    If(Flag_2D)
      d_D1[] = Vector[CompXX[dEps[$1]#991],CompYY[#991],CompXY[#991]+CompYX[#991]];
    EndIf
    If(!Flag_2D)    
      d_D1[] = Vector[ CompXX[dEps[$1]#1991], CompYY[#1991], CompZZ[#1991] ];
      d_D2[] = Vector[ CompXY[dEps[$1]#993]+CompYX[#993], 
                       CompYZ[#993]+CompZY[#993],
                       CompXZ[#993]+CompZX[#993] ];
    EndIf
  EndIf

  If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
    // Derivative of performance function
    d_mass_eig[] =  - 2.0 * rho[] * (Transpose[du[]] * velocityField[]) * $1
                    + rho[] * $1 * $1 * TTrace[ dV[] ]; 

    If(Flag_2D) // 2D 
      //$1:{D1 u},$2:{D1 lambda}
      d_bilin_lie[] = -( C[] * d_D1[ du[] ] ) * $2 
                      -( C[] * $1 ) * d_D1[ dlam[] ] 
                      +( (C[] * $1) * $2 ) * TTrace[ dV[] ];
      d_bilin[] = (d_C[] * $1) * $2; 

      //$1:{u},$2:{D1 u},$3:{D2 u}
      d_bilin_eig[] =  -2.0 * ( C[] * $2 ) * (d_D1[ du[] ]) 
                       +( (C[] * $2) * $2 ) * TTrace[ dV[] ];
      
      If(!StrCmp[Flag_PerfType,"Compliance"])
        Func[] = 0.5 * bilin_uu[$1]; //F = C * {D1 u}^2
        dFdb[] = C[] * $1; // derivative wrt state variable
        dF_TO[] = 0.5 * (d_C[]*$1)*$1; 
        dF_lie[] = - dFdb[$1] * d_D1[ du[] ] + Func[$1] * TTrace[ dV[] ];
      EndIf
      If(!StrCmp[Flag_PerfType,"vonMises"])
        Func[] = sigmaVM[$1]^degVM; //F = Sqrt[s11^2-s11*s22+s22^2+3*s12^2]
        c_sig[] = Vector[2.0*CompX[sigma[$1]#3]-CompY[#3],
                         2.0*CompY[#3]-CompX[#3],6.0*CompZ[#3]];  
        dF_TO[] = ( d_C[] * c_sig[$1] ) * $1; 
        dFdb[] = 0.5 * degVM * sigmaVM[$1]^(degVM-2) * C[] * c_sig[$1];
        dF_lie[] = - dFdb[$1] * d_D1[ du[] ]
                           + Func[$1] * TTrace[dV[]]; 
      EndIf
      If(!StrCmp[Flag_PerfType,"vonMises_Pnorm"])
        coeff[] = (1/degVM) * ($VM_P)^( (1-degVM) / degVM );
        Func[] = coeff[]*sigmaVM[$1]^degVM; //F = Sqrt[s11^2-s11*s22+s22^2+3*s12^2]
        c_sig[] = Vector[2.0*CompX[sigma[$1]#3]-CompY[#3],
                         2.0*CompY[#3]-CompX[#3],6.0*CompZ[#3]];  
        dF_TO[] = ( d_C[] * c_sig[$1] ) * $1; 
        dFdb[] = coeff[]*0.5 * degVM * sigmaVM[$1]^(degVM-2) * C[] * c_sig[$1];
        dF_lie[] = - dFdb[$1] * d_D1[ du[] ]
                           + Func[$1] * TTrace[dV[]]; 
      EndIf
    EndIf
    If(!Flag_2D) // 3D
      //$1:{D1 u}, $2:{D1 lambda}, $3:{D2 u}, $4:{D2 lambda}
      d_bilin_lie[] = -( C11[]*d_D1[du[]]#1001)*$2 -( C11[]*$1)*d_D1[dlam[]#51]#1003 
                      -( C12[]*d_D2[du[]]#1002)*$2 -( C12[] * $3 ) * #1003
                      -( C21[] * #1001 ) * $4 -( C21[] * $1 ) * d_D2[dlam[]]#1004 
                      -( C22[] * #1002 ) * $4 -( C22[] * $3 ) * #1004  
                      +( (C11[] * $1) * $2 + (C12[] * $3) * $2
                        +(C21[] * $1) * $4 + (C22[] * $3) * $4 ) * TTrace[ dV[] ];
      d_bilin[] = (d_C11[] * $1) * $2 + (d_C12[] * $3) * $2
                 +(d_C21[] * $1) * $4 + (d_C22[] * $3) * $4;

      //$1:{u},$2:{D1 u},$3:{D2 u}            
      d_bilin_eig[] = -2.0*( (C11[] * d_D1[du[]]#1001) * $2 
                           + (C22[] * d_D2[du[]]#1003) * $3 )  
                      - (C12[] * #1003) * $2 - (C12[] * $3 ) * #1001
                      - (C21[] * #1001) * $3 - (C21[] * $2 ) * #1003
                      +( (C11[] * $2) * $2 + (C12[] * $3) * $2
                        +(C21[] * $2) * $3 + (C22[] * $3) * $3 ) * TTrace[ dV[] ];
                    
      If(!StrCmp[Flag_PerfType,"Compliance"])
        Func[] = 0.5 * bilin_uu[$1,$2]; //$1:{D1 u}, $2:{D2 u}
        dF_TO[] = 0.5*( (d_C11[]*$1)*$1+(d_C12[]*$2)*$1
                         +(d_C21[]*$1)*$2+(d_C22[]*$2)*$2 );//$1:{D1 u},$2:{D2u}        
	dFdb[]  = C11[] * $1 + 0.5 * ( C12[] + C21[] ) * $2;//dF/d1
	dFdb2[] = C22[] * $2 + 0.5 * ( C12[] + C21[] ) * $1;//dF/d2
        //$1:{D1 u}, $2:{D2 u}
        dF_lie[] = - dFdb[$1,$2] * d_D1[ du[] ]
                           - dFdb2[$1,$2] * d_D2[ du[] ]
                           + Func[$1,$2] * TTrace[dV[]];
      EndIf
      If(!StrCmp[Flag_PerfType,"vonMises"])
	degVM = 2;
        Func[] = sigmaVM[$1,$2]^degVM; 
        dFdb[] = C11[]*Vector[2.0*CompX[sigma_ii[$1,$2]#3]-CompY[#3]-CompZ[#3],
                              2.0*CompY[#3]-CompX[#3]-CompZ[#3],
                              2.0*CompZ[#3]-CompX[#3]-CompY[#3]]; 
        dFdb2[] = C22[]*6.0*sigma_ij[$1,$2]; 

        dF_lie[] = - dFdb[$1,$2] * d_D1[ du[] ]
                           - dFdb2[$1,$2] * d_D2[ du[] ]
                           + Func[$1,$2] * TTrace[dV[]]; 
      EndIf
    EndIf
    dF_direct_lie[] = dFdb[$1#1]*$2 + dF_lie[#1];
    dMass[] = rho[] * TTrace[dV[]];
    d_eig[] = d_bilin_eig[$1,$2,$3] - eig2[] * d_mass_eig[$1,$2,$3];       
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
      If(Flag_testBench == 3)
        { Region Rotor_int;  Value 0.; } 
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
      If(Flag_testBench == 3)
        { Region Rotor_int;  Value 0.; } 
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
Include "optim_post.pro";

If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
  Include "../optimization/sensitivity.pro";
  Include "optim_post_elast.pro" ;//optim_post_sens.pro
EndIf

DefineConstant[
  R_ = {"u_Mec", Name "GetDP/1ResolutionChoices", Visible 1},
  C_ = {"-solve -v 5 -slepc -v2", Name "GetDP/9ComputeCommand", Visible 1},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 1}
];


