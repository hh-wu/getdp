Group {
   DefineGroup[
     DomainM, DomainB, DomainS, DomainInf,
     DomainL, DomainNL,
     Surf_bn0, Surf_Inf
  ];
}


Function{
 DefineConstant[
    N=2,//number of subdomains 
    Val_Rint, Val_Rext,
    Lz = 1,
    SymmetryFactor = 1,
    Nb_max_iter = 30,
    relaxation_factor = 1,
    stop_criterion = 1e-5,
    reltol = 1e-7,
    abstol = 1e-5,
    T = 1/Freq, // Fundamental period in s
    time0 = 0,
    NbT = 1,
    timemax = NbT*T,
    NbSteps = 100,
    delta_time = T/NbSteps,
    FillFactor_Winding = {1, Name "Input/4Coil Parameters/3Fill factor",
      Highlight "AliceBlue", Visible 1},
    Factor_R_3DEffects = {1, Name "Input/4Coil Parameters/9fact", Label "3D factor",
      Highlight "AliceBlue", Visible 1},
    // Increasing the resistance by 50% == 1.5
    II, VV,
    Flag_NL = 0,
    Flag_NL_Newton_Raphson = {1, Choices{0,1}, Name "Input/41Newton-Raphson iteration",
      Visible Flag_NL},
    po = "Output/"
  ];

  DefineFunction[
    dhdb_NL, br, js0,dnudb,
    rmin2,prod_x_dC,designVar,nu_prime,
    d_E_mec,d_rho_mec
  ];

}

Include "BH.pro"; // nonlinear BH caracteristic of magnetic material

Group {
  DomainB   = Region[ {Inds} ];

  If(Flag_Infinity)
    DomainInf = Region[ {AirInf} ];
  EndIf

  DomainCC = Region[ {Air/*, AirInf*/, Inds, Core} ];
  DomainC  = Region[ { } ];
  Domain  = Region[ {DomainCC, DomainC} ];

  If(Flag_NL)
    DomainNL = Region[ {Core} ];
    DomainL  = Region[ {Domain,-DomainNL} ];
  EndIf
  DomainDummy = #NICEPOS; //#12345 ; // Dummy region number for postpro with functions
  // ----------------------------------------------------------
  DomCompl = /*Region[{ICORE}];*/ Region[{AIRGAP_I}];
  DomainFunc = /*Region[{ICORE}];*/ Region[{AIRGAP_I}];
  If(Flag_topopt)
    If(regionVar == 0)
      DomainOpt = Region[{ECORE}];
    EndIf
    If(regionVar == 1)
      DomainOpt = Region[{ECORE,ICORE}];
    EndIf
  EndIf
  If(!Flag_topopt)
    DomainOpt = Region[{ECORE}];
  EndIf
  //regions for shape derivative
  Domain~{1} = Region[{ECORE}];//Region[{AIRGAP_C}];
  Domain~{2} = Region[{AIRGAP_C}];//Region[{AIRGAP_I}];
  SkinDomain~{1} = Region[{SURF_AIRGAP_ECORE}]; 
  SkinDomain~{2} = Region[{SURF_AIRGAP_ECORE}]; 
  // ----------------------------------------------------------
}

Function {
  If(Flag_topopt)
    p = degree_SIMP;
    designVar[#DomainOpt]  = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};
    //designVar[#{Domain,-DomainOpt}] = 0.0;
  EndIf

  // mechanical
  DefineConstant[
    young = {150e9, Name "Input/Materials/0Young modulus [Pa]"},
    nu_Poisson = {0.17, Name "Input/Materials/1Poisson coeficient"},
    rh = {4400, Name "Input/Materials/2Mass density", Label "Mass density [kg/m^3]"}
  ];

  // ----------------------------------------------------------
  // eigen problem
  // ----------------------------------------------------------
  If(!Flag_topopt) //quid de l'air et des bobinages ???
    E_mec[#{Core,Inds}] = young;
    E_mec[#{Domain,-Core,-Inds}] = 1000; // si je met 0 -> mode parasite !!!
    rho_mec[] = rh; // vol. mas
  EndIf
  If(Flag_topopt)
    E_mec[DomainOpt] = young*designVar[]^p;// simp
    d_E_mec[DomainOpt] = young*p*designVar[]^(p-1.0);
    alpha = 16.0; 
    //E_mec[DomainOpt] = young*((alpha-1.0)*designVar[]^p + designVar[])/alpha;//poynomial
    //d_E_mec[DomainOpt] = young*((alpha-1.0)*p*designVar[]^(p-1.0) + 1.0)/alpha;
    rho_mec[] = rh*designVar[]; // vol. mas
    d_rho_mec[] = rh; // vol. mas
  EndIf
  ff[] = E_mec[]/(1-nu_Poisson^2.0);
  d_ff[] = d_E_mec[]/(1-nu_Poisson^2.0);
  C[] = ff[]*TensorSym[ 1.0, nu_Poisson, 0, 1.0, 0, 0.5*(1-nu_Poisson) ];
  d_C[] = d_ff[]*TensorSym[1.0,nu_Poisson,0,1.0,0,0.5*(1-nu_Poisson)];

  //derivartive of stiff matrix (eig):$1:{D1 u}
  d_stiff_eig[] = d_C[]*$1*$1;

  //derivartive of mass matrix (eig):$1:{u}
  d_mass_eig[] = (d_rho_mec[]*$1)*$1;

  //normalizing factor: $1:{u}
  norm_eig[] = (rho_mec[]*$1)*$1;

  //derivative of eigenvalue: $1:{D1 u}, $2:{u}
  d_eig[] = (d_C[]*$1*$1-($ReOmega^2+$ImOmega^2)*(d_rho_mec[]*$2)*$2);
      

// 3D
//  //Cij = [ C11   C12
//  //        C21   C22];
//  //Cij = E/(1+nu)/(1-2nu)*
//  //[ 1-nu        nu         nu         0                  0                  0
//  //    nu      1-nu         nu         0                  0                  0
//  //    nu        nu       1-nu         0                  0                  0
//  //     0         0          0      (1-2nu)/2             0                  0
//  //     0         0          0         0               (1-2nu)/2             0
//  //     0         0          0         0                  0              (1-2nu)/2 ]
//  ff[] = E_mec[]/(1+nu_Poisson)/(1-2*nu_Poisson);
//  d_ff[] = d_E_mec[]/(1+nu_Poisson)/(1-2*nu_Poisson);
//      
//  c11 = 1-nu_Poisson ;
//  c12 = nu_Poisson ;
//  c44 = (1-2*nu_Poisson)/2 ;
//  C_11[Domain] = ff[] * TensorSym[ c11, c12, c12, c11, c12, c11 ];
//  d_C_11[Domain] = d_ff[]*TensorSym[ c11, c12, c12, c11, c12, c11 ];  
//  C_22[Domain] = ff[] * TensorSym[ c44, 0, 0, c44, 0, c44 ];
//  d_C_22[Domain] = d_ff[] * TensorSym[ c44, 0, 0, c44, 0, c44 ];
//  C_12[Domain] = Tensor[0,0,0, 0,0,0, 0,0,0];
//  C_21[Domain] = Tensor[0,0,0, 0,0,0, 0,0,0];

//  //derivartive of stiff matrix (eig):$1:{D1 u}, $2:{D2 u}
//  d_stiff_eig[] = (d_C_11[]*$1)*$1 + (d_C_22[]*$2)*$2;

//  //derivartive of mass matrix (eig):$1:{u}, $2:{u}
//  d_mass_eig[] = (d_rho_mec[]*$1)*$1;

//  //normalizing factor
//  norm_eig[] = (rho_mec[]*$1)*$1;

  // ----------------------------------------------------------
  // topology optimization
  // ----------------------------------------------------------
  nu0 = 1./mu0;
  nu[#{DomainCC,-Core}]  = 1./mu0 ;
  //nu [#{Air/*, AirInf*/, Inds}]  = 1./mu0 ;
  
  If(!Flag_topopt)
    If(!Flag_NL)
      nu [#{Core}]  = 1/(mur_fe*mu0) ;
      dnudb[] = 0.0;
    EndIf
    If(Flag_NL)
      nu [ DomainNL ] = nu_EIcore[$1] ;
      dhdb_NL [ DomainNL ] = dhdb_EIcore_NL[$1];
      dnudb[] = dnudb_EIcore[$1];
    EndIf
  EndIf
  If(Flag_topopt)
    If(!Flag_NL)
      nu[#{Core,-DomainOpt}]  = 1/(mur_fe*mu0) ;
      nu[#DomainOpt]  = (1 / (mur_fe * mu0) - nu0)*designVar[]^p + nu0; 
      nu_prime[#DomainOpt]  = p*(1 / (mur_fe * mu0) - nu0)*designVar[]^(p-1.0); 
    EndIf
    If(Flag_NL)
      If(Flag_NL_Curve == 0) //EIcore
        nu[#{Core,-DomainOpt}] = nu_EIcore[$1] ;
        nu[DomainOpt] = nu0*(1.0 + (nu_EIcore[$1]/nu0 - 1.0)*designVar[]^p);
        dhdb_NL[DomainOpt] = dhdb_EIcore_NL[$1]*designVar[]^p;
        dhdb_NL[#{Core,-DomainOpt}] = dhdb_EIcore_NL[$1];
        nu_prime[DomainOpt] = p*nu0*(nu_EIcore[$1]/nu0 - 1.0)*designVar[]^(p-1.0);
      EndIf
      If(Flag_NL_Curve == 1) //Park(article topology optimization)
        nu[#{Core,-DomainOpt}] = nu_Park[$1]; //nu_EIcore[$1] ;
        nu[DomainOpt] = nu0*(1.0 + (nu_Park[$1]/nu0 - 1.0)*designVar[]^p);
        dhdb_NL[DomainOpt] = dhdb_Park_NL[$1]*designVar[]^p;
        dhdb_NL[#{Core,-DomainOpt}] = dhdb_Park_NL[$1];
        nu_prime[DomainOpt] = p*nu0*(nu_Park[$1]/nu0 - 1.0)*designVar[]^(p-1.0);
      EndIf
    EndIf
  EndIf

  sigma[#{Inds}] = sigma_coil ;
  rho[] = 1/sigma[] ;

  Rb[] = Factor_R_3DEffects*FillFactor_Winding*Lz*NbWires[]^2/SurfCoil[]/sigma[] ;
  Resistance[#{Inds}] = Rb[] ;
  // ----------------------------------------------------------
  // optimization
  // ----------------------------------------------------------
  If(Flag_filterSensitivity)
    rmin2[] = Rmin*Rmin;
    prod_x_dC[] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  EndIf
  volDensity[#{DomainOpt}] = 7874; //acier
  //volDensity[#{Rotor_Fe,Stator_Fe}] = 7874; //acier
  //volDensity[#{DomainM}] = 7400; //PM

  T_max[] = ( SquDyadicProduct[$1] - SquNorm[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;
  
  // ----------------------------------------------------------
  // material derivative
  // ----------------------------------------------------------
  //indicatrice
  indicFunc[#{DomainFunc}] = 1.0;
  indicFunc[#{Domain,-DomainFunc}] = 0.0;
  dindicFunc_dL[#{Domain}] = 0.0;

  // -- velocity field --
  velocityField_0[] = VectorField[XYZ[],0,1]{0};
  velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};

  grad_A[] = GradVectorField[XYZ[],0,1]{A_FIELD}; //analytic

  grad_Lambda[] = GradVectorField[XYZ[],0,1]{LAMBDA_FIELD};

  rot_gradA_V[]=Vector[(CompZY[GradVectorField[XYZ[],0,1]{GRADA_V_FIELD}#1]-CompYZ[#1]),
                            (CompXZ[#1] - CompZX[#1]),
                            (CompYX[#1] - CompXY[#1])];

  rot_gradLambda_V[]=
                      Vector[(CompZY[GradVectorField[XYZ[],0,1]{GRADLAMBDA_V_FIELD}#1] 
                                 - CompYZ[#1]),
                            (CompXZ[#1] - CompZX[#1]),
                            (CompYX[#1] - CompXY[#1])];
 
  div_nuRotARotLambdaVel[]= 
             CompXX[GradVectorField[XYZ[],0,1]{NU_ROTA_ROTLAMBDA_VELOCITY_FIELD}#1]
               + CompYY[#1] + CompZZ[#1];

  div_jsLambdaVel[]= 
             CompXX[GradVectorField[XYZ[],0,1]{JS_LAMBDA_VELOCITY_FIELD}#1]
               + CompYY[#1] + CompZZ[#1];

  div_MRotLambdaVel[] = 
              CompXX[GradVectorField[XYZ[],0,1]{M_ROTLAMBDA_VELOCITY_FIELD}#1]
               + CompYY[#1] + CompZZ[#1];

  div_FuncIndVel[] = 
              CompXX[GradVectorField[XYZ[],0,1]{FUNC_IND_VELOCITY_FIELD}#1]
               + CompYY[#1] + CompZZ[#1];

  //$1:{d a}, $2:{d lambda} 
  d_bilin_mat[] = - nu[ $1 ] * $2 * rot_gradA_V[] - nu[ $1 ] * $1 * rot_gradLambda_V[]
                  + div_nuRotARotLambdaVel[];
  //d_load_mat[] = - nu[ $1 ] * br[] * rot_gradLambda_V[] + div_MRotLambdaVel[];
  //dF_mat[] = - dFdb[ $1 ] * rot_dA_V[] + div_FuncIndVel[];
  If(Flag_PerfType == COMPLIANCE)
    Func[] = nu[$1] * SquNorm[$1]; //F = nu*B^2
    dFdb[] = 2. * nu[$1] * $1; //dF/db = 2*nu*B
  EndIf
  If(Flag_PerfType == TORQUE)
    Func[] = nu[$1]*torqueCoeff[]*( $1*er[] )*( $1*et[] );
    dFdb[] = nu[$1]*torqueCoeff[]*(er[]*($1*et[]) + et[]*($1*er[]));
  EndIf
  d_load_mat[] = -js0[]*(grad_Lambda[]*velocityField[])+ div_jsLambdaVel[];
  dF_mat[] = div_FuncIndVel[]-(dFdb[$1]*indicFunc[])*rot_gradA_V[];

//  dF_mat[] = Func[]*dindicFunc_dL[] + div_FuncIndVel[]
//             -((2.0*nu[$1]*$1)*indicFunc[])*rot_gradA_V[];
  // ----------------------------------------------------------
  // lie derivative
  // ----------------------------------------------------------
  dV[] = Transpose[ GradVectorField[XYZ[], 0 , 1]{VELOCITY_FIELD} ];
  ETA[] = dV[] + Transpose [ dV[] ] - TTrace [ dV[] ] * TensorDiag[1,1,1];
  LV1[] = dV[] * $1 ;
  LV2[] = TTrace [ dV[] ] * $1 - Transpose [ dV[] ] * $1 ;

  dF_lie[] = nu[$1] * $1 * ( ETA[] * $1 ) ;
  d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ;
  d_load_lie[] = nu[$1] * ( LV1[ br[] ] ) * $2 ;


}

//-------------------------------------------------------------------------------------

Jacobian {
  { Name Vol;
    Case {
      { Region DomainInf ; Jacobian VolSphShell{Val_Rint, Val_Rext} ; }
      { Region All ; Jacobian Vol; }
    }
  }
}

Integration {
  { Name I1 ; Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle   ; NumberOfPoints  6 ; }
	  { GeoElement Quadrangle ; NumberOfPoints  4 ; }
	  { GeoElement Line       ; NumberOfPoints  13 ; }
        }
      }
    }
  }
}

//-------------------------------------------------------------------------------------

Constraint {

  { Name MVP_2D ;
    Case {
      { Region Surf_Inf ; Type Assign ; Value 0. ; }
      //{ Region Surf_bn0 ; Type Assign ; Value 0. ; }
    }
  }
  //-----------------------------------------------------------------
  { Name Current_2D ;
    Case {
      { Region Inds ; Value II*Idir[] ; TimeFunction IA[]; }
    }
  }
  //----------------------------------------------------------------- 
  { Name Voltage_2D ;
    Case {
    }
  }
  //-----------------------------------------------------------------
  { Name DeplacementX ;
    Case {
      //{ Region Encastrement ; Value 0. ; }
    }
  }
  { Name DeplacementY ;
    Case {
      //{ Region Encastrement ; Value 0. ; }
    }
  }
  { Name DeplacementZ ;
    Case {
      //{ Region Encastrement ; Value 0. ; }
    }
  }
}

//-----------------------------------------------------------------------------------------------

FunctionSpace {
  //-----------------------------------------------------------------
  // TODO: 2D !!!
  { Name H_u_Mec3D ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
        Support Domain ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
        Support Domain ; Entity NodesOf[ All ] ; }
      { Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DeplacementX ; }
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DeplacementY ; }
      { NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint DeplacementZ ; }
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
//      SubSpace {
//        { Name u_x ; NameOfBasisFunction { sxn } ; }
//        { Name u_y ; NameOfBasisFunction { syn } ; }
//      }
//    Constraint {
//      { NameOfCoef uxn ;
//        EntityType NodesOf ; NameOfConstraint DisplacementX_Mec ; }
//      { NameOfCoef uyn ;
//        EntityType NodesOf ; NameOfConstraint DisplacementY_Mec ; }
//    }
  }
  //-----------------------------------------------------------------
  // Magnetic Vector Potential
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{Domain}] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }
  //-----------------------------------------------------------------
  // Gradient of Electric scalar potential (2D)
  { Name Hregion_u_Mag_2D ; Type Form1P ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_RegionZ ;
        Support DomainC ; Entity DomainC ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ; EntityType GroupsOfNodesOf ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef I ; EntityType GroupsOfNodesOf ; NameOfConstraint Current_2D ; }
    }
  }
  //-----------------------------------------------------------------
  { Name Hregion_i_Mag_2D ; Type Vector ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_RegionZ ;
        Support DomainB ; Entity DomainB ; }
    }
    GlobalQuantity {
      { Name Ib ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Ub ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Ub ; EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef Ib ; EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }
  //-----------------------------------------------------------------
  //  Adjoint var --> same constraints as A
  { Name Hcurl_lambda_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{Domain}] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }
  //-----------------------------------------------------------------
  // Filtered sensitivity
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
  }
}
//----------------------------------------------------------------------------------------

Group{
  // Transitions layers
  If(Flag_velocity_vol==0.0)
    For n In {1:NbSubDom}
      DomShapeSens~{n} = ElementsOf[Domain~{n},OnOneSideOf SkinDomain~{n} ];
      Domain_all += Region[ Domain~{n} ];
      SkinDomain_all += Region[ SkinDomain~{n} ];
    EndFor
    DomShapeSens = ElementsOf[Domain_all,OnOneSideOf SkinDomain_all ];
  EndIf  
}

Formulation {
  //-----------------------------------------------------------------
  // Magnetostatic Formulation
  //-----------------------------------------------------------------
  { Name MagStaDyn_a_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_Mag_2D ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [U] ; }

      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Ub ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ub] ; }
      { Name Ib ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ib] ; }
    }

    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      If(Flag_NL_Newton_Raphson)
      Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }
      EndIf
      Galerkin { [ -nu[] * br[] , {d a} ] ; 
        In DomainM ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{ur}, {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -js0[] , {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {ur} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{ur} , {ur} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{I} , {U} ] ; In DomainC ; }

      Galerkin { [ -NbWires[]/SurfCoil[] * Dof{ir} , {a} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof [ Lz * NbWires[]/SurfCoil[] * Dof{a} , {ir} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{Ub}/SymmetryFactor , {Ib} ] ; In DomainB ; }
      Galerkin { [ Rb[]/SurfCoil[]* Dof{ir} , {ir} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; } // Resistance term

      // GlobalTerm { [ Resistance[]  * Dof{Ib} , {Ib} ] ; In DomainB ; }
      // The above term can replace the resistance term:
      // if we have an estimation of the resistance of DomainB, via e.g. measurements
      // which is better to account for the end windings...

    }
  }
  //-----------------------------------------------------------------
  // Modal Formulation
  //-----------------------------------------------------------------
//  { Name Elasticity3D_u_modal ; Type FemEquation ;
//    Quantity {
//      { Name u ; Type Local ; NameOfSpace H_u_Mec3D ; }
//    }
//    Equation {
//       Galerkin { [ C_11[] * Dof{D1 u} , {D1 u} ] ;
//         In Domain ;Jacobian Vol ; Integration I1 ; }

//       Galerkin { [ C_22[] * Dof{D2 u} , {D2 u} ] ;
//         In Domain ;Jacobian Vol ; Integration I1 ; }

//       Galerkin { [ C_12[] * Dof{D2 u} , {D1 u} ] ;
//         In Domain ; Jacobian Vol ; Integration I1 ; }

//       Galerkin { [ C_21[] * Dof{D1 u} , {D2 u} ] ;
//         In Domain ; Jacobian Vol ; Integration I1 ; }

//       Galerkin { DtDtDof [ rho_mec[] * Dof{u} , {u} ];
//         In Domain ; Jacobian Vol ; Integration I1 ; }
//    }
//  }
  { Name Elasticity2D_u_modal ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace H_u_Mec2D ; }
    }
    Equation {
       Galerkin { [ C[]*Dof{D1 u}, {D1 u}] ; // define only on DomainTopOpt ???
                 In DomainOpt; Jacobian Vol ; Integration I1 ; }

       Galerkin { DtDtDof [ rho_mec[] * Dof{u} , {u} ];
         In DomainOpt ; Jacobian Vol ; Integration I1 ; }
    }
  }
  //-----------------------------------------------------------------
  // Adjoint Formulation
  //-----------------------------------------------------------------
 { Name AdjointFormulation ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D; }
      { Name lambda ; Type Local  ; NameOfSpace Hcurl_lambda_2D; }
    }
    Equation {
      // bilinear(Lambda,Lambda')
      Galerkin { [ nu[ {d a} ]* Dof{d lambda}  , {d lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ dhdb_NL[ {d a} ] * Dof{d lambda} , {d lambda} ] ; 
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      // Adjoint load
      If(Flag_PerfType == COMPLIANCE) // F = Int_DO{nu*curl(A)^2}
        Printf["-- Compliance Pseudoload --"];
        Galerkin { [ -2.0*nu[{d a}]*{d a}, {d lambda} ] ;
         In DomCompl ; Jacobian Vol ; Integration I1 ; }
      EndIf
   }
  }
  //-----------------------------------------------------------------
  // Sensitivity filtering (for topology optimization)
  //-----------------------------------------------------------------
 { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
    }
    Equation {
       Galerkin { [ rmin2[] * Dof{d psi}, {d psi} ] ;
                   In DomainOpt; Jacobian Vol ; Integration I1 ; }

       Galerkin { [ Dof{psi}, {psi} ] ;
                   In DomainOpt; Jacobian Vol; Integration I1; }

       Galerkin { [ -prod_x_dC[], {psi} ] ;
                   In DomainOpt; Jacobian Vol; Integration I1; }
      }
 }
}
//--------------------------------------------------------------------------------------
Resolution {

  { Name Analysis ;
    System {
      If(Flag_AnalysisType==2)
        { Name A;NameOfFormulation MagStaDyn_a_2D;Type ComplexValue;Frequency Freq; }
      EndIf
      If(Flag_AnalysisType<2)
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; }
      EndIf
    }
    Operation {
      CreateDir["res/"];

      InitSolution[A] ;

      PostOperation[Get_Analytical] ; // Values from magnetic circuit

      If(Flag_AnalysisType==0 || Flag_AnalysisType==2)
        If(!Flag_NL)
          Generate[A] ; Solve[A] ;
        EndIf
        If(Flag_NL)
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            GenerateJac[A] ; SolveJac[A] ; }
        EndIf
        SaveSolution[A] ;

        PostOperation[Get_LocalFields] ;
        PostOperation[Get_GlobalQuantities] ;
      EndIf // End Flag_AnalysisType==0 (Static) Flag_AnalysisType==2 (Frequency)

      If(Flag_AnalysisType==1)
        TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Euler implicit (1) -- Crank-Nicolson (0.5)
          If(!Flag_NL)
            Generate[A]; Solve[A];
          EndIf
          If(Flag_NL)
            IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor] {
              GenerateJac[A] ; SolveJac[A] ; }
          EndIf
          SaveSolution[A];

          PostOperation[Get_LocalFields] ;
          Test[ $TimeStep > 1 ]{
            PostOperation[Get_GlobalQuantities];
          }
        }
      EndIf // End Flag_AnalysisType==1 (Time domain)
    }
  }
  //===================================================================
  // Optimization 
  //===================================================================
  { Name OptimStep ;
    System {
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; } //state variable
        { Name B ; NameOfFormulation AdjointFormulation ; } //adjoint variable
        { Name D ; NameOfFormulation Filt_sens ; }//filter sensitivity
        { Name E; NameOfFormulation Elasticity2D_u_modal;} //modal analysis(2D)
    }
    Operation {
     CreateDir[ResDir];
     //-------------------------------------------------------------------
     If(Flag_SolveStateVar) //Solve for A ?
       Printf["-- Compute State Variable --"];
       If(Flag_AnalysisType==0) // --- stationnary ---
         If(Flag_topopt)
           GmshRead["res/designVariable.pos",DES_VAR_FIELD]; 
         EndIf
         InitSolution[A];
         PostOperation[Get_Analytical2] ; // Values from magnetic circuit
         If(!Flag_NL)
	    Printf["-- Linear system --"];
            Generate[A]; Solve[A];
          EndIf
         If(Flag_NL)
           Printf["-- NL system --"];
           IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
             GenerateJac[A] ; SolveJac[A] ; }
         EndIf
         SaveSolution[A];
         PostOperation[Get_PrimalSystem];
      EndIf
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SolveAdjointVar) 
       Printf["-- Compute Adjoint Variable --"];
       // Compute adjoint variable (independent of design variables) 
       // --> choose this method if #PerfFunc << #var 
       // --> Same system for shape and topology optimization
       // --> 1 system per performance function
       ReadSolution[A]; //Load state variable (potential vector)
       If(Flag_topopt)
         GmshRead["res/designVariable.pos",DES_VAR_FIELD]; 
       EndIf
       InitSolution[B]; Generate[B]; Solve[B]; 
       SaveSolution[A]; SaveSolution[B]; 
       PostOperation[Get_AdjointSystem];
     EndIf
    //-------------------------------------------------------------------
     If(Flag_SemiAnalyticAvmSens)
       Printf["-- Compute AVM Semi-Analytic quantitys --"];
       ReadSolution[A];ReadSolution[B]; // load A and Lambda
       PostOperation[Get_SemiAnalyticAvmQuantitys]; // Compute Lambda*K*A and Lambda*g
     EndIf
     //-------------------------------------------------------------------
     If(Flag_AvmFixedDomSens) // adjoint method sens. - fixed mesh
       Printf["-- Compute AVM sensitivity analysis (fixed domain) --"];
       ReadSolution[A];ReadSolution[B];//A and Lambda   
       GmshRead["res/designVariable.pos",DES_VAR_FIELD];
       PostOperation[Get_AvmFixedDomSens];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_LieAvmVarDomSens) //shape optimization analytic derative
       ReadSolution[A];ReadSolution[B];//A and Lambda 
       GmshRead["res/velocity.pos", VELOCITY_FIELD];
       PostOperation[Get_AvmVarDomSens_Lie];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_AvmVarDomSens) //shape optimization analytic derative
        Printf["-- Compute AVM sensitivity analysis (variable domain) --"];
        ReadSolution[A];ReadSolution[B];//A and Lambda 
        GmshRead["res/TorqueVarianceAllDom.pos", TORQUE_VAR_FIELD];
        GmshRead["res/velocity.pos", VELOCITY_FIELD];
        PostOperation[Get_AvmVarDomSens_0];//generate fields
	GmshRead["res/a.pos", A_FIELD];
	GmshRead["res/lambda.pos", LAMBDA_FIELD];
	GmshRead["res/nuRotARotLambdaVelocity.pos", NU_ROTA_ROTLAMBDA_VELOCITY_FIELD];
        GmshRead["res/jsLambdaVelocity.pos", JS_LAMBDA_VELOCITY_FIELD];
        GmshRead["res/funcIndVelocity.pos", FUNC_IND_VELOCITY_FIELD];
        GmshRead["res/MRotLambdaVelocity.pos", M_ROTLAMBDA_VELOCITY_FIELD];
	PostOperation[Get_AvmVarDomSens_1];//generate fields
   	GmshRead["res/grad_A_V.pos", GRADA_V_FIELD];
	GmshRead["res/grad_Lambda_V.pos", GRADLAMBDA_V_FIELD];	
	PostOperation[Get_AvmVarDomSens]; //compute derivative
     EndIf
     //-------------------------------------------------------------------
     If(Flag_filterSensitivity) // Filter sensitivity (only if TO)
       Printf["-- Filter Sensitivity --"];
       GmshRead["res/Sensitivity_DesVar.pos", SENS_FIELD]; 
       Generate[D]; Solve[D]; SaveSolution[D];
       PostOperation[Get_FilteredSens];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SolveEigSys) 
       If(Flag_topopt)
         GmshRead["res/designVariable.pos",DES_VAR_FIELD]; 
       EndIf
       GenerateSeparate[E]; EigenSolve[E, 10, 0, 0];//comment filtrer les modes rigides??
       SaveSolutions[E] ;
       PostOperation[Get_PrimalSystemEig] ;
       PostOperation[Get_FixedDomSens_Stiff_eig];
     EndIf
//     //-------------------------------------------------------------------
//     If(Flag_FixedDomSensEig) // adjoint method sens. - fixed mesh
//       Printf["-- Compute sensitivity analysis eig (fixed domain) --"];
//       ReadSolution[E];   
//       GmshRead["res/designVariable.pos",DES_VAR_FIELD];
//       PostOperation[Get_FixedDomSens_Stiff_eig];
//     EndIf
//     //-------------------------------------------------------------------
    }
  }
}
//-----------------------------------------------------------------------------------------------

PostProcessing {

  { Name MagStaDyn_a_2D ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {
      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }
      { Name az ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [ {d a} ] ; In Domain ; Jacobian Vol ; } } }
      { Name nb  ; Value { Term { [ Norm[{d a}] ] ; In Domain ; Jacobian Vol ; } } }
      { Name br ; Value { Term { [ br[] ] ; In DomainM ; Jacobian Vol ; } } }

      { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name js0 ; Value { Term { [ js0[] ] ; In DomainS ; Jacobian Vol ; } } }

      { Name j  ; Value {
          Term { [ -sigma[]*(Dt[{a}]+{ur}) ]; In DomainC ; Jacobian Vol ; }
        }
      }

      { Name ir ; Value { Term { [ {ir} ] ; In Inds ; Jacobian Vol ; } } }

      { Name jz ; Value {
          Term { [ CompZ[-sigma[]*(Dt[{a}]+{ur})] ]       ; In DomainC ; Jacobian Vol ; }
        }
      }

      { Name rhoj2 ;
        Value {
          Term { [ sigma[]*SquNorm[ Dt[{a}]+{ur}] ] ; In Region[{DomainC}] ; Jacobian Vol ; }
          Term { [ 1./sigma[]*SquNorm[ IA[]*{ir} ] ] ; In Inds  ; Jacobian Vol ; }
        }
      }

      { Name JouleLosses ;
        Value {
          Integral { [ SymmetryFactor*Lz*sigma[] * SquNorm[ Dt[{a}]+{ur} ] ];
            In Region[{DomainC}] ; Jacobian Vol ; Integration I1 ; }
          Integral { [ SymmetryFactor*Lz*1./sigma[]*SquNorm[ IA[]*{ir} ] ];
            In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name MagEnergy ; Value {
          Integral { [ SymmetryFactor*Lz* 1/2 *nu[{d a}]*{d a}*{d a} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; } } }

      { Name Flux ; Value {
          Integral { [ SymmetryFactor*Lz*Idir[]*NbWires[]/SurfCoil[]* CompZ[{a}] ] ;
            In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name ComplexPower ; // S = P + i*Q
        Value {
          Integral { [ Complex[ sigma[]*SquNorm[Dt[{a}]+{ur}], nu[]*SquNorm[{d a}] ] ] ;
            In Region[{DomainC}] ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In DomainC ; }
          Term { [ {Ub} ]  ; In DomainB ; }
        }
      }

      { Name I ; Value {
          Term { [ {I} ]   ; In DomainC ; }
          Term { [ {Ib} ]  ; In DomainB ; }
        }
      }

      { Name S ; Value {
          Term { [ {U}*Conj[{I}] ]    ; In DomainC ; }
          Term { [ {Ub}*Conj[{Ib}] ]  ; In DomainB ; }
        }
      }

      // Getting the value of some functions
     For k In {0:NbAvailableMagCircuits-1}
       { Name Reluctance~{k} ; Value { Term { Type Global; [ Reluctance~{k}[] ] ; In DomainDummy ; } } }
       { Name Inductance~{k} ; Value { Term { Type Global; [ Inductance~{k}[] ] ; In DomainDummy ; } } }
     EndFor

      { Name Inductance_from_Flux ; Value { Term { Type Global; [ #11*1e3/II ] ; In DomainDummy ; } } } // Flux stored in register #11
      { Name Inductance_from_MagEnergy ; Value { Term { Type Global; [ 2*#22*1e3/(II*II) ] ; In DomainDummy ; } } } // MagEnergy stored in register #22

    }//PostQuantity
  }// MagStaDyn_a_2D
}// PostProcessing


//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

PostOperation Get_LocalFields UsingPost MagStaDyn_a_2D {
  Print[ ir, OnElementsOf Inds,   File StrCat[Dir,"ir",ExtGmsh], LastTimeStepOnly ] ;
  Print[ b,  OnElementsOf Domain, File StrCat[Dir,"b",ExtGmsh], LastTimeStepOnly ] ;
  Print[ nb,  OnElementsOf Domain, File StrCat[Dir,"nb",ExtGmsh], LastTimeStepOnly ] ;
  Print[ az, OnElementsOf Domain, File StrCat[Dir,"a",ExtGmsh], LastTimeStepOnly ];
}

PostOperation Get_Analytical UsingPost MagStaDyn_a_2D {
  For k In {0:NbAvailableMagCircuits-1}
    Print[ Reluctance~{k}, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
      File StrCat[Dir,Sprintf("Reluctance%g",k),ExtGnuplot] ];
    Print[ Inductance~{k}, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
      File StrCat[Dir, Sprintf("Inductance%g",k),ExtGnuplot],
      SendToServer StrCat[po,Sprintf("6%gInductance Magnetic Circuit %g [mH]", k, k)], Color "LightYellow" ];
  EndFor
}

PostOperation Get_GlobalQuantities UsingPost MagStaDyn_a_2D {
  Print[ I, OnRegion Ind_1, Format Table,
    File > StrCat[Dir,"I",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"20I [A]"], Color "LightYellow" ];
  Print[ U, OnRegion Ind_1, Format Table,
    File > StrCat[Dir,"U",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"30U [V]"], Color "LightYellow" ];

  Print[ Flux[Inds], OnGlobal, Format TimeTable,
    File > StrCat[Dir,"Flux",ExtGnuplot], LastTimeStepOnly, Store 11,
    SendToServer StrCat[po,"40Flux [Wb]"],  Color "LightYellow" ];

  Print[ MagEnergy[Domain], OnGlobal, Format TimeTable,
    File > StrCat[Dir,"ME",ExtGnuplot], LastTimeStepOnly, Store 22,
    SendToServer StrCat[po,"41Magnetic Energy [W]"],  Color "LightYellow" ];

  Print[ Inductance_from_Flux, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
    File StrCat[Dir,"Inductance",ExtGnuplot],
    SendToServer StrCat[po,"50Inductance from Flux [mH]"], Color "LightYellow" ];
  Print[ Inductance_from_MagEnergy, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
    File StrCat[Dir,"Inductance",ExtGnuplot],
    SendToServer StrCat[po,"51Inductance from Magnetic Energy [mH]"], Color "LightYellow" ];
}


DefineConstant[
//  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
//  C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
//  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices",
	Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 5 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
