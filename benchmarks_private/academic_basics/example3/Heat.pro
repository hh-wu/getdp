/* -----------------------
   File Heat.pro
----------------------- */

/*======================
  Geometrical Entities
======================*/

Group {
   // Boundary
   Gama0 = Region[ 1001 ];
   Gama1 = Region[ 1002 ];

   // The Domain
   Omega = Region[ 1005 ];
   
   // The Boundary And The Domain
   AllOmega = Region[{Omega,Gama0,Gama1}];
}

/*=====================
   Some Functions
=====================*/

Function {
   // Initial State
   InitialState[AllOmega] = 10*Exp[-25*((X[]+0.5)*(X[]+0.5)+(Y[]+0.5)*(Y[]+0.5))] - 5*Exp[-50*((X[]+0.3)*(X[]+0.3)+(Y[]+0.5)*(Y[]+0.5))] - 10*Exp[-45*((X[]-0.5)*(X[]-0.5)+(Y[]-0.5)*(Y[]-0.5))];

   // Control (= Heating on Gama1)
   u[] = 50*(1-Exp[-0.5*$Time]);

   // Time Discretization
   t0 = 0.;
   T = 2.;
   dt = 0.01;
   
   // Type of Scheme (See Crank-Nicolson on the manual)
   gamma = 0.5;
}

/*===============================
  Constraints and Initial State
===============================*/

Constraint {
   // Initial State
   { Name InitialData; Type Init;
      Case {
         { Region Omega; Value InitialState[]; }
      }
   }
   // Boundary control
   { Name Resistance; Type Assign;
      Case {
         { Region Gama1; Value 1.; TimeFunction u[]; }
      }
   }
   // Boundary Dirichlet Condition (Ice on Gama0)
   { Name Ice; Type Assign;
      Case {
         { Region Gama0; Value 0.; }
      }
   }
}

/*====================
  Functional Spaces
====================*/

FunctionSpace {
   { Name VhNeu; Type Form0;
      BasisFunction{
      { Name wn; NameOfCoef vn; Function BF_Node;
         Support AllOmega; Entity NodesOf[All];}
      }
      Constraint {
      { NameOfCoef vn; EntityType NodesOf;
         NameOfConstraint Resistance; }
      { NameOfCoef vn; EntityType NodesOf;
         NameOfConstraint InitialData; }
      }
   }
   { Name VhDir; Type Form0;
      BasisFunction{
      { Name wn; NameOfCoef vn; Function BF_Node;
         Support AllOmega; Entity NodesOf[All];}
      }
      Constraint {
      { NameOfCoef vn; EntityType NodesOf;
         NameOfConstraint Resistance; }
      { NameOfCoef vn; EntityType NodesOf;
         NameOfConstraint Ice; }
      { NameOfCoef vn; EntityType NodesOf;
         NameOfConstraint InitialData; }
      }
   }
}

/*====================
    Jacobian
====================*/

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

/*======================
   Integral Parameters
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

/*======================
  Weak formulations
======================*/

Formulation {
   { Name Heat; Type FemEquation;
      Quantity{
         { Name w; Type Local; NameOfSpace VhNeu;}
         { Name v; Type Local; NameOfSpace VhDir;}
      }

   Equation{
	// Without Ice, i.e. Neumann boundary condition on Gama0
      Galerkin{ DtDof [ Dof{w}, {w} ];
         In Omega; Jacobian JVol; Integration I1;}
       
      Galerkin{ [ Dof{Grad w}, {Grad w} ];
         In Omega; Jacobian JVol; Integration I1;}

	// With Ice, i.e. Dirichlet boundary condition on Gama0
      Galerkin{ DtDof [ Dof{v}, {v} ];
         In Omega; Jacobian JVol; Integration I1;}
       
      Galerkin{ [ Dof{Grad v}, {Grad v} ];
         In Omega; Jacobian JVol; Integration I1;}
         
    }
  }
}

/*======================
  Resolution
======================*/

Resolution {
   { Name HeatSolver;
      System{
         { Name SysHeat; NameOfFormulation Heat;}
      }
      Operation{
            // Initialisation
            InitSolution[SysHeat];
            // Computation on [t0,T]
            TimeLoopTheta[t0, T, dt, gamma ] {
            Generate[SysHeat]; Solve[SysHeat];
         }  
      }
   }
}

/*==============
Post Processing
==============*/

PostProcessing {
   { Name HeatSolver; NameOfFormulation Heat; NameOfSystem SysHeat;
      Quantity{
         { Name WithoutIce; Value {Local{[{w}]; In AllOmega; Jacobian JVol;}}}
         { Name WithIce; Value {Local{[{v}]; In AllOmega; Jacobian JVol;}}}
      }
   }
}

/*=============
Post Operation
=============*/

PostOperation {
   {Name Map_Omega; NameOfPostProcessing HeatSolver;
      Operation{
         Print[WithoutIce, OnElementsOf AllOmega, File "HeatOnOmegaWithoutIce.pos"];
         Print[WithIce, OnElementsOf AllOmega, File "HeatOnOmegaWithIce.pos"];
      }
   }
}

