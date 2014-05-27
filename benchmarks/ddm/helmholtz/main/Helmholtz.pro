

Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
  { Name JLin ; Case { { Region All ; Jacobian Lin ; } } }
}

Integration {
  { Name I1 ;
    Case { { Type Gauss ; Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  2 ; }
          { GeoElement Triangle ; NumberOfPoints  6 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle ; NumberOfPoints  4 ; }
          { GeoElement Hexahedron ; NumberOfPoints  6 ; }
        } } }
  }
}

Function{
  k = WAVENUMBER;
  // uExact_Dirichlet[] = AcousticFieldSoftCylinderABC[XYZ[]]{k, R_INT, R_EXT, 2, -1} ;
  // uExact_Neumann[] = AcousticFieldHardCylinderABC[XYZ[]]{k, R_INT, R_EXT, 2, -1};
  // uExact_Dirichlet3D[] = AcousticFieldSoftSphere[XYZ[]]{k, R_INT};
  N[] = XYZ[]/Norm[XYZ[]];
}

Constraint{
  // { Name Dirichlet_uinc ; Case { { Region GammaD ; Value -uinc[]; } } }
  { Name Dirichlet ; Case { { Region GammaD ; Value (uinc[]*#9); } } }
  { Name Dirichlet0 ; Case { { Region GammaD0 ; Value 0.; } } }
  { Name Dirichlet_r ; Case { { Region GammaD ; Value 0.; } } }
}

FunctionSpace {
//FULL VERSION (NODAL/STANDARD)
{ Name Hgrad_u; Type Form0 ;
  BasisFunction { { Name sn ; NameOfCoef un ; Function BF_Node ;
      Support Region[ {Omega, GammaInf, Sigma, GammaD, GammaD0, BndGammaInf} ] ; Entity NodesOf[ All ] ; } }
  Constraint { { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet ; }
    { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0 ; } }
 }
{ Name Hgrad_r; Type Form0 ;
  BasisFunction { { Name sn ; NameOfCoef un ; Function BF_Node ;
      Support Region[ {Omega, GammaInf, Sigma, GammaD, GammaD0, BndGammaInf} ] ; Entity NodesOf[ All ] ; } }
  Constraint { { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet ; }
    { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0 ; } }
 }

//FULL + MIXTE
 If(MIXED_NODAL)
   { Name L2_u_2D; Type Form0 ;
     BasisFunction { { Name sn ; NameOfCoef un ; Function BF_Node ;
         Support Region[ {Omega, GammaInf, GammaD, Sigma} ] ; Entity NodesOf[ Omega ] ; } }
   }
 EndIf
 If(!MIXED_NODAL)
   { Name L2_u_2D; Type Form3 ;
     BasisFunction { { Name sn ; NameOfCoef un ; Function BF_Volume ;
         Support Region[ {Omega, GammaInf, GammaD, Sigma} ] ; Entity VolumesOf[ All ] ; } }
   }
 EndIf

 { Name Hdiv_v_2D; Type Form2P ;
   BasisFunction { { Name sf ; NameOfCoef vf ; Function BF_PerpendicularFacet ;
       Support Region[ {Omega, GammaInf, GammaD, Sigma} ] ; Entity EdgesOf[ All ] ; } }
 }
 { Name Hdiv_q_2D; Type Form1P ;
   BasisFunction { { Name sqe ; NameOfCoef vqe ; Function BF_PerpendicularEdge ;
       Support Region[ {GammaInf, BndGammaInf, Sigma} ] ; Entity NodesOf[ All ] ; } }
 }
}

////////////////////////
Formulation {
//FULL
  { Name Full ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace Hgrad_u; }
    }
    Equation {
      Galerkin { [ Dof{Grad u} , {Grad u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k[]^2 * Dof{u} , {u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ V_SOURCE[] , {u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ fGrad[] , {Grad u} ] ; // distributional sources
	In Omega; Jacobian JVol ; Integration I1 ; }

      // Bayliss-Turkel
      Galerkin { [ - I[] * k[] * Dof{u} , {u} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ alphaBT[] * Dof{u} , {u} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
      If(DIM > 1)
	// FIXME: this assumes that GammaInf is closed; we need to add the
	// boundary terms if it is open!
	Galerkin { [ betaBT[] * Dof{d u} , {d u} ] ;
	  In GammaInf; Jacobian JSur ; Integration I1 ; }
      EndIf
    }
  }

  { Name Full_r ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace Hgrad_r; }
    }
    Equation {
      Galerkin { [ Dof{Grad u} , {Grad u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k[]^2 * Dof{u} , {u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      // Bayliss-Turkel
      Galerkin { [ - I[] * k[] * Dof{u} , {u} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ alphaBT[] * Dof{u} , {u} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
      If(DIM > 1)
	// FIXME: this assumes that GammaInf is closed; we need to add the
	// boundary terms if it is open!
	Galerkin { [ betaBT[] * Dof{d u} , {d u} ] ;
	  In GammaInf; Jacobian JSur ; Integration I1 ; }
      EndIf
    }
  }




// FULL + MIXED
  { Name Mixed_2D ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace L2_u_2D; }
      { Name v ; Type Local ; NameOfSpace Hdiv_v_2D; }
      { Name q ; Type Local ; NameOfSpace Hdiv_q_2D; }
    }
    Equation {
      Galerkin { [ Dof{d v} , {u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ I[] * k[] * Dof{u} , {u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ - Dof{u} , {d v} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ I[] * k[] * Dof{v} , {v} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      //Normal[] sur GammaD est dirigée dans Omega !
      Galerkin { [ Normal[] * uinc[] , {v} ] ;
	In GammaD; Jacobian JSur ; Integration I1 ; }
/*      // Sommerfeld
      Galerkin { [ -Dof{v} , {v} ] ;
        In GammaInf; Jacobian JSur ; Integration I1 ; }*/

      // Bayliss-Turkel
      Galerkin { [ (I[]*k[])/(-I[]*k + alphaBT[])*Dof{v} , {v} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ -(I[]*k[]*betaBT[]/(-I[]*k[] + alphaBT[]))*Normal[]*Dof{d v} , {v} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }

      /*
      // store normale trace
      Galerkin{[ Dof{dnu}, {dnu}];
        In GammaInf; Jacobian JSur; Integration I1;}
      Galerkin{[ Normal[] * Trace[Dof{d u}, Tr], {dnu}];
        In GammaInf; Jacobian JSur; Integration I1;}
      */

      // FIXME: il faudrait coder l'espace pour (n x q)
      Galerkin { [ Dof{q}, {q} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ Dof{u}, {d q} ] ;
	In GammaInf; Jacobian JSur ; Integration I1 ; }
    }
  }
}

Resolution {
  {Name Full;
    System { { Name Helmholtz ; NameOfFormulation Full ; Type Complex; } }
    Operation {
      Evaluate[1. #9];
      UpdateConstraint[Helmholtz, GammaD, Assign];
      Generate[Helmholtz] ;
      Solve[Helmholtz] ;
      PostOperation[Full] ;
    }
  }

  { Name Mixed_2D ;
    System {
      { Name A ; NameOfFormulation Mixed_2D ; Type Complex; }
    }
    Operation {
      Generate[A] ;
      Solve[A] ;
      PostOperation[u_Mixed_2D];
    }
  }
}

PostProcessing {
  { Name Full ; NameOfFormulation Full ;
    PostQuantity {
      { Name u ; Value { Term { [ {u} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      { Name uTot ; Value { Term { [ {u} + uinc[] ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      { Name ugamma ; Value { Term { [ {u} ] ; In Region[ {GammaInf} ]; Jacobian JSur ; } } }
    // If(DIM == 2)
    // 	{ Name u_exact ; Value { Local { [ uExact_Dirichlet[] ] ; In Omega; Jacobian JVol ; } } }
    //     { Name error ; Value { Local { [ Norm[uExact_Dirichlet[] - {u}] ] ; In Omega; Jacobian JVol ; } } }
    // EndIf
    // If(DIM == 3)
    //   { Name u_exact ; Value { Local { [ uExact_Dirichlet3D[] ] ; In Omega; Jacobian JVol ; } } }
    //   { Name error ; Value { Local { [ Norm[uExact_Dirichlet[] - {u}] ] ; In Omega~{idom}; Jacobian JVol ; } } }
    // EndIf
      }
  }

  { Name Mixed_2D ; NameOfFormulation Mixed_2D ;
    PostQuantity {
      { Name u ;  Value { Local { [ {u} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      { Name v ; Value { Local { [ {v} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      { Name vn ;  Value { Local { [ -I[] * k[] * Normal[] * {v} ] ; In Region[ {GammaInf, GammaD} ]; Jacobian JSur ; } } }
      { Name du ;  Value { Local { [ {d u} ] ; In Region[ {GammaInf} ]; Jacobian JSur ; } } }
      { Name q ;  Value { Local { [ {q} ] ; In Region[ {GammaInf} ]; Jacobian JSur ; } } }
    }
  }
}// end postprocessing

PostOperation {
  { Name Full ; NameOfPostProcessing Full;
    Operation {
      Print[ u, OnElementsOf Omega, File "u.pos"] ;
      Print[ uTot, OnElementsOf Omega, File "uTot.pos"] ;
      Print[ ugamma, OnElementsOf GammaInf, File "u_inf.pos"] ;
    }
  }

  { Name u_Mixed_2D ; NameOfPostProcessing Mixed_2D;
    Operation {
      //Print[ u, OnElementsOf Sigma, File "u.pos", Format SimpleTable] ;
      Print[ u, OnElementsOf Omega, File "u.pos"] ;
      Print[ v, OnElementsOf Omega, File "v.pos"] ;
      Print[ vn, OnElementsOf Region[{GammaInf}], File "vn.pos"] ;
      //      Print[ du, OnElementsOf Region[{GammaInf}], File "du.pos"] ;
      //    Print[ q, OnElementsOf Region[{GammaInf}], File "q.pos"] ;
    }
  }
}


//Standard DDM

If (!COMBINED_SWEEP)
  Include "DDM_sweep.pro";
EndIf
If (COMBINED_SWEEP)
  // Include "DDM_sweep.pro";
  // Include "DDM_sweep_simple_combined.pro";
  Include "DDM_sweep_combined.pro";
EndIf

//Include "DDM_sweep_reuse.pro"
