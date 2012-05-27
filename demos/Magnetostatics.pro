/* Input

  Groups :
  --------
    Domain         Whole magnetic domain
    Domain_S       Inductor regions
    Domain_M       Permanent magnet regions
    Domain_Inf     Nonconducting regions with
                   Spherical Shell Transformation
                   (Parameters : Val_Rint, Val_Rext)

  Functions :
  -----------
    mu[]           Magnetic permeability
    nu[]           Magnetic reluctivity
    hc[]           Coercitive magnetic field
    js[]           Source current density

  Constraint :
  ----------
    phi            Fixed magnetic scalar potential
    a              Fixed magnetic vector potential (2D)

*/

Group {
  DefineGroup[ Domain_M = {{}, Label "Magnets", Path "Regions"},
               Domain_S = {{}, Label "Current source", Path "Regions"},
               Domain_Inf = {{}, Label "Infinite domain (spherical)", Path "Regions"},
               Domain_Mag = {{}, Label "Magnetic materials", Path "Regions"},
               Dirichlet_phi_0 = {{}, Label "H.t = 0", Path "Regions"},
               Dirichlet_a_0 = {{}, Label "B.n = 0", Path "Regions"} ];

  DefineGroup[ Domain = {{Domain_Mag, Domain_M, Domain_S, Domain_Inf},
                         Label "Computational domain", Path "Regions", Visible 0} ];
}

Function{
  DefineConstant[ Val_Rint, Val_Rext ];
  DefineFunction[ mu, nu, hc, js ];
}

Jacobian {
  { Name JVol ;
    Case {
      { Region Domain_Inf ; Jacobian VolSphShell{Val_Rint, Val_Rext} ; }
      { Region All ; Jacobian Vol ; }
    }
  }
}


Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Triangle ; NumberOfPoints 4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints 4 ; }
	}
      }
    }
  }
}


/* --------------------------------------------------------------------------
   MagSta_phi : Magnetic scalar potential phi formulation
   -------------------------------------------------------------------------- */

Constraint {
  { Name phi ;
    Case {
      { Region Dirichlet_phi_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hgrad_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
}


Formulation {
  { Name MagSta_phi ; Type FemEquation ;
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
    }
    Equation {
      Galerkin { [ - mu[] * Dof{d phi} , {d phi} ] ;
                 In Domain ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ - mu[] * hc[] , {d phi} ] ;
                 In Domain_M ; Jacobian JVol ; Integration I1 ; }
    }
  }
}


Resolution {
  { Name MagSta_phi ;
    System {
      { Name A ; NameOfFormulation MagSta_phi ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
    }
  }
}


PostProcessing {
  { Name MagSta_phi ; NameOfFormulation MagSta_phi ;
    Quantity {
      { Name b   ; Value { Local { [ - mu[] * {d phi} ] ; In Domain ; Jacobian JVol ; }
                           Local { [ - mu[] * hc[] ]    ; In Domain_M ; Jacobian JVol ; } } }
      { Name h   ; Value { Local { [ - {d phi} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name phi ; Value { Local { [ {phi} ]            ; In Domain ; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_phi_b.pos" ] ;
      Print[ h, OnElementsOf Domain, File "MagSta_phi_h.pos" ] ;
      Print[ phi, OnElementsOf Domain, File "MagSta_phi_phi.pos" ] ;
    }
  }
}

/* --------------------------------------------------------------------------
   MagSta_a : Magnetic vector potential a formulation (2D)
   -------------------------------------------------------------------------- */

Constraint {
  { Name a ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {

  { Name Hcurl_a ; Type Form1P ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint a ; }
    }
  }

}


Formulation {
  { Name MagSta_a ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ;
                 In Domain ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ hc[] , {d a} ] ;
                 In Domain_M ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ -js[] , {a} ] ;
                 In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
}


Resolution {
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A];
    }
  }
}


PostProcessing {
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    Quantity {
      { Name a ; Value { Local { [ CompZ[{a}] ]   ; In Domain ; Jacobian JVol ; } } }
      { Name b ; Value { Local { [ {d a} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name a ; Value { Local { [ {a} ]          ; In Domain ; Jacobian JVol ; } } }
      { Name h ; Value { Local { [ nu[] * {d a} ] ; In Domain ; Jacobian JVol ; }
                         Local { [ hc[] ]         ; In Domain_M ; Jacobian JVol ; } } }
    }
  }
}
