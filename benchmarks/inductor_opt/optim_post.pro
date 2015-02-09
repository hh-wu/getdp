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
  { Name MagStaDyn_a_2D2 ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {
      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }
      { Name az ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [ {d a} ] ; In Domain ; Jacobian Vol ; } } }
      { Name nb  ; Value { Term { [ Norm[{d a}] ] ; In Domain ; Jacobian Vol ; } } }
      { Name br ; Value { Term { [ br[] ] ; In DomainM ; Jacobian Vol ; } } }

      { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name js0 ; Value { Term { [ js0[] ] ; In DomainS ; Jacobian Vol ; } } }

      { Name j  ; Value {
          Term { [ -sigma[]*(Dt[{a}]+{ur}) ]; In DomainC ; Jacobian Vol ; }
        }
      }

      { Name ir ; Value { Term { [ {ir} ] ; In Inds ; Jacobian Vol ; } } }

      { Name jz ; Value {
          Term { [ CompZ[-sigma[]*(Dt[{a}]+{ur})] ]       ; In DomainC ; Jacobian Vol ; }
        }
      }

      { Name rhoj2 ;
        Value {
          Term { [ sigma[]*SquNorm[ Dt[{a}]+{ur}] ] ; In Region[{DomainC}] ; Jacobian Vol ; }
          Term { [ 1./sigma[]*SquNorm[ IA[]*{ir} ] ] ; In Inds  ; Jacobian Vol ; }
        }
      }

      { Name JouleLosses ;
        Value {
          Integral { [ SymmetryFactor*Lz*sigma[] * SquNorm[ Dt[{a}]+{ur} ] ];
            In Region[{DomainC}] ; Jacobian Vol ; Integration I1 ; }
          Integral { [ SymmetryFactor*Lz*1./sigma[]*SquNorm[ IA[]*{ir} ] ];
            In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name MagEnergy ; Value {
          Integral { [ SymmetryFactor*Lz* 1/2 *nu[{d a}]*{d a}*{d a} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ; } } }

      { Name Flux ; Value {
          Integral { [ SymmetryFactor*Lz*Idir[]*NbWires[]/SurfCoil[]* CompZ[{a}] ] ;
            In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name ComplexPower ; // S = P + i*Q
        Value {
          Integral { [ Complex[ sigma[]*SquNorm[Dt[{a}]+{ur}], nu[]*SquNorm[{d a}] ] ] ;
            In Region[{DomainC}] ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In DomainC ; }
          Term { [ {Ub} ]  ; In DomainB ; }
        }
      }

      { Name I ; Value {
          Term { [ {I} ]   ; In DomainC ; }
          Term { [ {Ib} ]  ; In DomainB ; }
        }
      }

      { Name S ; Value {
          Term { [ {U}*Conj[{I}] ]    ; In DomainC ; }
          Term { [ {Ub}*Conj[{Ib}] ]  ; In DomainB ; }
        }
      }

      // Getting the value of some functions
     For k In {0:NbAvailableMagCircuits-1}
       { Name Reluctance~{k} ; Value { Term { Type Global; [ Reluctance~{k}[] ] ; In DomainDummy ; } } }
       { Name Inductance~{k} ; Value { Term { Type Global; [ Inductance~{k}[] ] ; In DomainDummy ; } } }
     EndFor

      { Name Inductance_from_Flux ; Value { Term { Type Global; [ #11*1e3/II ] ; In DomainDummy ; } } } // Flux stored in register #11
      { Name Inductance_from_MagEnergy ; Value { Term { Type Global; [ 2*#22*1e3/(II*II) ] ; In DomainDummy ; } } } // MagEnergy stored in register #22

    }//PostQuantity
  }// MagStaDyn_a_2D

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

      { Name ir ; Value { Term { [ {ir} ] ; In Inds ; Jacobian Vol ; } } }

      { Name I ; Value {
	  Term { [ {I} ]   ; In DomainC ; }
	  Term { [ {Ib} ]  ; In DomainB ; } } 
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In DomainC ; }
          Term { [ {Ub} ]  ; In DomainB ; }
        }
      }

      { Name js0 ; Value { Term { [ js0[] ] ; In DomainS ; Jacobian Vol ; } } }

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

      { Name Force_Maxwell ;
	Value {
	  Integral {
	    [ T_max[{d a}] * XYZ[]];
	     In Domain ; Jacobian Vol  ; Integration I1; }
	}
      }

     { Name Force_Maxwell_x ;
	Value {
	  Integral {
	    [ CompX[ T_max[{d a}] * XYZ[] ] ];
	     In Domain ; Jacobian Vol  ; Integration I1; }
	}
     }

     { Name Force_Maxwell_y ;
	Value {
	  Integral {
	    [ CompY[ T_max[{d a}] * XYZ[] ] ];
	     In Domain ; Jacobian Vol  ; Integration I1; }
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

  {Name Get_Analytical2; NameOfPostProcessing MagStaDyn_a_2D2;
   Operation{
     For k In {0:NbAvailableMagCircuits-1}
       Print[ Reluctance~{k}, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
              File StrCat[Dir,Sprintf("Reluctance%g",k),ExtGnuplot] ];
       Print[ Inductance~{k}, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
              File StrCat[Dir, Sprintf("Inductance%g",k),ExtGnuplot],
              SendToServer StrCat[po,Sprintf("6%gInductance Magnetic Circuit %g [mH]", k, k)], Color "LightYellow" ];
    EndFor
  }
 }

 { Name Get_PrimalSystem; NameOfPostProcessing PostOptim;
   Operation{
     Print[ ir, OnElementsOf Inds, File StrCat[Dir,"ir",ExtGmsh], LastTimeStepOnly ] ;
     Print[ js0, OnElementsOf DomainS,File StrCat[Dir,"js0",ExtGmsh],LastTimeStepOnly ] ;

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

//     Print[ComplianceELM[DomCompl], OnGlobal, Format Table,//change this!!!
//	 File StrCat[ResDir, StrCat["ComplianceElast",ExtGnuplot]], LastTimeStepOnly,
//	 SendToServer StrCat[po_min,"ComplianceElast"], Color "LightYellow" ];

    Print[ mur,  OnElementsOf Domain, 
           File StrCat[ResDir, StrCat["mur",ExtGmsh]], LastTimeStepOnly];

    If(Flag_topopt)

      Print[ designVarPlot,  OnElementsOf DomainOpt, 
            File StrCat[ResDir, StrCat["designVariablePlot",ExtGmsh]], LastTimeStepOnly];
    EndIf

    Print[ boundary, OnElementsOf DomainDummy,  
         File StrCat[ResDir, StrCat["DomainBoundary",ExtGmsh]], LastTimeStepOnly] ;

    Print[ az, OnElementsOf Domain,
 	 File StrCat[ResDir, StrCat["aZ",ExtGmsh]], LastTimeStepOnly] ;
 
    Print[ b, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;

    Print[ Force_Maxwell, OnElementsOf DomCompl,
	 File StrCat[ResDir, StrCat["Force_Maxwell",ExtGmsh]], LastTimeStepOnly];

    Print[ Force_Maxwell_x, OnElementsOf DomCompl,
	 File StrCat[ResDir, StrCat["Force_Maxwell_x",ExtGmsh]], LastTimeStepOnly];

    Print[ Force_Maxwell_y, OnElementsOf DomCompl,
	 File StrCat[ResDir, StrCat["Force_Maxwell_y",ExtGmsh]], LastTimeStepOnly];
 
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
