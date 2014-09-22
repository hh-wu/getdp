Include "macro.dat";

Group {
  Air     = Region[ AIR ];
  Core    = Region[ CONDUCTOR ];
  Inductor = Region[ {INDUCTOR1} ] ;

  // These are the generic group names that are used in "Magnetostatics.pro"
  Domain_S = Region[ {Inductor} ] ;
  Domain_Inf = Region[ {} ] ;
  Domain_M   = Region[ {} ] ;

  Flag_NL = 1;

  Domain_NL = Region[ {} ] ;
  If(Flag_NL)
    Domain_NL += Region[ {Core} ] ;
  EndIf

  Domain_Mag = Region[ {Air, Core, Domain_S, Domain_Inf, Domain_M} ] ;
  Dirichlet_a_0   = Region[ {GAMMA_INF} ] ;
}

Function {
  mu0 = 4.e-7 * Pi ;

  murCore = 200.;

  nu [ Air ] = 1. / mu0 ;
  nu [ Inductor ] = 1. / mu0 ;

  nu [ Core ]  = 1. / (murCore * mu0) ;

  js[] = Vector[0,0,1];
}

Include "Magnetostatics.pro"

Resolution {
  { Name hmm ;
    System {
      { Name A ; NameOfFormulation MagSta_a_init ; DestinationSystem B; }
      { Name B ; NameOfFormulation MagSta_a_prepro ; }
      { Name C ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ; TransferSolution[A];
      IterativeLoop[1, stop_criterion, relaxation_factor]{
        Generate[B] ;
        Evaluate[ Python[]{"compute_meso.py"} ];
        GenerateJac[C] ; SolveJac[C] ;
      }
    }
  }
}
