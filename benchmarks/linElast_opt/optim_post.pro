po_min  = "Output/";

PostProcessing {
  { Name u_Mec_Post ; NameOfFormulation u_Mec ;
    PostQuantity {
      { Name u; Value { Term { [ {u} ] ; In Domain ; } }} 
      { Name um ; Value { Term { [Norm[{u}]] ; In Domain  ; } } }
      { Name F ; Value { Term { [ force_mec[] ]; In Domain_Force ; } } }   
      { Name StressVM; Value { Term {[sigmaVM[{D1 u},{D2 u}]];In Domain;}}}
      { Name StressVMInt; Value {
      	Integral { [ sigmaVM[{D1 u},{D2 u}]^2.0 ];
          In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }
      { Name Volume; Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1;}}}
      { Name designVarPlot; Value{Term{[designVar[]]; In Domain; Jacobian Vol;}}}
      If(Flag_2D)
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
}

PostOperation {
  // --------------------------------------------------------------------------
  // Get state variable 
  // --------------------------------------------------------------------------
 { Name u_Mec_Post; NameOfPostProcessing u_Mec_Post;
   Operation{
     Print[ u, OnElementsOf Domain,File StrCat[ResDir,"u",ExtGmsh]] ;

     Print[ StressVM, OnElementsOf Domain,File StrCat[ResDir,"VM",ExtGmsh]] ;

     Print[ um,OnElementsOf Domain,File StrCat[ResDir,"um",ExtGmsh]] ;

     Print[ F, OnElementsOf Domain_Force,File StrCat[ResDir,"F",ExtGmsh]] ;

     Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["ComplianceElm",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ Mass[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["Mass",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"Mass"], Color "LightYellow" ];

     Print[ StressVMInt[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["StressVM",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"StressVM"], Color "LightYellow" ];

     Print[ Volume[Domain], OnGlobal, Format TimeTable, 
       File StrCat[ResDir,"Volume",ExtOnelabScal], LastTimeStepOnly, 
       SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

     Print[ Mass, OnElementsOf Domain, 
       File StrCat[ResDir,"ElementMass",ExtOnelabVec], LastTimeStepOnly] ;

     Print[ Volume, OnElementsOf Domain, 
       File StrCat[ResDir,"ElementVolume",ExtOnelabVec], LastTimeStepOnly] ;

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
