po_min  = "Output/";

PostProcessing {
  { Name u_Mec ; NameOfFormulation u_Mec ;
    PostQuantity {
      { Name v; Value {Term{[velocity[{v_1},{v_2},{v_3}]];In Domain;Jacobian Vol;}}}
      { Name v_1; Value {Term{[ {v_1} ]; In Domain; Jacobian Vol;}}}
      { Name u; Value { Term { [ {u} ] ; In Domain ; } }} 
      { Name u_1; Value { Term { [ CompX[{u}] ] ; In Domain ; } }} 
      { Name u_2; Value { Term { [ CompY[{u}] ] ; In Domain ; } }} 
      { Name u_3; Value { Term { [ CompZ[{u}] ] ; In Domain ; } }} 
      { Name um ; Value { Term { [Norm[{u}]] ; In Domain  ; } } }
      { Name F ; Value { Term { [ force_mec[] ]; In Domain_Force ; } } }
      { Name E ; Value { Term { [ E[{xe}] ]; In Domain ; } } }
      { Name rho ; Value { Term { [ rho[{xe}] ]; In Domain ; } } }   

      { Name StressVM; Value { Term {[sigmaVM[{D1 u},{D2 u},{xe}]];In Domain;}}}
      { Name StressVMInt; Value {
      	Integral { [ sigmaVM[{D1 u},{D2 u},{xe}]^degVM ];
          In Domain ; Jacobian SurLinVol  ; Integration I1; }
        }
      }
//      { Name StressVMInt2; Value {
//      	Integral { [ sigmaVM[{D1 u},{D2 u},{xe}]^2.0 ];
//          In Domain ; Jacobian SurLinVol  ; Integration I1; }
//        }
//      }
//      { Name StressVMInt3; Value {
//      	Integral { [ sigmaVM[{D1 u},{D2 u},{xe}]^3.0 ];
//          In Domain ; Jacobian SurLinVol  ; Integration I1; }
//        }
//      }
//      { Name StressVMInt4; Value {
//      	Integral { [ sigmaVM[{D1 u},{D2 u},{xe}]^4.0 ];
//          In Domain ; Jacobian SurLinVol  ; Integration I1; }
//        }
//      }
//      { Name StressVMInt5; Value {
//      	Integral { [ sigmaVM[{D1 u},{D2 u},{xe}]^5.0 ];
//          In Domain ; Jacobian SurLinVol  ; Integration I1; }
//        }
//      }


      { Name StressVMNorm2; Value {
      	Integral { [ sigmaVM[{D1 u},{D2 u},{xe}]^2.0 ];
          In Domain ; Jacobian SurLinVol  ; Integration I1; }
        }
      }
//      { Name StressVM_pNorm;Value{Term{Type Global;[$VM_P^(1/degVM)];In DomainFunc;}}} 
      { Name StressVM_pNorm;Value{Term{Type Global;[($VM_P/15.874)^(1/degVM)];In DomainFunc;}}} 

//      { Name StressVM_pNorm2;Value{Term{Type Global;[$VM_P2^(1/2.)];In DomainFunc;}}} 
//      { Name StressVM_pNorm3;Value{Term{Type Global;[$VM_P3^(1/3.)];In DomainFunc;}}} 
//      { Name StressVM_pNorm4;Value{Term{Type Global;[$VM_P4^(1/4.)];In DomainFunc;}}} 
//      { Name StressVM_pNorm5;Value{Term{Type Global;[$VM_P5^(1/5.)];In DomainFunc;}}} 

      { Name Volume; Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1;}}}
      { Name designVar; Value{Term{[designVar[]]; In Domain; Jacobian Vol;}}}
      { Name xe; Value{Term{[{xe}]; In Domain; Jacobian Vol;}}}
      { Name Compliance; Value {
      	Integral { [ 0.5 * bilin_uu[{D1 u},{D2 u},{xe}] ];
          In Domain ; Jacobian SurLinVol ; Integration I1; }
        }
      }
      { Name energy; 
	Value{
	  Term{
            [ 0.5 * bilin_uu[{D1 u},{D2 u},{xe}] ]; 
            In Domain; Jacobian Vol;}
        }
      }
      { Name Mass;
	Value {
	  Integral{ [ rho[{xe}] ];
	    In Domain; Jacobian SurLinVol; Integration I1; }
	}
      } 
      
    }
  }
  // --------------------------------------------------------------------
  // Eigen system
  // --------------------------------------------------------------------
  { Name u_Mec_eig ; NameOfFormulation u_Mec_eig ;
    PostQuantity {
      { Name u  ; Value { Term { [ {u} ]; In Domain  ; Jacobian Vol; }}}

      { Name eig2 ; Value { Term { Type Global;[ eig2[] ]; In Domain; Jacobian Vol; }}}

      { Name mass_eig;  
        Value { 
          Integral { [ mass_eig[{u}] ]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }

      { Name stiff_eig; Value {
      	Integral { [ bilin_uu[{D1 u},{D2 u},{xe}] ];
          In Domain ; Jacobian SurLinVol ; Integration I1; }
        }
      }

      { Name d_eig_TO;  
        Value { 
          Integral { [ d_eig_TO[{u},{D1 u},{D2 u}] ]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }

    }
  }
}

PostOperation {
// { Name xe; NameOfPostProcessing xe;
//   Operation{
//       Print[ xe, OnElementsOf Domain, 
//         File StrCat[ResDir,"desVarPlot_xe",ExtGmsh], LastTimeStepOnly] ;
//   } 
// }
  // --------------------------------------------------------------------------
  // Get state variable 
  // --------------------------------------------------------------------------
 { Name u_TO; NameOfPostProcessing u_Mec;
   Operation{
     Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["ComplianceElm",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];
     Print[Compliance, OnElementsOf Domain,
       File StrCat[ResDir,"energyElem",ExtGmsh],OverrideTimeStepValue optimIter] ;
     Print[ Volume, OnElementsOf Domain, 
       File StrCat[ResDir,"ElementVolume",ExtOnelabVec], LastTimeStepOnly] ;
     If (!Flag_projFuncSpace_xe)
       Print[ designVar, OnElementsOf Domain, 
         File StrCat[ResDir,"xe_gen",ExtGmsh],LastTimeStepOnly, OverrideTimeStepValue optimIter] ;
     Else
	Print[ xe, OnElementsOf Domain, 
         File StrCat[ResDir,"xe_trans",ExtGmsh],LastTimeStepOnly, OverrideTimeStepValue optimIter] ;
     EndIf
   }
 }

 { Name u_Mec; NameOfPostProcessing u_Mec;
   Operation{
//     Print[ E, OnElementsOf Domain,File StrCat[ResDir,"E",ExtGmsh]] ;
//     Print[ rho, OnElementsOf Domain,File StrCat[ResDir,"rho",ExtGmsh]] ;
     Print[ u, OnElementsOf Domain,File StrCat[ResDir,"u",ExtGmsh]] ;
     Print[ energy, OnElementsOf Domain,File StrCat[ResDir,"energyElem",ExtGmsh]] ;

//     For i In {1:3}
//       Print[ u~{i}, OnElementsOf Domain, Format NodeTable,
//         File Sprintf["res/u_%g.txt", i], LastTimeStepOnly] ;
//     EndFor
     Print[ StressVM, OnElementsOf Domain,
       File StrCat[ResDir,"VM",ExtOnelabVec],OverrideTimeStepValue optimIter];
//     Print[ um,OnElementsOf Domain,File StrCat[ResDir,"um",ExtGmsh]] ;
     Print[ F, OnElementsOf Domain_Force,File StrCat[ResDir,"F",ExtGmsh]] ;

//     Print[ v, OnElementsOf Domain, File "res/v_an.pos", LastTimeStepOnly] ;
//     Print[ v_1, OnElementsOf Domain, File "res/v_1_an.pos", LastTimeStepOnly] ;
     Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["ComplianceElm",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ Mass[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["Mass",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"Mass"], Color "LightYellow" ];

     Print[ StressVMInt[DomainFunc], OnGlobal, Format TimeTable,Color "LightYellow",
       File StrCat[ResDir, StrCat["StressVM",ExtOnelabScal]], LastTimeStepOnly,
       StoreInVariable $VM_P,SendToServer StrCat[po_min,"StressVM"] ];

//     Print[ StressVMInt2[DomainFunc], OnGlobal, Format TimeTable,Color "LightYellow",
//       File StrCat[ResDir, StrCat["StressVM2",ExtOnelabScal]], LastTimeStepOnly,
//       StoreInVariable $VM_P2,SendToServer StrCat[po_min,"StressVM2"] ];
//     Print[ StressVMInt3[DomainFunc], OnGlobal, Format TimeTable,Color "LightYellow",
//       File StrCat[ResDir, StrCat["StressVM3",ExtOnelabScal]], LastTimeStepOnly,
//       StoreInVariable $VM_P3,SendToServer StrCat[po_min,"StressVM3"] ];
//     Print[ StressVMInt4[DomainFunc], OnGlobal, Format TimeTable,Color "LightYellow",
//       File StrCat[ResDir, StrCat["StressVM4",ExtOnelabScal]], LastTimeStepOnly,
//       StoreInVariable $VM_P4,SendToServer StrCat[po_min,"StressVM4"] ];
//     Print[ StressVMInt5[DomainFunc], OnGlobal, Format TimeTable,Color "LightYellow",
//       File StrCat[ResDir, StrCat["StressVM5",ExtOnelabScal]], LastTimeStepOnly,
//       StoreInVariable $VM_P5,SendToServer StrCat[po_min,"StressVM5"] ];

     Print[ StressVM_pNorm, OnRegion DomainFunc, Format TimeTable,
       File StrCat[ResDir, StrCat["StressVM_pNorm",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"StressVM_pNorm"], Color "LightYellow"];

//     Print[ StressVM_pNorm2, OnRegion DomainFunc, Format TimeTable,
//       File StrCat[ResDir, StrCat["StressVM_pNorm2",ExtOnelabScal]], LastTimeStepOnly,
//       SendToServer StrCat[po_min,"StressVM_pNorm2"], Color "LightYellow"];
//     Print[ StressVM_pNorm3, OnRegion DomainFunc, Format TimeTable,
//       File StrCat[ResDir, StrCat["StressVM_pNorm3",ExtOnelabScal]], LastTimeStepOnly,
//       SendToServer StrCat[po_min,"StressVM_pNorm3"], Color "LightYellow"];
//     Print[ StressVM_pNorm4, OnRegion DomainFunc, Format TimeTable,
//       File StrCat[ResDir, StrCat["StressVM_pNorm4",ExtOnelabScal]], LastTimeStepOnly,
//       SendToServer StrCat[po_min,"StressVM_pNorm4"], Color "LightYellow"];
//     Print[ StressVM_pNorm5, OnRegion DomainFunc, Format TimeTable,
//       File StrCat[ResDir, StrCat["StressVM_pNorm5",ExtOnelabScal]], LastTimeStepOnly,
//       SendToServer StrCat[po_min,"StressVM_pNorm5"], Color "LightYellow"];

     Print[ StressVMNorm2, OnRegion DomainFunc, Format TimeTable,
       File StrCat[ResDir, StrCat["StressVMNorm2",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"StressVMNorm2"], Color "LightYellow"];

//     Print[ Volume[Domain], OnGlobal, Format TimeTable, 
//       File StrCat[ResDir,"Volume",ExtOnelabScal], LastTimeStepOnly, 
//       SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

//     Print[ Mass, OnElementsOf Domain, 
//       File StrCat[ResDir,"ElementMass",ExtOnelabVec], LastTimeStepOnly] ;

//     Print[ Volume, OnElementsOf Domain, 
//       File StrCat[ResDir,"ElementVolume",ExtOnelabVec], LastTimeStepOnly] ;

     //If (!Flag_projFuncSpace_xe)
     //  Print[ desVarPlot, OnElementsOf Domain, 
     //    File StrCat[ResDir,"xe_gen",ExtGmsh], LastTimeStepOnly] ;
     //Else
	Print[ xe, OnElementsOf Domain, 
         File StrCat[ResDir,"xe_trans",ExtGmsh], LastTimeStepOnly] ;
     //EndIf
   }
 }

  { Name u_Mec_eig ; NameOfPostProcessing u_Mec_eig;
    Operation {
      Print[ eig2, OnRegion Domain, Format Table,
        File StrCat[ResDir,"eig2",ExtOnelabVec2],
        SendToServer StrCat[po_min,"eig2"], Color "LightYellow"] ;

      Print[ u, OnElementsOf Domain, File StrCat[ResDir,"u.pos"]] ;
//      Echo[ Str["View[PostProcessing.NbViews-1].VectorType=5;",
//		"View[PostProcessing.NbViews-1].DisplacementFactor = 0.1;"],
//        File "res/u.pos.opt"] ;
	// gmsh res/u.pos res/u.pos.opt

     Print[ mass_eig[DomainOpt], OnGlobal, Format Table,
       File StrCat[ResDir, "mass_eig",ExtOnelabVec2],     
       SendToServer StrCat[po_min,"mass_eig"], Color "LightYellow"] ;

     Print[ stiff_eig[DomainOpt], OnGlobal, Format Table,
       File StrCat[ResDir, "stiff_eig",ExtGmsh],     
       SendToServer StrCat[po_min,"stiff_eig"], Color "LightYellow"] ;

     If(!StrCmp(Flag_optType,"topology"))
       Print[ d_eig_TO, OnElementsOf DomainOpt, 
         File StrCat[ResDir,"d_eig_TO",ExtOnelabSens] ];
     EndIf
    }
  }
}
