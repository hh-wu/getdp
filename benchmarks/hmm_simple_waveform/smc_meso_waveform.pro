Include "smc_data.pro";

Group {
  GammaCornerFix = Region[ {GAMMA_POINT } ];

  GammaLeft      = Region[ {GAMMA_LEFT } ];
  GammaRight     = Region[ {GAMMA_RIGHT} ];
  GammaUp        = Region[ {GAMMA_UP} ];
  GammaDown      = Region[ {GAMMA_DOWN} ];

  If (Flag_Half)
  GammaLeft_NJ   = Region[ {GAMMA_LEFT_NJ } ];
  GammaLeft_NB   = Region[ {GAMMA_LEFT_NB } ];
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

  DefineConstant[ ELENUM=0, QPINDEX=0, dt_Macro=0, Flag_WR_meso=1];
  
  AX_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, AX] };  
  AY_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, AY] };  
  AZ_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, AZ] };
  dAX_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, AX] };  
  dAY_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, AY] };  
  dAZ_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, AZ] };  
  aM[]   = Vector[AX_TIME[], AY_TIME[], AZ_TIME[]];
  daM[]   = Vector[dAX_TIME[], dAY_TIME[], dAZ_TIME[]];  

  BX_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, BX]};  
  BY_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, BY]};  
  BZ_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, BZ]};
  dBX_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, BX]};  
  dBY_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, BY]};  
  dBZ_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, BZ]};  
  bM[]   = Vector[BX_TIME[], BY_TIME[], BZ_TIME[]];
  dbM[]   = Vector[dBX_TIME[], dBY_TIME[], dBZ_TIME[]];

  DTAX_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, DTAX]};  
  DTAY_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, DTAY]};  
  DTAZ_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, DTAZ]};
  dDTAX_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, DTAX]};  
  dDTAY_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, DTAY]};  
  dDTAZ_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, DTAZ]};  
  eM[]   = Vector[DTAX_TIME[], DTAY_TIME[], DTAZ_TIME[]];
  deM[]   = Vector[dDTAX_TIME[], dDTAY_TIME[], dDTAZ_TIME[]];


  DTBX_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, DTBX]};  
  DTBY_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, DTBY]};  
  DTBZ_TIME[] = InterpolationLinear[$Time]{ListAlt[TIMEVEC, DTBZ]};
  dDTBX_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, DTBX]};
  dDTBY_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, DTBY]};  
  dDTBZ_TIME[] = dInterpolationLinear[$Time]{ListAlt[TIMEVEC, DTBZ]};  
  dt_bM[]   = Vector[DTBX_TIME[], DTBY_TIME[], DTBZ_TIME[]];
  dt_dbM[]   = Vector[dDTBX_TIME[], dDTBY_TIME[], dDTBZ_TIME[]];

  NbrMaxIter     = 5;
  Eps            = 1e-8;
  Relax          = 1.0;
  factor         = 1.0;
  epsilon        = 1e-6;
  Pert~{1}[]     = Vector[0, 0, 0];
  Pert~{2}[]     = epsilon * Vector[1.0, 0.0, 0.0];
  Pert~{3}[]     = epsilon * Vector[0.0, 1.0, 0.0];
  Pert~{4}[]     = epsilon * Vector[0.0, 0.0, 1.0];

  T               = 1.0/Freq;
  time0           = 0.0;
  timemax         = T * NbT;
  ti              = time0;
  dt_Meso         = dt_Macro/1;
  theta_value     = 1;
  tf              = timemax;
  
  // Parameters for the electric linear law
  sigmaIron = 5.e6;
  sigma[Omega_NL] = sigmaIron;
  sigma[Omega_L] = 1.e-12 * sigmaIron;

  //Parameters of the Brauer nonlinear constitutive law
  nu[Omega_L] = nu0;
  If(!Flag_NL)
    nu[Omega_NL] = nu0 * TensorDiag[0., 0., 0.] / 1.;
    dhdb[Omega_NL] = nu[SquNorm[$1]];
    dhdb_NL[Omega_NL] = nu0 * TensorDiag[0., 0., 0.];
  EndIf
  If(Flag_NL)
    gamma = 388.;
    alpha = 0.3774;
    beta = 2.97;
    nu_ML[Omega_NL] = gamma + alpha * Exp[beta*$1];
    dnudb2[] = alpha * beta* Exp[beta*$1];
    nu[Omega_NL] = nu_ML[SquNorm[$1]];
    dhdb[Omega_NL] = nu[SquNorm[$1]] * TensorDiag[1., 1., 1.] + 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1];
    dhdb_NL[Omega_NL] = 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1];
  EndIf
  If ((Flag_WR == 0) && (Flag_WR_meso == 0))
    b_tprevious[]   = VectorField[XYZ[]]{0};
  EndIf
}

Constraint {
  { Name a_Meso;
    Case {
      If (!Flag_Half)
      { Region GammaRight; Type Link; RegionRef GammaLeft;
        Coefficient 1.; Function Vector[$X-lx, $Y, $Z]; }
      { Region GammaUp; Type Link; RegionRef GammaDown;
        Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
      { Region GammaCornerFix; Type Assign; Value 0.0; }
      EndIf
      If(Flag_Half)
      { Region GammaUp; Type Link; RegionRef GammaDown;
        Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
      { Region GammaLeft; Type Assign; Value 0.0; } 
      EndIf
    }
  }

  If ((Flag_WR == 0) && (Flag_WR_meso == 0))
  { Name a_Meso_WR ;
    Case {
      { Region Omega ; Type Init ; Value Field[XYZ[]] ; }
    }
  }  
  EndIf
  
  { Name a_Meso_Init;
    Case {
      If(Flag_Dynamic)
        //{ Type InitFromResolution; Region Omega; NameOfResolution a_Init; }
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
}

Include "MagStaDyn_a_meso_waveform.pro"
