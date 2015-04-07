// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos maps
// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos globalquantities
// getdp reference.pro -msh reference.msh -solve MagDyn_a -pos cuts

Include "smc_data.pro";

SymmetryFactor = 4 ;
AxialLength    = 1; 
N              = n_smc * n_smc;

Group {
  For k In {1:N}
    Iron~{k}          = #{(CONDUCTOR+k-1)};
    Iron              += Region[{Iron~{k}}];
  EndFor
  Isolation           = #ISOLATION;
  Ind                 = #INDUCTOR;
  Air                 = #AIR;
  OuterBnd            = #GAMMA_INF;
  Omega_Inf           = #OMEGA_INF;
  SurfaceSym          = #SYMMETRY_X0;

  SurfacesDirichletBC = Region[{OuterBnd, SurfaceSym}];
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
  If(Flag_NL==0) // For testing purposes
    nu[DomainNL]      = nuIron ;
    h[]               = nu[] * $1 ;
    dhdb[]            = nu[] * TensorDiag[1., 1., 1.] ;
    dhdb_NL[]         = nu[] * TensorDiag[0., 0., 0.] ;
  EndIf
  
  If (Flag_NL==1)
    h[]               = h_1a[$1];
    dhdb[]            = dhdb_1a[$1];
    nu[#{Iron}]       = nu_1a[$1];
    dhdb_NL[]         = dhdb_1a_NL[$1];
  EndIf

  js0[]               = Vector[0., 0., source_amplitude];
  js[]                = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
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

Include "MagStaDyn_a_reference.pro" 
