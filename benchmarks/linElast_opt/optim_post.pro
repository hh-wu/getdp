po_min  = "Output/";

PostProcessing {
  { Name u_Mec ; NameOfFormulation u_Mec ;
    PostQuantity {
      { Name u; Value { Term { [ {u} ] ; In Domain ; } }} 
      { Name um ; Value { Term { [Norm[{u}]] ; In Domain  ; } } }
      { Name F ; Value { Term { [ force_mec[] ]; In Domain_Force ; } } }
      { Name E ; Value { Term { [ E[] ]; In Domain ; } } }
      { Name rho ; Value { Term { [ rho[] ]; In Domain ; } } }
         

      { Name StressVM; Value { Term {[sigmaVM[{D1 u},{D2 u}]];In Domain;}}}
      { Name StressVMInt; Value {
      	Integral { [ sigmaVM[{D1 u},{D2 u}]^degVM ];
          In Domain ; Jacobian SurLinVol  ; Integration I1; }
        }
      }
      { Name StressVM_pNorm;Value{
        Term{Type Global; [$VM_P ^ (1/degVM)];In DomainFunc ; } }} 

      { Name Volume; Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1;}}}
      { Name designVarPlot; Value{Term{[designVar[]]; In Domain; Jacobian Vol;}}}

      { Name Compliance; Value {
      	Integral { [ 0.5 * bilin_uu[{D1 u},{D2 u}] ];
          In Domain ; Jacobian SurLinVol ; Integration I1; }
        }
      }
   
      { Name Mass;
	Value {
	  Integral{ [ rho[] ];
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
      	Integral { [ bilin_uu[{D1 u},{D2 u}] ];
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
  // --------------------------------------------------------------------------
  // Get state variable 
  // --------------------------------------------------------------------------
 { Name u_Mec; NameOfPostProcessing u_Mec;
   Operation{
     Print[ E, OnElementsOf Domain,File StrCat[ResDir,"E",ExtGmsh]] ;
     Print[ rho, OnElementsOf Domain,File StrCat[ResDir,"rho",ExtGmsh]] ;
     Print[ u, OnElementsOf Domain,File StrCat[ResDir,"u",ExtGmsh]] ;
     Print[ StressVM, OnElementsOf Domain,File StrCat[ResDir,"VM",ExtOnelabVec]] ;
     //Print[ um,OnElementsOf Domain,File StrCat[ResDir,"um",ExtGmsh]] ;
     Print[ F, OnElementsOf Domain_Force,File StrCat[ResDir,"F",ExtGmsh]] ;

     Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["ComplianceElm",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ Mass[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["Mass",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"Mass"], Color "LightYellow" ];

     Print[ StressVMInt[DomainFunc], OnGlobal, Format TimeTable,
       File StrCat[ResDir, StrCat["StressVM",ExtOnelabScal]], LastTimeStepOnly,
       StoreInVariable $VM_P,SendToServer StrCat[po_min,"StressVM"],Color "LightYellow" ];

     Print[ StressVM_pNorm, OnRegion DomainFunc, Format TimeTable,
       File StrCat[ResDir, StrCat["StressVM_pNorm",ExtOnelabScal]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"StressVM_pNorm"], Color "LightYellow"];

     Print[ Volume[Domain], OnGlobal, Format TimeTable, 
       File StrCat[ResDir,"Volume",ExtOnelabScal], LastTimeStepOnly, 
       SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

//     Print[ Mass, OnElementsOf Domain, 
//       File StrCat[ResDir,"ElementMass",ExtOnelabVec], LastTimeStepOnly] ;

//     Print[ Volume, OnElementsOf Domain, 
//       File StrCat[ResDir,"ElementVolume",ExtOnelabVec], LastTimeStepOnly] ;

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

