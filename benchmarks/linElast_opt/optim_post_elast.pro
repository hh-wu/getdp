//po_min  = "Output/";

PostProcessing {

  For i In {1:3}
    { Name Filter_v~{i} ; NameOfFormulation Filter_v~{i} ;
      PostQuantity {
        { Name fv~{i}  ; Value { Term { [ {fv~{i}} ] ; In Domain ; Jacobian Vol; }}}
      }
    }
  EndFor

  { Name Analytic_Sens_u_Mec ; NameOfFormulation u_Mec ;
    PostQuantity {
      { Name Sensitivity_AdjointMethod; 
        Value { 
          Integral {[ dF_TO[{D1 u},{D2 u},{xe}] ]; 
            In DomainFunc ; Jacobian Vol  ; Integration I1; }
          Integral {[-d_bilin[{D1 u},{D1 u},{D2 u},{D2 u},{xe}]]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }

//      { Name dVolume;
//	Value {
//	  Integral{ [ dVolume[{d v_1},{d v_2},{d v_3}] ];
//	    In Domain; Jacobian Vol; Integration I1; }
//	}
//      }

//      { Name dMass;
//	Value {
//	  Integral{ [ dMass[{d v_1},{d v_2},{d v_3}] ];
//	    In Domain; Jacobian Vol; Integration I1; }
//	}
//      }

//      { Name dMass2;
//	Value {
//	  Integral{ [ -dMass[{d v_1},{d v_2},{d v_3}] ];
//	    In Domain; Jacobian Vol; Integration I1; }
//	}
//      }

    }
  }

  { Name Analytic_Sens_u_Mec_eig ; NameOfFormulation u_Mec_eig ;
    PostQuantity {
      { Name u_eig  ; Value { Term { [ {u} ]; In Domain  ; Jacobian Vol; } } }

//      { Name vel  ; Value { Term { [ velocityField[] ]; In Domain  ; Jacobian Vol; } } }
//      { Name d_D1  ; Value { Term { [ d_D1[du[]] ]; In Domain  ; Jacobian Vol; } } }
      
      { Name mass_eig;  
        Value { 
          Integral { [ mass_eig[{u}] ]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }
//     { Name d_mass_eig;  
//        Value { 
//          Integral { [ d_mass_eig[{u},{D1 u},{D2 u},{d v_1},{d v_2},{d v_3}] ]; 
//            In Domain ; Jacobian Vol  ; Integration I1; }
//        }
//      }

//     { Name d_stiff_eig;  
//        Value { 
//          Integral { [ d_bilin_eig[{u},{D1 u},{D2 u},{d v_1},{d v_2},{d v_3}] ]; 
//            In Domain ; Jacobian Vol  ; Integration I1; }
//        }
//      }

//      { Name deig_noNorm;  
//        Value { 
//          Integral { [ d_eig[{u},{D1 u},{D2 u},{d v_1},{d v_2},{d v_3}] ]; 
//          In Domain ; Jacobian Vol  ; Integration I1; }
//        }
//      }

//      { Name deig;  
//        Value { 
//          Integral { [ d_eig[{u},{D1 u},{D2 u},{d v_1},{d v_2},{d v_3}] / $MassEig ]; 
//            In Domain ; Jacobian Vol  ; Integration I1; }
//        }
//      }
      { Name d_eig_TO;  
        Value { 
          Integral { [ d_eig_TO[{u},{D1 u},{D2 u}] ]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }

    }
  }

  { Name Direct_u_Mec; NameOfFormulation Direct_u_Mec ;
    PostQuantity {
      { Name u ; Value { Term {[ {u} ] ; In Domain ; Jacobian Vol;}}}
      { Name du ; Value { Term {[ {d_u} ] ; In Domain ; Jacobian Vol;}}}
      { Name dVx;Value{Term{[ dV_x[{d v_1},{d v_2},{d v_3}] ];In Domain;Jacobian Vol;}}}
      { Name dVy;Value{Term{[ dV_y[{d v_1},{d v_2},{d v_3}] ];In Domain;Jacobian Vol;}}}
      { Name dVz;Value{Term{[ dV_z[{d v_1},{d v_2},{d v_3}] ];In Domain;Jacobian Vol;}}}

      { Name AvmVarDomSensFrechet; 
        Value { 
          Integral { [ dFdb_Lie[ {D1 u} ] * {D1 d_u} /*D1_Eps_dudx[]*/ ];  
            In DomainFunc ; Jacobian Vol ; Integration I1 ;}
        } 
      }

      { Name AvmVarDomSensPartial; 
        Value { 
          Integral { [ dF_lie[ {D1 u},{D2 u},{d v_1}, {d v_2}, {d v_3} ] ];  
            In DomainFunc ; Jacobian Vol ; Integration I1 ;}
        } 
      }

      { Name AvmVarDomSens; 
        Value { 
          Integral { [ dFdb_Lie[ {D1 u} ] * /*D1_Eps_dudx[]*/ {D1 d_u} ];  
            In DomainFunc ; Jacobian Vol ; Integration I1 ;}
          Integral { [ dF_lie[ {D1 u},{D2 u},{d v_1}, {d v_2}, {d v_3} ] ];  
            In DomainFunc ; Jacobian Vol ; Integration I1 ;}
        } 
      }
    }
  }

  { Name Sensitivity; NameOfFormulation Sensitivity;
    PostQuantity {
      If (!StrCmp(SensitivityMethod,"direct"))
	// TODO
      ElseIf (!StrCmp(SensitivityMethod,"adjoint"))
        { Name LieFunc; 
          Value { 
            Integral { [ dF_lie[ {D1 u},{D2 u}, {d v_1}, {d v_2}, {d v_3} ] ];  
              In DomainFunc ; Jacobian Vol ; Integration I1 ;}
            Integral { [ -d_bilin_lie[ {D1 u},{D1 lambda},{D2 u},{D2 lambda},
                                       {d v_1}, {d v_2}, {d v_3}] ];
              In Domain ; Jacobian Vol ; Integration I1 ; }
          } 
        }
      ElseIf (!StrCmp(SensitivityMethod,"semi-adjoint"))
        { Name residual; 
          Value {
            Integral { [ bilin[{D1 u}, {D1 lambda}, {D2 u}, {D2 lambda},{xe}] ];
	      In Domain ; Jacobian Vol  ; Integration I1; }
            Integral { [ -force_mec[] * {lambda} ];
  	      In Domain_Force ; Jacobian SurLinVol  ; Integration I1; }
          }
        }
      ElseIf (!StrCmp(SensitivityMethod,"self-adjoint"))
        { Name LieFunc; 
          Value { 
            Integral { [ dF_lie[ {D1 u},{D2 u}, {d v_1}, {d v_2}, {d v_3} ] ];  
              In DomainFunc ; Jacobian Vol ; Integration I1 ;}
            Integral { [ -d_bilin_lieSelf[ {D1 u},{D1 u},{D2 u},{D2 u},
                                     {d v_1}, {d v_2}, {d v_3}] ];
              In Domain ; Jacobian Vol ; Integration I1 ; }
          } 
        }
       Else
        { Name LieFunc;
	  Value {
	    Integral{ [ LieFunc[velocity[{v_1},{v_2},{v_3}],
              dV[{d v_1},{d v_2},{d v_3}]]];
	    In DomainFunc; Jacobian Vol; Integration I1; }
	  }
        }
      EndIf
    }
  }

  { Name Adjoint_u_Mec ; NameOfFormulation Adjoint_u_Mec ;
    PostQuantity {
      { Name u ; Value { Term {[ {u} ] ; In Domain ; Jacobian Vol;}}}
      { Name Fadj ; Value { Term { [ dFdb[{D1 u},{D2 u}] ]; In DomainFunc ; } } }   
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
 
      { Name residual; 
        Value {
          Integral { [ bilin[{D1 u}, {D1 lambda}, {D2 u}, {D2 lambda},{xe}] ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
          Integral { [ -force_mec[] * {lambda} ];
  	    In Domain_Force ; Jacobian SurLinVol  ; Integration I1; }
        }
      }

      { Name bilinLamdaState; 
        Value {
      	  Integral { [ bilin[{D1 u}, {D1 lambda}, {D2 u}, {D2 lambda},{xe}] ];
	    In Domain ; Jacobian Vol  ; Integration I1; }   
        }
      }

      { Name loadLambda; 
        Value {
          Integral { [ force_mec[] * {lambda} ];
	    In Domain_Force ; Jacobian SurLinVol  ; Integration I1; }
        }
      }

      { Name rho_sensF ; 
          Value { Term { [ dF_lie[{D1 u},{D1 lambda},{D2 u},{D2 lambda}] ] ; 
            In Domain ; Jacobian Vol ; }}}


      { Name Sensitivity_AdjointMethod; 
        Value { 
          Integral {[ dF_TO[{D1 u},{D2 u},{D1 lambda},{D2 lambda},{xe}] ]; 
            In DomainFunc ; Jacobian Vol  ; Integration I1; }
          Integral {[-d_bilin[{D1 u},{D1 lambda},{D2 u},{D2 lambda},{xe}]]; 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }  
    }
  }

  { Name FilterTopOpt; NameOfFormulation FilterTopOpt ;
    PostQuantity {
      { Name filtIn; Value { Term { [ filtSource[] ]; In Domain ; Jacobian Vol;}}}
      { Name filtOut; Value { Term { [ {psi} ]; In Domain; Jacobian Vol; }}}
    }
  }

  { Name FilterTopOpt_dXdx; NameOfFormulation FilterTopOpt_dXdx ;
    PostQuantity {
      { Name dxFiltdx; Value { Term { [ {psi} ] ; In Domain ; Jacobian Vol ; }}}
    }
  }

}

PostOperation {

  For i In {1:3}
    { Name Filter_v~{i}; NameOfPostProcessing Filter_v~{i};
      Operation{
        Print[ fv~{i}, OnElementsOf Region[{Domain,POINT_5}],
         File Sprintf["res/velocityFilt_%g.pos",i], LastTimeStepOnly] ;
        Print[ fv~{i}, OnElementsOf Region[{Domain,POINT_5}], LastTimeStepOnly, 
          Format NodeTable, File Sprintf["res/velocityFilt_%g.txt",i]] ;
      }
    }
  EndFor

  { Name Direct_u_Mec; NameOfPostProcessing Direct_u_Mec;
    Operation{
      Print[ u, OnElementsOf Domain,
        File StrCat[ResDir, "u_direct", ExtGmsh], LastTimeStepOnly];
      Print[ du, OnElementsOf Domain,
        File StrCat[ResDir, "du_direct", ExtGmsh], LastTimeStepOnly];
      Print[ dVx, OnElementsOf Domain,
        File StrCat[ResDir, "dVx", ExtGmsh], LastTimeStepOnly];
      Print[ dVy, OnElementsOf Domain,
        File StrCat[ResDir, "dVy", ExtGmsh], LastTimeStepOnly];
      Print[ dVz, OnElementsOf Domain,
        File StrCat[ResDir, "dVz", ExtGmsh], LastTimeStepOnly];
    }
  }

  { Name Adjoint_u_Mec; NameOfPostProcessing Adjoint_u_Mec;
    Operation{
      Print[ lambda, OnElementsOf Domain,
        File StrCat[ResDir, "lambda", ExtGmsh], LastTimeStepOnly] ;
      Print[ residual[Domain], OnGlobal, Format Table,
        File StrCat[ResDir, "residual", ExtGnuplot], 
        SendToServer StrCat[po,"residual"], LastTimeStepOnly];
    }
  }

  { Name Analytic_Sens_u_Mec; NameOfPostProcessing Analytic_Sens_u_Mec;
    Operation{  
//     Print[ dVolume[Domain], OnGlobal, Format Table,
//       File StrCat[ResDir, StrCat["dVolume",ExtAnalyticSens]], LastTimeStepOnly,
//       SendToServer StrCat[po,"dVolume"], Color "LightYellow" ];
//     Print[ dMass[Domain], OnGlobal, Format Table,
//       File StrCat[ResDir, StrCat["dMass",ExtAnalyticSens]], LastTimeStepOnly,
//       SendToServer StrCat[po,"dMass"], Color "LightYellow" ];
//     Print[ dMass2[Domain], OnGlobal, Format Table,
//       File StrCat[ResDir, StrCat["dMass2",ExtAnalyticSens]], LastTimeStepOnly,
//       SendToServer StrCat[po,"dMass2"], Color "LightYellow" ];
    }
  }

  { Name TO_Analytic_Sens_u_Mec_eig; NameOfPostProcessing Analytic_Sens_u_Mec_eig;
    Operation{
      Print[ mass_eig[Domain], OnGlobal, Format Table,
        File StrCat[ResDir, "mass_eig",ExtGmsh], StoreInVariable $MassEig,     
        SendToServer StrCat[po,"mass_eig"], Color "LightYellow"] ;
      Print[ d_eig_TO, OnElementsOf DomainOpt, File StrCat[ResDir,"d_eig_TO.pos"]] ;
    }
  }

  { Name Analytic_Sens_u_Mec_eig; NameOfPostProcessing Analytic_Sens_u_Mec_eig;
    Operation{
      Print[ u_eig, OnElementsOf Domain, File StrCat[ResDir,"u_eig.pos"]] ;
//      Print[ vel, OnElementsOf Domain, File StrCat[ResDir,"vel.pos"]] ;
//      Print[ d_D1, OnElementsOf Domain, File StrCat[ResDir,"d_D1.pos"]] ;
      Print[ mass_eig[Domain], OnGlobal, Format Table,
        File StrCat[ResDir, "mass_eig",ExtGmsh], StoreInVariable $MassEig,     
        SendToServer StrCat[po,"mass_eig"], Color "LightYellow"] ;
//      Print[ d_stiff_eig[Domain], OnGlobal,Format Table,
//        File StrCat[ResDir, "d_stiff_eig",ExtGmsh],
//        SendToServer StrCat[po,"d_stiff_eig"], Color "LightYellow"] ;
//      Print[ d_mass_eig[Domain], OnGlobal,Format Table,
//        File StrCat[ResDir, "d_mass_eig",ExtGmsh],
//        SendToServer StrCat[po,"d_mass_eig"], Color "LightYellow"] ;
//      Print[ deig_noNorm[Domain], OnGlobal,Format Table,
//        File StrCat[ResDir, "deig_noNorm",ExtGmsh],
//        SendToServer StrCat[po,"deig_noNorm"], Color "LightYellow"] ;
    }
  }

  { Name Semi_Adjoint_u_Mec; NameOfPostProcessing Adjoint_u_Mec;
    Operation{
      Print[ bilinLamdaState[Domain], OnGlobal, Format Table,
        File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	SendToServer StrCat[po,"lambda_K_A"], Color "LightYellow" ];
      //Print[ loadLambda[Domain_Force],OnGlobal, Format Table,
	//File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	//SendToServer StrCat[po,"lambda_g"], Color "LightYellow" ];
    }
  }

  { Name Lie_Direct_u_Mec; NameOfPostProcessing Direct_u_Mec;
    Operation{
       Print[ AvmVarDomSensFrechet[Domain], OnGlobal, Format Table,
         File StrCat[ResDir, "sensDirectLieFrechet", ExtGnuplot], 
         SendToServer StrCat[po,"sensDirectLieFrechet"], LastTimeStepOnly];
       Print[ AvmVarDomSensPartial[Domain], OnGlobal, Format Table,
         File StrCat[ResDir, "sensDirectLiePartial", ExtGnuplot], 
         SendToServer StrCat[po,"sensDirectLiePartial"], LastTimeStepOnly];
       Print[ AvmVarDomSens[Domain], OnGlobal, Format Table,
         File StrCat[ResDir, "sensDirectLie", ExtGnuplot], 
         SendToServer StrCat[po,"sensDirectLie"], LastTimeStepOnly];
    }
  } 

  { Name Sensitivity; NameOfPostProcessing Sensitivity;
    Operation{
      If (!StrCmp(SensitivityMethod,"semi-adjoint"))
        Print[ residual[Domain], OnGlobal, Format Table,
          File StrCat[ResDir, "residual", ExtGnuplot], 
          SendToServer StrCat[po,"residual"], LastTimeStepOnly];
      Else
        Print[ LieFunc[Domain], OnGlobal, Format Table,
          File StrCat[ResDir, "LieDerivative", ExtGnuplot], 
          SendToServer StrCat[po,"Lie derivative"], LastTimeStepOnly];
      EndIf
    }
  } 

  { Name TO_Adjoint_u_Mec; NameOfPostProcessing Adjoint_u_Mec;
    Operation{
      Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,Depth 0, Format Table,
        File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
    }
  }
  { Name TO_SelfAdjoint_u_Mec; NameOfPostProcessing Analytic_Sens_u_Mec;
    Operation{
      Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt, Depth 0, Format Table,
        File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
      Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt, Depth 1,
        File StrCat[ResDir, StrCat["SensPerfAvmFixedDom_1",ExtGmsh]]] ;
    }
  }
  { Name Get_SelfAvmFixedDomSens; NameOfPostProcessing Adjoint_u_Mec;//FIXME
    Operation{
      Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
        File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
      Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,
         LastTimeStepOnly, Format NodeTable,
	 File StrCat[ResDir, StrCat["SensPerfAvmFixedDomNodes",ExtGmsh]]] ;
    }
  }

  { Name FilterTopOpt; NameOfPostProcessing FilterTopOpt;
    Operation {
      Print[filtIn, OnElementsOf DomainOpt,Depth 0, Format Table,
        File StrCat[ResDir,"filtIn.pos"]];
      Print[filtOut, OnElementsOf DomainOpt,Depth 0, Format Table,
        File StrCat[ResDir,"filtOut.pos"] ];
      Print[filtIn, OnElementsOf DomainOpt, Depth 1,
        File StrCat[ResDir,"filtIn_1.pos"]];
      Print[filtOut, OnElementsOf DomainOpt, Depth 1,
        File StrCat[ResDir,"filtOut_1.pos"] ];
    }
  }

  { Name FilterTopOpt_dXdx; NameOfPostProcessing FilterTopOpt_dXdx;
    Operation {
      Print[dxFiltdx,OnElementsOf DomainOpt,Depth 0, Format Table,
        File StrCat[ResDir,"dxFiltdx.pos"]];
      Print[dxFiltdx,OnElementsOf DomainOpt,Depth 1, 
        File StrCat[ResDir,"dxFiltdx_1.pos"]];
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
