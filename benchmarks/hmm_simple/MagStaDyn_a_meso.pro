

Jacobian {
  { Name Vol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name Sur ; Case { { Region All ; Jacobian Sur ; } } }
}

Integration {
  { Name II ; Case {
      {Type Gauss ;
        Case {
	  { GeoElement Line        ; NumberOfPoints  4 ; }
          { GeoElement Triangle    ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
        }
      }
    }
  }
}

FunctionSpace{
  For iP In {1:Nbr_SubProblems}
  { Name HCurl_a_Micro~{iP} ; Type Form1P ;
    BasisFunction{
      { Name sn; NameOfCoef an; Function BF_PerpendicularEdge; Support Omega; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Micro; }
    }
  }
  EndFor
}

Formulation {
  For iP In {1:Nbr_SubProblems}
  { Name a_NR~{iP} ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace HCurl_a_Micro~{iP} ; }
    }
    Equation {
      Galerkin { [ nu[ {d a}+curl_aM[]+Pert~{iP}[] ] * Dof{d a} , {d a} ]     ; In Omega   ; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a}+curl_aM[]+Pert~{iP}[] ] * curl_aM[], {d a} ]     ; In Omega   ; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a}+curl_aM[]+Pert~{iP}[] ] * Pert~{iP}[] , {d a} ]  ; In Omega   ; Jacobian Vol; Integration II; }
      Galerkin { JacNL[ dhdb[{d a}+curl_aM[]+Pert~{iP}[] ] * Dof{d a}, {d a} ]; In Omega_NL; Jacobian Vol; Integration II; }
    }
  }
EndFor
}

Resolution {
  { Name a_NR ;
    System {
      For iP In {1:Nbr_SubProblems}
      { Name Micro~{iP}; NameOfFormulation a_NR~{iP} ;}
      EndFor
    }
    Operation {
      CreateDirectory[Dir_Meso];
      For iP In {1:Nbr_SubProblems}
      InitSolution[Micro~{iP} ];
        IterativeLoop[NbrMaxIter, Eps, Relax]{
          GenerateJac[Micro~{iP}]; SolveJac[Micro~{iP}] ;
      }
      // SaveSolution[Micro~{iP}]  ;
      If(iP == 1)
        // PostOperation[map_field_1];
      EndIf
      EndFor
    }
  }
}

PostProcessing {
  For iP In {1:Nbr_SubProblems}
  { Name a_Micro_NR~{iP} ; NameOfFormulation a_NR~{iP} ; NameOfSystem Micro~{iP} ;
     PostQuantity {
       { Name vol         ; Value { Integral { [ 1. ] ;        In Omega ; Jacobian Vol ; Integration II ; } } }  // stored in register #12
       { Name a_pert      ; Value { Term { [ CompZ[ {a} ] ] ;  In Omega ; Jacobian Vol; } } }
       { Name a_proj      ; Value {
           Term { [ CompZ[ ( aM[] ) ] ] ;                             In Omega ; Jacobian Vol;  }
           Term { [ CompZ[ ( - factor * (XYZ[]) /\ curl_aM[] ) ] ] ;  In Omega ; Jacobian Vol;  } } }
       { Name a_tot       ; Value {
           Term { [ CompZ[ {a}] ] ;                                  In Omega ; Jacobian Vol; }
           Term { [ CompZ[ aM[] ] ] ;                                In Omega ; Jacobian Vol; }
           Term { [ CompZ[ ( - factor * (XYZ[]) /\ curl_aM[] ) ] ] ; In Omega ; Jacobian Vol; } } }
       { Name b_pert      ; Value { Term { [ {d a} ] ;     In Omega ; Jacobian Vol;  } } }
       { Name b_proj      ; Value { Term { [ curl_aM[] ] ; In Omega ; Jacobian Vol;  } } }
       { Name b_tot       ; Value {
           Term { [ {d a}]    ;    In Omega ; Jacobian Vol ; }
           Term { [ curl_aM[]  ] ; In Omega ; Jacobian Vol ; }
           Term { [ Pert~{iP}[]] ; In Omega ; Jacobian Vol ; } } }
       { Name b_tot_mean  ; Value {
           Integral { [ ({d a} + curl_aM[] + Pert~{iP}[])/#12 ] ; In Omega ; Jacobian Vol ; Integration II ; } } }
       { Name h_tot ; Value {
           Term { [ nu[{d a} + curl_aM[] + Pert~{iP}[]] * ({d a} + curl_aM[] + Pert~{iP}[]) ]; In Omega; Jacobian Vol;} } }
       { Name h_tot_mean ; Value {// stored in #22
           Integral { [ nu[ {d a} + curl_aM[] + Pert~{iP}[]] * ({d a} + curl_aM[] + Pert~{iP}[])/#12 ] ; In Omega ; Jacobian Vol; Integration II ; } } }
     }
   }
  EndFor
}




PostOperation {
For iP In {1:Nbr_SubProblems}
 { Name mean~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation{
     Print[ vol[Omega]       , OnGlobal, Format Table, Store 12, File StrCat[Dir_Meso, "vol.txt"], LastTimeStepOnly ] ;
     Print[ h_tot_mean[Omega], OnGlobal, Format Table, Store 22, File StrCat[Dir_Meso, Sprintf("DualField%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly] ;
     Print[ b_tot_mean[Omega], OnGlobal, Format Table, Store 21, File StrCat[Dir_Meso, Sprintf("PrimalField%g_%g.txt", iP, ELENUM) ], LastTimeStepOnly] ;
   }
 }
 { Name map_field~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation {
     Print[ a_pert, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ a_proj, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_proj_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ a_tot , OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_tot_Prob%g_TS%g_Elenum%g.pos"  , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ b_pert, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_pert_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ b_tot , OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_tot_Prob%g_TS%g_Elenum%g.pos"  , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ b_proj, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_proj_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ h_tot , OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("h_tot_Prob%g_TS%g_Elenum%g.pos"  , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
   }
 }
 EndFor
}
