// File "LaplacianDirichlet.pro"
// This file is similar to LaplacianNeumann.pro
// Only changes are detailed.

// we import the indices of Gamma and Omega
Include "LaplacianDirichlet.param";

// Group
//======
// We have 2 Groups : Omega and Gamma (boundary)
Group{
Omega = Region[{Omega}];
Gamma = Region[{Gamma}];
}
//Again note that "Gamma" is a syntaxic word of GetDP
// That is why we write here "Gamma" and not "Gamma".
// (not a mistake from the author :-))

// Function
//=========
Function{
// Pi is a special value in GetDp (=3.1415...)
Coef = Pi;
// Definition of the function f(x,y)
f[] = -(1+2*Coef*Coef)*Sin[Coef*X[]]*Sin[Coef*Y[]];
// Here f exist on Omega AND Gamma. As a consequence, we have to let "f" lives everywhere,
// and we let the bracket [] empty.
}



//Jacobian
//========
Jacobian {
  { Name JVol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name JSur ;
    Case {
      { Region All ; Jacobian Sur ; }
    }
  }
  { Name JLin ;
    Case {
      { Region All ; Jacobian Lin ; }
    }
  }
}

//Integration (parameters)
//=======================
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

//Contraint
//=============
// This part is new, compare to LaplacianDirichlet.pro.
Constraint{
	{Name DirichletBC; Type Assign;
	Case{
        {Region Gamma;  Value 0; }
		}
	}
}
/*
The Dirichlet Boundary Condition is here called "DirichletBC.
"Assign": type means that it is a Dirichlet type condition
"Region": domain where the condition is applied.
"Value": value assigned (here 0).
*/



//FunctionSpace
//=============
FunctionSpace{
  { Name Vh; Type Form0;
    BasisFunction{
      {Name wn; NameOfCoef vn; Function BF_Node;
    Support Omega; Entity NodesOf[All];}
    }
    // Contrary to Neumann case, we had here the constraint :
	Constraint{
	{NameOfCoef vn; EntityType NodesOf;
	 NameOfConstraint DirichletBC;}
		}
  }
}

/* On the constraint: 
- "NameOfCoef" : a constraint is applied to specific coefficients, here "vn" (in our example, there are the only coefficients
because of functions are P1)
- "Entitytype" : The constraint is applied on the nodes (e.g : not on the edge)
- "NameOfConstraint" : Last (but not least), we have to specify which Constraint is called.

With that definition, every function u (even the test-functions) of V_h satisfy the Dirichlet Boundary Condition:
		u = 0 on Gamma.
In other words, this spaces approximate the Sobolev space H^1_0(Omega).
*/


//(Weak) Formulation
//==================

Formulation{
  {Name LaplacianDirichlet; Type FemEquation;
    Quantity{
      {Name u; Type Local; NameOfSpace Vh;}
    }
    Equation{
      Galerkin{ [Dof{Grad u}, {Grad u}];
        In Omega; Jacobian JVol; Integration I1;}

      Galerkin{ [  Dof{u}, {u}];
       In Omega; Jacobian JVol; Integration I1;}

      Galerkin{ [ -f[], {u}];
       In Omega; Jacobian JVol; Integration I1;}
       
    }
  }
}
/*
The variationnal formulation can be read as :

search "Dof{u}" in V_h such that, for every "{u}" in V_h,
\int_{\Omega} Grad( Dof{u}) . Grad( {u}) d\Omega + \int_{\Omega} Dof{u}.{u} d\Omega  = 0

The Dirichlet Boundary Condition is contained in the function space V_h !
*/


// Resolution (of the problem)
//============================

Resolution{
// nothing change ... (except the name :-)
  {Name LaplacianDirichlet;
    System{
      {Name Syst; NameOfFormulation LaplacianDirichlet;}
    }
    Operation{
      Generate[Syst]; Solve[Syst]; SaveSolution[Syst];
    }
  }
}


//Post Processing
//===============

PostProcessing{
  {Name LaplacianDirichlet; NameOfFormulation LaplacianDirichlet;
    Quantity{
      {Name u; Value {Local{[{u}];In Omega;Jacobian JVol;}}}
      // We also ask the computation of the absolute value of "u" and the function "f".
      //These new variable are called respectively "AbsU" and "f"
      {Name AbsU; Value {Local{[Norm[{u}]];In Omega;Jacobian JVol;}}}
      {Name f; Value {Local{[f[]];In Omega;Jacobian JVol;}}}
    }
  }
}

//Post Operation
//==============

PostOperation{
  {Name Map_u; NameOfPostProcessing LaplacianDirichlet;
    Operation{
      Print[u, OnElementsOf Omega, File "u_Dirichlet.pos"];
      // Plot of Abs(u) and f
      Print[AbsU, OnElementsOf Omega, File "u_Abs_Dirichlet.pos"];
      Print[f, OnElementsOf Omega, File "f.pos"];
    }
  }
}
