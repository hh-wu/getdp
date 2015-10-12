// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos maps
// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos globalquantities
// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos cuts

Include "smc_data_edge.pro";

SymmetryFactor = 4 ;
AxialLength    = 1;
N              = n_smc * n_smc;

Group {
  For k In {1:N}
    Iron~{k}       = Region[{(CONDUCTOR+k-1)}];
    SkinIron~{k}   = Region[{(SKIN_COND+k-1)}];
    Iron          += Region[{Iron~{k}}];
    SkinIron      += Region[{SkinIron~{k}}];
  EndFor
  SkinIronIsol     = Region[{SKIN_COND_ISO}];
  Isolation        = Region[ISOLATION];
  Ind              = Region[INDUCTOR];
  Air              = Region[AIR];


  OuterBnd0 = #GAMMA_INF;
  SymX0     = #SYMMETRY_X0;
  SymY0     = #SYMMETRY_Y0;

  DomainS0         = Region[ {Ind} ];

  DomainL          = Region[ {Air, Ind, Isolation} ] ;
  DomainNL         = Region[ {Iron} ];

  DomainCC         = Region[ {Air, Ind} ] ;
  DomainC          = Region[ {} ];
  Skin_DomainC     = Region[ {} ];

  If(Flag_Dynamic==0)
    DomainCC      += Region[{Iron, Isolation}];
  EndIf
  If(Flag_Dynamic==1)
    If (Flag_ConductingIsolation)
      DomainC += Region[ {Isolation, Iron} ];
      Skin_DomainC += Region[ {SkinIronIsol} ];
    EndIf
    If (!Flag_ConductingIsolation)
      DomainCC     += Region[{Isolation}];
      DomainC      += Region[{Iron}];
      Skin_DomainC += Region[{SkinIron}];
    EndIf
  EndIf

  Domain              = Region[ {DomainC, DomainCC}] ;

  //+++
  // Equivalent to no BC at outer boundary (with or without air outside ind)
  /*
  PntOuterBnd = #POINT_INF;
  OutLayerElements = ElementsOf[OuterBnd0, OnOneSideOf PntOuterBnd];
  OuterBnd = Region[{OuterBnd0, -OutLayerElements}];
  Dirichlet_a_0 = Region[{OuterBnd, SymX0, SymY0}];
  */
  //+++

  //Dirichlet_a_0 = Region[{SymX0, SymY0}];
  Dirichlet_a_0 = Region[{SymX0, SymY0, OuterBnd0}];


}

Function {
  sigmaIron        = 5e6;
  sigmaIsol        = sigmaIron/1e10;
  sigma[Iron]      = sigmaIron;
  sigma[Isolation] = sigmaIsol;

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
  nu[#{Air, Ind, Isolation}] = 1./mu0 ;

  If(!Flag_NL) // For testing purposes
    nu[Iron]      = nuIron ;
    //h[]               = nu[] * $1 ;
    dhdb[]            = nu[] * TensorDiag[1., 1., 1.] ;
    dhdb_NL[]         = nu[] * TensorDiag[0., 0., 0.] ;
  EndIf
  If(Flag_NL)
    //h[]               = h_1a[$1];
    dhdb[]            = dhdb_1a[$1];
    nu[Iron]       = nu_1a[$1];
    dhdb_NL[]         = dhdb_1a_NL[$1];
  EndIf

  /*
  alpha[] = Pi/2-Atan2[(Y[]-ylam),(X[]-xlam)];

  js0[] = (X[] < xlam) ? Vector[-source_amplitude, 0, 0] :
  (Y[] < ylam) ? Vector[0, source_amplitude, 0] :
  Vector[ -Cos[alpha[]] * source_amplitude, Sin[alpha[]] * source_amplitude, 0 ];

  js0[] = Vector[ -Y[] * source_amplitude, X[] * source_amplitude, 0 ];
  */
  alpha[] = Atan2[Y[],X[]];
  js0[] =  source_amplitude* Vector[ -Sin[alpha[]], Cos[alpha[]], 0 ];

  js[] = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};


  Nb_max_iter         = 5;
  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
  reltol              = 1e-12;
  abstol              = 1e-12;
  RelaxFac_Lin        = LinSpace[1, 0.1, 20];
  TestAllFactors      = 1;
}

Constraint {
  { Name a  ; Type Assign ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }

  //==============================================
  // Constraint for Coulomb gauging
  { Name phi  ; Type Assign ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }

  { Name psi  ; Type Assign ;
    Case {
      If(Flag_Dynamic != 0) 
        { Region Skin_DomainC ; Value 0. ; }
      EndIf
    }
  }


}

Include "MagStaDyn_a_reference_edge.pro"
