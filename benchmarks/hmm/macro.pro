Include "macro.dat";

Flag_NL = 1;

Group {
  Air      = Region[ AIR ];
  Core     = Region[ CONDUCTOR ];
  Inductor = Region[ {INDUCTOR} ] ;
  Infinity = Region[ {OMEGA_INF} ] ;

  // These are the generic group names that are used in "Magnetostatics.pro"
  Domain_S   = Region[ {Inductor} ] ;
  Domain_Inf = Region[ {Infinity} ] ;
  Domain_M   = Region[ {} ] ;
  Domain_NL = Region[ {} ] ;
  Domain_L  = Region[ {} ] ;
  If(Flag_NL)
    Domain_NL += Region[ {Core} ] ;
    Domain_L  += Region[ {Air, Domain_S, Domain_Inf, Domain_M} ] ;
  EndIf
  If(!Flag_NL)
    Domain_L  += Region[ {Core, Air, Domain_S, Domain_Inf, Domain_M} ] ;
  EndIf
  Domain_Mag = Region[ {Core, Air, Domain_S, Domain_Inf, Domain_M} ] ;
  Dirichlet_a_0   = Region[ {GAMMA_INF} ] ;
}

Function {
  mu0               = 4.e-7 * Pi ;
  murCore           = 1000. ;
  nu [ Air ]        = 1. / mu0 ;
  nu [ Inductor ]   = 1. / mu0 ;
  nu [ Domain_Inf]  = 1. / mu0 ;

  If(!Flag_NL)
    nu [ Core ]     = 1. / (murCore * mu0) ;
  EndIf
  
  If(Flag_NL)
    aa              = 388; 
    bb              = 0.3774; 
    cc              = 2.97;
    nu[ Core ]      = aa + bb * Exp[cc*SquNorm[$1]] ;
    dnudb2[ Core ]  = bb *cc* Exp[cc*SquNorm[$1]] ;
    h[ Core ]       = nu[$1#1] * #1 ;
    dhdb[ Core ]    = TensorDiag[1,1,1] * nu[$1#1] + 2 * dnudb2[#1] * SquDyadicProduct[#1]  ;
    dhdb_NL[ Core ] = 2 * dnudb2[$1#1] * SquDyadicProduct[#1]  ;
  EndIf
  js[]            = Vector[0., 0., 50e8];
}

Include "Magnetostatics.pro"
