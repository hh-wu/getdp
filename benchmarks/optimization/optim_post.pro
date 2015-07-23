po_min  = StrCat["Output/", ResId];

PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name PostOptim ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {
	{ Name rho_js ; 
          Value { 
              Term{[ js[] ];In Domain ; Jacobian Vol ; }
          }
        }

      { Name Flux ;
	Value {
	  Integral{[SymmetryFactor*AxialLength*Idir[]*NbrWires[]/SurfCoil[]*CompZ[{a}]];
	    In Inds; Jacobian Vol ; Integration I1 ; } } }

      { Name I ; Value {
	  Term { [ {I} ]   ; In DomainC ; }
	  Term { [ {Ib} ]  ; In DomainB ; }
	  Term { [ {Iz} ]  ; In DomainZt_Cir ; } } }

      // Dummy quantity - for visualization
      { Name boundary  ; Value { Term { [ 1 ] ; In DomainDummy ; Jacobian Vol ; }}} 

      { Name mur; Value { Term { [ nu0/nu[{d a}] ] ; In Domain ; Jacobian Vol ; }}}

      { Name designVarPlot;Value{Term { [designVar[]] ; In Domain ; Jacobian Vol ; }}}

      { Name Volume ;Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1; }}}

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
                    [nu[{d a}]*torqueCoeff[]*({d a}*er[])*({d a}*et[])];
	             In Domain ; Jacobian Vol  ; Integration I1; 
         }
      	}
      }

      { Name Torque_var; // T/Tref - 1
      	Value {
       	  Term {Type Global;
            [  (#58 / Ttarget[] - 1.0) ];
     	        In Domain ;}
      	}
      }

      { Name Torque_varAllDom; // T/Tref - 1
      	Value {
      	  Term {Type Global;[#60];In Domain;}
      	}
      }

      { Name Torque_var_square; // T/Tref - 1
      	Value {
      	  Term {Type Global;
            [  (#58 / Ttarget[] - 1.0)^2.0 ];
	    In Domain ;}
      	}
      }
           
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

      { Name b_radial_rms;
	Value {
	  Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.])^2
                       /SurfaceArea[]];
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
	  Term{ [ ({d a}*er[]) ];
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
	  Integral{ [ (({d a}*er[]- Btarget[])^2.0)*BradCoeff[] ];
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
  // Adjoint variable
  // --------------------------------------------------------------------
  { Name AdjointSystem ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      // Field quantities
      { Name lambdaZ ; Value { Term {[ CompZ[{lambda}] ] ; In Domain ; Jacobian Vol;}}}
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}

      { Name lambda_K_A; // Int(nu*rotA*rotLambda)->lambda*K*A
          Value {
      	     Integral { [ ( nu[{d a}] * {d a} ) * {d lambda} ];
	               In Domain ; Jacobian Vol  ; Integration I1; }   
          }
      }

      { Name lambda_g; // Sum_i{lambda*g_i}
       	Value {
           Integral { [( nu[{d a}] * br[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
     	   Integral { [ js[] * {lambda}];
	              In DomainS ; Jacobian Vol  ; Integration I1; }      	
      	}
      }

      { Name Sensitivity_AdjointMethod; 
        Value { 
                 Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d lambda}]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }

      { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}

      { Name rho_d_bilin_NL ; 
        Value{Term{[d_bilin_lie_NL[ {d a}, {d lambda} ]]; In Domain;Jacobian Vol ;}}
      }

      { Name sensF ; 
          Value { 
              Integral{[dF_adjoint_lie[{d a}]]; // d{f}/d{tau}(phi)
                In Domain ; Jacobian Vol ; Integration I1;}
          }
      }

      { Name sensK ; 
          Value { 
              Integral{[ d_bilin_lie[{d a},{d lambda}] ];//d{a}/d{tau}(A,lambda)
                In Domain;Jacobian Vol ; Integration I1;}
          }
      }

      { Name sensK_NL ; 
          Value { 
              Integral{[ d_bilin_lie_NL[{d a},{d lambda}] ];
                In DomainNL; Jacobian Vol ; Integration I1;}
          }
      }

      { Name sensM ; 
          Value { 
              Integral{[ d_M_lie[ {d a}, {d lambda} ] ];//d{l}/d{tau}(A,lambda)
                In Domain ; Jacobian Vol ; Integration I1;}
          }
      }

      { Name sensJ ; 
          Value { 
              Integral{[ d_J_lie[ {lambda} ] ];//d{l}/d{tau}(A,lambda)
                In Domain ; Jacobian Vol ; Integration I1;}
        }
      }
      { Name AvmVarDomSens; 
        Value { 
            Integral { [ dF_adjoint_lie[ {d a} ] ];  // d{f}/d{tau}(phi)
              In DomainFunc ; Jacobian Vol ; Integration I1 ;}
            Integral { [ -d_bilin_lie[ {d a}, {d lambda} ]];//d{a}/d{tau}(phi,lambda)
              In Domain ; Jacobian Vol ; Integration I1 ; }
            Integral { [ -d_bilin_lie_NL[ {d a}, {d lambda} ] ];
              In DomainNL; Jacobian Vol ; Integration I1;}
            Integral { [ d_M_lie[ {d a}, {d lambda} ] ];//d{l}/d{tau}(phi,lambda)
              In DomainM ; Jacobian Vol ; Integration I1 ; }
            Integral { [ d_J_lie[ {lambda} ] ];//d{l}/d{tau}(A,lambda)
              In DomainS ; Jacobian Vol ; Integration I1;}
          } 
        }
      }
  }
  // --------------------------------------------------------------------
  // Direct Lie derivative
  // --------------------------------------------------------------------
  { Name SolveDirectSystem ; NameOfFormulation DirectFormulation;
    PostQuantity {    
        { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
 
        { Name d_aZ ; Value { Term { [ CompZ[{d_a}] ] ; In Domain ; Jacobian Vol ; }}}

        { Name dF_direct_lie ; 
          Value { 
              Integral{[ dF_direct_lie[{d a}, {d d_a}] ]; // d{f}/d{tau}(phi)
                In DomainFunc; Jacobian Vol; Integration I1; }
          }
        }
    }
  }
  // --------------------------------------------------------------------
  // Filter sensitivity (fixed optimization domain)
  // --------------------------------------------------------------------
  { Name FilteredSens; NameOfFormulation FilterSensitivity;
    PostQuantity {
      // Field quantities
      { Name psi0_moy; 
        Value { 
           Integral { [ prod_x_dC[]/ElementVol[] ] ; 
             In DomainOpt ; Jacobian Vol ; Integration I1; }
        }
      }
      { Name psi0; Value { Term { [ prod_x_dC[] ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name psi; Value { Term { [ {psi} ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name perfFuncSensFiltDesVar;Value{Term{[{psi}];In DomainOpt;Jacobian Vol;}}}
      { Name perfFuncSensFilt; 
        Value { Term { [ {psi}/designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}
      }
      { Name dV; Value { Term { [ designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
 { Name Get_PrimalSystem_Func; NameOfPostProcessing PostOptim;
   Operation{

     // optim quantitys
     Print[ BradError[DomainFunc], OnGlobal, Format Table, 
         File StrCat[ResDir, StrCat["BradialErrorInt",ExtGnuplot]], LastTimeStepOnly, 
         SendToServer StrCat[po_min,"BradialErrorInt"], Color "LightYellow" ];

     Print[ComplianceELM[DomainFunc], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["ComplianceElm",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[Torque_simple[DomainFunc], OnGlobal, Format Table,
	 Store 58,File StrCat[ResDir, StrCat["Torque",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Torque"], Color "LightYellow" ];

     Print[Torque_var[DomainFunc], OnGlobal, Format Table,LastTimeStepOnly,
	 Store 60, File StrCat[ResDir, StrCat["TorqueVariance",ExtGnuplot]], 
	 SendToServer StrCat[po_min,"TorqueVariance"], Color "LightYellow" ];

     Print[Torque_var, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["TorqueVarianceAllDom",ExtGmsh]], LastTimeStepOnly];

     Print[Torque_var_square, OnRegion DomainFunc, Format Table,LastTimeStepOnly,
	 Store 61, File StrCat[ResDir, StrCat["TorqueVarianceSquare",ExtGnuplot]], 
	 SendToServer StrCat[po_min,"TorqueVarianceSquare"], Color "LightYellow" ];
   }
 }

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

 { Name Get_PrimalSystem; NameOfPostProcessing PostOptim;
   Operation{
     Print[ rho_js, OnElementsOf DomainS,
	    File StrCat[ResDir, StrCat["rho_js",ExtGmsh]], LastTimeStepOnly] ;

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

     Print[ RotorPosition_deg, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
   	 File StrCat[ResDir, StrCat["rotorPosition",ExtGnuplot]],Color "LightYellow",
   	 SendToServer StrCat[po_min,"Rotor position [mech. deg]"]  ];

     // Volume and mass
     Print[ Volume[DomainOpt], OnGlobal, Format TimeTable, 
                 File StrCat["res/Volume",ExtGmsh], LastTimeStepOnly, 
                 SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

     Print[ Volume, OnElementsOf DomainOpt, 
                 File StrCat["res/ElementVolume",ExtGmsh], LastTimeStepOnly] ;

     Print[ surfacePM[Rotor_Magnets], OnGlobal, Format TimeTable, 
         File > StrCat[ResDir, StrCat["surf_PM",ExtGmsh]], LastTimeStepOnly, 
         SendToServer StrCat[po_min, "surfacePM"], Color "LightYellow" ];

     // optim quantitys
     Print[ BradError[DomainFunc], OnGlobal, Format Table, 
         File StrCat[ResDir, StrCat["BradialErrorInt",ExtGnuplot]], LastTimeStepOnly, 
         SendToServer StrCat[po_min,"BradialErrorInt"], Color "LightYellow" ];

     Print[ComplianceELM[DomainFunc], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["ComplianceElm",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];

     Print[ComplianceELM[DomainFunc], OnGlobal, Format Table,//change this!!!
	 File StrCat[ResDir, StrCat["ComplianceElast",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElast"], Color "LightYellow" ];

     Print[Torque_simple[DomainFunc], OnGlobal, Format Table,
	 Store 58,File StrCat[ResDir, StrCat["Torque",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"Torque"], Color "LightYellow" ];

     Print[Torque_var[DomainFunc], OnGlobal, Format Table,LastTimeStepOnly,
	 Store 60, File StrCat[ResDir, StrCat["TorqueVariance",ExtGnuplot]], 
	 SendToServer StrCat[po_min,"TorqueVariance"], Color "LightYellow" ];

     Print[Torque_var, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["TorqueVarianceAllDom",ExtGmsh]], LastTimeStepOnly];

     Print[Torque_var_square, OnRegion Rotor_Airgap, Format Table,LastTimeStepOnly,
	 Store 61, File StrCat[ResDir, StrCat["TorqueVarianceSquare",ExtGnuplot]], 
	 SendToServer StrCat[po_min,"TorqueVarianceSquare"], Color "LightYellow" ];

    Print[ Iron_Loss_Density,  OnElementsOf Stator_Fe,
	 File StrCat[ResDir, StrCat["LossDensity",ExtGmsh]], LastTimeStepOnly] ;

    Print[Iron_Losses[Stator_Fe], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["IronLoss",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"IronLoss"], Color "LightYellow" ];

    Print[ mur,  OnElementsOf DomainFe, 
           File StrCat[ResDir, StrCat["mur",ExtGmsh]], LastTimeStepOnly];

    If(Flag_topopt)
      Print[ designVarPlot,  OnElementsOf DomainOpt, LastTimeStepOnly,
            File StrCat[ResDir, StrCat["designVariablePlot",ExtGmsh]]];
    EndIf

    Print[ boundary, OnElementsOf DomainDummy,  
         File StrCat[ResDir, StrCat["DomainBoundary",ExtGmsh]], LastTimeStepOnly] ;

    Print[ az, OnElementsOf Domain,
 	 File StrCat[ResDir, StrCat["aZ",ExtGmsh]], LastTimeStepOnly] ;

    Print[ a, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["a",ExtGmsh]], LastTimeStepOnly] ;

    Print[ b, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;
 
    r_Bradial = Drotor/2.+Ef/10; 
    r_Bradial_end = Drotor/2.+Ef-Ef/10; 
    dr_Bradial = (r_Bradial_end-r_Bradial)/3.; 
    r = r_Bradial_end;
    theta_Bradial = 45 * deg;
    nb_Bradial = 501;

    Print[ b_radialFund_airgap, 
           OnGrid {$A*Cos[$B], $A*Sin[$B], $C} 
                  { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.},    
           File StrCat[ResDir, StrCat["b_radialFund_airgap",ExtGnuplot]],
           Format Gnuplot ];

    Print[ b_radialFund_airgap,
           OnGrid {$A*Cos[$B], $A*Sin[$B], $C}  
                  { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
           File StrCat[ResDir, StrCat["b_radialFund_airgap",ExtGmsh]],
           LastTimeStepOnly, Format Gmsh];

    Print[ b_radial_airgap, 
           OnGrid {$A*Cos[$B], $A*Sin[$B], $C} 
                  { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.},    
           File StrCat[ResDir, StrCat["b_radial_airgap",ExtGnuplot]], Format Gnuplot] ;

    Print[ b_radial_airgap, 
           OnGrid {$A*Cos[$B], $A*Sin[$B], $C} 
                  { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
         File StrCat[ResDir, StrCat["b_radial_airgap",ExtGmsh]],
         LastTimeStepOnly, Format Gmsh];
   }
 }

 { Name SolveAdjointSystem; NameOfPostProcessing AdjointSystem;
   Operation{
     Print[ lambdaZ, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambdaZ",ExtGmsh]], LastTimeStepOnly] ;
   }
 }

 { Name GetSemiAdjointSens; NameOfPostProcessing AdjointSystem;
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
  { Name GetTopOptAdjointSens; NameOfPostProcessing AdjointSystem;
    Operation{
      Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
    }
  }
  { Name GetShapeOptAdjointSens; NameOfPostProcessing AdjointSystem;
    Operation{
//       Print[ v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;
////       Print[ rho_d_bilin_NL, OnElementsOf DomainNL,
////	      File StrCat[ResDir, StrCat["rho_d_bilin_NL",ExtGmsh]], LastTimeStepOnly] ;
//       Print[ sensF[DomainFunc], OnGlobal, Format Table, 
//              File StrCat[ResDir, StrCat["d_func", ExtGnuplot]], 
//	      SendToServer StrCat[po_min,"d_func"], LastTimeStepOnly];
//       Print[ sensK[Domain], OnGlobal, Format Table,
//              File StrCat[ResDir, StrCat["d_bilin", ExtGnuplot]],  
//              SendToServer StrCat[po_min,"d_bilin"], LastTimeStepOnly];
//       Print[ sensK_NL[DomainNL], OnGlobal, Format Table,
//              File StrCat[ResDir, StrCat["d_bilin_NL", ExtGnuplot]],  
//              SendToServer StrCat[po_min,"d_bilin_NL"], LastTimeStepOnly];
//       Print[ sensM[DomainM], OnGlobal, Format Table,
//              File StrCat[ResDir, StrCat["d_M", ExtGnuplot]], 
//              SendToServer StrCat[po_min,"d_M"], LastTimeStepOnly];
//       Print[ sensJ[DomainS], OnGlobal, Format Table,
//              File StrCat[ResDir, StrCat["d_J", ExtGnuplot]], 
//              SendToServer StrCat[po_min,"d_J"], LastTimeStepOnly];
       Print[ AvmVarDomSens[Domain], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["AvmVarDomSens", ExtGnuplot]], 
              SendToServer StrCat[po_min,"AvmVarDomSens"], LastTimeStepOnly];
    }
  } 
  // --------------------------------------------------------------------
  // Sensitivity (direct method) with Lie approach 
  // --------------------------------------------------------------------
  { Name SolveDirectSystem; NameOfPostProcessing SolveDirectSystem;
    Operation{
       Print[ d_aZ, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["d_aZ",ExtGmsh]], LastTimeStepOnly] ;
    }
  } 
  { Name GetShapeOptDirectSens; NameOfPostProcessing SolveDirectSystem;
    Operation{
       Print[ dF_direct_lie[DomainFunc], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["sensDirectLie", ExtGnuplot]], 
              SendToServer StrCat[po_min,"sensDirectLie"], LastTimeStepOnly];
    }
  } 
  // --------------------------------------------------------------------
  // Filter sensitivity 
  // --------------------------------------------------------------------
  { Name FilterSens; NameOfPostProcessing FilteredSens;
    Operation {
	  Print [ perfFuncSensFiltDesVar, OnElementsOf DomainOpt, 
                  File StrCat["res/Sensitivity_DesVar_Filtered",".pos"] ];
    }
  }

}
