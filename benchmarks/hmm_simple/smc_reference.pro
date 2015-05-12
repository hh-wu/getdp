// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos maps
// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos globalquantities
// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos cuts

Include "smc_data.pro";

SymmetryFactor = 4 ;
AxialLength    = 1;
N              = n_smc * n_smc;

Group {
  For k In {1:N}
    Iron~{k}          = Region[{(CONDUCTOR+k-1)}];
    Iron              += Region[{Iron~{k}}];
  EndFor
  Isolation           = Region[ISOLATION];
  Ind                 = Region[INDUCTOR];
  Air                 = Region[AIR];
  Omega_Inf           = Region[OMEGA_INF];

  If(!Flag_3D)
    Dirichlet_a_0 = Region[{GAMMA_INF, SYMMETRY_Y0}];
  EndIf
  If(Flag_3D)
    Dirichlet_a_0 = Region[{GAMMA_INF, SYMMETRY_X0, SYMMETRY_Y0}];
  EndIf

  Skin_DomainC        = Region[ {SKIN_COND} ];

  DomainS0            = Region[ {Ind} ];
  DomainL             = Region[ {Air, Ind, Isolation, Omega_Inf} ] ;
  DomainNL            = Region[ {Iron} ];
  DomainCC            = Region[ {Air, Ind, Isolation, Omega_Inf} ] ;
  DomainC             = Region[ {Iron} ];
  Domain              = Region[ {DomainC, DomainCC}] ;
}

Function {
  sigmaIron           = 5e6;
  sigma[]             = sigmaIron;

  mu0                 = 4.e-7*Pi;
  nu0                 = 1./mu0;
  mur                 = 1000 ;
  nuIron              = nu0/mur ;

  aa                  = 388;
  bb                  = 0.3774;
  cc                  = 2.97;
  nu_1a[]             = aa + bb * Exp[cc*SquNorm[$1]] ; // $1 => b ={d a}
  dnudb2_1a[]         = bb *cc* Exp[cc*SquNorm[$1]] ;
  h_1a[]              = nu_1a[$1#1] * #1 ;
  dhdb_1a[]           = TensorDiag[1,1,1] * nu_1a[$1#1] + 2*dnudb2_1a[#1] * SquDyadicProduct[#1]  ;
  dhdb_1a_NL[]        = 2*dnudb2_1a[$1#1] * SquDyadicProduct[#1]  ;

  //Defining the magnetic law
  //=========================
  nu[DomainL] = 1./mu0 ;
  If(!Flag_NL) // For testing purposes
    nu[DomainNL]      = nuIron ;
    h[]               = nu[] * $1 ;
    dhdb[]            = nu[] * TensorDiag[1., 1., 1.] ;
    dhdb_NL[]         = nu[] * TensorDiag[0., 0., 0.] ;
  EndIf
  If(Flag_NL)
    h[]               = h_1a[$1];
    dhdb[]            = dhdb_1a[$1];
    nu[#{Iron}]       = nu_1a[$1];
    dhdb_NL[]         = dhdb_1a_NL[$1];
  EndIf

  If(!Flag_3D)
    js0[] = Vector[0., 0., source_amplitude];
    js[] = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
  EndIf
  If(Flag_3D)
    alpha[] = Pi/2-Atan2[(Y[]-ylam),(X[]-xlam)];
    js0[] = (X[] < xlam) ? Vector[-source_amplitude, 0, 0] :
            (Y[] < ylam) ? Vector[0, source_amplitude, 0] :
            Vector[ -Cos[alpha[]] * source_amplitude, Sin[alpha[]] * source_amplitude, 0 ];
    js[] = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
  EndIf

  T                   = 1./Freq ;
  Omega               = 2 * Pi * Freq ;
  time0               = 0. ;
  timemax             = T * NbT ;
  dtime               = T/NbSteps ;
  theta_value         = 1;
  Nb_max_iter         = 10;
  reltol              = 1e-8;
  abstol              = 1e-8;
  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
}

Constraint {
  { Name a  ; Type Assign ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }

  { Name Current_2D  ; Type Assign ; // Zero net current in each lamination
    Case {
      For k In {1:N}
        { Region Iron~{k} ; Value 0. ; }
      EndFor
    }
  }

  { Name Voltage_2D  ; Type Assign ;
    Case {
    }
  }
}

Include "MagStaDyn_a_reference.pro"
