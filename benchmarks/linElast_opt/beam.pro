Include "beam_data.geo";

// performance function type -> user provided
NO_PERF = 0;
COMPLIANCE = 4;

DefineConstant[
  Flag_PerfType = {COMPLIANCE, 
    Choices {
      NO_PERF="-",  
      COMPLIANCE="compliance"
    },
   Name "Input/OptParam/PerfType",
   Label "performance function type", Visible 1},

//  regionVar = {0, Name "Input/OptParam/regionVar",
//                  Label "Region of design variables", 
//                  Choices {0="Rotor Fe",1="Stator Fe",2="Rotor/Stator Fe"},
//                  Visible (Flag_topopt)},

  Flag_testBench = {0,  
    Choices {
      0="Short Cantiler Beam", 
      1="MBB Beam",
      2="tst",
      3="cantilever+fix point"}, Visible 1,
    Name "Geo/Test Case"},

  Flag_InterpLaw = {0, 
    Choices {
      0 = "SIMP",
      1="RAMP",
      2="H-S",
      3="Polynomial"},	
    Name "Input/OptParam/MaterialInterpLaw",
    Label "material interpolation law",
    Visible (Flag_topopt==1)},

  degree_SIMP = {3.0, Name "Input/OptParam/SimpPenalDegree",
                      Label "Degree SIMP", Visible (Flag_topopt==1)}
];

DefineConstant[
  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices", 
	Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 5 -slepc -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

Function {
  DefineFunction[ 
    C,C_prime,force_density,force_node,
    rmin2,prod_x_dC,designVar,E,E_prime,nu,nu_prime,
    norm_eig,d_eig
  ];
}

Group {
  Bloc = #BLOC;
  BlocForce = {};
  If(Flag_testBench == 0) //short cantilever beam
    Domain_Force = Region[{SURF_DROITE}];//force sur toute le coté de droite
  EndIf
  If(Flag_testBench == 1) //MBB-beam
    Domain_Force = Region[{POINT_4}];  // force sur le point 4
  EndIf
  If(Flag_testBench == 2) //MBB-beam
    Domain_Force = Region[{POINT_5}];
  EndIf
  If(!Flag_hole)
    Domain_Disp = Region[{Bloc}];
  EndIf
  If(Flag_hole)
    Domain_Disp = Region[{BLOC,BLOC_HOLE}];
  EndIf
  Domain = Region[{Domain_Disp}];
  DomainOpt = Region[{Domain_Disp}];
  DomCompl = Region[{Domain_Disp}];
  SurfTot = Region[{SURF_BAS, SURF_HAUT, SURF_GAUCHE, SURF_DROITE}];

  // TO domain
  DomainOpt = Region[{Domain}];
  // specified by user !!!
  DomainFunc = Region[{}];
  If(Flag_PerfType == COMPLIANCE)
    DomainFunc = Region[{BLOC}];    
  EndIf 
}


Function {

  // mechanical
  DefineConstant[
    young = {1.0e07/*210e09*//*7.0e10*/, Name "Input/Materials/0Young modulus [Pa]"},
    nu_Poisson = {0.3, Name "Input/Materials/1Poisson coeficient"},
    rh={7200.0,Name "Input/Materials/2Mass density",Label "Mass density [kg/m^3]"}
  ];
  E0 = young;//210e09,//(Acier) N/m2
  nu0 = nu_Poisson;
  If(!Flag_topopt) //shape
    E[Bloc] = E0;
    rho_mec[Bloc] = rh;
    If(Flag_hole)
      E[#BLOC_HOLE] = 0.1;
      rho_mec[#BLOC_HOLE] = 1.0;
    EndIf
    C[]  = (E[]/(1-nu0^2))*TensorSym[ 1.0, nu0, 0, 1.0, 0, 0.5*(1-nu0) ];
  EndIf
  If(Flag_topopt) // law for E,nu,rho
     designVar[] = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};
     rho_mec[] = rh*designVar[]; // vol. mas
     d_rho_mec[] = rh; // vol. mas
     //rho_mec[] = (designVar[] > 0.1)? rh*designVar[] : rh*designVar[]^6.0 ; // vol. mas
     //d_rho_mec[] = (designVar[] > 0.1)? rh : 6.0*rh*designVar[]^5.0; 
     If(Flag_InterpLaw == 0.0) //SIMP
       Printf["-- Simp law --"];
       //E0_min = 1.0e-06;
       //E[] = (E0 - E0_min)*designVar[]^degree_SIMP + E0_min;
       //E_prime[] = degree_SIMP*(E0 - E0_min)*designVar[]^(degree_SIMP-1.0);
       E[] = E0 * designVar[] ^ degree_SIMP;
       E_prime[] = degree_SIMP * E0 * designVar[] ^ (degree_SIMP - 1.0);
     EndIf
     If(Flag_InterpLaw == 1.0) // RAMP
       E[] = ( designVar[]#1/(1.0 + degree_SIMP*(1 - #1)) )*E0 ;
       E_prime[] = ( (1.0 + degree_SIMP)/( 1.0 + degree_SIMP*(1-designVar[]) )^2.0 )*E0;
     EndIf
     If(Flag_InterpLaw == 2.0) // Hashin-Shtrikman (H-S)
       E[] = ( designVar[]#1/(3.0 - 2.0*#1) )*E0 ;
       E_prime[] = 3.0*E0/(3.0 - 2.0*designVar[])^2.0;
       nu[] = (1.0-designVar[]#1*(1.0-nu0))/(3.0-2.0*#1);
       nu_prime[] = -(1.0-nu0)/(3.0-2.0*designVar[])^2.0; 
     EndIf
     If(Flag_InterpLaw == 3.0) // poynomial
       alpha = 16.0;
       E[] = ((( alpha - 1.0 )/alpha) * designVar[]#1^degree_SIMP + #1/alpha)*E0;
       E_prime[] = (degree_SIMP*((alpha-1.0)/alpha)*designVar[]^(degree_SIMP-1.0)
                    + 1.0/alpha)*E0;
     EndIf
  EndIf
  If(Flag_topopt == 1.0 && Flag_InterpLaw != 2.0) //topology (E(x)) 
    f[]  = E[]/(1-nu0*nu0);
    f_prime[]  = E_prime[]*(1-nu0*nu0);
    C[ Bloc ]  = f[]*TensorSym[ 1.0, nu0, 0, 1.0, 0, 0.5*(1-nu0) ];
    C_prime[ Bloc ]  = f_prime[]*TensorSym[ 1.0, nu0, 0, 1.0, 0, 0.5*(1-nu0) ];
  EndIf
  If(Flag_topopt == 1.0 && Flag_InterpLaw == 2.0) //topology (E(x),nu(x))
    f[]  = E[]/(1-nu[]*nu[]);
    f_prime[]  = (E_prime[]*(1-nu[]*nu[]) + 2.0*E[]*nu[]*nu_prime[])/(1-nu[]*nu[])^2.0;
    C[ Bloc ]  = f[]*TensorSym[ 1.0, nu[], 0, 1.0, 0, 0.5*(1-nu[]) ];
    C_prime[ Bloc ]  = f_prime[]*TensorSym[ 1.0, nu[], 0, 1.0, 0, 0.5*(1-nu[]) ]
                       +f[]*TensorSym[ 1.0, nu_prime[], 0, 1.0, 0, -0.5*nu_prime[] ];
  EndIf

  If(Flag_topopt)
    //normalizing factor: $1:{u}
    norm_eig[] = $1*(rho_mec[]*$1);

    //derivative of eigenvalue: $1:{D1 u}, $2:{u}
    d_eig[] = $1*(C_prime[]*$1)-($ReOmega^2+$ImOmega^2)*$2*(d_rho_mec[]*$2); 
  EndIf

  s_disp = 1;
  Flag_Disp = 2; // 1: point, 2: line

  //u_fixed[] = Vector[dy/8, dy/8*2, 0] * s_disp;
  u_fixed[] = Vector[0, 0, 0] * s_disp;
  u_fixed_line[] = u_fixed[]; // * Y[]/dy;
  force_node[] = Vector[0, -1.0e04/*1e6*/, 1]; //???
  //force_density[] = Vector[0,-9.81,0]; //???

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
    If(Flag_testBench == 3)
      { Region #SURF_GAUCHE;  Value 0.; }
      { Region #SURF_DROITE;  Value 0.; }
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
    If(Flag_testBench == 3)
      { Region #SURF_GAUCHE;  Value 0.; }
      { Region #SURF_DROITE;  Value 0.; }
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
  { Name Vol ;Case {{ Region All ; Jacobian Vol ; }}}
  { Name Sur ;Case {{ Region All ; Jacobian Sur ; }}}
}

Group {
  DefineGroup[Domain_Disp, Domain_Force];
}

FunctionSpace{
  { Name H_Mec2D_u ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
        dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
        dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      If (Flag_degree == 2)
       { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ; 
         dFunction {BF_NodeX_D12_2E, BF_Zero};
         Support Domain_Disp_Tot ; Entity EdgesOf[ All ] ; }
       { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ; 
         dFunction {BF_NodeY_D12_2E, BF_Zero};
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
      { Name sxn ; NameOfCoef uxn ; 
        Function BF_NodeX ; dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; 
        Function BF_NodeY ; dFunction {BF_NodeY_D12, BF_Zero};
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
  //----------------------------------------------
  { Name H_u_Mec2D ; Type Vector ; 
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
}

// sensitivity analysis
Include "sensitivity.pro";



