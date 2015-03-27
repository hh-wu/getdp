Include "meso.dat";
Include "ListOfPoints.pro";

Group {
  GammaCornerFix = Region[ {GAMMA_POINT } ];

  GammaLeft      = Region[ {GAMMA_LEFT } ];
  GammaRight     = Region[ {GAMMA_RIGHT} ];
  GammaUp        = Region[ {GAMMA_UP} ];
  GammaDown      = Region[ {GAMMA_DOWN} ];
  GammaDirichlet = Region[ {GAMMA_UP, GAMMA_DOWN} ];
  GammaDirichlet_Yindi = Region[ {GAMMA_LEFT, GAMMA_RIGHT} ];

  Omega_NL       = Region[ {IRON} ] ;
  Omega_L        = Region[ {INSULATION} ] ;
  Omega_C        = Region[ {Omega_NL} ] ;
  Omega_CC       = Region[ {Omega_L} ] ;
  Omega          = Region[ {Omega_NL, Omega_L} ] ;
}

Function {

  DefineConstant[ AX=0, AY=0, AZ=0, BX=0, BY=0, BZ=0, EX=0, EY=0, EZ=0, dt_BX=0, dt_BY=0, dt_BZ=0, currentTime=0, currentTimeStep=0, ELENUM=0, X_Gauss=0, Y_Gauss=0, Z_Gauss=0, CML=0];

  aM[]            = Vector[AX, AY, AZ];
  bM[]            = Vector[BX, BY, BZ];
  eM[]            = Vector[0.0, 0.0, 0.0];
  //eM[]            = Vector[EX, EY, EZ];
  //dt_bM[]         = Vector[0.0, 0.0, 0.0];
  dt_bM[]         = Vector[dt_BX, dt_BY, dt_BZ];
  XYZ_Gauss[]     = Vector[X_Gauss, Y_Gauss, Z_Gauss];

  NbrMaxIter      = 10;
  Eps             = 1e-4;
  Relax           = 1.0;
  factor          = 1.0;
  Nbr_SubProblems = 3;
  epsilon         = 1e-6;
  Pert~{1}[]      = epsilon * Vector[0.0, 0.0, 0.0];
  Pert~{2}[]      = epsilon * Vector[1.0, 0.0, 0.0];
  Pert~{3}[]      = epsilon * Vector[0.0, 1.0, 0.0];

  //Printf("AX = %g, AY = %g, AZ = %g, BX = %g, BY = %g, BZ = %g, EX = %g, EY = %g, EZ = %g, dt_BX = %g, dt_BY = %g, dt_BZ = %g, currentTime = %g, currentTimeStep = %g, Elenum = %g, X_Gauss = %g, Y_Gauss = %g, Z_Gauss = %G, CML = %g", AX, AY, AZ, BX, BY, BZ, EX, EY, EZ, dt_BX, dt_BY, dt_BZ, currentTime, currentTimeStep, ELENUM, X_Gauss, Y_Gauss, Z_Gauss, CML);


  T               = 1.0/Freq;
  t0              = 0.0;
  ti              = currentTime;
  //NbSteps         = 100;
  dt              = T/NbSteps ;
  theta_value     = 1;
  tf              = ti + dt;
  a_macro[]       = Vector[ 0., 0., ScalarField[XYZ[]]{1}] ;

  //If (!CML)
  //a_tprevious[]   = (currentTimeStep==1) ? Vector[0.,0.,0.] : Vector[ 0., 0., ScalarField[XYZ[]]{0}] ;
  //EndIf
  //If (!CML)
  a_tprevious[]   = (currentTimeStep==1) ? Vector[0.,0.,0.] : Vector[ 0., 0., ScalarField[XYZ[]]{0}] ;
  //EndIf

  // Parameters for the electric linear law
  //=======================================
  sigmaIron     = 5.e6;

  // Parameters for the magnetic linear law
  //=======================================
  mu0           = 4.e-7 * Pi;
  mur           = 1000 ;
  muIron        = mu0 * mur;
  //===================================================
  //Parameters of the Brauer nonlinear constitutive law
  //===================================================
  gamma          = 388.;
  alpha          = 0.3774;
  beta           = 2.97;

  sigma[Omega_NL]     = sigmaIron              ;
  sigma[Omega_L]      = 1.e-12 * sigmaIron     ;
  If(!Flag_NL)
    nu[Omega_L]       = 1./mu0                  ;
    nu[Omega_NL]      = 1./muIron               ;
    dhdb[Omega_NL]    = (1./muIron) * TensorDiag[1., 1., 1.] + (1./muIron)* TensorDiag[0., 0., 0.] ;
    dhdb_NL[Omega_NL] = (1./muIron)* TensorDiag[0., 0., 0.] ;
  EndIf
  If(Flag_NL)
    gamma             = 388.;
    alpha             = 0.3774;
    beta              = 2.97;
    nu_ML[Omega_NL]   = gamma + alpha * Exp[beta*$1] ;
    dnudb2[]          = alpha * beta* Exp[beta*$1] ;
    nu[Omega_L]       = 1./mu0                ;
    nu[Omega_NL]      = TensorDiag[1., 1., 1.] * nu_ML[SquNorm[$1]]     ;
    dhdb[Omega_NL]    = nu[SquNorm[$1]] * TensorDiag[1., 1., 1.] + 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1] ;
    dhdb_NL[Omega_NL] = 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1] ;
  EndIf
}

Constraint {



 { Name a_Micro ;
   Case {
     { Region GammaRight; Type Link; RegionRef GammaLeft;
       Coefficient 1.; Function Vector[$X-lx, $Y, $Z]; }
     { Region GammaUp; Type Link; RegionRef GammaDown;
       Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
     { Region GammaCornerFix; Type Assign; Value 0.0; }
   }
 }
 { Name Current_2D ;
   Case {
     { Region Omega_C; Type Assign; Value 0.0; } // forcing net current in each lamination to be equal to zero
   }
 }
 { Name a_Micro_Init ;
   Case {
     { Type InitFromResolution ; Region Omega ; NameOfResolution a_Init ; }
   }
 }
}

Jacobian {
  { Name Vol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name Sur ; Case { { Region All ; Jacobian Sur ; } } }
}

Integration {
  { Name II ; Case {
      {Type Gauss ;
        Case {
	  { GeoElement Line        ; NumberOfPoints  4 ; }
          { GeoElement Triangle    ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
        }
      }
    }
  }
}

FunctionSpace{
  For iP In {1:Nbr_SubProblems}
  { Name HCurl_a_Micro~{iP} ; Type Form1P ;
    BasisFunction{
      { Name sn; NameOfCoef an; Function BF_PerpendicularEdge; Support Omega; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Micro; }
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Micro_Init; }
    }
  }

  // Gradient of Electric scalar potential (2D)
  //===========================================
  { Name Hregion_u_2D~{iP} ; Type Form1P ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_RegionZ ;
        Support Omega_C ; Entity Omega_C ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ;
        EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef I ;
        EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }

  { Name HCurl_a_Micro_t0~{iP} ; Type Form1P ;
    BasisFunction{
      { Name sn; NameOfCoef an; Function BF_PerpendicularEdge; Support Omega; Entity NodesOf[ All ]; }
    }
  }
  EndFor
}

Formulation {
  For iP In {1:Nbr_SubProblems}

  { Name Init_PreviousTimeStep~{iP} ; Type FemEquation ;
    Quantity{
      { Name a  ; Type Local  ; NameOfSpace HCurl_a_Micro~{iP} ; }

    }
    Equation{
      Galerkin { [     Dof{a} , {a} ]   ; In Omega; Jacobian Vol; Integration II; }
      Galerkin { [ -a_tprevious[], {a} ]; In Omega; Jacobian Vol; Integration II; }
    }
  }

  { Name a_NR~{iP} ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace HCurl_a_Micro~{iP} ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_2D~{iP} ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_2D~{iP}[I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_2D~{iP}[U] ; }
    }
    Equation {
      Galerkin { [ nu[ {d a} + bM[] + Pert~{iP}[] ] * Dof{d a}    , {d a} ]; In Omega; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a} + bM[] + Pert~{iP}[] ] * bM[]        , {d a} ]; In Omega; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a} + bM[] + Pert~{iP}[] ] * Pert~{iP}[] , {d a} ]; In Omega; Jacobian Vol; Integration II; }
      Galerkin { JacNL[ dhdb_NL[ {d a} + bM[] + Pert~{iP}[] ] * Dof{d a}, {d a} ]; In Omega_NL; Jacobian Vol; Integration II; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ]; In Omega_C; Jacobian Vol; Integration II; }
      Galerkin { [   sigma[] * Dof{ur}   , {a} ]; In Omega_C; Jacobian Vol; Integration II; }
      Galerkin { [ - sigma[] * eM[]      , {a} ]; In Omega_C; Jacobian Vol; Integration II; }
      Galerkin { [   sigma[] * ( factor * dt_bM[] /\ (XYZ[] - XYZ_Gauss[]) ) , {a} ]; In Omega_C; Jacobian Vol; Integration II; }

      Galerkin { DtDof [ sigma[] * Dof{a} , {ur} ]; In Omega_C; Jacobian Vol; Integration II; }
      Galerkin { [   sigma[] * Dof{ur}    , {ur} ]; In Omega_C; Jacobian Vol; Integration II; }
      Galerkin { [ - sigma[] * eM[]       , {ur} ]; In Omega_C; Jacobian Vol; Integration II; }
      //If (!CML)
      Galerkin { [   sigma[] * ( factor * dt_bM[] /\ ( (XYZ[]) - (XYZ_Gauss[]) )) , {ur} ]; In Omega_C; Jacobian Vol; Integration II; }
      //EndIf
      //If (CML)
      //Galerkin { [   sigma[] * ( factor * dt_bM[] /\ (XYZ[] - XYZ_Gauss[]) ) , {ur} ]; In Omega_C; Jacobian Vol; Integration II; }
      //EndIf
      GlobalTerm { [ Dof{I}               , {U}  ]; In Omega_C ; }
    }
  }
EndFor
}

Resolution {
  { Name a_Init ;
    System {
      For iP In {1:Nbr_SubProblems}
      { Name AH~{iP}   ; NameOfFormulation Init_PreviousTimeStep~{iP}; DestinationSystem Micro~{iP}; }
      EndFor
    }
    Operation {
       For iP In {1:Nbr_SubProblems}
       If(currentTimeStep == 1)
         Generate[AH~{iP}]; Solve[AH~{iP}]; TransferSolution[AH~{iP}];
       EndIf
       If(currentTimeStep != 1)
         GmshRead[StrCat(Dir_Meso_Comp, Sprintf("a_pert_Prob1_TS%g_Elenum%g.pos", (currentTimeStep-1), ELENUM) ) ];
         Generate[AH~{iP}]; Solve[AH~{iP}]; TransferSolution[AH~{iP}];
       EndIf
     EndFor
    }
  }
  { Name a_NR ;
    System {
      For iP In {1:Nbr_SubProblems}
      { Name Micro~{iP}; NameOfFormulation a_NR~{iP} ;}
      EndFor
    }
    Operation {
      SetTime[ti];
      For iP In {1:Nbr_SubProblems}
      InitSolution[Micro~{iP} ];
      TimeLoopTheta[ ti, tf, dt, 1.]{
        IterativeLoop[NbrMaxIter, Eps, Relax]{
          GenerateJac[Micro~{iP}] ; SolveJac[Micro~{iP}] ;
        }
      }
      SaveSolution[Micro~{iP}];
      If(iP == 1)
        PostOperation[init_field_1];
      EndIf
      EndFor
    }
  }
}

PostProcessing {
  For iP In {1:Nbr_SubProblems}
  { Name a_Micro_NR~{iP} ; NameOfFormulation a_NR~{iP} ; NameOfSystem Micro~{iP} ;
     PostQuantity {
       { Name vol         ; Value { Integral { [ 1. ] ;        In Omega ; Jacobian Vol ; Integration II ; } } }  // stored in register #12
       { Name a_pert      ; Value { Term { [ CompZ[ {a} ] ] ;  In Omega ; Jacobian Vol; } } }
       { Name a_proj      ; Value {
           Term { [ CompZ[ ( aM[] ) ] ] ;                      In Omega ; Jacobian Vol;  }
           Term { [ CompZ[ ( - factor * (XYZ[] - XYZ_Gauss[]) /\ bM[] ) ] ] ;  In Omega ; Jacobian Vol;  } } }
       { Name a_tot       ; Value {
           Term { [ CompZ[ {a}] ] ;   In Omega ; Jacobian Vol; }
           Term { [ CompZ[ aM[] ] ] ; In Omega ; Jacobian Vol; }
           Term { [ CompZ[ ( - factor * (XYZ[] - XYZ_Gauss[]) /\ bM[] ) ] ] ; In Omega ; Jacobian Vol; } } }
       { Name b_pert      ; Value { Term { [ {d a} ] ; In Omega ; Jacobian Vol;  } } }
       { Name b_proj      ; Value { Term { [ bM[] ] ; In Omega ; Jacobian Vol;  } } }
       { Name b_tot       ; Value {
           Term { [ {d a}]    ; In Omega ; Jacobian Vol ; }
           Term { [ bM[]  ] ; In Omega ; Jacobian Vol ; }
           Term { [ Pert~{iP}[]] ; In Omega ; Jacobian Vol ; } } }
       { Name b_tot_mean  ; Value { Integral { [ ({d a} + bM[] + Pert~{iP}[])/#12 ] ; In Omega ; Jacobian Vol ; Integration II ; } } }
       { Name dt_bM       ; Value { Term { [ dt_bM[] ] ;     In Omega ; Jacobian Vol;  } } }
       { Name h_tot ; Value {
           Term { [ nu[{d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[]) ]; In Omega; Jacobian Vol;} } }
       { Name h_tot_mean ; Value {// stored in #22
           Integral { [ nu[ {d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[])/#12 ] ; In Omega ; Jacobian Vol; Integration II ; } } }
       { Name e_pert      ; Value {
           Term { [ -Dt[{a}] ]    ; In Omega_C ; Jacobian Vol;  }
           Term { [ - {ur} ]      ; In Omega_C ; Jacobian Vol;  } } }
       { Name e_proj      ; Value { Term { [ factor * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] ; In Omega_C ; Jacobian Vol;  } } }
       { Name e_tot       ; Value {
           Term { [ - Dt[{a}] ]   ; In Omega_C ; Jacobian Vol;  }
           Term { [ - {ur} ]      ; In Omega_C ; Jacobian Vol;  }
           Term { [ factor * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] ; In Omega_C ; Jacobian Vol;} } }
       { Name j_pert      ; Value {
           Term { [ - sigma[] * Dt[{a}] ]   ; In Omega_C ; Jacobian Vol;  }
           Term { [ - sigma[] * {ur} ]      ; In Omega_C ; Jacobian Vol;  } } }
       { Name j_proj      ; Value { Term { [ factor * sigma[] * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] ; In Omega_C ; Jacobian Vol;  } } }
       { Name j_tot       ; Value {
           Term { [ - sigma[] * Dt[{a}] ] ; In Omega_C ; Jacobian Vol;  }
           Term { [ - sigma[] * {ur} ] ; In Omega_C ; Jacobian Vol;  }
           Term { [   factor * sigma[] * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] ; In Omega_C ; Jacobian Vol;  } } }
       { Name j_tot_mean  ; Value{
           Integral { [ (- sigma[] * Dt[{a}] ) ] ; In Omega_C ; Jacobian Vol; Integration II ; }
           Integral { [ (- sigma[] * {ur} ) ]    ; In Omega_C ; Jacobian Vol; Integration II ; } } }

       { Name JL_tot_mean  ; Value{ // stored in #25
           Integral { [ ( sigma[] * SquNorm[ Dt[{a}] + {ur} + eM[] - factor * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] )/#12 ] ;
             In Omega_C ; Jacobian Vol; Integration II ; } } }
       { Name MagLosses_tot_mean  ; Value{ // stored in #27. Contribution of the current time step to the integral \oint (h db)
           //Integral { [ ( 0.5 * ({d a} + bM[] + Pert~{iP}[]) )/#12 ] ;
           Integral { [ (nu[ {d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[] ) * (Dt[{d a}] + dt_bM[]) ) /#12 ] ; 
             In Omega_NL ; Jacobian Vol; Integration II ; } } }
       { Name MagEnergy_tot_mean  ; Value{ // stored in #27. Contribution of the current time step to the integral \oint (h db)
           Integral { [ ( nu[ {d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[] ) * (Dt[{d a}] + dt_bM[]) )/#12 ] ;
             In Omega ; Jacobian Vol; Integration II ; } } }
       { Name TotalEnergy_tot_mean ; Value{ // stored in #27. Contribution of the current time step to the integral \oint (h db)
           Integral { [ ( sigma[] * SquNorm[ Dt[{a}] + {ur} - eM[] - factor * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] )/#12 ] ;
             In Omega_C ; Jacobian Vol; Integration II ; }
           Integral { [ ( nu[ {d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[] ) * (Dt[{d a}] + dt_bM[]) )/#12 ] ;
             In Omega ; Jacobian Vol; Integration II ; } } }
       { Name TotalEnergyDifference_tot_mean ; Value{ // stored in #27. Contribution of the current time step to the integral \oint (h db)
           Integral { [ ( sigma[] * SquNorm[ Dt[{a}] + {ur} - eM[] - factor * ( (XYZ[] - XYZ_Gauss[]) /\ dt_bM[] ) ] )/#12 ] ;
             In Omega_C ; Jacobian Vol; Integration II ; }
           Integral { [ ( -nu[ {d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[] ) * (Dt[{d a}] + dt_bM[]) )/#12 ] ;
             In Omega ; Jacobian Vol; Integration II ; } } }
     }
  }
  EndFor
}




PostOperation {
For iP In {1:Nbr_SubProblems}
 { Name mean~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation{
     Print[ vol[Omega]       , OnGlobal, Format Table, Store 12, File StrCat[Dir_Meso_Comp, "vol.txt"], LastTimeStepOnly ] ;
     Print[ h_tot_mean[Omega], OnGlobal, Format Table, Store 22, File StrCat[Dir_Meso_Comp, Sprintf("DualField%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly] ;
     Print[ b_tot_mean[Omega], OnGlobal, Format Table, Store 21, File StrCat[Dir_Meso_Comp, Sprintf("PrimalField%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly] ;
     Print[ j_tot_mean[Omega_C], OnGlobal, Format Table, Store 23, File StrCat[Dir_Meso_Comp, Sprintf("j_tot_mean%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly] ;
     Print[ JL_tot_mean[Omega_C], OnGlobal, Format Table, Store 25, File StrCat[Dir_Meso_Comp, Sprintf("JL%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly] ;
     Print[ MagLosses_tot_mean[Omega_C], OnGlobal, Format Table, Store 27, File StrCat[Dir_Meso_Comp, Sprintf("MagLosses%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly ] ;
     Print[ MagEnergy_tot_mean[Omega], OnGlobal, Format Table, Store 28, File StrCat[Dir_Meso_Comp, Sprintf("MagEnergy%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly ] ;
     Print[ TotalEnergy_tot_mean[Omega], OnGlobal, Format Table, Store 29, File StrCat[Dir_Meso_Comp, Sprintf("TotalEnergy%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly ] ;
     Print[ TotalEnergyDifference_tot_mean[Omega], OnGlobal, Format Table, Store 30, File StrCat[Dir_Meso_Comp, Sprintf("TotalEnergyDifference%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly ] ;
   }
 }

 { Name map_field~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation {
     Print[ a_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ a_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ a_tot,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_tot_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];

     Print[ b_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ b_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ b_tot,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_tot_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];

     Print[ e_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("e_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ e_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("e_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ e_tot,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("e_tot_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];

     Print[ j_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("j_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ j_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("j_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];
     Print[ j_tot,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("j_tot_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];

     Print[ h_tot,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("h_tot_Prob%g_Elenum%g.pos" , iP, ELENUM) ], Format Gmsh,
            AppendToExistingFile (currentTimeStep > 1 ? 1 : 0), NoMesh (currentTimeStep > 1 ? 1 : 0), OverrideTimeStepValue currentTimeStep, LastTimeStepOnly ];

   }
 }
 { Name init_field~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation {
     Print[ a_pert, OnElementsOf Omega, File StrCat[Dir_Meso_Comp, Sprintf("a_pert_Prob%g_TS%g_Elenum%g.pos", iP, currentTimeStep, ELENUM) ],
            Format Gmsh, LastTimeStepOnly, OverrideTimeStepValue 0 ];
   }
 }
 EndFor
}
