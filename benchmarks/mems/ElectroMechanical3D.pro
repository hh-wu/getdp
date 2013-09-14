// Function Space and Formulation for 3D electromechanical problems
Function {
  DefineFunction[F] ;
  DefineConstant[ DEGRE2] ; // 1 if 2nd order elements
}

Group {
  DefineGroup[Domain_Disp, Domain_Force, Domain_Force_Sur, Domain_Force_Lin, Domain_Force_Vol] ;

  Layer_out = ElementsOf[ DomainCC_Ele, OnOneSideOf Domain_Force_Sur] ;
  DomainTot = Region[{Domain_Disp, Domain_Force}];
}

Jacobian {
  { Name JVol ; Case {
      { Region Shell ;  Jacobian VolSphShell {Val_Rint, Val_Rext} ; }
      { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
}

Integration {
  { Name I1 ; Case { { Type Gauss ;
        Case {
          { GeoElement Point       ; NumberOfPoints  1 ; }
          { GeoElement Line        ; NumberOfPoints  4 ; }
          { GeoElement Triangle    ; NumberOfPoints  7 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  16 ; }
          { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
          { GeoElement Prism       ; NumberOfPoints  9 ; }
        } } }
  }
}

Constraint{
  { Name DisplacementX_dum ; Type Assign ;
    Case {
     { Region Domain_Force_Sur; Value 1. ; }
    }
  }
  { Name DisplacementY_dum ; Type Assign ;
    Case {
      { Region Domain_Force_Sur; Value 1. ; }
    }
  }
  { Name DisplacementZ_dum ; Type Assign ;
    Case {
      { Region Domain_Force_Sur; Value 1. ; }
    }
  }

}


FunctionSpace {

  { Name Hgrad_vf_Ele; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ; Support DomainCC_Ele ;
        Entity NodesOf[All, Not SkinDomainC_Ele] ; }
      { Name sck ;NameOfCoef vck ; Function BF_GroupOfNodes ; Support DomainCC_Ele ;
        Entity GroupsOfNodesOf[SkinDomainC_Ele] ; }
    }

    GlobalQuantity {
      { Name GlobalElectricPotential ; Type AliasOf        ; NameOfCoef vck ; }
      { Name GlobalElectricCharge    ; Type AssociatedWith ; NameOfCoef vck ; }
    }
    Constraint {
     { NameOfCoef vn ;
       EntityType NodesOf; NameOfConstraint  ElectricScalarPotential ; }
     { NameOfCoef GlobalElectricPotential ;
       EntityType GroupsOfNodesOf;NameOfConstraint GlobalElectricPotential; }
     { NameOfCoef GlobalElectricCharge ;
       EntityType GroupsOfNodesOf; NameOfConstraint GlobalElectricCharge ; }
   }
 }


 { Name Hcurl_e; Type Form1;
   BasisFunction {
     { Name se; NameOfCoef ee; Function BF_Edge;
       Support Region[{ DomainCC_Ele, Domain_Force}] ; Entity EdgesOf[All]; }
   }
 }

 // Mechanics - Displacement (ux, uy, uz)
 { Name H_u_Mec3D ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      { Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
        Support DomainTot ; Entity NodesOf[ All ] ; }

      If(DEGRE2)
        { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
          Support DomainTot ; Entity EdgesOf[ All ] ; }
        { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
          Support DomainTot ; Entity EdgesOf[ All ] ; }
        { Name szn2 ; NameOfCoef uzn2 ; Function BF_NodeZ_2E ;
          Support DomainTot ; Entity EdgesOf[ All ] ; }
      EndIf

      // For computation and coupling with electrostatic force
      { Name sxn ; NameOfCoef uxn_out ; Function BF_NodeX ;
        Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
      { Name syn ; NameOfCoef uyn_out ; Function BF_NodeY ;
        Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
      { Name szn ; NameOfCoef uzn_out ; Function BF_NodeZ ;
        Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
    }

    SubSpace{
       { Name u_x ; NameOfBasisFunction sxn ; }
       { Name u_y ; NameOfBasisFunction syn ; }
       { Name u_z ; NameOfBasisFunction szn ; }
     }

    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DisplacementX ; }
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DisplacementY ; }
      { NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint DisplacementZ ; }

      If(DEGRE2)
        { NameOfCoef uxn2 ; EntityType EdgesOf ; NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn2 ; EntityType EdgesOf ; NameOfConstraint DisplacementY ; }
        { NameOfCoef uzn2 ; EntityType EdgesOf ; NameOfConstraint DisplacementZ ; }
      EndIf
    }
  }

  // Force computation via Virtual Works and direct use in formulation
  { Name Force_Elec ; Type Vector ;
     BasisFunction {
       { Name sxn ; NameOfCoef fxn ; Function BF_NodeX ;
         Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
       { Name syn ; NameOfCoef fyn ; Function BF_NodeY ;
         Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
       { Name szn ; NameOfCoef fzn ; Function BF_NodeZ ;
         Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
     }
     SubSpace{
       { Name f_x ; NameOfBasisFunction sxn ; }
       { Name f_y ; NameOfBasisFunction syn ; }
       { Name f_z ; NameOfBasisFunction szn ; }
     }
  }


  { Name H_u_Mec3D_dummy ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
        Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
        Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
      { Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
        Support Layer_out ; Entity NodesOf[ Domain_Force_Sur ] ; }
    }
    SubSpace{
       { Name ud_x ; NameOfBasisFunction sxn ; }
       { Name ud_y ; NameOfBasisFunction syn ; }
       { Name ud_z ; NameOfBasisFunction szn ; }
     }
     Constraint {
       { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DisplacementX_dum ; }
       { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DisplacementY_dum ; }
       { NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint DisplacementZ_dum ; }
     }
  }

}

Formulation {

  { Name Electrostatics_vf; Type FemEquation;
    Quantity {
      { Name v ; Type LocalQuantity  ; NameOfSpace Hgrad_vf_Ele ; }
      { Name Q ; Type GlobalQuantity ; NameOfSpace Hgrad_vf_Ele [GlobalElectricCharge] ; }
      { Name V ; Type GlobalQuantity ; NameOfSpace Hgrad_vf_Ele [GlobalElectricPotential] ; }
    }
    Equation {
      Galerkin { [ eps[] * Dof{d v} , {d v} ] ;
        In DomainCC_Ele ; Integration I1 ;  Jacobian JVol ;}
      GlobalTerm {[ -Dof{Q} , {V} ] ; In SkinDomainC_Ele ; }
    }
  }

  { Name Mec_u_3D ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace H_u_Mec3D ; }
    }

    Equation {
      Galerkin { [ C_11[] * Dof{D1 u} , {D1 u} ] ;
        In Domain_Disp ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ C_22[] * Dof{D2 u} , {D2 u} ] ;
        In Domain_Disp ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ C_12[] * Dof{D2 u} , {D1 u} ] ;
        In Domain_Disp ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ C_21[] * Dof{D1 u} , {D2 u} ] ;
        In Domain_Disp ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ -F[] , {u} ] ;
        In Domain_Force; Jacobian JSur; Integration I1; }
    }
  }

  { Name Mec_u_3D_coupled ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace H_u_Mec3D ; }
      { Name u_x ; Type Local ; NameOfSpace  H_u_Mec3D[u_x] ;}
      { Name u_y ; Type Local ; NameOfSpace  H_u_Mec3D[u_y] ;}
      { Name u_z ; Type Local ; NameOfSpace  H_u_Mec3D[u_z] ;}

      { Name ud ; Type Local ; NameOfSpace H_u_Mec3D_dummy ; }
      { Name ud_x ; Type Local ; NameOfSpace  H_u_Mec3D_dummy[ud_x] ;}
      { Name ud_y ; Type Local ; NameOfSpace  H_u_Mec3D_dummy[ud_y] ;}
      { Name ud_z ; Type Local ; NameOfSpace  H_u_Mec3D_dummy[ud_z] ;}

      { Name v ; Type LocalQuantity  ; NameOfSpace Hgrad_vf_Ele ; } // From electrostatic problem
    }

    Equation {
      Galerkin { [ C_11[] * Dof{D1 u} , {D1 u} ] ; In Domain_Disp ;
        Jacobian JVol ; Integration I1 ; }
      Galerkin { [ C_22[] * Dof{D2 u} , {D2 u} ] ; In Domain_Disp ;
        Jacobian JVol ; Integration I1 ; }
      Galerkin { [ C_12[] * Dof{D2 u} , {D1 u} ] ; In Domain_Disp ;
        Jacobian JVol ; Integration I1 ; }
      Galerkin { [ C_21[] * Dof{D1 u} , {D2 u} ] ; In Domain_Disp ;
        Jacobian JVol ; Integration I1 ; }

      // Direct computation of force ... not very elegant (trick for assembling only the diagonal elements)
      Galerkin {[ -0.5*eps[]* VirtualWork[Dof{ud_x}*0 + {d v}], Unit[{u_x}] ] ;
        In Layer_out ; Jacobian JVol ; Integration I1;}
      Galerkin {[ -0.5*eps[]* VirtualWork[Dof{ud_y}*0 + {d v}], Unit[{u_y}] ] ;
        In Layer_out ; Jacobian JVol ; Integration I1;}
      Galerkin {[ -0.5*eps[]* VirtualWork[Dof{ud_z}*0 + {d v}], Unit[{u_z}] ] ;
        In Layer_out ; Jacobian JVol ; Integration I1;}
    }
  }

  { Name Force_Elec ; Type FemEquation ;
    Quantity {
      { Name f ; Type Local ; NameOfSpace Force_Elec ; }
      { Name f_x ; Type Local ; NameOfSpace  Force_Elec[f_x] ;}
      { Name f_y ; Type Local ; NameOfSpace  Force_Elec[f_y] ;}
      { Name f_z ; Type Local ; NameOfSpace  Force_Elec[f_z] ;}

      { Name ud ; Type Local ; NameOfSpace H_u_Mec3D_dummy ; }
      { Name ud_x ; Type Local ; NameOfSpace  H_u_Mec3D_dummy[ud_x] ;}
      { Name ud_y ; Type Local ; NameOfSpace  H_u_Mec3D_dummy[ud_y] ;}
      { Name ud_z ; Type Local ; NameOfSpace  H_u_Mec3D_dummy[ud_z] ;}

      { Name v ; Type LocalQuantity  ; NameOfSpace Hgrad_vf_Ele ; } // From electrostatic problem
    }

    Equation {
      Galerkin { [ Dof{f}, {f}] ;
       In Layer_out ; Jacobian JVol ; Integration I1 ;}

      // Direct computation of force ... not very elegant (trick for assembling only the diagonal elements)
      Galerkin {[ -0.5*eps[]* VirtualWork[Dof{ud_x}*0 + {d v}], {f_x} ] ;
        In Layer_out ; Jacobian JVol ; Integration I1;}
      Galerkin {[ -0.5*eps[]* VirtualWork[Dof{ud_y}*0 + {d v}], {f_y} ] ;
        In Layer_out ; Jacobian JVol ; Integration I1;}
      Galerkin {[ -0.5*eps[]* VirtualWork[Dof{ud_z}*0 + {d v}], {f_z} ] ;
        In Layer_out ; Jacobian JVol ; Integration I1;}
    }
  }

}



Resolution {

  { Name Electrostatics ;
    System {
      { Name Sys_Ele ; NameOfFormulation Electrostatics_vf; }
    }
    Operation {
      Generate Sys_Ele; Solve Sys_Ele; SaveSolution Sys_Ele; }
  }

  { Name Elasticity ;
    System {
      { Name Sys_Mec ; NameOfFormulation Mec_u_3D ; }
    }
    Operation {
      Generate Sys_Mec ; Solve Sys_Mec ; SaveSolution Sys_Mec ;
    }
  }

  { Name Analysis ;
    System {
      If(Flag_AnalysisType ==0 || Flag_AnalysisType ==2)
        { Name A ; NameOfFormulation Electrostatics_vf;}
      EndIf
      If(Flag_AnalysisType ==1)
        { Name B ; NameOfFormulation Mec_u_3D ;}
      EndIf
      If(Flag_AnalysisType ==2)
        { Name B ; NameOfFormulation Mec_u_3D_coupled ;}
      EndIf
    }
    Operation {
      If(Flag_AnalysisType ==0 || Flag_AnalysisType ==2)
        Generate[A] ; Solve[A] ; SaveSolution[A] ;
        PostOperation[ Post_elec ];
      EndIf
      If(Flag_AnalysisType ==1 || Flag_AnalysisType ==2)
        Generate[B] ; Solve[B] ; SaveSolution[B] ;
        PostOperation[ Post_mec ];
      EndIf
    }
  }

}


PostProcessing {

  { Name Electrostatics_vf ; NameOfFormulation Electrostatics_vf ;
    PostQuantity {
      { Name v ; Value { Term { [ {v} ]      ; In DomainCC_Ele ; Jacobian JVol ; } } }
      { Name e ; Value { Term { [ -{d v} ]   ; In DomainCC_Ele ; Jacobian JVol ;} } }
      { Name d ; Value { Term { [ -eps[]*{d v} ] ; In DomainCC_Ele ; Jacobian JVol ;} } }

      { Name Q ; Value { Term { [ {Q} ] ; In SkinDomainC_Ele ; Jacobian JVol ;} } }
      { Name V ; Value { Term { [ {V} ] ; In SkinDomainC_Ele ; Jacobian JVol ;} } }
      { Name C ; Value { Term { [ {Q}/(Vmax-Vmin) ] ; In SkinDomainC_Ele; Jacobian JVol ;} } }
    }
  }

  { Name Mec_u_3D ; NameOfFormulation Mec_u_3D ;
    PostQuantity {
      { Name u ; Value { Term { [ {u} ]   ; In Domain_Disp ;  Jacobian JVol ;} } }
      { Name epsI ; Value { Term { [ {D1 u} ]   ; In Domain_Disp ; Jacobian JVol ;} } }
      { Name epsII ; Value { Term { [ {D2 u} ]   ; In Domain_Disp ; Jacobian JVol ;} } }

      { Name epsx ; Value { Term { [Vector [CompX[{D1 u}],0,0 ] ]    ; In Domain_Disp ; Jacobian JVol ;} } }
      { Name epsy ; Value { Term { [Vector [0, CompY[{D1 u}],0 ] ]    ; In Domain_Disp ; Jacobian JVol ;} } }
      { Name epsz ; Value { Term { [Vector [0, 0, CompZ[{D1 u}] ] ]    ; In Domain_Disp ; Jacobian JVol ;} } }

      { Name epsxy ; Value { Term { [Vector [CompX[{D2 u}],0,0 ] ]    ; In Domain_Disp ; Jacobian JVol ;} } }
      { Name epsyz ; Value { Term { [Vector [0, CompY[{D2 u}],0 ] ]    ; In Domain_Disp ; Jacobian JVol ;} } }
      { Name epszx ; Value { Term { [Vector [0, 0, CompZ[{D2 u}] ] ]    ; In Domain_Disp ; Jacobian JVol ;} } }

      //{ Name F ; Value { Term { [F[]]   ; In Domain_Force ; } } }
      { Name Vm ; Value { Term {
            [Sqrt[ 2*(CompX[C_11[]*{D1 u}]#1^2 + CompY[C_11[]*{D1 u}]#2^2
                  + CompZ[C_11[]*{D1 u}]#3^2) - #1*#2 - #2*3 - #3*#1
                + 3*(CompX[C_22[]*{D2 u}])^2 + 3*(CompY[C_22[]*{D2 u}])^2
                + 3*(CompZ[C_22[]*{D2 u}])^2]]; In Domain_Disp ; } } }
    }
  }

}


DefineConstant[
  ResolutionChoices    = {"Analysis", Path "GetDP/1", Visible 0},
  ComputeCommand       = {"-solve -v 3 -v2", Path "GetDP/9", Visible 0},
  PostOperationChoices = {"", Path "GetDP/2", Visible 0}

];
