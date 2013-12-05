Group{
AllDomains = Region[{Propagation_Domain, PML}];
AllDomains_Bnd = Region[{Propagation_Bnd, PML_Bnd}];
}

// Functions
// ==========
Function {
  Dist_XF_Boundary = Sqrt[(XF - X_Omega_max)^2];
  Dist_YF_Boundary = Sqrt[(YF - Y_Omega_max)^2];
  //PML
  // Distance between a point (X,Y,Z) and the centre of the domain (XF,YF,ZF)
  RF_X[] = Sqrt[(X[] - XF)^2];
  RF_Y[] = Sqrt[(Y[] - YF)^2];
	
  // Sigma functions which caracterize PML: equal to 0 inside propagation domain and on the intern boundary of the PML  // Here, Sigma is linear
  SigmaXRef[] = SigmaXmax/(SizePMLX)*(RF_X[] - Dist_XF_Boundary);
  SigmaYRef[] = SigmaYmax/(SizePMLY)*(RF_Y[] - Dist_YF_Boundary);

  SigmaX[] = 0.5*(SigmaXRef[] + Fabs[SigmaXRef[]]);
  SigmaY[] = 0.5*(SigmaYRef[] + Fabs[SigmaYRef[]]);
  // ie: SimgaX[] = max(0,SigmaXRef[])

  k_PML[PML_Bnd] = k + I[]*(SigmaX[]+SigmaY[]);
  // Kx = 1 + i*Sigmax/k
  Kx[] = Complex[1, SigmaX[]/(k)];
  Ky[] = Complex[1, SigmaY[]/(k)];
  D[] = TensorDiag[Ky[]/Kx[], Kx[]/Ky[], 0.];	
}

/*====================
	Jacobian
====================*/
Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
}
/*======================
Paramètres d'intégration
======================*/
Integration {
  { Name I1 ;
    Case { 
      { Type Gauss ;
        Case { 
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  4 ; }
          { GeoElement Triangle ; NumberOfPoints  6 ; }
          { GeoElement Quadrangle ; NumberOfPoints 7 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 15 ; }
          { GeoElement Hexahedron ; NumberOfPoints 34 ; }
        }
      }
    }
  }
}


Constraint{
//Dirichlet nul sur le bord extérieur du domaine (= frontière de la PML tronquée)
  {Name BoundExt; Type Assign; Case{ {Region PML_Bnd;  Value 0.; } } }
}


// Function Space
// ==============
FunctionSpace{
  // One space for backpropagation	
  {Name EspUback; Type Form0;
    BasisFunction{
      {Name Ure; NameOfCoef Uren; Function BF_Node;
	Support Region[{AllDomains, AllDomains_Bnd}]; Entity NodesOf[All];}
    }
    //PML constraint
    Constraint{ {NameOfCoef  Uren; EntityType NodesOf; NameOfConstraint BoundExt;} }
  }
}//End FunctionSpace

// FORMULATION
// ============
Formulation {
  //Back propagation
  { Name BackProp; Type FemEquation;
    Quantity{
      {Name Uback ; Type Local; NameOfSpace EspUback;}
    }
    Equation{
      Galerkin{[D[]*Dof{Grad Uback}, {Grad Uback}];
	In AllDomains; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*Kx[]*Ky[]*Dof{Uback}, {Uback}];
	In AllDomains; Jacobian JVol; Integration I1;}
      // Source (conjugated)
      Galerkin{[-GreenConjug[], {Uback}];
	In TRM; Jacobian JVol; Integration I1;}
    }
  }
}//End Formulation

// Resolution
// ==========
Resolution{
  {Name TR_Free_Space;
    System{
      {Name BackProp; NameOfFormulation BackProp; Type Complex; }
    }
    Operation{
      Generate[BackProp]; Solve[BackProp]; 
    }
  }
  // Empty resolution (to display functions for example).
  // ============================================
  {Name Empty;
    System{
      {Name Direct; NameOfFormulation BackProp; Type Complex; }
    }
    Operation{
    }
  }
}

//Postprocessing
// =============
PostProcessing{
  // Scatterers : only URE 
  {Name Uback; NameOfFormulation BackProp;
    Quantity {
      {Name Uback; Value {Local { [{Uback}] ; In AllDomains; Jacobian JVol; }}}
      {Name Uback_abs; Value {Local { [Norm[{Uback}]] ; In AllDomains; Jacobian JVol; }}}
    }
  }
  // Functions (associated with Empty resolution)
  {Name Functions; NameOfFormulation BackProp;
    Quantity {
      {Name Green2D; Value {Local { [Green2D[]] ; In AllDomains; Jacobian JVol; }}} 
      {Name Green2DNorm; Value {Local { [Norm[Green2D[]]] ; In AllDomains; Jacobian JVol; }}} 
      {Name SigmaX; Value {Local { [Norm[SigmaX[]]] ; In AllDomains; Jacobian JVol; }}} 
      {Name SigmaY; Value {Local { [Norm[SigmaY[]]] ; In AllDomains; Jacobian JVol; }}} 
    }
  }
} // End Postprocessing.

// Post operation
// ===============
PostOperation{
  {Name Uback; NameOfPostProcessing Uback ;
    Operation {
      Print [Uback, OnElementsOf Propagation_Domain, File "Uback.pos"];
      Print [Uback_abs, OnElementsOf Propagation_Domain, File "Uback_abs.pos"];
    }
  }
  
  // Display functions.
  {Name Functions; NameOfPostProcessing Functions ;
    Operation {
      Print [Green2D, OnElementsOf Propagation_Domain, File "fun_Green2D.pos"];
      Print [Green2DNorm, OnElementsOf Propagation_Domain, File "fun_Green2DNorm.pos"];
      Print [SigmaX, OnElementsOf AllDomains, File "fun_SigmaX.pos"];
      Print [SigmaY, OnElementsOf AllDomains, File "fun_SigmaY.pos"];
    }
  }
  
  // Display field in PML.
  {Name PML; NameOfPostProcessing Uback ;
    Operation {
      Print [Uback, OnElementsOf PML, File "PML_Uback.pos"];
      Print [Uback_abs, OnElementsOf PML, File "PML_Uback_abs.pos"];
    }
  }
  
}
