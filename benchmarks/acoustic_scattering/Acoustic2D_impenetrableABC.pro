/* 
Resolution of the Helmholtz scalar equation for the (multiple) scattering by impenetrable obstacles, 
using an Absorbing Boundary Condition (ABC). 
This code can solve either a Dirichlet boundary coundition or a Neumann boundary condition.

Groups needed :
----------------
 . Omega : propagation domain
 . Gama : boundary of the scatterers (note that the term Gamma is already used by GetDP)
 . GamaInf : ficticious boundary that truncates the propagation domain

Functions needed
----------------
For the weak formulation :
 . uinc[] : used for a Dirichlet  boundary condition
 . uinc_S[] : same function as uinc[] but instead of X[], this function should call XS[] (same for Y[], Z[] and XYZ[]). This function is needed in the integral that gives the far field of u.
 . dn_uinc[] : used for a Neumann boundary condition
 . dn_uinc_S[] : same function as dn_uinc[] but instead of X[], this function should call XS[] (see uinc_S[] for more explanations).

Example for a plane wave of direction Vect_inc[] (which is unit vector)
uinc_S[] = Complex[ Cos[k*Vect_inc[]*XYZS[]], Sin[k*Vect_inc[]*XYZS[]] ];
dn_uinc_S[] = NormalSource[] * I[] * k * Vect_inc[] * uinc_S[];

*/

// ======
// GROUPS
// ======
Group{
  //propagation domain
  Omega = Region[{Ind_Propagation_Domain}];
  // boundary of the scatterers
  GammaScat = Region[{Ind_Scat_Bound}];
  // fictitious boundary
  GammaInf = Region[{Ind_Fictitious_Bound}];
  //To compute the normal derivative trace of the field
  // for a Dirichlet boundary condition (sound-soft)
  // (this is usefull to compute, for instance, the far field)
  TrGr = ElementsOf[ Omega, ConnectedTo GammaScat ];
}

// ===========
// CONSTRAINTS
// ===========
Constraint{
  //Dirichlet boundary condition on GammaScat, boundary of the scatterers.
  // function f[] should be defined in the main .pro file
  {Name SoundSoftCondition; Type Assign; Case{ {Region GammaScat; Value -uinc[]; } } }
}// End Constraint

Function{
  //Curvature of ellipse
  cost[] = X[]/Xmax;
  sint[] = Y[]/Ymax;
  curvature[] = (Xmax*Xmax*sint[]*sint[] + Ymax*Ymax*cost[]*cost[])^(3/2)/(Xmax*Ymax);
  
  // Coefs for Bayliss-Turkel ABC (as a correction to the Sommerfeld ABC)
  alphaBT[] = 1/(2*curvature[]) - I[]/(8*k*curvature[]^2*(1+I[]/(k*curvature[])));
  betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*curvature[])));
}


// =========
// JACOBIAN
// =========
Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
}
// ======================
// INTEGRATION PARAMETERS
// ======================
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

// ==============
// FUNCTION SPACE
// ==============

FunctionSpace{
  // Dirichlet boundary condition
  {Name H_grad_0; Type Form0;
    BasisFunction{
      {Name u; NameOfCoef ui; Function BF_Node;
	Support Region[{Omega, GammaScat, GammaInf}]; Entity NodesOf[All];}
    }
    Constraint{
      //Dirichlet boundary condition (sound-soft)
      {NameOfCoef ui; EntityType NodesOf;
	NameOfConstraint SoundSoftCondition;}
    }
  }
  
  // Neumann boundary condition
  {Name H_grad; Type Form0;
    BasisFunction{
      {Name u; NameOfCoef ui; Function BF_Node;
	Support Region[{Omega, GammaScat, GammaInf}]; Entity NodesOf[All];}
    }
  }
  
}//End FunctionSpace

// ============
// FORMULATIONS
// ============

Formulation {
  // Formulation for a Dirichlet boundary condition
  { Name Dirichlet; Type FemEquation;
    Quantity{
      {Name u ; Type Local; NameOfSpace H_grad_0;}
      // let us define also the normal derivative trace of u ("dn_u") and the far field ("u_inf").
      { Name dn_u; Type Local ; NameOfSpace H_grad; }
      { Name u_inf; Type Integral ; 
	[ Coef_u_inf[] * ({dn_u} + I[] * k * (-uinc_S[]) * Unit[XYZ[]] * NormalSource[]) * EikXinfDotS[] ] ; 
	In GammaScat; Integration I1; Jacobian JSur; }
    }
    Equation{
      //Helmholt equation
      Galerkin{[Dof{Grad u}, {Grad u}];
	In Omega; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*Dof{u}, {u}];
	In Omega; Jacobian JVol; Integration I1;}
      // sommerfeld radiation condition (approx.)
      Galerkin{[-I[]*k*Dof{u}, {u}];
	In GammaInf; Jacobian JSur; Integration I1;}
      If(Type_ABC == ABC_BAYLISS)
	//Bayliss Türkel Gunzburger radiation condition (order 2)
	Galerkin { [ alphaBT[] * Dof{u} , {u} ] ;
	  In GammaInf; Jacobian JSur ; Integration I1 ; }
	// FIXME: this assumes that GammaInf is closed; we need to add the
	// boundary terms if it is open!
	Galerkin { [ betaBT[] * Dof{d u} , {d u} ] ;  
	  In GammaInf; Jacobian JSur ; Integration I1 ; }
      EndIf
      
      // Compute the normal derivative trace of u on Gamma.
      // Used to build the far field, for instance.
      Galerkin { [ Dof{dn_u} , {dn_u} ] ;  
	In GammaScat; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ - Normal[] * Trace[ Dof{d u} , TrGr ] , {dn_u} ] ;  
	In GammaScat; Jacobian JSur ; Integration I1 ; }
    }
  }
  
  // Formulation for a Neumann boundary condition
  { Name Neumann; Type FemEquation;
    Quantity{
      {Name u ; Type Local; NameOfSpace H_grad;}
      //far field : u_inf
      { Name u_inf; Type Integral ; 
	[ Coef_u_inf[] *  ((-dn_uinc_S[]) + I[] * k * {u} * Unit[XYZ[]] * NormalSource[]) *
	  EikXinfDotS[] ] ; 
	In GammaScat; Integration I1; Jacobian JSur; }
    }
    Equation{
      //Helmholtz equation
      Galerkin{[Dof{Grad u}, {Grad u}];
	In Omega; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*Dof{u}, {u}];
	In Omega; Jacobian JVol; Integration I1;}
      //Neumann boundary condition
      Galerkin{[-dn_uinc[], {u}];
	In GammaScat; Jacobian JSur; Integration I1;}
      //Sommerfeld radiation condition (approx.)
      Galerkin{[-I[]*k*Dof{u}, {u}];
	In GammaInf; Jacobian JSur; Integration I1;}
      If(Type_ABC == ABC_BAYLISS)
	//Bayliss Türkel Gunzburger radiation condition (order 2)
	Galerkin { [ alphaBT[] * Dof{u} , {u} ] ;
	  In GammaInf; Jacobian JSur ; Integration I1 ; }
	// FIXME: this assumes that GammaInf is closed; we need to add the
	// boundary terms if it is open!
	Galerkin { [ betaBT[] * Dof{d u} , {d u} ] ;  
	  In GammaInf; Jacobian JSur ; Integration I1 ; }
      EndIf
    }
  }
}//End Formulation


// ===========
// RESOLUTIONS
// ===========
Resolution{	
  {Name Dirichlet;
    System{
      {Name A; NameOfFormulation Dirichlet; Type Complex; }
    }
    Operation{
      Generate[A]; Solve[A];
    }
  }
  
  {Name Neumann;
    System{
      {Name A; NameOfFormulation Neumann; Type Complex; }
    }
    Operation{
      Generate[A]; Solve[A];
    }
  }
} // End Resolution


// ================
// POST-PROCESSINGS
// ================
PostProcessing{
  // Dirichlet
  {Name Dirichlet; NameOfFormulation Dirichlet;
    Quantity {
      {Name u; Value {Local { [{u}] ; In Omega; Jacobian JVol; }}}
      {Name uNorm; Value {Local { [Norm[{u}]] ; In Omega; Jacobian JVol; }}}
      {Name uinc; Value {Local { [uinc[]] ; In Omega; Jacobian JVol; }}}
      //total field
      {Name ut; Value {Local { [{u} + uinc[]] ; In Omega; Jacobian JVol; }}}
      {Name utNorm; Value {Local { [Norm[{u} + uinc[]]] ; In Omega; Jacobian JVol; }}}
      //first and second trace on gamma
      { Name ugama ; Value { Local { [ {u} ] ; In GammaScat; Jacobian JSur ; } } }
      {Name dn_u ; Value { Local { [ {dn_u} ] ; In GammaScat; Jacobian JSur ; } } }
      {Name dn_uAbs ; Value { Local { [ Norm[{dn_u}] ] ; In GammaScat; Jacobian JSur ; } } }
      //far field and rcs
      { Name far_field; Value { Local { [ {u_inf} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name far_field_abs; Value { Local { [ Norm[{u_inf}] ] ; In GammaScat; Jacobian JSur ; } } }
      { Name rcs ; Value { Local { [ 10 * Log10[Coef_RCS[]*SquNorm[{u_inf}]] ] ; In GammaScat; Jacobian JSur ; } } }
    }
  }
  
  {Name Neumann; NameOfFormulation Neumann;
    Quantity {
      {Name u; Value {Local { [{u}] ; In Omega; Jacobian JVol; }}}
      {Name uNorm; Value {Local { [Norm[{u}]] ; In Omega; Jacobian JVol; }}}
      {Name uinc; Value {Local { [uinc[]] ; In Omega; Jacobian JVol; }}}
      //total field
      {Name ut; Value {Local { [{u} + uinc[]] ; In Omega; Jacobian JVol; }}}
      {Name utNorm; Value {Local { [Norm[{u} + uinc[]]] ; In Omega; Jacobian JVol; }}}
      //first and second trace on gamma
      { Name ugama ; Value { Local { [ {u} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name ugamaAbs ; Value { Local { [ Norm[{u}] ] ; In GammaScat; Jacobian JSur ; } } }
      {Name dn_u ; Value { Local { [ -dn_uinc[] ] ; In GammaScat; Jacobian JSur ; } } }
      //far field and rcs
      { Name far_field; Value { Local { [ {u_inf} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name far_field_abs; Value { Local { [ Norm[{u_inf}] ] ; In GammaScat; Jacobian JSur ; } } }
      { Name rcs ; Value { Local { [ 10 * Log10[Coef_RCS[]*SquNorm[{u_inf}]] ] ; In GammaScat; Jacobian JSur ; } } }
    }
  }
} // End Postprocessing.

// ===============
// POST-OPERATIONS
// ===============

PostOperation{
  //Dirichlet
  {Name ud; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [u, OnElementsOf Omega, File "ud.pos"];
      Print [uNorm, OnElementsOf Omega, File "ud_Abs.pos"];
      Print [ut, OnElementsOf Omega, File "ud_Total.pos"];
      Print [utNorm, OnElementsOf Omega, File "ud_TotalAbs.pos"];
    }
  }
  
  {Name ud_farfield; NameOfPostProcessing Dirichlet ;
    Operation {
      Print[ rcs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "ud_rcs.pos"];
      Print[ far_field, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "ud_far_field.pos"];
      Print[ far_field_abs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "ud_FarFieldAbs.pos"];
    }
  }
  
  {Name ud_traces; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [ugama, OnElementsOf GammaScat, File "ud_gamma_u.pos"];
      Print [dn_u, OnElementsOf GammaScat, File "ud_gamma_dnu.pos"];
      Print [dn_uAbs, OnElementsOf GammaScat, File "ud_gamma_dnuAbs.pos"];	
    }
  }
  
  // Neumann	
  {Name un; NameOfPostProcessing Neumann ;
    Operation {
      Print [u, OnElementsOf Omega, File "un.pos"];
      Print [uNorm, OnElementsOf Omega, File "un_Abs.pos"];
      Print [ut, OnElementsOf Omega, File "un_Total.pos"];
      Print [utNorm, OnElementsOf Omega, File "un_TotalAbs.pos"];
    }
  }
  
  {Name un_farfield; NameOfPostProcessing Neumann ;
    Operation {
      Print[ rcs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0}, File "un_rcs.pos"];
      Print[ far_field, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0}, File "un_far_field.pos"];
      Print[ far_field_abs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0}, File "un_FarFieldAbs.pos"];
    }
  }
  
  {Name un_traces; NameOfPostProcessing Neumann ;
    Operation {
      Print [ugama, OnElementsOf GammaScat, File "un_gamma_u.pos"];
      Print [ugamaAbs, OnElementsOf GammaScat, File "un_gamma_uAbs.pos"];
      Print [dn_u, OnElementsOf GammaScat, File "un_gamma_dnu.pos"];	
    }
  }
  
  {Name uinc; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [uinc, OnElementsOf Omega, File "uinc.pos"];
    }
  }
} // End PostOperation

