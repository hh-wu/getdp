/* Template name: MagSta_a.pro

   Physical problem: 
    - magnetostatics

   Unknown field: 
    - magnetic vector potential

   Sources:
    - imposed current density
    - permanent magnets

   Geometry:
    - plane, axisymmetry
    - infinite elements
    - 1 order or 2d order hierarchical
    
   Materials:
    - magnetic linear
    - saturable

   Global quantities:
    - inductance
*/

// Template header

Group {
   DefineGroup[
	       DomainSaturCore_Mag, 
	       DomainLinCore_Mag, 
	       DomainAir_Mag,
	       DomainMagnet_Mag,
	       DomainSource_Mag,
	       DomainInf_Mag,
	       BoundaryBn0, BoundaryInf
  ];
}

Function{
  DefineFunction[
    dhdb, br, js, SurfCoil, Current
  ];

  DefineConstant[
    Flag_Degree = 1,
    Flag_Infinity = 1,
    Flag_NL = 0, Flag_Jac = 0,
    NbMaxIter_NL = 100,
    relaxation_NL = 1,
    tolerance_NL = 1.e-5
  ];
}

// End of template header

/* 
   User defined groups
   -------------------

   DomainSaturCore_Mag      Regions with nonlinear core materials
   DomainLinCore_Mag        Regions with linear core materials
   DomainAir_Mag            Air regions

   DomainMagnet_Mag         Magnet regions   
   DomainSource_Mag         Regions with imposed current density
   DomainInf                Regions mapped towards infinity

   BoundaryBn0              Boundary with no flux (Dirichlet BC)
   BoundaryInf              Boundary at infinity

   The first 3 groups correspond with 
   the three magnetic constitutive laws h= fct(b) available in the template.
   They are mutually exclusive and their union is the analysis domain.

   The next three groups trigger the application in the indicated region
   of specific functionalities (mapping) 
   or addition terms in the equation (remanance, source). 

   The last two groups are surfaces undergoing special tratment 
   in the formulation: no-flux boundary condition, infinite boundary. 

   Functions
   ---------
   js[]                     Source current density
   nu[]                     Magnetic reluctivity (h/b)
   dhdb[]                   Differential reluctivity (dh/db)
   br[]                     Remnant magnetic flux density

   Constants
   ---------
   Flag_NL                  Apply or not Newton-Raphson iteration
   Flag_Axisymmetry         Defined in "Jacobian_Lib.pro"
   Flag_Degree              Use 2d order hierarchical elements
*/


// Internal groups
Group {
  DomainLinear_Mag = Region[ { DomainAir_Mag, DomainLinCore_Mag } ];
  DomainNonLinear_Mag = Region[ { DomainSaturCore_Mag } ];
  Domain_Mag = Region[ { DomainLinear_Mag, 
			 DomainNonLinear_Mag} ];
}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"

Function {
  // The reluctivity function is defined for air regions in the template.
  // It must be defined in the calling model file for all other regions.
  mu0 = 4.e-7 * Pi ;
  nu [ Region[ { DomainAir_Mag} ] ]  = 1./mu0 ;

  Lz = 1.;
  If(Flag_Axisymmetry==1)
    Lz = 2.*Pi;
  EndIf
}

Constraint {
  { Name MVP_2D ;
    Case {
      { Region BoundaryInf ; Type Assign ; Value 0. ; }
      { Region BoundaryBn0 ; Type Assign ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[ { Domain_Mag } ] ; Entity NodesOf [ All ] ; }
      If (Flag_Degree)
        { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
	Support Region[ Domain_Mag ] ; Entity EdgesOf [All];}
      EndIf

   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
      If (Flag_Degree)
        { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_2D ; }
      EndIf
    }
  }
}

Formulation {
  { Name MagSta_a ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a}  , {d a} ] ;
        In DomainLinear_Mag ; Jacobian Vol ; Integration Vol ; }

      If(Flag_Jac) // Old implementation
	Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
	  In DomainNonLinear_Mag ; Jacobian Vol ; Integration Vol ; }
        Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
          In DomainNonLinear_Mag ; Jacobian Vol ; Integration Vol ; }
      EndIf

      // Nonlinear weak form: Find a_k such that
      //
      //  ( nu(curl a_k) curl a_k, curl a')  = 0,
      //
      // for all a' in Hspace.
      //
      // Linearization:
      //   h(b_k) \approx h( b_(k-1) ) + (dh/db)_(k-1) * ( b_k - b_(k-1) )
      //
      // i.e.
      //
      //   ( nu(curl a_k) curl a_k, curl a') \approx
      //       (   nu( curl a_(k-1) ) curl a_(k-1) , curl a')
      //     + ( dhdb( curl a_(k-1) ) curl a_k     , curl a')
      //     - ( dhdb( curl a_(k-1) ) curl a_(k-1) , curl a')
      
      If(!Flag_Jac) // New implementation
        Galerkin { [ nu[{d a}] * {d a}  , {d a} ] ;
          In DomainNonLinear_Mag ; Jacobian Vol ; Integration Vol ; }
        Galerkin { [   $relax * dhdb[{d a}] * Dof{d a} , {d a} ];
          In DomainNonLinear_Mag; Integration Vol; Jacobian Vol;  }
        Galerkin { [ -$relax * dhdb[{d a}] * {d a} , {d a} ];
          In DomainNonLinear_Mag; Integration Vol; Jacobian Vol;  }
      EndIf

      Galerkin { [ -nu[] * br[] , {d a} ] ;
        In DomainMagnet_Mag ; Jacobian Vol ; Integration Vol ; }

      Galerkin { [ -js[] , {a} ] ;
        In DomainSource_Mag ; Jacobian Vol ; Integration Vol ; }
    }
  }
}

Resolution {
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      InitSolution[A] ;
        If(!Flag_NL)
          Generate[A] ; Solve[A] ;
        EndIf
        If(Flag_NL)
	  If(Flag_Jac) // Old implementation
	    IterativeLoop[NbMaxIter_NL, tolerance_NL, relaxation_NL] {
	      GenerateJac[A] ; SolveJac[A] ; 
	    }
          EndIf
	  If(!Flag_Jac) // New implementation
	    Evaluate[ $relax = relaxation_NL ];
	    Generate[A] ; GetResidual[A, $res0]; 
	    Evaluate[ $res = $res0, $it = 0 ];
	    Print[{$it, $res, $res / $res0},
                Format "Residual %03g: abs %14.12e rel %14.12e"];
	    While[ $res / $res0 > tolerance_NL && $it < NbMaxIter_NL ]{
	      Solve[A];
	      Generate[A]; GetResidual[A, $res]; Evaluate[ $it = $it + 1 ];
	      Print[{$it, $res, $res / $res0},
	  	    Format "Residual %03g: abs %14.12e rel %14.12e"];
	    }
	  EndIf
        EndIf
        SaveSolution[A] ;
    }
  }
}

PostProcessing {
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    PostQuantity {
      { Name a  ; Value { Term { [ {a} ] ; 
	    In Domain_Mag ; Jacobian Vol ; } } }
      { Name az ; Value { Term { [ CompZ[{a}] ] ; 
	    In Domain_Mag ; Jacobian Vol ; } } }
      { Name b  ; Value { Term { [ {d a} ] ; 
	    In Domain_Mag ; Jacobian Vol ; } } }
      { Name modb  ; Value { Term { [ Norm[{d a}] ] ; 
	    In Domain_Mag ; Jacobian Vol ; } } }
      { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; 
	    In Domain_Mag ; Jacobian Vol ; } } }
      { Name js ; Value { Term { [ js[] ] ; 
	    In DomainSource_Mag ; Jacobian Vol ; } } }
      { Name modjs ; Value { Term { [ Norm [ js[] ] ] ; 
	    In DomainSource_Mag ; Jacobian Vol ; } } }
      { Name br ; Value { Term { [ br[] ] ; 
	    In DomainMagnet_Mag ; Jacobian Vol ; } } }
      { Name nu ; Value { Term { [ nu[{d a}] ] ; 
	    In Domain_Mag ; Jacobian Vol ; } } }
      { Name Inductance ; Value {
          Integral { [ Lz * js[] * {a} / (Current[])^2 ] ;
            In DomainSource_Mag  ; Jacobian Vol ; Integration Vol ;  } } }
      { Name MagEnergy ; Value {
          Integral { [ Lz/2. * nu[] * SquNorm[ {d a} ] ] ;
            In DomainLinear_Mag ; Jacobian Vol ; Integration Vol ; }
	  Integral { [ 1 ] ; // FIXME
	    In DomainSaturCore_Mag ; Jacobian Vol ; Integration Vol ; } 
	  Integral { [ 1 ] ; // FIXME
	    In DomainMagnet_Mag ; Jacobian Vol ; Integration Vol ; } 
	  Integral { [ 1 ] ; // FIXME
	    In DomainInf_Mag ; Jacobian Vol ; Integration Vol ; } 
	}
      }
    }
  }
}

