po_min  = "Output/";

PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name PrimalSystem ; NameOfFormulation PrimalSystem ;
    PostQuantity { 
      //If(!StrCmp(Flag_optType,"topology"))
        { Name designVarPlot; Value{Term{[designVar[]]; In Domain; Jacobian Vol;}}}
        { Name volumeMaterial;
  	  Value {
	    Integral{ [ designVar[] ];
	      In Domain; Jacobian Vol; Integration I1; }
	  }
        }
      //EndIf
      { Name Young; Value { Term { [ E[] ] ; In Domain ; Jacobian Vol ; } } }

      { Name rho_mec; Value { Term { [ rho_mec[] ] ; In Domain ; Jacobian Vol ; } } }

      { Name Volume; Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1;}}}

      { Name u  ; Value { Term { [ {u} ] ; In Domain ; Jacobian Vol ; } } }
      { Name ux  ; Value { Term { [ CompX[{u}] ] ; In Domain ; Jacobian Vol ;}}}
      { Name uy  ; Value { Term { [ CompY[{u}] ] ; In Domain ; Jacobian Vol ;}}}
       
      { Name StressVM; Value { Term {[sigmaVM[{D1 u},{D2 u}]];In Domain; Jacobian Vol;}}}
      { Name StressVMInt; Value {
      	Integral { [ sigmaVM[{D1 u},{D2 u}]^2.0 ];
          In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }
        
      If(Flag_2D)
        { Name Stresses; Value { Term { [ sigma[{D1 u}] ]; In Domain ; Jacobian Vol;}}}
        { Name StressesX; Value{Term{[ CompX[sigma[{D1 u}]]];In Domain ; Jacobian Vol;}}}
        { Name StressesY; Value{Term{[ CompY[sigma[{D1 u}]]];In Domain ; Jacobian Vol;}}}
        { Name StressesXY; Value{Term{[ CompZ[sigma[{D1 u}]]];In Domain ; Jacobian Vol;}}}
        { Name Compliance; Value {
      	  Integral { [ 0.5 * (C[]*{D1 u}) * {D1 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
      EndIf
      If(!Flag_2D)
        { Name Compliance; Value {
      	  Integral { [ 0.5 * (C11[]*{D1 u}) * {D1 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	  Integral { [ 0.5 * (C12[]*{D2 u}) * {D1 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	  Integral { [ 0.5 * (C21[]*{D1 u}) * {D2 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	  Integral { [ 0.5 * (C22[]*{D2 u}) * {D2 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
      EndIf
   
      { Name Mass;
	Value {
	  Integral{ [ rho_mec[] ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      } 
    }
  }
  { Name GetAnalyticSens ; NameOfFormulation PrimalSystem ;
    PostQuantity {
      { Name dMass;
	Value {
	  Integral{ [ dMass[] ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }
    }
  }
  // --------------------------------------------------------------------
  // Eigen system
  // --------------------------------------------------------------------
//  { Name Elasticity2D ; NameOfFormulation Elasticity2D_u_modal ;
//    PostQuantity {
//      { Name designVarPlot;Value {Term {[ designVar[] ];In Domain ; Jacobian Vol;}}}
//      { Name E_mec  ; Value { Term { [ E[] ]; In Domain  ; Jacobian Vol; } } }
//      { Name rho_mec  ; Value { Term { [ rho_mec[] ]; In Domain  ; Jacobian Vol; } } }
//      { Name u_eig  ; Value { Term { [ {u_eig} ]; In Domain  ; Jacobian Vol; } } }
//      { Name u_eigx  ; Value { Term { [CompX[{u_eig}]] ; In Domain  ; Jacobian Vol; } } }
//      { Name u_eigy  ; Value { Term { [CompY[{u_eig}]] ; In Domain  ; Jacobian Vol; } } }
////        { Name d_stiff_eig;  
////          Value { 
////                 Integral { [d_stiff_eig[{D1 u}]]; 
////                 In Domain ; Jacobian Vol  ; Integration I1; }
////          }
////        }
////        { Name d_mass_eig;  
////          Value { 
////                 Integral { [ d_mass_eig[{u}] ]; 
////                 In Domain ; Jacobian Vol  ; Integration I1; }
////          }
////        }
//        { Name norm_eig;  
//          Value { 
//                 Integral { [ norm_eig[{u_eig}] ]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//        { Name d_eig;  
//          Value { 
//                 Integral { [ d_eig[{D1 u_eig},{u_eig}] ]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//    }
//  }
  // --------------------------------------------------------------------
  // Adjoint variable
  // --------------------------------------------------------------------
  { Name AdjointFormulation ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
 
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
  { Name FilteredSens; NameOfFormulation FilterSensitivity ;
    PostQuantity {
      // Field quantities
      { Name psi0_moy; Value { Integral { [ prod_x_dC[]/ElementVol[] ] ; 
          In Domain ; Jacobian Vol ; Integration I1; }}}
      { Name psi0; Value { Term { [ prod_x_dC[] ] ; In Domain ; Jacobian Vol ; }}}
      { Name psi; Value { Term { [ {psi} ] ; In Domain ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt_timesDesVar; 
        Value { Term { [ {psi} ] ; In Domain ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt; 
        Value { Term { [ {psi}/designVar[] ] ; In Domain ; Jacobian Vol ; }}}
      { Name dV; Value { Term { [ designVar[] ] ; In Domain ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
  // --------------------------------------------------------------------------
  // Get state variable 
  // --------------------------------------------------------------------------
 { Name Get_PrimalSystem; NameOfPostProcessing PrimalSystem;
   Operation{
      If(!StrCmp(Flag_optType,"topology"))
       Print[ designVarPlot,  OnElementsOf DomainOpt,LastTimeStepOnly, 
         File StrCat[ResDir, StrCat["designVariablePlot",ExtGmsh]]];
       Echo[StrCat["View[PostProcessing.NbViews-1].ColorTable = {",
            "{125,0,0,0},{125,0,0,2},{125,0,0,5},{125,0,0,7},{125,0,0,10},{125,0,0,12},{125,0,0,15},{125,0,0,18},{125,0,0,20},{125,0,0,23},{125,0,0,25},{125,0,0,28},{125,0,0,30},{125,0,0,33},{125,0,0,36},{125,0,0,38},{125,0,0,41},{125,0,0,43},{125,0,0,46},{125,0,0,48},{125,0,0,51},{125,0,0,54},{125,0,0,56},{125,0,0,59},{125,0,0,61},{125,0,0,64},{125,0,0,66},{125,0,0,69},{125,0,0,72},{125,0,0,74},{125,0,0,77},{125,0,0,79},{125,0,0,82},{125,0,0,85},{125,0,0,87},{125,0,0,90},{125,0,0,92},{125,0,0,95},{125,0,0,97},{125,0,0,100},{125,0,0,103},{125,0,0,105},{125,0,0,108},{125,0,0,110},{125,0,0,113},{125,0,0,115},{125,0,0,118},{125,0,0,121},{125,0,0,123},{125,0,0,126},{125,0,0,128},{125,0,0,131},{125,0,0,133},{125,0,0,136},{125,0,0,139},{125,0,0,141},{125,0,0,144},{125,0,0,146},{125,0,0,149},{125,0,0,151},{125,0,0,154},{125,0,0,157},{125,0,0,159},{125,0,0,162},{125,0,0,164},{125,0,0,167},{125,0,0,170},{125,0,0,172},{125,0,0,175},{125,0,0,177},{125,0,0,180},{125,0,0,182},{125,0,0,185},{125,0,0,188},{125,0,0,190},{125,0,0,193},{125,0,0,195},{125,0,0,198},{125,0,0,200},{125,0,0,203},{125,0,0,206},{125,0,0,208},{125,0,0,211},{125,0,0,213},{125,0,0,216},{125,0,0,218},{125,0,0,221},{125,0,0,224},{125,0,0,226},{125,0,0,229},{125,0,0,231},{125,0,0,234},{125,0,0,236},{125,0,0,239},{125,0,0,242},{125,0,0,244},{125,0,0,247},{125,0,0,249},{125,0,0,252},{125,0,0,255}",
            "};"],
         File StrCat[ResDir,"designVariablePlot",ExtGmsh,".opt"]];
     EndIf

     Print[ u, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["u",ExtGmsh]], LastTimeStepOnly] ;
       Echo[ StrCat["View[PostProcessing.NbViews-1].VectorType=5;",
                    "View[PostProcessing.NbViews-1].DisplacementFactor = 2;"],
         File StrCat[ResDir, StrCat["u",ExtGmsh],".opt"], LastTimeStepOnly] ;

     Print[ Young, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["Young",ExtGmsh]], LastTimeStepOnly] ;

     Print[ rho_mec, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["rho_mec",ExtGmsh]], LastTimeStepOnly] ;

//     Print[ Stresses, OnElementsOf Domain,
// 	    File StrCat[ResDir, StrCat["Stresses",ExtGmsh]], LastTimeStepOnly] ;
//     Print[ StressesX, OnElementsOf Domain,
// 	    File StrCat[ResDir, StrCat["StressesX",ExtGmsh]], LastTimeStepOnly] ;
//     Print[ StressesY, OnElementsOf Domain,
// 	    File StrCat[ResDir, StrCat["StressesY",ExtGmsh]], LastTimeStepOnly] ;
//     Print[ StressesXY, OnElementsOf Domain,
// 	    File StrCat[ResDir, StrCat["StressesXY",ExtGmsh]], LastTimeStepOnly] ;
       Print[ StressVM, OnElementsOf Domain, 
         File StrCat[ResDir, StrCat["StressVM",ExtGmsh]], LastTimeStepOnly];
   }
 }
 { Name Get_PrimalSystem_Func; NameOfPostProcessing PrimalSystem;
   Operation{
     Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["ComplianceElm",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ Mass[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["Mass",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"Mass"], Color "LightYellow" ];

     Print[ Mass, OnElementsOf Domain, 
       File StrCat[ResDir,"ElementMass",ExtGmsh], LastTimeStepOnly] ;

     Print[StressVMInt[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["StressVMInt",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"StressVMInt"], Color "LightYellow" ];

     Print[ Volume[Domain], OnGlobal, Format TimeTable, 
       File StrCat[ResDir,"Volume",ExtGmsh], LastTimeStepOnly, 
       SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

     Print[ Volume, OnElementsOf Domain, 
       File StrCat[ResDir,"ElementVolume",ExtGmsh], LastTimeStepOnly] ;

   }
 }
  // --------------------------------------------------------------------------
  // Get Adjoint variable
  // --------------------------------------------------------------------------
 { Name SolveAdjointSystem; NameOfPostProcessing AdjointFormulation;
   Operation{
     Print[ lambda, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;
     Echo[ StrCat["View[PostProcessing.NbViews-1].VectorType=5;",
                  "View[PostProcessing.NbViews-1].DisplacementFactor=1.0e-07;"],
       File StrCat[ResDir, StrCat["lambda",ExtGmsh],".opt"], LastTimeStepOnly] ;
   }
 }
  // --------------------------------------------------------------------------
  // Get analytic sensitivities (no system) 
  // --------------------------------------------------------------------------
 { Name GetAnalyticSens; NameOfPostProcessing GetAnalyticSens;
   Operation{
     Print[ dMass[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["dMass",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"dMass"], Color "LightYellow" ];
   }
 }
  // --------------------------------------------------------------------------
  // Get Semi-analytic quantities
  // --------------------------------------------------------------------------
 { Name GetSemiAdjointSens; NameOfPostProcessing AdjointFormulation;
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
  { Name Get_AvmVarDomSens_Lie0; NameOfPostProcessing AdjointFormulation;
    Operation{
//       Print[ dlambda_v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["dlambda_v",ExtGmsh]], LastTimeStepOnly] ;
//       Print[ du_v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["du_v",ExtGmsh]], LastTimeStepOnly] ;
    }
  } 
  { Name GetShapeOptAdjointSens; NameOfPostProcessing AdjointFormulation;
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
 { Name GetTopOptAdjointSens; NameOfPostProcessing AdjointFormulation;
   Operation{
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;

//     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,Format NodeTable,
//	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDomNodes",ExtGmsh]]] ;
   }
 }
 { Name Get_SelfAvmFixedDomSens; NameOfPostProcessing AdjointFormulation;//FIXME
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
  { Name FilterSens; NameOfPostProcessing FilteredSens;
    Operation {
      Print [ perfFuncSensFilt_timesDesVar, OnElementsOf DomainOpt, 
        File StrCat[ResDir,"Sensitivity_DesVar_Filtered.pos"] ];
      Print [ perfFuncSensFilt, OnElementsOf DomainOpt, 
        File StrCat[ResDir,"Sensitivity_Filtered.pos"] ];
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
