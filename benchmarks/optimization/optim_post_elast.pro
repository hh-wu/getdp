po_min  = "Output/";

PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name PostOptim ; NameOfFormulation PrimalSystem ;
    PostQuantity {
      { Name designVarPlot; 
	Value { Term { [ designVar[] ] ; In Domain ; Jacobian Vol ; } } 
      }

//      { Name eps_2D; Value { Term { [ eps_2D[{D1 u}] ]; In Domain ; Jacobian Vol ;}}}
//      { Name eps_x; Value { Term { [ eps_x[{D1 u}] ]; In Domain ; Jacobian Vol ;}}}
//      { Name eps_y; Value { Term { [ eps_y[{D1 u}] ]; In Domain ; Jacobian Vol ;}}}

      { Name Young; Value { Term { [ E[] ] ; In Domain ; Jacobian Vol ; } } }

      { Name rho_mec; Value { Term { [ rho_mec[] ] ; In Domain ; Jacobian Vol ; } } }

      { Name Volume; Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1;}}}

      { Name u  ; Value { Term { [ {u} ] ; In Domain ; Jacobian Vol ; } } }

      { Name ux  ; Value { Term { [ CompX[{u}] ] ; In Domain ; Jacobian Vol ;}}}

      { Name uy  ; Value { Term { [ CompY[{u}] ] ; In Domain ; Jacobian Vol ;}}}
       
      { Name Compliance; Value {
      	  Integral { [ (C[]*{D1 u})*{D1 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }}
      }

      { Name Stresses; Value {
      	  Integral { [ C[]*{D1 u} ];
            In Domain ; Jacobian Vol  ; Integration I1; }}
      }

      { Name NormStresses; Value {
      	  Integral { [ Norm[C[]*{D1 u}] ];
            In Domain ; Jacobian Vol  ; Integration I1; }}
      }

      { Name StressesX; Value {
      	  Integral { [ CompX[ C[]*{D1 u} ] ];
            In Domain ; Jacobian Vol  ; Integration I1; }}
      }

      { Name StressesY; Value {
      	  Integral { [ CompY[ C[]*{D1 u} ] ];
            In Domain ; Jacobian Vol  ; Integration I1; }}
      }
     
      { Name volumeMaterial;
	Value {
	  Integral{ [ designVar[] ];
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
  { Name PostOptim_AdjointMethod ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
    }
  }
  // --------------------------------------------------------------------
  // Semi-analytic method
  // --------------------------------------------------------------------
  { Name SemiAnalyticQuantitys; NameOfFormulation AdjointFormulation;
    PostQuantity {
       { Name lambda_K_A; // Int(nu*rotA*rotLambda)->lambda*K*A
          Value {
      	     Integral { [ (C[]*{D1 u})*{D1 lambda}];
	       In Domain_Disp ; Jacobian Vol  ; Integration I1; }   
          }
       }
       { Name lambda_g; // Sum_i{lambda*g_i} FIXME
      	Value {
      	     Integral { [ force_node[] * {lambda} ];
	              In Domain_Force ; Jacobian Vol  ; Integration I1; }
//      	     Integral { [CompX[force_node[]]*Unit[{u_dum_x}]*Unit[CompX[{lambda}]]];
//	              In Domain_Force ; Jacobian Sur  ; Integration I1; }
//      	     Integral { [CompY[force_node[]]*Unit[{u_dum_y}]*Unit[CompY[{lambda}]]];
//	              In Domain_Force ; Jacobian Sur  ; Integration I1; }      	      	
      	}
       }
    }
  }
  // --------------------------------------------------------------------------
  // Adjoint sensitivity Lie (variable domain)
  // --------------------------------------------------------------------------
//  { Name AvmVarDomSens_lie0 ;NameOfFormulation AdjointFormulation;
//    PostQuantity {    
//        { Name dlambda_v ; 
//          Value { Term { [ d_lambda[]*velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
//        
//        { Name du_v ; 
//          Value { Term { [ d_u[]*velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
//    }
//  }

  { Name AvmVarDomSens_lie ;NameOfFormulation AdjointFormulation;
    PostQuantity {    
//        { Name dlambda_v ; 
//          Value { Term { [ d_lambda[]*velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
//        
//        { Name du_v ; 
//          Value { Term { [ d_u[]*velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
                
        { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}

        { Name rho_sensF ; 
          Value { Term { [ dF_adjoint_lie[{D1 u}] ] ; In Domain ; Jacobian Vol ; }}}

        { Name rho_sensK ; 
          Value { Term { [ d_bilin_lie[{D1 u},{D2 u},{D1 lambda},{D2 lambda}]]  ; 
                   In Domain ; Jacobian Vol ; }}}

        { Name sensF ; 
          Value { 
              Integral{[dF_adjoint_lie[{D1 u}]]; // d{f}/d{tau}(phi)
                In Domain ; Jacobian Vol ; Integration I1;}
          }
        }
        { Name sensK ; 
          Value { 
              Integral{[ d_bilin_lie[ {D1 u}, {D1 lambda}] ];//d{a}/d{tau}(A,lambda)
                In Domain; Jacobian Vol ; Integration I1;}
           }
        }
        { Name AvmVarDomSens; 
          Value { 
            Integral { [ dF_adjoint_lie[ {D1 u} ] ];  // d{f}/d{tau}(phi)
              In DomainFunc ; Jacobian Vol ; Integration I1 ;}
            Integral { [ -d_bilin_lie[ {D1 u},{D1 lambda} ] ];
              In Domain ; Jacobian Vol ; Integration I1 ; }
          } 
        }
      }
    }
  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) on fixed mesh
  // --------------------------------------------------------------------
  { Name AvmFixedDomSens; NameOfFormulation AdjointFormulation;
    PostQuantity {
        { Name Sensitivity_AdjointMethod; 
          Value { 
               Integral {[-0.5*(C_prime[]*{D1 u})*{D1 lambda}]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
    }
  }
  { Name SelfAvmFixedDomSens; NameOfFormulation AdjointFormulation;
    PostQuantity {
        { Name Sensitivity_AdjointMethod; 
          Value { 
               Integral {[-0.5*(C_prime[]*{D1 u})*{D1 u}]; 
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
             In DomainOpt ; Jacobian Vol ; Integration I1; }}}
      { Name psi0; Value { Term { [ prod_x_dC[] ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name psi; Value { Term { [ {psi} ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt_timesDesVar; 
        Value { Term { [ {psi} ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt; 
        Value { Term { [ {psi}/designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name dV; Value { Term { [ designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
  // --------------------------------------------------------------------------
  // Get state variable 
  // --------------------------------------------------------------------------
 { Name Get_PrimalSystem; NameOfPostProcessing PostOptim;
   Operation{

//     // Volume and mass
//     Print[ Volume[Domain], OnGlobal, Format TimeTable, 
//          File StrCat["res/Volume",ExtGmsh], LastTimeStepOnly, 
//          SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

//     Print[ Volume, OnElementsOf Domain, 
//          File StrCat["res/ElementVolume",ExtGmsh], LastTimeStepOnly] ;

//     Print[ Volume, OnElementsOf Domain,Format NodeTable, 
//          File StrCat["res/ElementVolumeNodes",ExtGmsh], LastTimeStepOnly] ;
 
     If(Flag_topopt)
       Print[ designVarPlot,  OnElementsOf DomainOpt,LastTimeStepOnly, 
            File StrCat[ResDir, StrCat["designVariablePlot",ExtGmsh]]];
     EndIf

     Print[ u, OnElementsOf Domain,
 	    File StrCat[ResDir, StrCat["u",ExtGmsh]], LastTimeStepOnly] ;

//     Print[ eps_2D, OnElementsOf Domain,
//	    File StrCat[ResDir, StrCat["eps_2D",ExtGmsh]], LastTimeStepOnly] ;
//     Print[ eps_x, OnElementsOf Domain,
//	    File StrCat[ResDir, StrCat["eps_x",ExtGmsh]], LastTimeStepOnly] ;
//     Print[ eps_y, OnElementsOf Domain,
//	    File StrCat[ResDir, StrCat["eps_y",ExtGmsh]], LastTimeStepOnly] ;

     Print[ Young, OnElementsOf Domain,
 	    File StrCat[ResDir, StrCat["Young",ExtGmsh]], LastTimeStepOnly] ;

     Print[ rho_mec, OnElementsOf Domain,
 	    File StrCat[ResDir, StrCat["rho_mec",ExtGmsh]], LastTimeStepOnly] ;

     Print[ Stresses, OnElementsOf Domain,
 	    File StrCat[ResDir, StrCat["Stresses",ExtGmsh]], LastTimeStepOnly] ;

   }
 }
 { Name Get_PrimalSystem_Func; NameOfPostProcessing PostOptim;
   Operation{

     Print[Compliance[DomainFunc], OnGlobal, Format TimeTable,
	 File StrCat[ResDir, StrCat["ComplianceElm",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ Volume[Domain], OnGlobal, Format TimeTable, 
          File StrCat["res/Volume",ExtGmsh], LastTimeStepOnly, 
          SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

     Print[ Volume, OnElementsOf Domain, 
          File StrCat["res/ElementVolume",ExtGmsh], LastTimeStepOnly] ;

     Print[ Volume, OnElementsOf Domain,Format NodeTable, 
          File StrCat["res/ElementVolumeNodes",ExtGmsh], LastTimeStepOnly] ;

   }
 }
  // --------------------------------------------------------------------------
  // Get Adjoint variable
  // --------------------------------------------------------------------------
 { Name SolveAdjointSystem; NameOfPostProcessing PostOptim_AdjointMethod;
   Operation{
     Print[ lambda, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;
   }
 }
  // --------------------------------------------------------------------------
  // Get Semi-analytic quantities
  // --------------------------------------------------------------------------
 { Name GetSemiAdjointSens; NameOfPostProcessing SemiAnalyticQuantitys;
   Operation{
     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];
     Print[ lambda_g[Domain],OnGlobal, Format Table,
	   File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
   }
 }
  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) with Lie approach 
  // --------------------------------------------------------------------
  { Name Get_AvmVarDomSens_Lie0; NameOfPostProcessing AvmVarDomSens_lie;
    Operation{
//       Print[ dlambda_v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["dlambda_v",ExtGmsh]], LastTimeStepOnly] ;
//       Print[ du_v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["du_v",ExtGmsh]], LastTimeStepOnly] ;
    }
  } 
  { Name GetShapeOptAdjointSens; NameOfPostProcessing AvmVarDomSens_lie;
    Operation{
       Print[ v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;
       Print[ rho_sensF, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["rho_sensF",ExtGmsh]], LastTimeStepOnly] ;
       Print[ rho_sensK, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["rho_sensK",ExtGmsh]], LastTimeStepOnly] ;
       Print[ sensF[DomainFunc], OnGlobal, Format Table, 
              File StrCat[ResDir, StrCat["d_func", ExtGnuplot]], 
	      SendToServer StrCat[po_min,"d_func"], LastTimeStepOnly];
       Print[ sensK[Domain_Disp], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["d_bilin", ExtGnuplot]],  
              SendToServer StrCat[po_min,"d_bilin"], LastTimeStepOnly];
       Print[ AvmVarDomSens[Domain], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["AvmVarDomSens", ExtGnuplot]], 
              SendToServer StrCat[po_min,"AvmVarDomSens"], LastTimeStepOnly];
    }
  } 
  // --------------------------------------------------------------------------
  // Get Sensitivity
  // --------------------------------------------------------------------------
 { Name Get_AvmFixedDomSens;NameOfPostProcessing AvmFixedDomSens;
   Operation{
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;

     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,Format NodeTable,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDomNodes",ExtGmsh]]] ;
   }
 }
 { Name Get_SelfAvmFixedDomSens;NameOfPostProcessing SelfAvmFixedDomSens;//FIXME
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
                  File StrCat["res/Sensitivity_DesVar_Filtered",".pos"] ];
	  Print [ perfFuncSensFilt_timesDesVar, OnElementsOf DomainOpt,Format NodeTable, 
                  File StrCat["res/Sensitivity_DesVar_FilteredNodes",".pos"] ];
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
