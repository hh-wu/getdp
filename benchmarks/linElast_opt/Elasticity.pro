Group {
  DefineGroup[
    Domain,Domain_Force,Domain_Force_Lin,Domain_Force_Sur,
    DomainFunc] ;
}

Function {
}

Jacobian {
  { Name Vol; Case {{ Region All; Jacobian Vol; }}}
  { Name Sur; Case {{ Region All; Jacobian Sur; }}}
  { Name Lin; Case { { Region All; Jacobian Lin; }}}
  { Name SurLinVol ;
    Case {
      { Region Domain_Force_Sur ; Jacobian Sur ; }
      { Region Domain_Force_Lin ; Jacobian Lin ; }
      { Region All ; Jacobian Vol ; }
    }
  }
}
 
Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
	Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  4 ; }
	  { GeoElement Triangle    ; NumberOfPoints  7 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  16; }
          { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  9 ; }
        }
     }
   }
 }
}

FunctionSpace	{
  { Name H_u_Mec2D ; Type Vector ; // primal 2D 
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
        dFunction {BF_NodeX_D12, BF_Zero};
        Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
        dFunction {BF_NodeY_D12, BF_Zero};
        Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
      If (Flag_degree2)
        { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ; 
          dFunction {BF_NodeX_D12_2E, BF_Zero};
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ; 
          dFunction {BF_NodeY_D12_2E, BF_Zero};
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DisplacementX ; }
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DisplacementY ; }
      If (Flag_degree2)
        { NameOfCoef uxn2;EntityType EdgesOf;NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn2;EntityType EdgesOf ; NameOfConstraint DisplacementY ; }
      EndIf
    }
  }
  If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
    { Name H_lambda_Mec2D; Type Vector ; // adjoint variable 2D
      BasisFunction {
        { Name sxn ; NameOfCoef lambdaxn ; Function BF_NodeX ; 
          dFunction {BF_NodeX_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}] ; Entity NodesOf[ All ] ; }
        { Name syn ; NameOfCoef lambdayn ; Function BF_NodeY ; 
          dFunction {BF_NodeY_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}] ; Entity NodesOf[ All ] ; }
      }
      Constraint {
        { NameOfCoef lambdaxn ;
          EntityType NodesOf ; NameOfConstraint DisplacementX; }
        { NameOfCoef lambdayn ;
          EntityType NodesOf ; NameOfConstraint DisplacementY; }
      }
    }

    { Name H_dState_Mec2D ; Type Vector ; // deirect sensitivity 2D
      BasisFunction {
        { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; 
          dFunction {BF_NodeX_D12, BF_Zero}; //??
          Support Domain; Entity NodesOf[ All ] ; }
        { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; 
          dFunction {BF_NodeY_D12, BF_Zero};
          Support Domain; Entity NodesOf[ All ] ; }
      }
      Constraint {
        { NameOfCoef uxn ;
          EntityType NodesOf ; NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn ;
          EntityType NodesOf ; NameOfConstraint DisplacementY ; }
      }
    }
  EndIf
  /* ----------------------------------------------------------------- */
  { Name H_u_Mec3D; Type Vector; //primal 3D
    BasisFunction{
      { Name sxn; NameOfCoef uxn; Function BF_NodeX; 
	Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      { Name syn; NameOfCoef uyn; Function BF_NodeY; 
	Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      { Name szn; NameOfCoef uzn; Function BF_NodeZ; 
	Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      If (Flag_degree2)
        { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ; 
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ; 
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        { Name szn2 ; NameOfCoef uzn2 ; Function BF_NodeZ_2E ; 
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint{
      { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
      { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
      { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
      If (Flag_degree2)
        { NameOfCoef uxn2; EntityType EdgesOf; NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn2; EntityType EdgesOf; NameOfConstraint DisplacementY ; }
        { NameOfCoef uzn2; EntityType EdgesOf; NameOfConstraint DisplacementZ ; }
      EndIf
    }
  }
  If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
   { Name H_lambda_Mec3D ; Type Vector ; 
      BasisFunction{
        { Name sxn; NameOfCoef uxn; Function BF_NodeX; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name syn; NameOfCoef uyn; Function BF_NodeY; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name szn; NameOfCoef uzn; Function BF_NodeZ; 
          Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      }
      Constraint{
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
        { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
      }
    }
    { Name H_dState_Mec3D ; Type Vector ; 
      BasisFunction{
        { Name sxn; NameOfCoef uxn; Function BF_NodeX; 
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name syn; NameOfCoef uyn; Function BF_NodeY; 
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name szn; NameOfCoef uzn; Function BF_NodeZ; 
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
      }
      Constraint{
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
        { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
      }
    }
  EndIf
}
  
Formulation{
  If (Flag_2D) // 2D formulation
    { Name PrimalSystem ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local ; NameOfSpace H_u_Mec2D ;}
      }
      Equation {
        // u formulation
        Galerkin { [ C[] * Dof{D1 u}, {D1 u}] ; 
          In Domain; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -force_mec[], {u}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }
      }
    }
    If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
      { Name DirectFormulation ; Type FemEquation ;
        Quantity {
          { Name u ; Type Local  ; NameOfSpace H_u_Mec2D ; }
          { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec2D ; }
        }
        Equation {
          Galerkin { [ C[]*Dof{D1 d_u}, {D1 d_u}] ; 
            In Domain; Jacobian Vol ; Integration I1 ; }
        }
      }
      { Name AdjointFormulation ; Type FemEquation ;
        Quantity {
          { Name u  ; Type Local  ; NameOfSpace H_u_Mec2D; }
          { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec2D; }
        } 
        Equation {
          Galerkin { [ C[] * Dof{D1 lambda}, {D1 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ -dFdb[{D1 u}], {D1 lambda} ] ;
            In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
        }
      }
    EndIf  
  EndIf
  If (!Flag_2D) // 3D formulation
    { Name PrimalSystem; Type FemEquation; 
      Quantity{
        { Name u; Type Local; NameOfSpace H_u_Mec3D;}
      }
      Equation{
        Galerkin { [ C11[] * Dof{D1 u} , {D1 u} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C12[] * Dof{D2 u} , {D1 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C21[] * Dof{D1 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C22[] * Dof{D2 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -force_mec[], {u}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }
      }
    }
    If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
      { Name AdjointFormulation ; Type FemEquation ;
        Quantity {
          { Name u  ; Type Local  ; NameOfSpace H_u_Mec3D; }
          { Name lambda ; Type Local  ; NameOfSpace H_lambda_Mec3D; }
        }
        Equation {
          Galerkin { [ C11[] * Dof{D1 lambda}, {D1 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ C12[] * Dof{D2 lambda}, {D1 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ C21[] * Dof{D1 lambda}, {D2 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ C22[] * Dof{D2 lambda}, {D2 lambda} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Galerkin { [ -dFdb[{D1 u},{D2 u}], {D1 lambda} ] ;
            In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
          Galerkin { [ -dFdb2[{D1 u},{D2 u}], {D2 lambda} ] ;
            In DomainFunc ; Jacobian SurLinVol ; Integration I1 ; }
        }
      }
      { Name DirectFormulation ; Type FemEquation ;
        Quantity {
          { Name u ; Type Local  ; NameOfSpace H_u_Mec3D ; }
          { Name d_u ; Type Local  ; NameOfSpace H_dState_Mec3D ; }
        }
        Equation {
          // u formulation
         Galerkin { [ C11[] * Dof{D1 d_u}, {D1 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
         Galerkin { [ C12[] * Dof{D2 d_u}, {D1 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
         Galerkin { [ C21[] * Dof{D1 d_u}, {D2 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
         Galerkin { [ C22[] * Dof{D2 d_u}, {D2 d_u} ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; }
        }
      }
    EndIf
  EndIf
}

Resolution{
  { Name PrimalSystem; 
    System {
      { Name A; NameOfFormulation PrimalSystem; }
    }
    Operation{
      CreateDir[ResDir];
      InitSolution[A];Generate[A];Solve[A];SaveSolution[A];
      PostOperation[Get_Elast];
    }
  }
}

PostProcessing {
  { Name PostElast3D ; NameOfFormulation PrimalSystem ;
    PostQuantity {
      { Name u; Value { Term { [ {u} ] ; In Domain ; } }} 
      { Name um ; Value { Term { [Norm[{u}]] ; In Domain  ; } } }
      { Name F ; Value { Term { [ force_mec[] ]; In Domain_Force ; } } }   
    }
  }
}

PostOperation {
 { Name Get_Elast; NameOfPostProcessing PostElast3D;
   Operation{
     Print[ u, OnElementsOf Domain,File StrCat[ResDir,"u",ExtGmsh]] ;
     Print[ um,OnElementsOf Domain,File StrCat[ResDir,"um",ExtGmsh]] ;
     Print[ F, OnElementsOf Domain_Force,File StrCat[ResDir,"F",ExtGmsh]] ;
   }
 }
}




