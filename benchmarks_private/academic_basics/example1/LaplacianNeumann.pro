// File "LaplacianNeumann.pro"

// As in the .geo file, we include the file containing the numbering of the geometry.
Include "LaplacianNeumann.param";


// Group
//======
//We now build the "Groups", that is, the geometrical entities, the different domains of computation.
//Here we only need the interior of the open domain Omega
Group{
Omega = Region[{Omega}];
}

// Function
//=========
Function{
// Pi is a special value in GetDp (=3.1415...)
Coef = Pi;
// Definition of the source function f(x,y)
f[] = (1+2*Coef*Coef)*Cos[Coef*X[]]*Cos[Coef*Y[]];
}
/*
Remark: 
- the argument (as "x" and "y") are not writen between the bracket [].
Indeed, between the bracket is writen the domain of definition of the function.
- The argument "x" and "y" are here designed by the GetDP inner functions X[] and Y[], which give
respectively the x-coordinate and the y-coordinate of a considered point.
- To define a function globaly (i.e: not only on a subdomain), we write:
f[] = ...
- In our example, we could also have written
f[Omega] = (1+2*Coef*Coef)*Cos[Coef*X[]]*Cos[Coef*Y[]];
*/


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

/*
Remark: roughly speacking, we make use of...:
- Jacobian "Vol" as far as the integration domain is of same dimension than the problem (e.g: calculation in a 3D domain, in a 3D problem,
a 2D domain (surface) in a 2 problem, a 1D domain (line) in a 1D problem)
- Jacobian "Sur" when the domain of integration has one dimension less than the global problem (e.g:
calculation on a surface (2D) in a 3D problem, calculation on a line (1D) in a 2D problem).
- Jacobian "Lin" when the domain of integration has 2 dimensions less than the problem. That is,
for example, a calculation on a line (1D) in a 3D problem.
- Here, we just have define some Jacobian, you will see later that we just use the Jacobian "JVol"
*/

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


// There is no Constrain because of the Neumann boundary condition
// We go directly to the FuntionSpace


//FunctionSpace
//=============
FunctionSpace{
  { Name Vh; Type Form0;
    BasisFunction{
      {Name wn; NameOfCoef vn; Function BF_Node;
    Support Omega; Entity NodesOf[All];}
    }
  }
}

/*
Explanation: 
The space of approximation is called "Vh".
Its type is "Form0", that means "scalar".
The basis functions are called "wn", and the associated coefficients "vn".
In other words, a function "v" of "Vh" can be written as
v(x,y) = sum_{n} vn.wn(x,y)
The functions "wn" are nodale functions P1 ("BF_Node"), supported on the domain Omega ("Support Omega").
*/



//(Weak) Formulation
//==================

Formulation{
  {Name LaplacianNeumann; Type FemEquation;
// We decided to call the formulation "LaplacianNeumann".
// Its type is "FemEquation" ("Finite Element Method")
    Quantity{
      {Name u; Type Local; NameOfSpace Vh;}
    }
// Here, we introduce a quantity "u", which belongs to the function space Vh, defined above.
    Equation{
      Galerkin{ [Dof{Grad u}, {Grad u}];
        In Omega; Jacobian JVol; Integration I1;}

      Galerkin{ [  Dof{u}, {u}];
       In Omega; Jacobian JVol; Integration I1;}
     
      Galerkin{ [-f[], {u}];
        In Omega; Jacobian JVol; Integration I1;}
    }
  }
}
/*
The variationnal formulation is written between the acolades {}, after "Equation".
Let us first give some vocabulary:
- "Galerkin" : GetDP syntaxic word. This could be translated mathematicaly by "integration" (see below)
- Dof{u}: "Degree Of Freedom". This is used to specify that the quantity is the unknown.
			If "Dof" is not written, then "u" is seen as a test function and not as the unknown.
			(Be carreful, the unknown and the test functions has the same name in GetDP !
			The "Dof" is here to distinguish the unknown to the test-functions)

Now, let us detail the program written between the acolades {}, :
          Galerkin{ [Dof{Grad u}, {Grad u}];
          In Omega; Jacobian JVol; Integration Int;}
This could be translated mathematicaly by :
            Integration on "Omega" of Grad(u).Grad(v)
where "u" is the unknown and "v" a test function.
Note the use of the Jacobian JVol(2D problem and integration on a 2D domain).
Moreover the number of integrations point is given in "I1" (see above "Integration").
The total variationnal formulation can be read as :

search "Dof{u}" in V_h such that, for every "{u}" in V_h,
\int_{\Omega} Grad( Dof{u}) . Grad( {u}) d\Omega + \int_{\Omega} Dof{u}.{u} d\Omega - ...
 		... - \int_{\Omega} f.{u} d\Omega = 0
(this is exactly the weak formulation of our problem !)

Remarks:
- Between two "Galerkin", a positive sign "+" is implicitly written
- The sum of all integrals "Galerkin" is equal to 0 (do not forget the "minus" sign of the right hand side)
- Why do we use a volumic jacobian even in a 2D problem? The problem is a 2 dimensional problem and 
the integral is defined on a 2D domain (Omega). If the integral was writen on, e.g, the boundary, 
then the Jacobian "Jsur" would have been used.
*/


// Resolution (of the problem)
//============================

Resolution{
  {Name LaplacianNeumann;
// We chose the name LaplacianNeumann for the resolution
// Remark: in GetDP, every entity has a name. The same same can be used for different entities but of different kind, of course
// Here we chose the same name as the formulation, but this is just a choice, no obligation !
    System{
      {Name Syst; NameOfFormulation LaplacianNeumann;}
    }
// A system is linked to a weak formulation
// Here, we only have one weak formulation, which is "LaplacianNeumann"
    Operation{
      Generate[Syst]; Solve[Syst]; SaveSolution[Syst];
    }
/* When we launch GetDP, the program will ask the user to chose a Resolution.
When calling the Resolution "LaplacianNeumann", GetDP will...
- Generate the system
- Solve the system
- Save the solution
Note that GetDP respects the order of the operation !
*/
  }
}


//Post Processing
//===============

PostProcessing{
  {Name LaplacianNeumann; NameOfFormulation LaplacianNeumann;
    Quantity{
      {Name u; Value {Local{[{u}];In Omega;Jacobian JVol;}}}
    }
  }
}

/*
The name of the PostProcessing is LaplacianNeumann.
It call the weak formulation LaplacianNeumann, then take the solution "u" and compute it on all the domain Omega, by the operation:
    Value {Local{[{u}];In Carre; Jacobian JVol;}}}
This means that "u" is the interpolate of the solution "Dof{u}" computed in the weak formulation "LaplacianNeumann"

Remark: Again, we chose the same name, but this is just a choice, this has no influence on GetDP resolution.
*/

//Post Operation
//==============

PostOperation{
  {Name Map_u; NameOfPostProcessing LaplacianNeumann;
    Operation{
      Print[u, OnElementsOf Omega, File "u_Neumann.pos"];
    }
  }
}

/*
The only PostOperation we write is to display "u" introduced in the PostProcessing.
This PostOperation is called "Map_u".
When launching GetDP, it will ask the user to chose :
- the Resolution
- the PostOperation
*/
