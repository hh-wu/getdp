// getdp reference.pro -msh reference.msh -sol MagDyn_a_NL -pos Dyn_NL

Include "reference_sta.dat" ;
Dir     = "hmm_res_ref/";
ExtGmsh = Str[ Sprintf("_nl%g.pos", Flag_NL) ];
ExtData = Str[ Sprintf("_nl%g.txt", Flag_NL) ];

N       = n_smc * n_smc;

Group {
  For k In {1:N}
    Iron~{k} = #{(IRON+k-1)};
    Iron     += Region[{Iron~{k}}];
    SkinIron += Region[{(SKINIRON+k-1)}];
  EndFor

  Isolation           = #ISOL;
  Air                 = #AIR;
  OuterBnd            = #OUTERBND;
  Omega_Inf           = #OMEGA_INF;

  SurfaceGe0          = #{MIDDLE, MIDDLE_IND};
  SurfaceSym          = #SYMMETRY_X0;
  SurfacesDirichletBC = Region[{SurfaceGe0, OuterBnd, SurfaceSym}];
  Ind                 = #IND;
  DomainS0            = Region[ {Ind} ];
  DomainL             = Region[ {Air, Ind, Isolation, Omega_Inf} ] ;
  DomainNL            = Region[ {Iron} ];
  DomainCC            = Region[ {Air, Ind, Isolation, Omega_Inf} ] ;
  DomainC             = Region[ {Iron} ];
  Domain              = Region[ {DomainC, DomainCC}] ;
}

Function {
  mu0                 = 4.e-7*Pi;
  nu0                 = 1./mu0;
  mur                 = 2500 ;
  nu[DomainL] = 1./mu0 ;
  nuIron              = nu0/mur ;

  // Example of analytical nonlinear law
  //====================================
  aa = 388; bb = 0.3774; cc = 2.97;

  If(Flag_NL == 0) // For testing purposes
    nu[#{Iron}]       = nuIron ;
    h[]               = nuIron * $1 ;
    dhdb[]            = TensorDiag[1., 1., 1.] * nuIron ;
    dhdb_NL[]         = TensorDiag[0., 0., 0.] ;
  EndIf
  If(Flag_NL == 1)  // Using analytical law
    nu[#{Iron}]      = aa + bb * Exp[cc*SquNorm[$1]] ; // $1 => b ={d a}
    dnudb2[#{Iron}]  = bb *cc* Exp[cc*SquNorm[$1]] ;
    h[#{Iron}]       = nu[$1#1] * #1 ;
    dhdb[#{Iron}]    = TensorDiag[1., 1., 1.] * nu[$1#1] + 2*dnudb2[#1] * SquDyadicProduct[#1]  ;
    dhdb_NL[#{Iron}] = 2*dnudb2[$1#1] * SquDyadicProduct[#1]  ;
  EndIf

  Ns[#{Ind}]          = 100e8;
  js[]                = Ns[] * Vector[0,0,1] ;
  theta_value         = 1;
  Nb_max_iter         = 30;
  reltol              = 1e-9;
  abstol              = 1e-9;
  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
}

Jacobian {
  { Name JVol ;
    Case {
      { Region Omega_Inf ; Jacobian VolSphShell{Val_Rint, Val_Rext} ; }
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name JSur ; 
    Case { 
      { Region All ; Jacobian Sur; }
    } 
  }
}

Integration {
  { Name I ; Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle    ; NumberOfPoints  3 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
        }
      }
    }
  }
}

Constraint {

  { Name MVP  ; Type Assign ;
    Case {
      { Region SurfacesDirichletBC ; Value 0. ; }
    }
  }

  { Name MVP_aux  ; Type Assign ;
    Case {
      { Region SurfacesDirichletBC ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_a ; Type Form1P ;
    BasisFunction {
      { Name se  ; NameOfCoef ae  ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf[All] ; }
     }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint MVP ; }
    }
  }
}


Formulation {
  { Name MagDyn_a_NL ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ]  ; In Domain ; Jacobian JVol ; Integration I ; }
      Galerkin { JacNL[ dhdb_NL[{d a}]* Dof{d a} , {d a} ] ; In DomainNL ; Jacobian JVol ; Integration I ; }
      Galerkin { [ -js[] , {a} ] ; In DomainS0     ; Jacobian JVol; Integration I ; }
    }
  }
}


Resolution {
  { Name MagDyn_a_NL ;
    System {
      { Name A ; NameOfFormulation MagDyn_a_NL ; }
    }
    Operation {
      CreateDirectory[Dir];
      IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] {
        GenerateJac[A]; SolveJac[A];
      }
      SaveSolution[A];
    }
  }
}


PostProcessing {
  //=================================================
  // NONLINEAR
  //=================================================
  { Name MagDyn_a_NL ; NameOfFormulation MagDyn_a_NL ;
    PostQuantity {
      { Name a  ; Value { Local { [ {a} ]             ; In Domain ; Jacobian JVol; } } }
      { Name az ; Value { Local { [ CompZ[{a}] ]      ; In Domain ; Jacobian JVol; } } }
      { Name b  ; Value { Local { [ {d a} ]           ; In Domain ; Jacobian JVol; } } }
      { Name h  ; Value { Local { [ nu[{d a}]*{d a} ] ; In Domain ; Jacobian JVol; } } }
    }
  }
}

PostOperation {
  { Name Dyn_NL ; NameOfPostProcessing MagDyn_a_NL ;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir,StrCat["az",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir,StrCat["h" ,ExtGmsh] ] ];

      Print[ az, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["az_ref_cut_1", ExtData ] ] ];
      Print[ az, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["az_ref_cut_2", ExtData ] ] ];
      Print[ az, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["az_ref_cut_3", ExtData ] ] ];
      Print[ az, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["az_ref_cut_4", ExtData ] ] ];

      Print[ b, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["b_ref_cut_1", ExtData ] ] ];
      Print[ b, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["b_ref_cut_2", ExtData ] ] ];
      Print[ b, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["b_ref_cut_3", ExtData ] ] ];
      Print[ b, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["b_ref_cut_4", ExtData ] ] ];

      Print[ h, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["h_ref_cut_1", ExtData ] ] ];
      Print[ h, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["h_ref_cut_2", ExtData ] ] ];
      Print[ h, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["h_ref_cut_3", ExtData ] ] ];
      Print[ h, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir, StrCat["h_ref_cut_4", ExtData ] ] ];
    }
  }
}

