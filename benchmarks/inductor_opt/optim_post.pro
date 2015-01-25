//po      = "Output - Electromagnetics/";
po      = StrCat["Output - Electromagnetics/", ResId];
poI     = StrCat[po,"0Current [A]/"];
poV     = StrCat[po,"1Voltage [V]/"];
poF     = StrCat[po,"2Flux linkage [Vs]/"];
poJL    = StrCat[po,"3Joule Losses [W]/"];
//po_mec  = "Output - Mechanics/";
po_mec  = StrCat["Output - Mechanics/", ResId];
po_mecT = StrCat[po_mec,"0Torque [Nm]/"];
//po_opt   = "Output - Optimization/";
po_opt  = StrCat["Output - Optimization/", ResId];
po_min  = StrCat["Output/", ResId];
PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name PostOptim ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {
      { Name Flux ; Value {
          Integral { [ SymmetryFactor*Lz*Idir[]*NbWires[]/SurfCoil[]* CompZ[{a}] ] ;
            In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name I ; Value {
	  Term { [ {I} ]   ; In DomainC ; }
	  Term { [ {Ib} ]  ; In DomainB ; } } 
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In DomainC ; }
          Term { [ {Ub} ]  ; In DomainB ; }
        }
      }

      // Dummy quantity - for visualization
      { Name boundary  ; Value { Term { [ 1 ] ; In DomainDummy ; Jacobian Vol ; } } } 

      { Name mur; 
	Value { Term { [ nu0/nu[{d a}] ] ; In Domain ; Jacobian Vol ; } } 
      }

      { Name designVarPlot; 
	Value { Term { [ designVar[] ] ; In Domain ; Jacobian Vol ; } } 
      }

      { Name Volume;Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1; }}}

      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name az  ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [{d a}] ; In Domain ; Jacobian Vol ; } } }
       
      { Name ComplianceELM; Value {
      	  Integral {[nu[{d a}]*{d a}*{d a} ];
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
  // Adjoint variable
  // --------------------------------------------------------------------
  { Name PostOptim_AdjointMethod ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      // Field quantities
      { Name lambdaZ ; Value { Term {[ CompZ[{lambda}] ] ; In Domain ; Jacobian Vol;}}}
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
    }
  }
  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) on fixed mesh
  // --------------------------------------------------------------------
  { Name AvmFixedDomSens; NameOfFormulation AdjointFormulation;
    PostQuantity {
        { Name Sensitivity_AdjointMethod; 
          Value { 
                 Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d lambda}]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
    }
  }
  // --------------------------------------------------------------------
  // Filter sensitivitys
  // --------------------------------------------------------------------
  { Name FilteredSens; NameOfFormulation Filt_sens ;
    PostQuantity {
      // Field quantities
      { Name psi0_moy; Value { Integral { [ prod_x_dC[]/ElementVol[] ] ; In DomainOpt ; Jacobian Vol ; Integration I1; }}}
      { Name psi0; Value { Term { [ prod_x_dC[] ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name psi; Value { Term { [ {psi} ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt_timesDesVar; Value { Term { [ {psi} ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt; Value { Term { [ {psi}/designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name dV; Value { Term { [ designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
 { Name Get_PostQuasiStatic; NameOfPostProcessing MagStaDyn_a_2D;
    Operation {
      Print[ az, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["az",ExtGmsh]], LastTimeStepOnly,
	 AppendTimeStepToFileName 0 ] ;
  
      Print[ a, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["a",ExtGmsh]], LastTimeStepOnly,
	 AppendTimeStepToFileName 0 ] ;

      Print[ Flux[Inds], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Flux_a",ExtGnuplot]], LastTimeStepOnly, Store 11,
	 SendToServer StrCat[poF,"A"],  Color "Pink" ];

      Print[ I, OnRegion Ind_1, Format Table,
	 File > StrCat[ResDir, StrCat["Ia",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[poI,"A"], Color "Pink" ];

      Print[ U, OnRegion Ind_1, Format Table,
         File > StrCat[Dir,"U",ExtGnuplot], LastTimeStepOnly,
         SendToServer StrCat[po,"30U [V]"], Color "LightYellow" ];
  }
 }

 { Name Get_PrimalSystem; NameOfPostProcessing PostOptim;
   Operation{

     Print[ Flux[Inds], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Flux_a",ExtGnuplot]], LastTimeStepOnly, Store 11,
	 SendToServer StrCat[poF,"A"],  Color "Pink" ];

     Print[ I, OnRegion Ind_1, Format Table,
	 File > StrCat[ResDir, StrCat["Ia",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[poI,"A"], Color "Pink" ];

     Print[ U, OnRegion Ind_1, Format Table,
         File > StrCat[Dir,"U",ExtGnuplot], LastTimeStepOnly,
         SendToServer StrCat[po,"30U [V]"], Color "LightYellow" ];

     // Volume and mass
     Print[ Volume[DomainOpt], OnGlobal, Format TimeTable, 
          File StrCat["res/Volume",ExtGmsh], LastTimeStepOnly, 
          SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

     Print[ Volume, OnElementsOf DomainOpt, 
          File StrCat["res/ElementVolume",ExtGmsh], LastTimeStepOnly] ;

     Print[ComplianceELM[DomCompl], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["ComplianceElm",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ComplianceELM[DomCompl], OnGlobal, Format Table,//change this!!!
	 File StrCat[ResDir, StrCat["ComplianceElast",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElast"], Color "LightYellow" ];

    If(Flag_topopt)
      Print[ mur,  OnElementsOf DomainOpt, 
           File StrCat[ResDir, StrCat["mur",ExtGmsh]], LastTimeStepOnly];

      Print[ designVarPlot,  OnElementsOf DomainOpt, 
            File StrCat[ResDir, StrCat["designVariablePlot",ExtGmsh]], LastTimeStepOnly];
    EndIf

    Print[ boundary, OnElementsOf DomainDummy,  
         File StrCat[ResDir, StrCat["DomainBoundary",ExtGmsh]], LastTimeStepOnly] ;

    Print[ az, OnElementsOf Domain,
 	 File StrCat[ResDir, StrCat["aZ",ExtGmsh]], LastTimeStepOnly] ;
 
    Print[ b, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;
 
   }
 }

 { Name Get_AdjointSystem; NameOfPostProcessing PostOptim_AdjointMethod;
   Operation{
     Print[ lambdaZ, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambdaZ",ExtGmsh]], LastTimeStepOnly] ;

     Print[ lambda, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;

   }
 }

 { Name Get_AvmFixedDomSens;NameOfPostProcessing AvmFixedDomSens;
   Operation{
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
   }
 }
  // --------------------------------------------------------------------------
  // Get Filtered Mesh Coordinates
  // --------------------------------------------------------------------------
  { Name Get_FilteredSens; NameOfPostProcessing FilteredSens;
    Operation {
	  Print [ perfFuncSensFilt_timesDesVar, OnElementsOf DomainOpt, 
                  File StrCat["res/Sensitivity_DesVar_Filtered",".pos"] ];
    }
  }
}
