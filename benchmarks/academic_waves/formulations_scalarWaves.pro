//==============================================================================
// GetDP code for simulations with SCALAR WAVES
//  * Scalar-wave equation 1D/2D/3D
//    Nodal finite-elements (Form0 for p)
//  * Scalar-wave system 1D/2D (string/membrane analogy)
//    Nodal finite-elements (Form0 for p and v)
//  * Scalar-wave system 2D/3D (Euler's equations)
//    Raviart-Thomas finite-elements (Form0 for p and Form2P/Form2 for u)
//==============================================================================

Function {
  DefineFunction[ fNeumann, alphaBT, betaBT, pmlScal, pmlTens ] ;
  DefineVariable[ DIM, ORDER ] ;
  DefineVariable[ dt, beta, gamma, theta, tf ] ;
}

Group{
  DefineGroup[ Omega, OmegaPml, GammaD, GammaN, GammaR, GammaBT ] ;
  SurAll = Region[{GammaD, GammaN, GammaR, GammaBT}] ;
  VolAll = Region[{Omega, OmegaPml}] ;
  TotAll = Region[{VolAll, SurAll}] ;
}

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
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints 1 ; }
          { GeoElement Line ; NumberOfPoints 4 ; }
          { GeoElement Triangle ; NumberOfPoints 6 ; }
          { GeoElement Quadrangle ; NumberOfPoints 7 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 15 ; }
          { GeoElement Hexahedron ; NumberOfPoints 34 ; }
        }
      }
    }
  }
}

FunctionSpace {
  { Name pSpace ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support TotAll ; Entity NodesOf[All] ; }
      If (ORDER==2)
      { Name sn2 ; NameOfCoef un2 ; Function BF_Node_2E ;
        Support TotAll ; Entity EdgesOf[All] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint pConstraint ; }
      If (ORDER==2)
      { NameOfCoef un2 ; EntityType EdgesOf ; NameOfConstraint pConstraint2 ; }
      EndIf
    }
  }
  { Name vSpace ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vnA ; Function BF_Node ;
        Support TotAll ; Entity NodesOf[All] ; }
    }
    Constraint {
      { NameOfCoef vnA ; EntityType NodesOf ; NameOfConstraint uConstraint ; }
    }
  }
  If (DIM==2)
  { Name uSpace ; Type Form2P ;
    BasisFunction {
      { Name se ; NameOfCoef he ; Function BF_PerpendicularFacet ;
        Support TotAll ; Entity EdgesOf[All] ; }
    }
    Constraint {
      { NameOfCoef he ; EntityType EdgesOf ; NameOfConstraint uConstraint ; }
    }
  }
  EndIf
  If (DIM==3)
  { Name uSpace ; Type Form2 ;
    BasisFunction {
      { Name se ; NameOfCoef he ; Function BF_Facet ;
        Support TotAll ; Entity FacetsOf[All] ; }
    }
    Constraint {
      { NameOfCoef he ; EntityType FacetsOf ; NameOfConstraint uConstraint ; }
    }
  }
  EndIf
}

Formulation {
  { Name WaveEquation_Form ; Type FemEquation ;
    Quantity { 
      { Name p ; Type Local ; NameOfSpace pSpace ; }
    }
    Equation {
      Galerkin { DtDtDof [ Dof{p} , {p} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      Galerkin { [ Dof{d p} , {d p} ] ;
                 In Omega ; Jacobian JVol ; Integration I1 ; }
      
      // BC: Neumann
      Galerkin { [ -fNeumann[] , {p} ] ;  
                 In GammaN ; Jacobian JSur ; Integration I1 ; }
      
      // BC: Radiation
      // Galerkin { [ -I[]*k * Dof{p} , {p} ] ;  
      Galerkin { DtDof [ -Dof{p} , {p} ] ;  
                 In GammaR ; Jacobian JSur ; Integration I1 ; }
      
      // BC: Bayliss-Turkel
      // Galerkin { [ -I[]*k * Dof{p} , {p} ] ;  
      Galerkin { DtDof [ Dof{p} , {p} ] ;  
                 In GammaBT ; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ alphaBT[] * Dof{p} , {p} ] ;  
                 In GammaBT ; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ betaBT[] * Dof{d p} , {d p} ] ;  
                 In GammaBT ; Jacobian JSur ; Integration I1 ; }
      
      // PML (only for resolutions in the frequency domain)
      Galerkin { [ pmlTens[] * Dof{d p} , {d p} ] ;  
                 In OmegaPml ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k^2 * (1/pmlScal[]) * Dof{p} , {p} ] ;  
                 In OmegaPml ; Jacobian JVol ; Integration I1 ; }
    }
  }
  { Name MembraneEquations_Form ; Type FemEquation ;
    Quantity {
      { Name p ; Type Local ; NameOfSpace pSpace ; }
      { Name v ; Type Local ; NameOfSpace vSpace ; }
    }
    Equation {
      Galerkin { DtDof [ Dof{p} , {p} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      Galerkin { [ - Dof{v} , {p} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      
      Galerkin { DtDof [ Dof{v} , {v} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      Galerkin { [ Dof{d p} , {d v} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
    }
  }
  { Name EulerEquations_Form ; Type FemEquation ;
    Quantity {
      { Name p ; Type Local ; NameOfSpace pSpace ; }
      { Name u ; Type Local ; NameOfSpace uSpace ; }
    }
    Equation {
      Galerkin { DtDof [ Dof{p} , {p} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      Galerkin { [ - Dof{u} , {d p} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      
      Galerkin { DtDof [ Dof{u} , {u} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      Galerkin { [ - Dof{p} , {d u} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      
      // BC: Radiation
      Galerkin { [ Dof{p} , {p} ] ;
                 In GammaR ; Integration I1 ; Jacobian JSur ; }
      Galerkin { [ (Dof{u} * Normal[]) * Normal[] , {u} ] ;
                 In GammaR ; Integration I1 ; Jacobian JSur ; }
      
    }
  }
}

Resolution {
  { Name WaveEquation_FreqReso ;
    System {
      { Name A ; NameOfFormulation WaveEquation_Form ; Frequency Freq ; }
    }
    Operation {
      CreateDir["res/"] ;
      Generate[A] ;
      Solve[A] ;
      SaveSolution[A] ; 
    }
  }
  { Name MembraneEquations_FreqReso ;
    System {
      { Name A ; NameOfFormulation MembraneEquations_Form ; Frequency Freq ; }
    }
    Operation {
      CreateDir["res/"] ;
      Generate[A] ;
      Solve[A] ;
      SaveSolution[A] ; 
    }
  }
  { Name EulerEquations_FreqReso ;
    System {
      { Name A ; NameOfFormulation EulerEquations_Form ; Frequency Freq ; }
    }
    Operation {
      CreateDir["res/"] ;
      Generate[A] ;
      Solve[A] ;
      SaveSolution[A] ; 
    }
  }
  { Name WaveEquation_TimeReso ;
    System {
      { Name A ; NameOfFormulation WaveEquation_Form ; }
    }
    Operation { 
      CreateDir["res/"] ;
      InitSolution[A] ;
      InitSolution[A] ;
      TimeLoopNewmark[0., tf, dt, beta, gamma] {
	Generate[A] ;
        Solve[A] ;
        SaveSolution[A] ;
      }
    }
  }
  { Name MembraneEquations_TimeReso ;
    System {
      { Name A ; NameOfFormulation MembraneEquations_Form ; }
    }
    Operation {
      CreateDir["res/"] ;
      InitSolution[A] ;
      TimeLoopTheta{
	Time0 0 ; DTime dt ; Theta theta ; TimeMax tf ;
	Operation { 
	  Generate[A] ;
          Solve[A] ;
          SaveSolution[A] ;
	}
      }
    }
  }
  { Name EulerEquations_TimeReso ;
    System {
      { Name A ; NameOfFormulation EulerEquations_Form ; }
    }
    Operation {
      CreateDir["res/"] ;
      InitSolution[A] ;
      TimeLoopTheta{
	Time0 0 ; DTime dt ; Theta theta ; TimeMax tf ;
	Operation { 
	  Generate[A] ;
          Solve[A] ;
          SaveSolution[A] ;
	}
      }
    }
  }
}
