po_min  = "Output/";

PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name GetAnalyticSens ; NameOfFormulation u_Mec ;
    PostQuantity {
      { Name dMass;
	Value {
	  Integral{ [ dMass[] ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }
      { Name dMass2;
	Value {
	  Integral{ [ -dMass[] ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }
    }
  }
  // --------------------------------------------------------------------
  // Adjoint variable
  // --------------------------------------------------------------------
  { Name Adjoint_u_Mec ; NameOfFormulation Adjoint_u_Mec ;
    PostQuantity {
      { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
      { Name u ; Value { Term {[ {u} ] ; In Domain ; Jacobian Vol;}}}
      { Name Fadj ; Value { Term { [ dFdb[{D1 u},{D2 u}] ]; In DomainFunc ; } } }   
 
      If(Flag_2D)      
        { Name bilinLamdaState; // Int(nu*rotA*rotLambda)->lambda*K*A
          Value {
      	    Integral { [ (C[]*{D1 u})*{D1 lambda}];
	      In Domain ; Jacobian Vol  ; Integration I1; }   
          }
        }
      EndIf
      If(!Flag_2D)      
        { Name bilinLamdaState; // Int(nu*rotA*rotLambda)->lambda*K*A
          Value {
      	    Integral { [ (C11[]*{D1 u}) * {D1 lambda} ];
              In Domain ; Jacobian Vol  ; Integration I1; }
      	    Integral { [ (C12[]*{D2 u}) * {D1 lambda} ];
              In Domain ; Jacobian Vol  ; Integration I1; }
      	    Integral { [ (C21[]*{D1 u}) * {D2 lambda} ];
              In Domain ; Jacobian Vol  ; Integration I1; }
      	    Integral { [ (C22[]*{D2 u}) * {D2 lambda} ];
              In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
      EndIf
      { Name loadLambda; // Sum_i{lambda*g_i} FIXME
        Value {
          Integral { [ force_mec[] * {lambda} ];
	    In Domain_Force ; Jacobian SurLinVol  ; Integration I1; }
        }
      }

      { Name rho_sensF ; 
          Value { Term { [ dF_adjoint_lie[{D1 u},{D1 lambda},{D2 u},{D2 lambda}] ] ; 
            In Domain ; Jacobian Vol ; }}}

      { Name rho_sensK ; 
          Value { Term { [ d_bilin_lie[{D1 u},{D1 lambda},{D2 u},{D2 lambda}]]  ; 
            In Domain ; Jacobian Vol ; }}}

      { Name sensF ; 
          Value { 
              Integral{[dF_adjoint_lie[{D1 u},{D2 u}]]; // d{f}/d{tau}(phi)
                In Domain ; Jacobian Vol ; Integration I1;}
          }
      }

      { Name sensK ; 
        Value { 
          Integral{[ d_bilin_lie[ {D1 u}, {D1 lambda},{D2 u},{D2 lambda}] ];
            In Domain; Jacobian Vol ; Integration I1;}
        }
      }

      { Name AvmVarDomSens; 
        Value { 
          Integral { [ dF_adjoint_lie[ {D1 u},{D2 u} ] ];  // d{f}/d{tau}(phi)
            In DomainFunc ; Jacobian Vol ; Integration I1 ;}
          Integral { [ -d_bilin_lie[ {D1 u},{D1 lambda},{D2 u},{D2 lambda} ] ];
            In Domain ; Jacobian Vol ; Integration I1 ; }
        } 
      }

      { Name Sensitivity_AdjointMethod; 
        Value { 
          Integral {[ dFdb_TO[{D1 u},{D2 u}] ]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
          Integral {[-d_bilin[{D1 u},{D1 lambda},{D2 u},{D2 lambda}]]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }
      
    }
  }
  // --------------------------------------------------------------------
  // Filter sensitivitys
  // --------------------------------------------------------------------
  { Name FilterTopOpt; NameOfFormulation FilterTopOpt ;
    PostQuantity {
      { Name filtSource; Value { Term { [ filtSource[] ]; In Domain ; Jacobian Vol;}}}
      { Name filtOut; Value { Term { [ {psi} ]; In Domain; Jacobian Vol; }}}
    }
  }
  { Name FilterTopOpt_dXdx; NameOfFormulation FilterTopOpt_dXdx ;
    PostQuantity {
      { Name dxFiltdx; Value { Term { [ {psi} ] ; In Domain ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
   // --------------------------------------------------------------------------
  // Get Adjoint variable
  // --------------------------------------------------------------------------
 { Name Adjoint_u_Mec; NameOfPostProcessing Adjoint_u_Mec;
   Operation{
     Print[ lambda, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;
//     Echo[ StrCat["View[PostProcessing.NbViews-1].VectorType=5;",
//                  "View[PostProcessing.NbViews-1].DisplacementFactor=1.0e-07;"],
//       File StrCat[ResDir, StrCat["lambda",ExtGmsh],".opt"], LastTimeStepOnly] ;
     Print[ Fadj, OnElementsOf Domain_Force,File StrCat[ResDir,"Fadj",ExtGmsh]] ;
   }
 }
  // --------------------------------------------------------------------------
  // Get analytic sensitivities (no system) 
  // --------------------------------------------------------------------------
 { Name GetAnalyticSens; NameOfPostProcessing GetAnalyticSens;
   Operation{
     Print[ dMass[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["dMass",ExtAnalyticSens]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"dMass"], Color "LightYellow" ];
     Print[ dMass2[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["dMass2",ExtAnalyticSens]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"dMass2"], Color "LightYellow" ];
   }
 }
  // --------------------------------------------------------------------------
  // Get Semi-analytic quantities
  // --------------------------------------------------------------------------
 { Name SemiAdjoint_u_Mec; NameOfPostProcessing Adjoint_u_Mec;
   Operation{
     Print[ bilinLamdaState[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];
     Print[ loadLambda[Domain_Force],OnGlobal, Format Table,
	   File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
   }
 }
  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) with Lie approach 
  // --------------------------------------------------------------------
  { Name Get_AvmVarDomSens_Lie0; NameOfPostProcessing Adjoint_u_Mec;
    Operation{
//       Print[ dlambda_v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["dlambda_v",ExtGmsh]], LastTimeStepOnly] ;
//       Print[ du_v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["du_v",ExtGmsh]], LastTimeStepOnly] ;
    }
  } 
  { Name GetShapeOptAdjointSens; NameOfPostProcessing Adjoint_u_Mec;
    Operation{
       Print[ v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;
//       Print[ rho_sensF, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["rho_sensF",ExtGmsh]], LastTimeStepOnly] ;
//       Print[ rho_sensK, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["rho_sensK",ExtGmsh]], LastTimeStepOnly] ;
       Print[ sensF[DomainFunc], OnGlobal, Format Table, 
              File StrCat[ResDir, StrCat["d_func", ExtGnuplot]], 
	      SendToServer StrCat[po_min,"d_func"], LastTimeStepOnly];
       Print[ sensK[#{Domain,Domain_Force}], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["d_bilin", ExtGnuplot]],  
              SendToServer StrCat[po_min,"d_bilin"], LastTimeStepOnly];
       Print[ AvmVarDomSens[Domain], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["AvmVarDomSens", ExtGnuplot]], 
              SendToServer StrCat[po_min,"AvmVarDomSens"], LastTimeStepOnly];
    }
  } 
  // ----------------------------------------VM----------------------------------
  // Get Sensitivity
  // --------------------------------------------------------------------------
 { Name GetTopOptAdjointSens; NameOfPostProcessing Adjoint_u_Mec;
   Operation{
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
//     Print[ lambda, OnElementsOf DomainOpt,LastTimeStepOnly,
//	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom_lambda",ExtGmsh]]] ;
//     Print[ u, OnElementsOf DomainOpt,LastTimeStepOnly,
//	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom_u",ExtGmsh]]] ;

//     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,Format NodeTable,
//	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDomNodes",ExtGmsh]]] ;
   }
 }
 { Name Get_SelfAvmFixedDomSens; NameOfPostProcessing Adjoint_u_Mec;//FIXME
   Operation{
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,
           LastTimeStepOnly, Format NodeTable,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDomNodes",ExtGmsh]]] ;
   }
 }
  // --------------------------------------------------------------------
  // Filter sensitivity 
  // --------------------------------------------------------------------
  { Name FilterTopOpt; NameOfPostProcessing FilterTopOpt;
    Operation {
      Print [ filtSource, OnElementsOf DomainOpt, File StrCat[ResDir,"filtSource.pos"] ];
      Print [ filtOut, OnElementsOf DomainOpt, File StrCat[ResDir,"filtOut.pos"] ];
    }
  }
  { Name FilterTopOpt_dXdx; NameOfPostProcessing FilterTopOpt_dXdx;
    Operation {
      Print [ dxFiltdx, OnElementsOf DomainOpt,File StrCat[ResDir,"dxFiltdx.pos"] ];
    }
  }
  // --------------------------------------------------------------------------
  // PVP
  // --------------------------------------------------------------------------
//  { Name Get_PrimalSystemEig ; NameOfPostProcessing Elasticity2D;
//    Operation {
//      Print[ designVarPlot, OnElementsOf DomainOpt,
//     	 File StrCat[ResDir, StrCat["designVarPlot",ExtGmsh]], LastTimeStepOnly] ;
//      Print[ E_mec, OnElementsOf DomainOpt,
//     	 File StrCat[ResDir, StrCat["E_mec",ExtGmsh]], LastTimeStepOnly] ;
//      Print[ rho_mec, OnElementsOf DomainOpt,
//     	 File StrCat[ResDir, StrCat["rho_mec",ExtGmsh]], LastTimeStepOnly] ;
//      Print[ u_eig, OnElementsOf DomainOpt, File "res/u.pos", EigenvalueLegend ] ;
//      Echo[ Str["View[PostProcessing.NbViews-1].VectorType=5;",
//		"View[PostProcessing.NbViews-1].DisplacementFactor = 0.1;"],
//        File "res/u.pos.opt"] ;
//	// gmsh res/u.pos res/u.pos.opt
//    }
//  }
// { Name Get_FixedDomSens_Stiff_eig;NameOfPostProcessing Elasticity2D;
//   Operation{
////     Print[ d_stiff_eig, OnElementsOf DomainOpt,
////	   File StrCat[ResDir, StrCat["d_stiff_eig",ExtGmsh]]] ;
////     Print[ d_mass_eig, OnElementsOf DomainOpt,
////	   File StrCat[ResDir, StrCat["d_mass_eig",ExtGmsh]]] ;
//     Print[ norm_eig[DomainOpt], OnGlobal, Format TimeTable,
//	   File StrCat[ResDir, "norm_eig.txt"]] ;
//     Print[ d_eig, OnElementsOf DomainOpt,
//	   File StrCat[ResDir, StrCat["d_eig",ExtGmsh]]] ;
//   }
// }
}
