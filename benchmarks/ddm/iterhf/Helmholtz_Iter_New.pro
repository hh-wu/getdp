
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

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  4 ; }
          { GeoElement Triangle ; NumberOfPoints  6 ; }
        }
      }
    }
  }
}

//////
For iSub In {0:Nbr_SubProblems}
//////

Function{ // get values for boundary condition

  If(!iSub) // Full problem (classic solution, for comparison purposes)
    s~{iSub}[] = -uinc[] ;
  EndIf
}

Constraint {

  { Name Dirichlet_u2~{iSub} ;
    Case {
      { Region Gama~{iSub} ; Value 0.; }
    }
  }

  { Name Dirichlet_a~{iSub} ;
    Case {
      //{ Region Gama~{iSub} ; Value ($Iteration <= 1)? -1.: 0; }
      { Region Gama~{iSub} ; Value 0; }
    }
  }

  { Name Dirichlet_phi_unwrap~{iSub} ;
    Case {
      // instead of using a small perturbation to regularize the
      // system, we could directy impose a Dirichlet condition on a
      // single boundary node. (We could do it with a pre-resolution
      // constraint with all the OSRC stuff inside.)
      { Region Epsilon~{iSub} ; Value 0. ; }
    }
  }

}

Group{
  TrGr~{iSub} = ElementsOf[ Omega~{iSub}, OnOneSideOf Gama~{iSub} ];
  TrGrPnt~{iSub} = ElementsOf[ {Gama~{iSub}}, OnOneSideOf Epsilon~{iSub} ];
}

FunctionSpace {
  { Name Hgrad_u~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support Region[ {Omega~{iSub}, Gama~{0}, Sigma} ] ; Entity NodesOf[ All ] ; }
    }
  }

  { Name Hgrad_lambda~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support Region[ Gama~{iSub} ] ; Entity NodesOf[ All ] ; }
    }
  }
  // { Name Hgrad_lambda_eps~{iSub} ; Type Form0 ;
  //   BasisFunction {
  //     { Name sn ; NameOfCoef un ; Function BF_Node ;
  //       Support Region[ Epsilon~{iSub} ] ; Entity NodesOf[ All ] ; }
  //   }
  // }

  { Name Hgrad_u_DirichletBC~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support #{Gama~{iSub},Epsilon~{iSub}} ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      // { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet_u~{iSub} ; } // removed this constraint and use Lagrange multipliers in formulation
    }
  }

  { Name Hgrad_u_from_a~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support #{Omega~{iSub}, Gama_0} ; Entity NodesOf[ All ] ; }
    }
   // Constraint {
   //    { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet_u2~{iSub} ; }
   //  }

  }

  { Name Hgrad_a_Dirichlet~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef an ; Function BF_Node ;
        // Support Region[ {Omega~{iSub},Gama~{iSub},Sigma} ] ; Entity NodesOf[ All ] ; }
        Support Region[ {Omega~{iSub},Gama_0,Sigma} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef an ; EntityType NodesOf ; NameOfConstraint Dirichlet_a~{iSub} ; }
    }
  }

  { Name Hgrad_a_Proj~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef an ; Function BF_Node ;
        // Support Region[ {TrGr~{iSub},Gama~{iSub}} ] ; Entity NodesOf[ All, Not Gama~{iSub}] ; }
        Support Region[ {TrGr~{iSub},Gama_0} ] ; Entity NodesOf[ All, Not Gama~{iSub}] ; }
      { Name snk ; NameOfCoef ank ; Function BF_Node ;
        Support Region[ {TrGr~{iSub},Gama~{iSub}} ] ; Entity NodesOf[ Gama~{iSub}] ; }
    }
    SubSpace {
      { Name a_skin ; NameOfBasisFunction snk ; }
    }
  }

  { Name Hgrad_phi_trace~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support Region[ { Gama~{iSub}, Epsilon~{iSub}} ] ; Entity NodesOf[ All, Not Epsilon~{iSub}] ; }
      { Name snk ; NameOfCoef unk ; Function BF_Node ;
        Support Region[ { Gama~{iSub}, Epsilon~{iSub}} ] ; Entity NodesOf[ Epsilon~{iSub} ] ; }
    }
    SubSpace {
      { Name phi_pnt ; NameOfBasisFunction snk ; }
    }
  }

  { Name Hgrad_phi_unwrap~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support Region[ {Gama~{iSub}, Epsilon~{iSub}} ] ; Entity NodesOf[ All, Not Epsilon~{iSub} ] ; }
      { Name snk ; NameOfCoef unk ; Function BF_Node ;
        Support Region[ {Epsilon~{iSub}} ] ; Entity NodesOf[ Epsilon~{iSub} ] ; }
    }
      SubSpace {
        { Name phi_pnt ; NameOfBasisFunction snk ; }
      }
      Constraint {
        { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet_phi_unwrap~{iSub} ; }
      }
  }

  { Name Hgrad_phi_extend~{iSub} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        // Support Region[ {Omega~{iSub},Sigma,Gama~{iSub}} ] ; Entity NodesOf[ All ] ; }
        Support Region[ {Omega~{iSub},Sigma,Gama_0} ] ; Entity NodesOf[ All ] ; }
    }
  }


}

Formulation {
  { Name Wave_Dirichlet~{iSub} ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace Hgrad_u~{iSub}; }
      { Name lambda ; Type Local ; NameOfSpace Hgrad_lambda~{iSub}; }
    }
    Equation {
      Galerkin { [ Dof{Grad u} , {Grad u} ] ;
                 In Omega~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k^2 * Dof{u} , {u} ] ;
                 In Omega~{iSub}; Jacobian JVol ; Integration I1 ; }

       Galerkin { [ Dof{lambda} , {u} ] ;
                    In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }
       Galerkin { [ Dof{u} , {lambda} ] ;
                    In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }

       If (iSub == 0)
       Galerkin { [ #10 ? -uinc[] : ComplexScalarField[XYZ[]]{iSub}, {lambda} ] ;
                    In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }
       EndIf
       If (iSub != 0)
       Galerkin { [ #10 ? uinc[] : ComplexScalarField[XYZ[]]{iSub}, {lambda} ] ;
                    In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }
       EndIf

      // Bayliss-Turkel
      Galerkin { [ - I[] * k * Dof{u} , {u} ] ;
               In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ alphaBT[] * Dof{u} , {u} ] ;
               In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ betaBT[] * Dof{d u} , {d u} ] ;
               In Sigma; Jacobian JSur ; Integration I1 ; }
    }
  }

  // Trivial formulation, added to copy the Field into function space (Q&D)
  { Name u_BC~{iSub} ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local ; NameOfSpace Hgrad_u_DirichletBC~{iSub}; }
    }
    Equation {
      Galerkin { [  Dof{u}, {u} ] ;
        In #{Gama~{iSub}, Epsilon~{iSub}}; Jacobian JSur ; Integration I1 ; }
      If (iSub == 0)
	Galerkin { [ uinc[], {u} ] ;
          In #{Gama~{iSub}, Epsilon~{iSub}}; Jacobian JSur ; Integration I1 ; }
      EndIf
      If (iSub != 0)
	Galerkin { [ #10 > 0 ? uinc[] : ComplexScalarField[XYZ[]]{iSub}, {u} ] ;
          In #{Gama~{iSub}, Epsilon~{iSub}}; Jacobian JSur ; Integration I1 ; }
      EndIf
    }
  }


  { Name Projection_phi_src~{iSub} ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local ; NameOfSpace Hgrad_u_DirichletBC~{iSub}; }
      { Name phi  ; Type Local ; NameOfSpace Hgrad_phi_trace~{iSub} ; }
    }
    Equation {
      Galerkin { [  Dof{phi}, {phi} ] ;
        In Epsilon~{iSub}; Jacobian JLin ; Integration I1 ; }
      // Galerkin { [ 0*Dof{u}, {phi} ] ; //*****
      //   In Epsilon~{iSub}; Jacobian JLin ; Integration I1 ; }
      Galerkin { [ ((-Atan2[Im[{u}],Re[{u}]]) / k), {phi} ] ;
        In Epsilon~{iSub}; Jacobian JLin ; Integration I1 ; }
    }
  }
  // extracts the unwrapped phase from u (just using complex log or
  // atan2 would produce a phase in [-pi,pi] with 2pi discontinuities)
  { Name Phase_Unwrap~{iSub} ; Type FemEquation ;
    Quantity {
      { Name u; Type Local ; NameOfSpace Hgrad_u_DirichletBC~{iSub}; }
      { Name phi_unwrap; Type Local ; NameOfSpace Hgrad_phi_unwrap~{iSub}; }
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi_trace~{iSub}[phi_pnt]; }
    }
    Equation {
      Galerkin { [  Dof{d phi_unwrap} , {d phi_unwrap} ] ;
                 In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }
      // Galerkin { [ 0*Dof{u}, {phi_unwrap} ] ; //***** Functional space completely fixed!!!
      //            In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }

      Galerkin { [ -1/k * Im[Conj[{u}]*{d u}]/ SquNorm[{u}], {d phi_unwrap} ] ;
                 In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }

       //===========
      Galerkin { [ {d phi}, {d phi_unwrap} ] ;
                 In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }
    }
  }

  { Name Phase_Extend~{iSub} ; Type FemEquation ;
    Quantity {
      { Name phi_extend; Type Local ; NameOfSpace Hgrad_phi_extend~{iSub}; }
      { Name phi_unwrap; Type Local ; NameOfSpace Hgrad_phi_unwrap~{iSub}; }
      { Name phi; Type Local ; NameOfSpace Hgrad_phi_trace~{iSub}[phi_pnt]; }
    }
    Equation {
      Galerkin { [  Dof{phi_extend} , {phi_extend} ] ;
	In #{Omega~{iSub}/*, Sigma*/}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ - normRminusR0~{iSub}[] , {phi_extend} ] ;
	In #{Omega~{iSub}/*, Sigma*/}; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ - {phi_unwrap}[ Project~{iSub}[], DIM-1],
		   {phi_extend} ] ;
	In #{Omega~{iSub}/*, Sigma*/}; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ - {phi}[ Project~{iSub}[], DIM-1],
		   {phi_extend} ] ;
	In #{Omega~{iSub}/*, Sigma*/}; Jacobian JVol ; Integration I1 ; }

    }
  }

  { Name Transport_Dirichlet_Numeric~{iSub} ; Type FemEquation ;
    Quantity {
      { Name phi_unwrap; Type Local ; NameOfSpace Hgrad_phi_unwrap~{iSub}; }
      { Name phi_extend; Type Local ; NameOfSpace Hgrad_phi_extend~{iSub}; }
      { Name a; Type Local ; NameOfSpace Hgrad_a_Dirichlet~{iSub}; }

      { Name u ; Type Local ; NameOfSpace Hgrad_u_DirichletBC~{iSub}; }
      { Name a_proj ; Type Local ; NameOfSpace Hgrad_a_Proj~{iSub}[a_skin]; }

      { Name phi; Type Local ; NameOfSpace Hgrad_phi_trace~{iSub}[phi_pnt]; }
    }

    Equation {
      Galerkin { [ Dof{Grad a} , {Grad a} ] ;
                 In Omega~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ I[] * k * {Grad phi_extend} * Dof{a} , {Grad a} ] ;
                 In Omega~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ - I[] * k * Conj[{Grad phi_extend}] * Dof{Grad a} , {a} ] ;
                 In Omega~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ k^2 * (SquNorm[{Grad phi_extend}]-1) * Dof{a} , {a} ] ;
                 In Omega~{iSub}; Jacobian JVol ; Integration I1 ; }

      // Bayliss-Turkel
      Galerkin { [ - I[] * k * Dof{a} , {a} ] ;
                 In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ alphaBT[] * Dof{a} , {a} ] ;
                 In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ betaBT[] * Dof{d a} , {d a} ] ;
                 In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ betaBT[] * I[] * k * Dof{a} * {Grad phi_extend} , {d a} ] ;
                 In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ - betaBT[] * I[] * k * Dof{d a} * Conj[{Grad phi_extend}] , {a} ] ;
                 In Sigma; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ betaBT[] * k^2 * SquNorm[{Grad phi_extend}] * Dof{a} , {a} ] ;
                 In Sigma; Jacobian JSur ; Integration I1 ; }
      //============
      // Galerkin { [ 0*Dof{u}, {a_proj} ] ;//***** Functional space completely fixed!!!
      //            In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }

      Galerkin { [ Dof{a_proj} , {a_proj} ] ;
                 In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ {u}/Complex[Cos[k*{phi_extend}], Sin[k*{phi_extend}]], {a_proj} ] ;
                 In Gama~{iSub}; Jacobian JSur ; Integration I1 ; }

      Galerkin { [ -Dof{Grad a_proj} , {Grad a} ] ;
                 In TrGr~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -I[] * k * {Grad phi_extend} * Dof{a_proj} , {Grad a} ] ;
                 In TrGr~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [  I[] * k * Conj[{Grad phi_extend}] * Dof{Grad a_proj} , {a} ] ;
                 In TrGr~{iSub}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k^2 * (SquNorm[{Grad phi_extend}]-1) * Dof{a_proj} , {a} ] ;
                 In TrGr~{iSub}; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name u_from_a~{iSub} ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local ; NameOfSpace Hgrad_u_from_a~{iSub}; }
      { Name a  ; Type Local  ; NameOfSpace Hgrad_a_Dirichlet~{iSub} ; }
      { Name a_proj  ; Type Local  ; NameOfSpace Hgrad_a_Proj~{iSub}[a_skin] ; }
      { Name phi_extend  ; Type Local  ; NameOfSpace Hgrad_phi_extend~{iSub} ;}
    }
    Equation {
      Galerkin { [ Dof{u} , {u} ] ;
                 In Omega~{iSub} ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ - {a}*Complex[Cos[k*{phi_extend}], Sin[k*{phi_extend}]], {u} ] ;
                 In Omega~{iSub} ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [  {a_proj}*Complex[Cos[k*{phi_extend}], Sin[k*{phi_extend}]], {u} ] ;
                 In TrGr~{iSub} ; Jacobian JVol ; Integration I1 ; }
    }
  }

}


Resolution {

  { Name Wave_Dirichlet~{iSub} ;
    System {
      { Name A ; NameOfFormulation Wave_Dirichlet~{iSub} ; Type Complex;  NameOfMesh myMeshForFull;}
    }
    Operation {
      If (iSub == 0)
	Evaluate[1 #10];
      EndIf


      Generate[A] ; Solve[A] ; SaveSolution[A] ;
      // SaveSolutionWithEntityNum[A, NodesOf[Gama~{0}]];
      PostOperation[u_0];
    }
  }


  { Name Save_DirichletBC~{iSub} ;
    System {
      { Name A ; NameOfFormulation Wave_Dirichlet~{iSub} ; Type Complex; }
    }
    Operation {
      InitSolution[A] ;
      SaveSolutionWithEntityNum[A, NodesOf[Gama~{0}] , 1 ];
    }
  }

  { Name Transport_Dirichlet_Numeric~{iSub} ;
    System {
      { Name B ; NameOfFormulation Projection_phi_src~{iSub} ; Type Complex; }
      { Name C ; NameOfFormulation Phase_Unwrap~{iSub} ; Type Complex; }
      { Name D ; NameOfFormulation Phase_Extend~{iSub} ; Type Complex; }
      { Name E ; NameOfFormulation Transport_Dirichlet_Numeric~{iSub} ; Type Complex; }
      { Name F ; NameOfFormulation u_from_a~{iSub} ; Type Complex; }
    }
    Operation {
      Generate[B] ; Solve[B] ; SaveSolution[B] ;
      Generate[C] ; Solve[C] ; SaveSolution[C] ;
      Generate[D] ; Solve[D] ; SaveSolution[D] ;
      Generate[E] ; Solve[E] ; SaveSolution[E] ;
      Generate[F] ; Solve[F] ; SaveSolution[F] ; SaveSolutionWithEntityNum[F, NodesOf[Gama~{0}]];
    }
  }

}

PostProcessing {
 { Name Transport_Dirichlet_Numeric~{iSub} ; NameOfFormulation Transport_Dirichlet_Numeric~{iSub} ;
    Quantity {
      { Name a ; Value {
          Term { [ {a} ] ; In Omega~{iSub}; Jacobian JVol ; }
          Term { [ -{a_proj} ] ; In TrGr~{iSub}; Jacobian JVol ; }
        } }
      { Name phi_unwrap ; Value {
          Local { [ {phi_unwrap} ] ; In Gama~{iSub}; Jacobian JSur ; }
          Local { [ {phi} ] ; In TrGrPnt~{iSub}; Jacobian JSur ; }
        } }
      { Name phi_src ; Value {
          Local { [ {phi} ] ; In TrGrPnt~{iSub}; Jacobian JSur ; }
        } }
      { Name phi_extend ; Value { Local { [ {phi_extend} ] ; In Omega~{iSub}; Jacobian JVol ; } } }
      { Name u_from_a ;
        Value {
          Term { [ {a} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In Omega~{iSub}; Jacobian JVol ; }
          Term { [ -{a_proj} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In TrGr~{iSub}; Jacobian JVol ; }
        } }
    }
  }

 { Name Wave_Dirichlet~{iSub} ; NameOfFormulation Wave_Dirichlet~{iSub} ;
    PostQuantity {
      { Name u ;
        Value { Term { [ {u} ] ; In Omega~{iSub}; Jacobian JVol ; } }
      }
      { Name u_trace ;
        Value { Term { [ {u} ] ; In Gama~{0}; Jacobian JSur ; } }
      }
      { Name combine ;
        Value {
          For jj In {1:Nbr_SubProblems}
            If (jj != iSub)
              Term { [ ComplexScalarField[XYZ[]]{100+jj} ] ; In Gama~{0}; Jacobian JSur ; }
            EndIf
          EndFor
        }
      }
    }
  }

 { Name Wave_Dirichlet_A~{iSub} ; NameOfFormulation u_from_a~{iSub} ;
    PostQuantity {
      { Name u_A ;
        Value { Term { [ {u} ] ; In Omega~{iSub}; Jacobian JVol ; } }
      }
      { Name u_trace_A ;
        Value { Term { [ {u} ] ; In Gama~{0}; Jacobian JSur ; } }
      }
      { Name combine_A ;
        Value {
          For jj In {1:Nbr_SubProblems}
            If (jj != iSub)
              Term { [ ComplexScalarField[XYZ[]]{100+jj} ] ; In Gama~{0}; Jacobian JSur ; }
            EndIf
          EndFor
        }
      }
    }
  }
 { Name Wave_Transport~{iSub} ; NameOfFormulation Transport_Dirichlet_Numeric~{iSub} ;
    PostQuantity {
      { Name u_transp_A ;
 	Value{
          // Term { [ {a} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In Omega~{iSub}; Jacobian JVol ; }
          // Term { [ -{a_proj} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In TrGr~{iSub}; Jacobian JVol ; }
          Term { [ {a} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In #{Omega~{iSub}, Gama_0, Sigma}; Jacobian JVol ; }
          Term { [ -{a_proj} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In #{TrGr~{iSub}, Gama_0, Sigma}; Jacobian JVol ; }
 	}
      }
      // { Name u_trace_transp_A ;
      // 	Value{
      //     // Term { [ {a} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In Gama_0; Jacobian JSur ; }
      //     // Term { [ -{a_proj} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In Gama_0; Jacobian JSur ; }
      //     Term { [ {a} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In #{Omega~{iSub}, Gama_0}; Jacobian JVol ; }
      //     Term { [ -{a_proj} * Complex[ Cos[k*{phi_extend}], Sin[k*{phi_extend}] ] ] ; In #{TrGr~{iSub}, Gama_0}; Jacobian JVol ; }
      // 	}
      // }
      { Name combine_A ;
        Value {
          For jj In {1:Nbr_SubProblems}
            If (jj != iSub)
              // Term { [ ComplexScalarField[XYZ[]]{100+jj} ] ; In Gama~{0}; Jacobian JSur ; }
              Term { [ ComplexScalarField[XYZ[]]{100+jj} ] ; In Gama~{iSub}; Jacobian JSur ; } // data will be used only on Gama~{iSub}
            EndIf
          EndFor
        }
      }
    //   { Name combine_A_Fw ;
    //     Value {
    // 	  Term { [ ComplexScalarField[XYZ[]]{iSub} ] ; In Gama~{iSub}; Jacobian JSur ; }
    //       // For jj In {1:Nbr_SubProblems}
    //       For jj In {1:iSub}
    //         // If (jj != iSub)
    //           Term { [ ComplexScalarField[XYZ[]]{100+jj} ] ; In Gama~{iSub}; Jacobian JSur ; } // data will be used only on Gama~{iSub}
    //         // EndIf
    //       EndFor
    //     }
    //   }
    // }
      For jSub In {1:Nbr_SubProblems}
      { Name combine_A_Fw~{jSub} ;
        Value {
	  Term { [ ComplexScalarField[XYZ[]]{iSub} ] ; In Gama~{iSub}; Jacobian JSur ; }
            // If (jSub < iSub)
              Term { [ ComplexScalarField[XYZ[]]{100+jSub} ] ; In Gama~{iSub}; Jacobian JSur ; } //data will be used only on Gama~{iSub}
            // EndIf
        }
      }
      EndFor
    }
  }


}

fileExt = Str[ Sprintf("%g", iSub) ]; // Total problem

PostOperation {
  { Name u~{iSub} ; NameOfPostProcessing Wave_Dirichlet~{iSub};
    Operation {
      // Print[ u, OnElementsOf #{Omega~{iSub},-FilledHole~{iSub}, -Sigma}, File StrCat[ StrCat["u", fileExt], ".pos"] ] ;
      If (iSub > 0)
	Print[ u, OnElementsOf #{Omega~{iSub},-FilledHole~{iSub}, -Sigma}, File StrCat[ StrCat["u", fileExt], ".pos"] ] ;
      EndIf
      If (iSub == 0)
	Print[ u, OnElementsOf #{Omega~{iSub},-FilledHole~{iSub}, -Sigma}, File myFullSolFname ] ;
      EndIf
    }
  }
  { Name u_A~{iSub} ; NameOfPostProcessing Wave_Dirichlet_A~{iSub};
    Operation {
      Print[ u_A, OnElementsOf #{Omega~{iSub},-FilledHole~{iSub}}, File StrCat[ StrCat["u", fileExt], ".pos"] ] ;
    }
  }
  { Name u_A2~{iSub} ; NameOfPostProcessing Wave_Transport~{iSub};
    Operation {
      Print[ u_transp_A, OnElementsOf #{Omega~{iSub},-FilledHole~{iSub}}, File StrCat[ StrCat["u", fileExt], ".pos"] ] ;
    }
  }
  { Name u_trace~{iSub} ; NameOfPostProcessing Wave_Dirichlet~{iSub};
    Operation {
      Print[ u_trace, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*, File Sprintf["u_trace%g.pos", iSub]*/] ;
    }
  }
  { Name u_trace_A~{iSub} ; NameOfPostProcessing Wave_Dirichlet_A~{iSub};
    Operation {
      Print[ u_trace_A, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*, File Sprintf["u_trace%g.pos", iSub]*/] ;
    }
  }
  { Name u_trace_A2~{iSub} ; NameOfPostProcessing Wave_Transport~{iSub};
    Operation {
      // Print[ u_trace_transp_A, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*, File Sprintf["u_trace_transp%g.pos", iSub]*/] ;
      Print[ u_transp_A, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*, File Sprintf["u_trace_transp%g.pos", iSub]*/] ;
      Print[ u_transp_A, OnElementsOf Region[Gama~{iSub}], StoreInField 100+iSub/*, File Sprintf["u_trace_transp%g.pos", iSub]*/] ; // For preconditioner -- TEST
    }
  }
  { Name u_trace_other~{iSub} ; NameOfPostProcessing Wave_Dirichlet~{iSub};
    Operation {
      Print[ u_trace, OnElementsOf Region[{Gama~{0},-Gama~{iSub}}], StoreInField 100+iSub/*,  File Sprintf["u_trace_other%g.pos", iSub]*/ ] ;
    }
  }
  { Name u_trace_other_A~{iSub} ; NameOfPostProcessing Wave_Dirichlet_A~{iSub};
    Operation {
      Print[ u_trace_A, OnElementsOf Region[{Gama~{0},-Gama~{iSub}}], StoreInField 100+iSub/*,  File Sprintf["u_trace_other%g.pos", iSub]*/ ] ;
    }
  }
  { Name u_trace_other_A2~{iSub} ; NameOfPostProcessing Wave_Transport~{iSub};
    Operation {
      // Print[ u_trace_transp_A, OnElementsOf Region[{Gama~{0},-Gama~{iSub}}], StoreInField 100+iSub/*,  File Sprintf["u_trace_other%g.pos", iSub]*/ ] ;
      Print[ u_transp_A, OnElementsOf Region[{Gama~{0},-Gama~{iSub}}], StoreInField 100+iSub/*,  File Sprintf["u_trace_other%g.pos", iSub]*/ ] ;
    }
  }
  { Name combine~{iSub} ; NameOfPostProcessing Wave_Dirichlet~{iSub};
    Operation {
      Print[ combine, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*,  File Sprintf["combine%g.pos", iSub]*/] ;
    }
  }
  { Name combine_A~{iSub} ; NameOfPostProcessing Wave_Dirichlet_A~{iSub};
    Operation {
      Print[ combine_A, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*,  File Sprintf["combine%g.pos", iSub]*/] ;
    }
  }
  { Name combine_A2~{iSub} ; NameOfPostProcessing Wave_Transport~{iSub};
    Operation {
      Print[ combine_A, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*,  File Sprintf["combine%g.pos", iSub]*/] ;
    }
  }

  //////////////////////////////////////
  For jSub In {1:Nbr_SubProblems}
  { Name combine_A2_Forward~{iSub}~{jSub} ; NameOfPostProcessing Wave_Transport~{iSub};
    Operation {
      Print[ combine_A_Fw~{jSub}, OnElementsOf Region[Gama~{iSub}], StoreInField iSub/*,  File Sprintf["combine%g.pos", iSub]*/] ;
    }
  }
  EndFor
  //////////////////////////////////////

  { Name a~{iSub} ; NameOfPostProcessing Transport_Dirichlet_Numeric~{iSub};
    Operation {
      Print[ a, OnElementsOf #{Omega~{iSub}, -Sigma,-FilledHole~{iSub}},
             File StrCat[ StrCat["a", fileExt], ".pos"] ] ;
      Print[ phi_extend, OnElementsOf #{Omega~{iSub}, -Sigma, -FilledHole~{iSub}},
             File StrCat[ StrCat["phi_extend", fileExt], ".pos"], Depth 1] ;
      Print[ u_from_a, OnElementsOf #{Omega~{iSub}, -Sigma,-FilledHole~{iSub}},
             File StrCat[ StrCat["u_from_a", fileExt], ".pos"]] ;
      //   Print[ phi_unwrap, OnElementsOf #{Gama~{iSub}},
      //       File StrCat[ StrCat["phi_unwrap", fileExt], ".pos"], Depth 1] ;
      //  Print[ phi_src, OnElementsOf #{Gama~{iSub}},
      //       File StrCat[ StrCat["phi_src", fileExt], ".pos"], Depth 1] ;
    }
  }
}

//////
EndFor
//////


Resolution {

  { Name Iterhf_Wave_Dirichlet ;
    System {
     For iSub In {1:Nbr_SubProblems}
       { Name A~{iSub} ; NameOfFormulation Wave_Dirichlet~{iSub} ; Type Complex; }
     EndFor
   }
    Operation {

      Evaluate[ 1 #10 ];
      For iSub In {1:Nbr_SubProblems}
        Generate[A~{iSub}];
        Solve[A~{iSub}];
        PostOperation[u_trace~{iSub}]; // N.B.: Quite costly to solve problems just to take the trace of the Dirichlet data...
        // PostOperation[u~{iSub}];
      EndFor

      Evaluate[ 0 #10 ];

      IterativeLinearSolver["I-A", "gmres", solverTol, 100, 100, {1:Nbr_SubProblems}, {}, {}]
      {
        For iSub In {1:Nbr_SubProblems}
      	  GenerateRHSGroup[A~{iSub}, Gama~{iSub}];
          SolveAgain[A~{iSub}];
          PostOperation[u_trace_other~{iSub}];
        EndFor
        For iSub In {1:Nbr_SubProblems}
          PostOperation[combine~{iSub}];
      	EndFor
      }
      { /* This preconditioner does nothing */ }

      For iSub In {1:Nbr_SubProblems}
        GenerateRHSGroup[A~{iSub}, Gama~{iSub}];
        SolveAgain[A~{iSub}];
        PostOperation[u~{iSub}];
      EndFor

    }
  }

  { Name Iterhf_Transport_Dirichlet_Numeric ;
    System {
     For iSub In {1:Nbr_SubProblems}
       { Name A~{iSub} ; NameOfFormulation u_BC~{iSub} ; Type Complex; }
       { Name B~{iSub} ; NameOfFormulation Projection_phi_src~{iSub} ; Type Complex; }
       { Name C~{iSub} ; NameOfFormulation Phase_Unwrap~{iSub} ; Type Complex; }
       { Name D~{iSub} ; NameOfFormulation Phase_Extend~{iSub} ; Type Complex; }
       { Name E~{iSub} ; NameOfFormulation Transport_Dirichlet_Numeric~{iSub} ; Type Complex; }
       { Name F~{iSub} ; NameOfFormulation u_from_a~{iSub} ; Type Complex; }
     EndFor
   }
    Operation {

      Evaluate[ 1 #10 ];
      For iSub In {1:Nbr_SubProblems}
        // Generate[A~{iSub}];
        // Solve[A~{iSub}];
        Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
        Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
	Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
	Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
	Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
	Generate[F~{iSub}] ; Solve[F~{iSub}] ; SaveSolution[F~{iSub}] ;
        // PostOperation[u_trace_A~{iSub}];
        PostOperation[u_trace_A~{iSub}];
        // PostOperation[u_A~{iSub}];
        // PostOperation[u_A2~{iSub}];
      EndFor

      Evaluate[ 0 #10 ];

      IterativeLinearSolver["I-A", "gmres", solverTol, 100, 100, {1:Nbr_SubProblems}, {}, {}]
      {
        For iSub In {1:Nbr_SubProblems}
      	  // GenerateRHSGroup[A~{iSub}, Gama~{iSub}];
        Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
        Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
      	Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
      	Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
      	Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
      	Generate[F~{iSub}] ; Solve[F~{iSub}] ; SaveSolution[F~{iSub}] ;
          PostOperation[u_trace_other_A~{iSub}];
        EndFor
        For iSub In {1:Nbr_SubProblems}
          PostOperation[combine_A~{iSub}];
      	EndFor
      }
      { /* This preconditioner does nothing */ }

      For iSub In {1:Nbr_SubProblems}
        // GenerateRHSGroup[A~{iSub}, Gama~{iSub}];
        // SolveAgain[A~{iSub}];
        Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
        Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
      	Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
      	Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
      	Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
      	Generate[F~{iSub}] ; Solve[F~{iSub}] ; SaveSolution[F~{iSub}] ;
        PostOperation[u_A~{iSub}];
      EndFor

    }
  }

  { Name Iterhf_Transport_Dirichlet_Numeric_PP ;
    System {
     For iSub In {1:Nbr_SubProblems}
       { Name A~{iSub} ; NameOfFormulation u_BC~{iSub} ; Type Complex; }
       { Name B~{iSub} ; NameOfFormulation Projection_phi_src~{iSub} ; Type Complex; }
       { Name C~{iSub} ; NameOfFormulation Phase_Unwrap~{iSub} ; Type Complex; }
       { Name D~{iSub} ; NameOfFormulation Phase_Extend~{iSub} ; Type Complex; }
       { Name E~{iSub} ; NameOfFormulation Transport_Dirichlet_Numeric~{iSub} ; Type Complex; }
       // { Name F~{iSub} ; NameOfFormulation u_from_a~{iSub} ; Type Complex; }
     EndFor
   }
    Operation {

      Evaluate[ 1 #10 ];
      For iSub In {1:Nbr_SubProblems}
        // Generate[A~{iSub}];
        // Solve[A~{iSub}];
        Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
        Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
	Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
	Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
	Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
	// Generate[F~{iSub}] ; Solve[F~{iSub}] ; SaveSolution[F~{iSub}] ;
        PostOperation[u_trace_A2~{iSub}];
      EndFor

      Evaluate[ 0 #10 ];

      IterativeLinearSolver["I-A", "gmres", solverTol, MAXIT, RESTART, {1:Nbr_SubProblems}, {}, {}]
      {
        For iSub In {1:Nbr_SubProblems}
      	  // GenerateRHSGroup[A~{iSub}, Gama~{iSub}];
          Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
	  If (RENEW_PHASE)
	    Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
      	    Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
	    Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
	  EndIf
      	  // Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
	    GenerateRHSGroup[E~{iSub}, Gama~{iSub}];
	    SolveAgain[E~{iSub}];
	  // Generate[F~{iSub}] ; Solve[F~{iSub}] ; SaveSolution[F~{iSub}] ;
          PostOperation[u_trace_other_A2~{iSub}];
        EndFor
        For iSub In {1:Nbr_SubProblems}
          PostOperation[combine_A2~{iSub}];
      	EndFor
      }
      {
	If (SWEEP_FORWARD)
	  // Gauss-Seidel preconditioner (forward sweep-like)
	  For iSub In {1:Nbr_SubProblems-1}
            Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
	    If (RENEW_PHASE)
	      Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
      	      Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
	      Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
	    EndIf
	    // Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
	    GenerateRHSGroup[E~{iSub}, Gama~{iSub}];
	    SolveAgain[E~{iSub}];

            PostOperation[u_trace_other_A2~{iSub}];

	    For jSub In {iSub+1:Nbr_SubProblems}
	    PostOperation[combine_A2_Forward~{jSub}~{iSub}];
	    EndFor
	  EndFor
	EndIf

	If (SWEEP_BACKWARD)
	  // reversed Gauss-Seidel preconditioner (backward sweep-like)
	  For iSub In {Nbr_SubProblems:2:-1}
            Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
	    If (RENEW_PHASE)
	      Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
      	      Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
	      Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
	    EndIf
	    // Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
	    GenerateRHSGroup[E~{iSub}, Gama~{iSub}];
	    SolveAgain[E~{iSub}];
            PostOperation[u_trace_other_A2~{iSub}];

	    For jSub In {iSub-1:1:-1}
	      PostOperation[combine_A2_Forward~{jSub}~{iSub}];
	    EndFor
	  EndFor
	EndIf
      }

      For iSub In {1:Nbr_SubProblems}
        // GenerateRHSGroup[A~{iSub}, Gama~{iSub}];
        // SolveAgain[A~{iSub}];
        Generate[A~{iSub}] ; Solve[A~{iSub}] ; SaveSolution[A~{iSub}] ;
	If (RENEW_PHASE)
	  Generate[B~{iSub}] ; Solve[B~{iSub}] ; SaveSolution[B~{iSub}] ;
      	  Generate[C~{iSub}] ; Solve[C~{iSub}] ; SaveSolution[C~{iSub}] ;
	  Generate[D~{iSub}] ; Solve[D~{iSub}] ; SaveSolution[D~{iSub}] ;
	EndIf
      	// Generate[E~{iSub}] ; Solve[E~{iSub}] ; SaveSolution[E~{iSub}] ;
	GenerateRHSGroup[E~{iSub}, Gama~{iSub}];
	SolveAgain[E~{iSub}];
      	// Generate[F~{iSub}] ; Solve[F~{iSub}] ; SaveSolution[F~{iSub}] ;
        PostOperation[u_A2~{iSub}];
	PostOperation[a~{iSub}];
      EndFor

    }
  }
}

