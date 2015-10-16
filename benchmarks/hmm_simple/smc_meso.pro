Include "smc_data_edge.pro";

Group {
  GammaCornerFix = Region[ {GAMMA_POINT } ];

  GammaLeft      = Region[ {GAMMA_LEFT } ];
  GammaRight     = Region[ {GAMMA_RIGHT} ];
  GammaUp        = Region[ {GAMMA_UP} ];
  GammaDown      = Region[ {GAMMA_DOWN} ];

  If (Flag_Geometry == Half_Geometry)
    GammaLeft_NJ   = Region[ {GAMMA_LEFT_NJ } ];
    GammaLeft_TH   = Region[ {GAMMA_LEFT_TH } ];
  EndIf

  If (Flag_Geometry == Quarter_Geometry)
    GammaLeft_NJ   = Region[ {GAMMA_LEFT_NJ } ];
    GammaLeft_TH   = Region[ {GAMMA_LEFT_TH } ];
    GammaDown_NJ   = Region[ {GAMMA_DOWN_NJ } ];
    GammaDown_TH   = Region[ {GAMMA_DOWN_TH } ];
  EndIf
  Skin_Omega_C   = Region[ {SKIN_COND} ];

  Omega_NL       = Region[ {IRON} ];
  Omega_L        = Region[ {INSULATION} ];
  Omega_C        = Region[ {Omega_NL} ];
  Omega_CC       = Region[ {Omega_L} ];
  Omega          = Region[ {Omega_NL, Omega_L} ];
}

Function {
  mu0            = 4.e-7 * Pi;
  nu0            = 1/mu0;

  DefineConstant[ ELENUM=0, QPINDEX=0,
                  AX=0, AY=0, AZ=0, BX=0, BY=0, BZ=0,
                  DTAX=0, DTAY=0, DTAZ=0, DTBX=0, DTBY=0, DTBZ=0,
                  TCURRENT=0, TSCURRENT=0];
  
  aM[]            = Vector[AX, AY, AZ];
  bM[]            = Vector[BX, BY, BZ];
  eM[]            = - Vector[DTAX, DTAY, DTAZ];
  dt_bM[]         = Vector[DTBX, DTBY, DTBZ];

  NbrMaxIter     = 5;
  Eps            = 1e-12;
  Relax          = 1.0;

  Nb_max_iter         = 5;
  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
  reltol              = 1e-12;
  abstol              = 1e-12;
  RelaxFac_Lin        = LinSpace[1, 0.1, 20];
  TestAllFactors      = 1;
  
  
  kappa          = 1.0;
  epsilon        = 1e-6;
  Pert~{1}[]     = Vector[0, 0, 0];
  Pert~{2}[]     = epsilon * Vector[1.0, 0.0, 0.0];
  Pert~{3}[]     = epsilon * Vector[0.0, 1.0, 0.0];
  Pert~{4}[]     = epsilon * Vector[0.0, 0.0, 1.0];

  T               = 1.0/Freq;
  ti              = TCURRENT;
  dt              = T/(NbSteps);
  theta_value     = 1;
  tf              = ti + dt;
  a_tprevious[]   = (TSCURRENT == 1) ? Vector[0.,0.,0.] : VectorField[XYZ[]]{0};

  // Parameters for the electric linear law
  sigmaIron = 5.e6;
  sigma[Omega_NL] = sigmaIron  * TensorDiag[1.0, 1.0, 1.0];
  sigma[Omega_L] = 1.e-12 * sigmaIron  * TensorDiag[1.0, 1.0, 1.0];

  //Parameters of the Brauer nonlinear constitutive law
  nu[Omega_L] = nu0 * TensorDiag[1.0, 1.0, 1.0];
  If(!Flag_NL)
    nu[Omega_NL] = (nu0/1000) * TensorDiag[1.0, 1.0, 1.0];
    dhdb[Omega_NL] = (nu0/1000) * TensorDiag[0., 0., 0.];
  EndIf
  If(Flag_NL)
    gamma = 388.;
    alpha = 0.3774;
    beta = 2.97;
    nu_ML[Omega_NL] = gamma + alpha * Exp[beta*$1];
    dnudb2[] = alpha * beta* Exp[beta*$1];
    nu[Omega_NL] = nu_ML[SquNorm[$1]] * TensorDiag[1.0, 1.0, 1.0];
    dhdb[Omega_NL] = nu[SquNorm[$1]] * TensorDiag[1., 1., 1.] + 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1];
    dhdb_NL[Omega_NL] = 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1];
  EndIf
}

Constraint {
  { Name a_Meso;
    Case {
      If(Flag_Geometry == Full_Geometry)
        { Region GammaRight; Type Link; RegionRef GammaLeft;
          Coefficient 1.; Function Vector[$X-lx, $Y, $Z]; }
        { Region GammaUp; Type Link; RegionRef GammaDown;
          Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
        If(!Flag_3D)
          { Region GammaCornerFix; Type Assign; Value 0.0; }
        EndIf
      EndIf
      /*
      If(Flag_Geometry == Half_Geometry)
        { Region GammaUp; Type Link; RegionRef GammaDown;
          Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
        { Region GammaLeft; Type Assign; Value 0.0; } 
      EndIf
      If(Flag_Geometry == Quarter_Geometry)
        { Region GammaLeft; Type Assign; Value 0.0; }
        { Region GammaDown; Type Assign; Value 0.0; } 
      EndIf
      */
    }
  }

  { Name a_Meso_Init;
    Case {
      If(Flag_Dynamic)
        { Type InitFromResolution; Region Omega; NameOfResolution a_Init; }
      EndIf
    }
  }

 { Name Current_2D;
    Case {
      // forcing net current in each lamination to be equal to zero
      { Region Omega_C; Type Assign; Value 0.0; }
    }
  }
 { Name Voltage_2D;
    Case {
    }
  }
   //==============================================
  // Constraint for Coulomb gauging
  { Name phi  ; Type Assign ;
    Case {
      { Region GammaRight; Type Link; RegionRef GammaLeft;
        Coefficient 1.; Function Vector[$X-lx, $Y, $Z]; }
      { Region GammaUp; Type Link; RegionRef GammaDown;
        Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
    }
  }
}

Include "MagStaDyn_a_meso.pro"
