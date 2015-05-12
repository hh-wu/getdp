// Onelab parameter tree structure
po      = StrCat["Output - Electromagnetics/", ResId];
poI     = StrCat[po,"0Current [A]/"];
poV     = StrCat[po,"1Voltage [V]/"];
poF     = StrCat[po,"2Flux linkage [Vs]/"];
poJL    = StrCat[po,"3Joule Losses [W]/"];
//po_mec  = "Output - Mechanics/";
po_mec  = StrCat["Output - Mechanics/", ResId];
po_mecT = StrCat[po_mec,"0Torque [Nm]/"];
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
      { Name boundary  ; Value { Term { [ 1.0 ] ; In DomainDummy ; Jacobian Vol ; } } } 

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
  // Eigen system
  // --------------------------------------------------------------------
  { Name Elasticity2D ; NameOfFormulation Elasticity2D_u_modal ;
    PostQuantity {
      { Name designVarPlot;Value {Term {[ designVar[] ];In Domain ; Jacobian Vol;}}}
      { Name E_mec  ; Value { Term { [ E_mec[] ]; In Domain  ; Jacobian Vol; } } }
      { Name rho_mec  ; Value { Term { [ rho_mec[] ]; In Domain  ; Jacobian Vol; } } }
      { Name u  ; Value { Term { [ {u} ]; In Domain  ; Jacobian Vol; } } }
      { Name ux  ; Value { Term { [CompX[{u}]] ; In Domain  ; Jacobian Vol; } } }
      { Name uy  ; Value { Term { [CompY[{u}]] ; In Domain  ; Jacobian Vol; } } }
        { Name d_stiff_eig;  
          Value { 
                 Integral { [d_stiff_eig[{D1 u}]]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
        { Name d_mass_eig;  
          Value { 
                 Integral { [ d_mass_eig[{u}] ]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
        { Name norm_eig;  
          Value { 
                 Integral { [ norm_eig[{u}] ]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
        { Name d_eig;  
          Value { 
                 Integral { [ d_eig[{D1 u},{u}]/#999 ]; 
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
        { Name Sensitivity_AdjointMethod; //magnétostatic system 
          Value { 
                 Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d lambda}]; 
                 In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
    }
  }
//  { Name FixedDomSens_Stiff_eig; NameOfFormulation Elasticity2D_u_modal;
//    PostQuantity {
//        { Name d_stiff_eig;  
//          Value { 
//                 Integral { [d_stiff_eig[{D1 u},{D2 u}]]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//        { Name d_mass_eig;  
//          Value { 
//                 Integral { [ d_mass_eig[{u}] ]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//        { Name norm_eig;  
//          Value { 
//                 Integral { [ norm_eig[{u}] ]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//    }
//  }
  // --------------------------------------------------------------------
  // Semi-analytic method
  // --------------------------------------------------------------------
  { Name SemiAnalyticQuantitys; NameOfFormulation AdjointFormulation;
    PostQuantity {
       { Name lambda_K_A; // Int(nu*rotA*rotLambda)->lambda*K*A
          Value {
      	     Integral { [ (nu[{d a}]*{d a})*{d lambda}];
	               In Domain ; Jacobian Vol  ; Integration I1; }      	
          }
       }
       { Name lambda_g_1; // Int(M*rot(lambda))-> lambda*g1 --> #95
          Value {
      	     Integral { [( nu[{d a}] * br[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
          }
       }
       { Name lambda_g_2; // Int(j*lambda)->lambda*g2 --> #96
          Value {
      	     Integral { [( js0[] )*{lambda}];
	              In DomainS ; Jacobian Vol  ; Integration I1; }      	
          }
       }
      { Name lambda_g; // Sum_i{lambda*g_i}
      	Value {
      	  Term {Type Global; [ (#95 + #96) ]; In Domain ;}
      	}
      }

    }
  }
  // --------------------------------------------------------------------
  // Continuum sensitivity analysis, adjoint method, variable domain
  // --------------------------------------------------------------------
  { Name AvmVarDomSens_lie ;NameOfFormulation AdjointFormulation;
    PostQuantity {    
        { Name sensF ; 
          Value { 
              Integral{[dF_lie[{d a}]];
                In Domain ; Jacobian Vol ; Integration I1;}
          }
        }
        { Name sensK ; 
          Value { 
              Integral{[d_bilin_lie[{d a},{d lambda}]];
                In Domain;Jacobian Vol ; Integration I1;}
          }
        }
        { Name sensM ; 
          Value { 
              Integral{[ d_load_lie[ {d a}, {d lambda} ] ];
                In Domain ; Jacobian Vol ; Integration I1;}
          }
        }
    }
  }
  // --------------------------------------------------------------------
  // Continuum sensitivity analysis, adjoint method, variable domain
  // --------------------------------------------------------------------
  { Name AvmVarDomSens ;NameOfFormulation AdjointFormulation;
    PostQuantity {

        { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}

	{ Name dnudb; Value { Term { [ dnudb[{d a}] ] ; In Domain ; Jacobian Vol ; }}}

	{ Name testSkinDom1; Value { Term { [1.0];In Domain;Jacobian Vol ; }}}

	{ Name testSkinDom2; Value { Term { [1.0];In Domain;Jacobian Vol ; }}}

        { Name indicFunc ; Value { Term { [ indicFunc[] ];In Domain ; Jacobian Vol;}}}

 	{ Name nuRotARotLambdaVelocity; // material derivative --> extended in volume
          Value {
                Term { [ (nu[{d a}]*{d a}*{d lambda})*velocityField[] ];
	                In Domain ; Jacobian Vol ;}      	
          }
        }

 	{ Name jsLambdaVelocity; // material derivative --> extended in volume
          Value {
                Term { [ (js0[]*{lambda})*velocityField[] ];
	                In Domain ; Jacobian Vol ;}      
          }
        }

 	{ Name MRotLambdaVelocity; // material derivative --> extended in volume
          Value {
                Term { [ (nu[{d a}]*br[]*{d lambda})*velocityField[] ];
	                In Domain ; Jacobian Vol ;}     	
          }
        }

 	{ Name funcIndVelocity; // material derivative --> extended in volume
          Value {
              If(Flag_PerfType == COMPLIANCE) // F = Int( nu0*B^2*mf )
		Term { 
                  [(nu[{d a}]*{d a}*{d a})*indicFunc[]*velocityField[]];
               	     In Domain ; Jacobian Vol ; 
                }
	      EndIf   
	  }
        }

 	{ Name grad_A_V; // material derivative --> extended in volume
          Value {
             Term { [ grad_A[]*velocityField[] ]; In Domain ; Jacobian Vol ;}      	
          }
        }

 	{ Name grad_Lambda_V; // material derivative --> extended in volume
          Value {
             Term { [ grad_Lambda[]*velocityField[] ]; In Domain ; Jacobian Vol ;}      	
          }
        }

 	{ Name jsGradLamV; // l'(Lambda)
          Value {
            For n In {1:N}
                Integral { [ js0[]*(grad_Lambda[]*velocityField[]) ];
	           In Domain~{n}/*DomShapeSens~{n}*/;Jacobian Vol;Integration I1;}      	
            EndFor
          }
        }

 	{ Name MRotGradLamV; // l'(Lambda)
          Value {
            For n In {1:N}
                Integral { [ nu[{d a}]*br[]*rot_gradLambda_V[] ];
	                 In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name div_MRotLamV; // l'(Lambda)
          Value {
            For n In {1:NbSubDom}
              Integral { [ div_MRotLambdaVel[] ];
	                 In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name div_jsLamV; // l'(A,Lambda)
          Value {
            For n In {1:N}
              Integral { [ div_jsLambdaVel[] ];
	                 In Domain~{n} ; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }
	
 	{ Name nuRotLamRotGradAV; // a'(A,Lambda)
          Value {
            For n In {1:N}
                Integral { [ nu[{d a}]*{d lambda}*rot_gradA_V[] ];
	                    In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name dnudbRotGradAVRotARotLambda; // a'(A,Lambda)
          Value {
            For n In {1:N}
                Integral { [ (dnudb[{d a}]*rot_gradA_V[])*({d a}*{d lambda}) ];
	                    In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name nuRotARotGradLamV; // a'(A,Lambda)
          Value {
            For n In {1:N}
                Integral { [ nu[{d a}]*{d a}*rot_gradLambda_V[] ];
	                 In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name div_nuRotARotLambdaV; // a'(A,Lambda)
          Value {
            For n In {1:N}
                Integral { [ div_nuRotARotLambdaVel[] ];
	                 In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name funcDerivIndic; 
          Value {
            For n In {1:N}
	      If(Flag_PerfType == COMPLIANCE) // F = Int[(B*er - Bref)^2]
                Integral { [(nu[{d a}]*{d a}*{d a})*dindicFunc_dL[]];
	                   In Domain~{n}; Jacobian Vol ; Integration I1 ;}
              EndIf
            EndFor
          }
        }

 	{ Name div_funcIndV; // material derivative --> div(nu*rotA*rotLambda)
          Value {
            For n In {1:N}
              Integral { [ div_FuncIndVel[] ];
	                 In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
            EndFor
          }
        }

 	{ Name DBfunc_rotGradAV_Ind; // material derivative --> div(nu*rotA*rotLambda)
          Value {
            For n In {1:N}   	
	      If(Flag_PerfType == COMPLIANCE) // F = Int[(B*er - Bref)^2]
                Integral {[((2.0*nu[{d a}]*{d a})*indicFunc[])*rot_gradA_V[]];
	                 In Domain~{n}; Jacobian Vol ; Integration I1 ;}      	
              EndIf
            EndFor
          }
        }

 	{ Name d_bilin_mat; // material derivative --> div(nu*rotA*rotLambda)
          Value {
                Integral{[d_bilin_mat[{d a},{d lambda}]];
		  In Domain;Jacobian Vol;Integration I1;}      
          }
        }

 	{ Name d_load_mat; // material derivative --> div(nu*rotA*rotLambda)
          Value {
                Integral {[ d_load_mat[{d a}] ]; 
                  In Domain;Jacobian Vol;Integration I1;}      
          }
        }

 	{ Name dF_mat; // material derivative --> div(nu*rotA*rotLambda)
          Value {
                Integral {[ dF_mat[{d a}] ]; 
                  In Domain;Jacobian Vol;Integration I1;}      
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

//    Print[ boundary, OnElementsOf DomainDummy,  
//         File StrCat[ResDir, StrCat["DomainBoundary",ExtGmsh]], LastTimeStepOnly] ;
    Print[ boundary, OnElementsOf DomainDummy,  
	 File StrCat[ResDir, StrCat["DomainBoundary",ExtGmsh]], LastTimeStepOnly] ;
    Echo[ Str["For i In {PostProcessing.NbViews-1:0:-1}",
            "  If(!StrCmp(View[i].Name, 'boundary'))",
            "    View[i].ColorTable = {Red};",
            "   EndIf",
            "EndFor"], File "res/tmp.geo", LastTimeStepOnly] ;
    // gmsh res/DomainBoundary.pos res/tmp.geo 
    // more res/tmp.geo 
    
    Print[ a, OnElementsOf Domain,
 	 File StrCat[ResDir, StrCat["a",ExtGmsh]], LastTimeStepOnly] ;

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
 { Name Get_FixedDomSens_Stiff_eig;NameOfPostProcessing Elasticity2D;
   Operation{
//     Print[ d_stiff_eig, OnElementsOf DomainOpt,
//	   File StrCat[ResDir, StrCat["d_stiff_eig",ExtGmsh]]] ;
//     Print[ d_mass_eig, OnElementsOf DomainOpt,
//	   File StrCat[ResDir, StrCat["d_mass_eig",ExtGmsh]]] ;
     Print[ norm_eig[DomainOpt], OnGlobal, Format TimeTable,Store 999,
	   File StrCat[ResDir, StrCat["norm_eig",ExtGmsh]],
           SendToServer StrCat[po_min,"norm_eig"]] ;
     Print[ d_eig, OnElementsOf DomainOpt,
	   File StrCat[ResDir, StrCat["d_eig",ExtGmsh]]] ;
   }
 }
  // --------------------------------------------------------------------------
  { Name Get_AvmVarDomSens_0; NameOfPostProcessing AvmVarDomSens ;
    Operation{

       Print[ nuRotARotLambdaVelocity, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["nuRotARotLambdaVelocity",ExtGmsh]], 
	      LastTimeStepOnly] ;

       Print[ MRotLambdaVelocity, OnElementsOf Domain,
	       File StrCat[ResDir, StrCat["MRotLambdaVelocity",ExtGmsh]],   
               LastTimeStepOnly] ;

       Print[ jsLambdaVelocity, OnElementsOf Domain,
	       File StrCat[ResDir, StrCat["jsLambdaVelocity",ExtGmsh]],   
               LastTimeStepOnly] ;

       Print[ funcIndVelocity, OnElementsOf Domain,
	       File StrCat[ResDir, StrCat["funcIndVelocity",ExtGmsh]], 
               LastTimeStepOnly] ;    
     }
  }
  { Name Get_AvmVarDomSens_1; NameOfPostProcessing AvmVarDomSens;
    Operation{

       Print[ grad_Lambda_V, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["grad_Lambda_V",ExtGmsh]], 
	      LastTimeStepOnly] ;

       Print[ grad_A_V, OnElementsOf Domain,
	       File StrCat[ResDir, StrCat["grad_A_V",ExtGmsh]],   
               LastTimeStepOnly] ;
    }
  }
  { Name Get_AvmVarDomSens;NameOfPostProcessing AvmVarDomSens;
    Operation {
       Print[ v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;

       Print[ indicFunc, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["indicFunc",ExtGmsh]], LastTimeStepOnly] ;


       Print[ testSkinDom1, OnElementsOf DomShapeSens~{1},
	      File StrCat[ResDir, StrCat["testSkinDom1",ExtGmsh]], LastTimeStepOnly] ;

       Print[ testSkinDom2, OnElementsOf DomShapeSens~{2},
	      File StrCat[ResDir, StrCat["testSkinDom2",ExtGmsh]], LastTimeStepOnly] ;

       Print[ dnudb, OnElementsOf DomShapeSens~{1},
	      File StrCat[ResDir, StrCat["dnudb1",ExtGmsh]], LastTimeStepOnly] ;
       Print[ dnudb, OnElementsOf DomShapeSens~{2},
	      File StrCat[ResDir, StrCat["dnudb2",ExtGmsh]], LastTimeStepOnly] ;

//       Print[ js, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["js",ExtGmsh]], LastTimeStepOnly] ;

//       Print[ M, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["M",ExtGmsh]], LastTimeStepOnly] ;
       
//       // a'(A,Lambda)
//       Print[dnudbRotGradAVRotARotLambda[DomShapeSens], OnGlobal, 
//              Format Table,LastTimeStepOnly,
//	      File StrCat[ResDir, StrCat["dnudbRotGradAVRotARotLambda",ExtGnuplot]], 
//	      SendToServer StrCat[po_min,"dnudbRotGradAVRotARotLambda"],
//              Color "LightYellow" ];

//       Print[nuRotLamRotGradAV[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
//	      File StrCat[ResDir, StrCat["nuRotLamRotGradAV",ExtGnuplot]], 
//	      SendToServer StrCat[po_min,"nuRotLamRotGradAV"], Color "LightYellow" ];

//       Print[nuRotARotGradLamV[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
//	      File StrCat[ResDir, StrCat["nuRotARotGradLamV",ExtGnuplot]], 
//	      SendToServer StrCat[po_min,"nuRotARotGradLamV"], Color "LightYellow" ];

//       Print[div_nuRotARotLambdaV[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
//	      File StrCat[ResDir, StrCat["div_nuRotARotLambdaV",ExtGnuplot]], 
//	      SendToServer StrCat[po_min,"div_nuRotARotLambdaV"], Color "LightYellow" ];

//       // l'(Lambda)
//       Print[jsGradLamV[DomShapeSens], OnGlobal, Format Table,
//	      File StrCat[ResDir, StrCat["jsGradLamV",ExtGnuplot]], LastTimeStepOnly,
//	      SendToServer StrCat[po_min,"jsGradLamV"], Color "LightYellow" ];

//       Print[MRotGradLamV[DomShapeSens], OnGlobal, Format Table,
//	      File StrCat[ResDir, StrCat["MRotGradLamV",ExtGnuplot]], LastTimeStepOnly,
//	      SendToServer StrCat[po_min,"MRotGradLamV"], Color "LightYellow" ];

//       Print[div_jsLamV[DomShapeSens], OnGlobal, Format Table,
//	      File StrCat[ResDir, StrCat["div_jsLamV",ExtGnuplot]], LastTimeStepOnly,
//	      SendToServer StrCat[po_min,"div_jsLamV"], Color "LightYellow" ];

//       Print[div_MRotLamV[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
//	       File StrCat[ResDir, StrCat["div_MRotLamV",ExtGnuplot]], 
//	       SendToServer StrCat[po_min,"div_MRotLamV"], Color "LightYellow" ];
//         
//       // deriv F (remaining terms)
//       Print[DBfunc_rotGradAV_Ind[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
//	      File StrCat[ResDir, StrCat["DBfunc_rotGradAV_Ind",ExtGnuplot]],
//	      SendToServer StrCat[po_min,"DBfunc_rotGradAV_Ind"], Color "LightYellow" ];

//       Print[div_funcIndV[DomShapeSens], OnGlobal, Format Table,
//	      File StrCat[ResDir, StrCat["div_funcIndV",ExtGnuplot]], LastTimeStepOnly,
//	      SendToServer StrCat[po_min,"div_funcIndV"], Color "LightYellow" ];

//       Print[funcDerivIndic[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
//	      File StrCat[ResDir, StrCat["funcDerivIndic",ExtGnuplot]], 
//	      SendToServer StrCat[po_min,"funcDerivIndic"], Color "LightYellow" ];  

      // FIXME
      Print[d_bilin_mat[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
	      File StrCat[ResDir, StrCat["d_bilin",ExtGnuplot]],
	      SendToServer StrCat[po_min,"d_bilin"], Color "LightYellow" ];

      Print[d_load_mat[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
	      File StrCat[ResDir, StrCat["d_load",ExtGnuplot]],
	      SendToServer StrCat[po_min,"d_load"], Color "LightYellow" ];

      Print[dF_mat[DomShapeSens], OnGlobal, Format Table,LastTimeStepOnly,
	      File StrCat[ResDir, StrCat["d_func",ExtGnuplot]],
	      SendToServer StrCat[po_min,"d_func"], Color "LightYellow" ];

    }
  }
  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) with Lie approach 
  // --------------------------------------------------------------------
  { Name Get_AvmVarDomSens_Lie; NameOfPostProcessing AvmVarDomSens_lie;
    Operation{
       Print[ sensF[DomainFunc], OnGlobal, File > "res/sensitivity.txt", 
	 Format Table, SendToServer StrCat[po_min,"d_func"], LastTimeStepOnly];
       Print[ sensK[Domain], OnGlobal, File > "res/sensitivity.txt", 
         Format Table, SendToServer StrCat[po_min,"d_bilin"], LastTimeStepOnly];
       Print[ sensM[DomainM], OnGlobal, File > "res/sensitivity.txt", 
         Format Table, SendToServer StrCat[po_min,"d_load"], LastTimeStepOnly];
    }
  } 
  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) with semi-analytic approach 
  // --------------------------------------------------------------------
 { Name Get_SemiAnalyticAvmQuantitys; NameOfPostProcessing SemiAnalyticQuantitys;
   Operation{

     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];

     Print[ lambda_g_1[DomainM], OnGlobal, Format Table, Store 95,
	   File StrCat[ResDir, StrCat["lambda_g_M",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_M"], Color "LightYellow" ];

     Print[ lambda_g_2[DomainS], OnGlobal, Format Table, Store 96,
	   File StrCat[ResDir, StrCat["lambda_g_J",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_J"], Color "LightYellow" ];

     Print[ lambda_g,OnRegion DomainFunc, Format Table,
	   File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
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
  // --------------------------------------------------------------------------
  // Get Filtered Mesh Coordinates
  // --------------------------------------------------------------------------
  { Name Get_PrimalSystemEig ; NameOfPostProcessing Elasticity2D;
    Operation {
      Print[ designVarPlot, OnElementsOf DomainOpt,
     	 File StrCat[ResDir, StrCat["designVarPlot",ExtGmsh]], LastTimeStepOnly] ;
      Print[ E_mec, OnElementsOf DomainOpt,
     	 File StrCat[ResDir, StrCat["E_mec",ExtGmsh]], LastTimeStepOnly] ;
      Print[ rho_mec, OnElementsOf DomainOpt,
     	 File StrCat[ResDir, StrCat["rho_mec",ExtGmsh]], LastTimeStepOnly] ;
      Print[ u, OnElementsOf DomainOpt, File "res/u.pos", EigenvalueLegend ] ;
      Echo[ Str["View[PostProcessing.NbViews-1].VectorType=5;",
		"View[PostProcessing.NbViews-1].DisplacementFactor = 0.002;"],
        File "res/u.pos.opt"] ;
	// gmsh res/u.pos res/u.pos.opt
    }
  }

}
