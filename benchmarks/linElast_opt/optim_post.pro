PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name PostOptim ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {
      { Name boundary  ; Value { Term { [ 1 ] ; In Dummy ; Jacobian Vol ; } } } // Dummy quantity - for visualization
      //--------------------------------------------------------------------
      { Name mur; 
	Value { Term { [ nu0/nu[{d a}] ] ; In Domain ; Jacobian Vol ; } } 
      }
      { Name designVarPlot; 
	Value { Term { [ designVar[] ] ; In Domain ; Jacobian Vol ; } } 
      }
      //--------------------------------------------------------------------

      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name az  ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [{d a}] ; In Domain ; Jacobian Vol ; } } }
 
      { Name RotorPosition_deg ;
	Value { Term { Type Global; [ RotorPosition[] * 180/Pi ] ; In DomainDummy ; } } 
      }
      
      { Name Torque_vw ; // Torque computation via Virtual Works
	Value { 
	  Integral { Type Global ;
	    [ CompZ[ 0.5 * nu[] * XYZ[] /\ VirtualWork[{d a}] ] * AxialLength ];
	    In ElementsOf[Rotor_Airgap, OnOneSideOf Rotor_Bnd_MB];
	    Jacobian Vol ; Integration I1 ; }
	}
      }

      { Name Torque_Maxwell; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral {
	    [ CompZ [ XYZ[] /\ (T_max[{d a}] * XYZ[] ) ] * 2*Pi*AxialLength/SurfaceArea[]  ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }

      { Name ComplianceELM;//ELM energy 
      	Value {
      	  Integral {
            [nu[{d a}]*{d a}*{d a} ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }

      { Name Torque_simple; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral {
            /*[nu[]* XYZ[]*XYZ[]*({d a}*er[]) * ({d a}*et[]) *2*Pi*AxialLength/SurfaceArea[]];*/
            [nu[]*torqueCoeff[]*({d a}*er[])*({d a}*et[])];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }

      { Name Torque_var; // T/Tref - 1
      	Value {
      	  Term {Type Global;
            [  (#58 / Ttarget[] - 1.0) ];
	    In Domain ;}
      	}
      }
     
      { Name Surf1; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral {[1.0/SurfaceArea[]]; //Int_S( 1/S ) different of one
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
      //{ Name Surf2 ;
	//Value { 
            //Term{[SurfaceArea[]]; In Domain ; Jacobian Vol ;}  
        //} 
      //}
      
      { Name Iron_Loss_Density ;
	Value { Term { [IronLossDensity[{d a}] ] ; In Domain ; Jacobian Vol ; } } 
      }

      { Name Iron_Losses ;
      	Value {
      	  Integral {
	    [ IronLossDensity[{d a}] ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }

      // b_radial_rms is fixed for the initial layout
      { Name b_radial_rms;
	Value {
	  Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.])^2/SurfaceArea[]];
	    In Domain; Jacobian Vol; Integration I1; }
        }
      }
      { Name b_radial_airgap2; 
	Value {
	  Term{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.]) ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name b_radial_airgap; 
	Value {
	  Term{ [ ({d a}*Unit[XYZ[]]) ];
	    In Domain; Jacobian Vol; }
        }
      } 
      { Name b_radialFund_airgap;
	Value {
	  Term{ [ Btarget[]  ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name error_b_radial_airgap2;
	Value {
	  Term{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.]) - Btarget[]  ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name error_b_radial_airgap;
	Value {
	  Term{ [ ({d a}*Unit[XYZ[]] - Btarget[])  ];
	    In Domain; Jacobian Vol; }
        }
      }

      { Name BradError; //Br - Btarget
	Value {
	  Integral{ [ ({d a}*er[]- Btarget[])^2.0  ];
	    In Domain; Jacobian Vol; Integration I1; }
        }
      }

      { Name surfacePM;
	Value {
	  Integral{ [ 1 ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }

      { Name volumeMaterial;
	Value {
	  Integral{ [ designVar[] ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }

      { Name volumeRotor;
	Value {
	  Integral{ [ 1 ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }

    }
  }
  // --------------------------------------------------------------------
  // Direct differentiation method
  // --------------------------------------------------------------------
  { Name MagStaDyn_directDeriv_2D ; NameOfFormulation DirectDerivFormulation ;
    PostQuantity {
      // Field quantities
      { Name dadx  ; Value { Term { [ {a_prime} ] ; In Domain ; Jacobian Vol ; }}}
      { Name dadxZ ; Value { Term { [ CompZ[{a_prime}] ] ; In Domain ; Jacobian Vol ; }}}
      
      { Name derivPerf_dxk; // d{F}/d{xk}
          Value {
      	     Integral { [ 2.0*({d a}*er[] - Btarget[])*er[]*{d a_prime} ];
                     In Domain ; Jacobian Vol  ; Integration I1; }      	
          }
      }
     
    }
  }
  // --------------------------------------------------------------------
  // Adjoint variable
  // --------------------------------------------------------------------
  { Name MagStaDyn_lambda_2D ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      // Field quantities
      { Name lambdaZ ; Value { Term { [ CompZ[{lambda}] ] ; In Domain ; Jacobian Vol ; }}}

      { Name lambda_K_A; // lambda*K*A
          Value {
      	     Integral { [ nu[{d a}]*{d a}*{d lambda}];
	               In Domain ; Jacobian Vol  ; Integration I1; }      	
          }
      }

      { Name lambda_g_1; // lambda*g_1 --> #95
          Value {
      	     Integral { [( nu[{d a}] * br[] )*{d lambda}]; 
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
          }
      }
      { Name lambda_g_2; // lambda*g_2 --> #96
          Value {
      	     Integral { [( js[] )*{lambda}];
	              In DomainS ; Jacobian Vol  ; Integration I1; }      	
          }
      }
      { Name lambda_g; // lambda*g_1 + lambda*g_2
      	Value {
      	  Term {Type Global; [ (#95 + #96) ]; In Domain ;}
      	}
      }

    }
  }

  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) on fixed mesh
  // --------------------------------------------------------------------
  { Name SensFixedMesh_MagStaDyn_lambda_2D ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      If(Flag_PerfType==COMPLIANCE) //sensitivity of Int_gap[ (Br-Bref)^2 ]
        { Name Sensitivity_AdjointMethod ; 
             Value { 
                   Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d a}]; 
                   In Domain ; Jacobian Vol  ; Integration I1; }
             }
        }
      EndIf
      If(Flag_PerfType!=COMPLIANCE) //sensitivity of (T/T_nom - 1)^2, Int_gap[ (Br-Bref)^2 ],...
        //change
        { Name Sensitivity_AdjointMethod ; 
          Value { 
                 Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d lambda}]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }}}
      EndIf
    }
  }
  // --------------------------------------------------------------------
  // Continuum sensitivity analysis, adjoint method
  // --------------------------------------------------------------------
  { Name SensSO_MagStaDyn_lambda_2D ;NameOfFormulation AdjointFormulation;
    PostQuantity {
        { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}

	{ Name S1 ; Value { Term { [ {S_1} ] ; In Domain ; Jacobian Vol ; }}}

        { Name S1_dot_v ; Value { Term { [ velocityField[]*{S_1} ] ; In Domain ; Jacobian Vol ; }}}

	{ Name S2_dot_v ; Value { Term { [ velocityField[]*{S_2} ] ; In Domain ; Jacobian Vol ; }}}

	{ Name testDom1; Value { Term { [ 1.0 ] ; In Domain_1 ; Jacobian Vol ; }}}

	{ Name testDom2; Value { Term { [ 1.0 ] ; In Domain_2 ; Jacobian Vol ; }}}

	{ Name testSkinDom1; Value { Term { [ 1.0 ] ; In TL_1 ; Jacobian Vol ; }}}

	{ Name testSkinDom2; Value { Term { [ 1.0 ] ; In TL_2 ; Jacobian Vol ; }}}

	{ Name js ; Value { Term { [ js[] ] ; In Domain ; Jacobian Vol ; } } }

        { Name br ; Value { Term { [ br[] ] ; In Domain ; Jacobian Vol ; } } }

 	{ Name ShapeDeriv; // material derivative --> generalize to multiple domains !!!
          Value {
            For n In {1:NbSubDom}
          	   Integral { [ ( -nu[{d a}]*{d a}*{d lambda} +  nu[{d a}]*br[]*{d lambda} + js[]*{lambda} )*(2.0*velocityField[]*{S~{n}} ) ];
	                       In TL~{n} ; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

    }
  }
  // --------------------------------------------------------------------
  // Semi-analytic method
  // --------------------------------------------------------------------
  { Name SemiAnalyticQuantitys; NameOfFormulation AdjointFormulation;
    PostQuantity {
       { Name lambda_K_A; // lambda*K*A
          Value {
      	     Integral { [ (nu[{d a}]*{d a})*{d lambda}];
	               In Domain ; Jacobian Vol  ; Integration I1; }      	
          }
       }
       { Name lambda_g_1; // lambda*g_1 --> #95
          Value {
      	     Integral { [( nu[{d a}] * br[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
          }
       }
       { Name lambda_g_2; // lambda*g_2 --> #96
          Value {
      	     Integral { [( js[] )*{lambda}];
	              In DomainS ; Jacobian Vol  ; Integration I1; }      	
          }
       }
      { Name lambda_g; // lambda*g_1 + lambda*g_2
      	Value {
      	  Term {Type Global; [ (#95 + #96) ]; In Domain ;}
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
	 AppendTimeStepToFileName Flag_SaveAllSteps ] ;
  
      Print[ a, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["a",ExtGmsh]], LastTimeStepOnly,
	 AppendTimeStepToFileName Flag_SaveAllSteps ] ;

     Print[ Torque_Maxwell[Rotor_Airgap], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Tr",ExtGnuplot]], LastTimeStepOnly, Store 54,
	 SendToServer StrCat[po_mecT, "rotor"], Color "Ivory" ];

     Print[ Torque_vw[Rotor_Airgap], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Tr_vw",ExtGnuplot]], LastTimeStepOnly, Store 54,
	 SendToServer StrCat[po_mecT, "rotorVW"], Color "Ivory" ];

     Print[ Torque_Maxwell[Stator_Airgap], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Ts",ExtGnuplot]], LastTimeStepOnly, Store 55,
	 SendToServer StrCat[po_mecT, "stator"], Color "Ivory" ];
     Print[ Flux[PhaseA], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Flux_a",ExtGnuplot]], LastTimeStepOnly, Store 11,
	 SendToServer StrCat[poF,"A"],  Color "Pink" ];
     Print[ Flux[PhaseB], OnGlobal, Format TimeTable,
 	 File > StrCat[ResDir, StrCat["Flux_b",ExtGnuplot]], LastTimeStepOnly, Store 22,
	 SendToServer StrCat[poF,"B"],  Color "Yellow" ];
     Print[ Flux[PhaseC], OnGlobal, Format TimeTable,
	 File > StrCat[ResDir, StrCat["Flux_c",ExtGnuplot]], LastTimeStepOnly, Store 33,
	 SendToServer StrCat[poF,"C"], Color "LightGreen"];
     Print[ I, OnRegion PhaseA_pos, Format Table,
	 File > StrCat[ResDir, StrCat["Ia",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[poI,"A"], Color "Pink" ];
     Print[ I, OnRegion PhaseB_pos, Format Table,
	 File > StrCat[ResDir, StrCat["Ib",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[poI,"B"], Color "Yellow" ];
     Print[ I, OnRegion PhaseC_pos, Format Table,
	 File > StrCat[ResDir, StrCat["Ic",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[poI,"C"], Color "LightGreen" ];
  }
 }

 { Name Get_PostOptim_AdjointMethod; NameOfPostProcessing MagStaDyn_lambda_2D;
   Operation{
     Print[ lambdaZ, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambdaz",ExtGmsh]], LastTimeStepOnly] ;

     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];

    Print[ lambda_g_1[DomainM], OnGlobal, Format Table, Store 95,
	   File StrCat[ResDir, StrCat["lambda_g_1",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_1"], Color "LightYellow" ];

    Print[ lambda_g_2[DomainS], OnGlobal, Format Table, Store 96,
	   File StrCat[ResDir, StrCat["lambda_g_2",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_2"], Color "LightYellow" ];

    Print[ lambda_g,OnRegion Rotor_Airgap, Format Table,
	   File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];

   }
 }

 { Name Get_PostOptim_DirectMethod; NameOfPostProcessing MagStaDyn_directDeriv_2D;
   Operation{
    //domaine d'optimisation (rajouter un domaine "DomainOpt" dans les groupes de machine --> plus général)
    Print[ dadx, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["dadx",ExtGmsh]], LastTimeStepOnly] ;

    Print[ dadxZ, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["dadxZ",ExtGmsh]], LastTimeStepOnly] ;

    Print[ derivPerf_dxk[Rotor_Airgap], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["derivPerf_dxk",ExtGmsh]], LastTimeStepOnly,
         SendToServer StrCat[po_min,"dFdxk"], Color "LightYellow" ] ;
   }
 }

 { Name Get_SemiAnalyticQuantitys; NameOfPostProcessing SemiAnalyticQuantitys;
   Operation{
     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];

     Print[ lambda_g_1[DomainM], OnGlobal, Format Table, Store 95,
	   File StrCat[ResDir, StrCat["lambda_g_1",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_1"], Color "LightYellow" ];

     Print[ lambda_g_2[DomainS], OnGlobal, Format Table, Store 96,
	   File StrCat[ResDir, StrCat["lambda_g_2",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_2"], Color "LightYellow" ];

     Print[ lambda_g,OnRegion Rotor_Airgap, Format Table,
	   File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
   }
 }

 { Name Get_PostOptim_AdjointMethodSens_FixedDom; NameOfPostProcessing SensFixedMesh_MagStaDyn_lambda_2D;
   Operation{
     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,//intégration par éléments
	   File StrCat[ResDir, StrCat["SensitivityPerf_AdjointMethod",ExtGmsh]], LastTimeStepOnly] ;
   }
 }

 { Name Get_PostOptim; NameOfPostProcessing PostOptim;
   Operation{
     Print[ BradError[Rotor_Airgap], OnGlobal, Format Table, 
         File StrCat[ResDir, StrCat["BradError",ExtGmsh]], LastTimeStepOnly, 
         SendToServer StrCat[po_opt,"2BradError"], Color "LightYellow" ];

     Print[ RotorPosition_deg, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
   	 File StrCat[ResDir, StrCat["temp",ExtGnuplot]],
   	 SendToServer StrCat[po_min,"Rotor position [mech. deg]"], Color "LightYellow" ];

     Print[ Torque_Maxwell[Rotor_Airgap], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["Tr",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Torque [Nm]"], Color "LightYellow" ];
/*
  Print[ Torque_vw[Rotor_Airgap], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["Tr_vw",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Torque VW [Nm]"], Color "LightYellow" ];
*/

     Print[ ComplianceELM[Domain], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["Energy",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Energy"], Color "LightYellow" ];

     Print[ Torque_simple[Rotor_Airgap], OnGlobal, Format Table,
	 Store 58,File StrCat[ResDir, StrCat["Tr_simple",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Torque simple [Nm]"], Color "LightYellow" ];

     Print[ Torque_var, OnRegion Rotor_Airgap, Format Table,
	 Store 60, File StrCat[ResDir, StrCat["Tr_var1",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Torque variance 1 [Nm]"], Color "LightYellow" ];

     Print[ Iron_Losses[Stator_Fe], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["Losses",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Iron losses [W]"], Color "LightYellow" ];

     If(Flag_topopt)
       Print[ mur,  OnElementsOf DomainOpt, 
           File StrCat[ResDir, StrCat["mur",ExtGmsh]], LastTimeStepOnly] ;
       Print[ designVarPlot,  OnElementsOf DomainOpt, 
            File StrCat[ResDir, StrCat["desVarPlot",ExtGmsh]], LastTimeStepOnly] ;
     EndIf

     Print[ boundary, OnElementsOf Dummy,  
         File StrCat[ResDir, StrCat["bnd",ExtGmsh]], LastTimeStepOnly] ;
/*
  Print[ a, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["a",ExtGmsh]], LastTimeStepOnly] ;
*/
    Print[ az, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["az",ExtGmsh]], LastTimeStepOnly] ;

    Print[ b, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;
 
    Print[ Iron_Loss_Density,  OnElementsOf Stator_Fe,
	 File StrCat[ResDir, StrCat["Losses",ExtGmsh]], LastTimeStepOnly,
	 AppendTimeStepToFileName Flag_SaveAllSteps] ;

    Gap = Ef;
    rR5 = Drotor/2.;
    rS1 = rR5 + Gap;
    A0 =  45 * deg ;
    r_Bradial = rR5+Gap/10; r_Bradial_end = rS1-Gap/10; dr_Bradial = (r_Bradial_end-r_Bradial)/3.; 
    r = r_Bradial_end;
    theta_Bradial = A0;
    nb_Bradial = 101;

    Print[ b_radialFund_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.},    
        File StrCat[ResDir, StrCat["b_radialFund_airgap",ExtGnuplot]], Format Gnuplot] ;

    Print[ b_radialFund_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
         File StrCat[ResDir, StrCat["b_radialFund_airgap",ExtGmsh]], LastTimeStepOnly, Format Gmsh];

   }
 }

  { Name Get_SOSensitivity_AdjointMethod; NameOfPostProcessing SensSO_MagStaDyn_lambda_2D;
    Operation {
       Print[ v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;

       Print[ S1, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["S1",ExtGmsh]], LastTimeStepOnly] ;

       Print[ testDom1, OnElementsOf Domain_1,
	      File StrCat[ResDir, StrCat["testDom1",ExtGmsh]], LastTimeStepOnly] ;
       Print[ testDom2, OnElementsOf Domain_2,
	      File StrCat[ResDir, StrCat["testDom2",ExtGmsh]], LastTimeStepOnly] ;
       Print[ testSkinDom1, OnElementsOf TL_1,
	      File StrCat[ResDir, StrCat["testSkinDom1",ExtGmsh]], LastTimeStepOnly] ;
       Print[ testSkinDom2, OnElementsOf TL_2,
	      File StrCat[ResDir, StrCat["testSkinDom2",ExtGmsh]], LastTimeStepOnly] ;

       Print[ js, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["js",ExtGmsh]], LastTimeStepOnly] ;

       Print[ br, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["br",ExtGmsh]], LastTimeStepOnly] ;


       Print[ S1_dot_v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["S1_dot_v",ExtGmsh]], LastTimeStepOnly] ;

       Print[ S2_dot_v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["S2_dot_v",ExtGmsh]], LastTimeStepOnly] ;

       Print[ ShapeDeriv[TL_all], OnGlobal, Format Table,
	       File StrCat[ResDir, StrCat["ShapeDeriv",ExtGnuplot]], LastTimeStepOnly,
	       SendToServer StrCat[po_min,"ShapeDeriv"], Color "LightYellow" ];
    }
  }

  { Name FilteredSens; NameOfPostProcessing FilteredSens;
    Operation {
	  Print [ perfFuncSensFilt_timesDesVar, OnElementsOf DomainOpt, 
                  File StrCat["res/SensitivityFiltered_timesDesVar",".pos"] ];
/*
	  Print [ perfFuncSensFilt, OnElementsOf DomainOpt, 
                  File StrCat["res/SensitivityFiltered",".pos"] ];
*/
/*      
          Print [ dV, OnElementsOf DomainOpt, File StrCat["res/dV",".pos"] ];          
	  Print [ psi0_moy, OnElementsOf DomainOpt, File StrCat["res/psi0",".pos"] ];          
	  Print [ psi, OnElementsOf DomainOpt, File StrCat["res/psi",".pos"] ];          
*/
    }
  }

}
