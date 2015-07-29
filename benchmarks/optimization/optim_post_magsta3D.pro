po_min  = "Output/";

PostProcessing {
  // --------------------------------------------------------------------
  // Performance funnctions and state variables
  // --------------------------------------------------------------------
  { Name PostOptim ; NameOfFormulation PrimalSystem ;
    PostQuantity {

      { Name Volume ;Value{Integral{[1.0];In Domain; Jacobian Vol;Integration I1; }}}

      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [{d a}] ; In Domain ; Jacobian Vol ; } } }

      { Name br  ; Value { Term { [ br[] ] ; In Domain ; Jacobian Vol ; } } }
       
      { Name ComplianceELM;//ELM energy 
      	Value {
      	  Integral {[ nu[{d a}] * SquNorm[{d a}] ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }

    }
  }
  // --------------------------------------------------------------------
  // Direct differentiation method
  // --------------------------------------------------------------------
  { Name SolveDirectSystem ; NameOfFormulation DirectFormulation ;
    PostQuantity {
      // Field quantities
      { Name dadx  ; Value { Term { [ {d_a} ] ; In Domain ; Jacobian Vol ; }}}
      { Name dadxZ ; Value { Term { [ CompZ[{d_a}] ] ; In Domain ; Jacobian Vol ; }}}
      
      { Name derivPerf_dxk; // d{F}/d{xk}
          Value {
      	     Integral { [ dF_direct_lie[{d a},{d d_a}] ];
                     In Domain ; Jacobian Vol  ; Integration I1; }      	
          }
      }     
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

  { Name AdjointFormulation ; NameOfFormulation AdjointFormulation ;
    PostQuantity {
      // Field quantities
      { Name lambdaZ ; Value { Term {[ CompZ[{lambda}] ] ; In Domain ; Jacobian Vol;}}}
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
      { Name d_lambda ; Value { Term {[ {d lambda} ] ; In Domain ; Jacobian Vol;}}}

  // --------------------------------------------------------------------
  // Filter velocity field
  // --------------------------------------------------------------------
//  { Name FilteredMeshCoord_x; NameOfFormulation FiltLaplace_DeltaMeshCoord_x ;
//    PostQuantity {
//      { Name Filt_DeltaMeshCoord_x; 
//        Value { 
//            Term { [ {uX} ] ; In Domain ; Jacobian Vol; }
//        }
//      }
//    }
//  }
//  { Name FilteredMeshCoord_y; NameOfFormulation FiltLaplace_DeltaMeshCoord_y ;
//    PostQuantity {
//      { Name Filt_DeltaMeshCoord_y; 
//        Value { 
//            Term { [ {uY} ] ; In Domain ; Jacobian Vol; }
//        }
//      }
//    }
//  }
//  { Name FilteredMeshCoord_z; NameOfFormulation FiltLaplace_DeltaMeshCoord_z ;
//    PostQuantity {
//      { Name Filt_DeltaMeshCoord_z; 
//        Value { 
//            Term { [ {uZ} ] ; In Domain ; Jacobian Vol; }
//        }
//      }
//    }
//  }

//        { Name Sensitivity_AdjointMethod; 
//          Value { 
//                 Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d lambda}]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//      If(Flag_PerfType==COMPLIANCE) //sensitivity of Int_gap[ (Br-Bref)^2 ]
//        { Name Sensitivity_AdjointMethod ; 
//             Value { 
//                   Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d a}]; 
//                   In Domain ; Jacobian Vol  ; Integration I1; }
//             }
//        }
//      EndIf
//      If(Flag_PerfType!=COMPLIANCE) 
//        //sensitivity of (T/T_nom - 1)^2, Int_gap[ (Br-Bref)^2 ],...
//        { Name Sensitivity_AdjointMethod ; 
//          Value { 
//                 Integral { [(-1.0*nu_prime[{d a}]*{d a})*{d lambda}]; 
//                 In Domain ; Jacobian Vol  ; Integration I1; }
//          }
//        }
//      EndIf
       { Name lambda_K_A; // Int(nu*rotA*rotLambda)->lambda*K*A
          Value {
      	     Integral { [ nu[{d a}]*{d a}*{d lambda} ];
	               In Domain ; Jacobian Vol  ; Integration I1; }   
          }
       }
       { Name lambda_g_1; // Int(M*rot(lambda))-> lambda*g1 --> #95
          Value {
      	     Integral { [( nu[{d a}] * br[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
          }
       }
      { Name lambda_g; // Sum_i{lambda*g_i}
      	Value {
      	     Integral { [( nu[{d a}] * br[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
      	}
      }

        { Name v ; Value { Term { [ velocityField[] ] ; In Domain ; Jacobian Vol ; }}}
        //{ Name rho_d_bilin_NL ; 
        //  Value{Term{[d_bilin_NL[ {d a}, {d lambda} ]]; In Domain;Jacobian Vol ;}}}

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
              //Integral{[ d_bilin_NL[{d a},{d lambda}] ];
              //  In DomainNL;Jacobian Vol ; Integration I1;}
          }
        }
        { Name sensM ; 
          Value { 
              Integral{[ d_M_lie[ {d a}, {d lambda} ] ];//d{l}/d{tau}(A,lambda)
                In Domain ; Jacobian Vol ; Integration I1;}
          }
        }
      { Name AvmVarDomSens; 
        Value { 
          Integral { [ dF_adjoint_lie[ {d a} ] ];  // d{f}/d{tau}(phi)
            In DomainFunc ; Jacobian Vol ; Integration I1 ;}
          Integral { [ -d_bilin_lie[ {d a}, {d lambda} ] ];//d{a}/d{tau}(phi,lambda)
            In Domain ; Jacobian Vol ; Integration I1 ; }
          //Integral { [ -d_bilin_NL[ {d a}, {d lambda} ] ];
          //  In DomainNL;Jacobian Vol ; Integration I1;}
          Integral { [ -d_M_lie[ {d a}, {d lambda} ] ];//d{l}/d{tau}(phi,lambda)
            In DomainM ; Jacobian Vol ; Integration I1 ; }
        } 
      }
    }
  }
  // --------------------------------------------------------------------
  // Filter sensitivitys
  // --------------------------------------------------------------------
  { Name FilterSensitivity; NameOfFormulation FilterSensitivity ;
    PostQuantity {
      // Field quantities
//      { Name psi0_moy; 
//        Value { 
//           Integral { [ prod_x_dC[]/ElementVol[] ] ; 
//             In DomainOpt ; Jacobian Vol ; Integration I1; }
//        }
//      }
//      { Name psi0; Value { Term { [ prod_x_dC[] ] ; In DomainOpt ; Jacobian Vol ; }}}
//      { Name psi; Value { Term { [ {psi} ] ; In DomainOpt ; Jacobian Vol ; }}}
      { Name perfFuncSensFilt_timesDesVar;Value{Term{[{psi}];In DomainOpt;Jacobian Vol;}}}
//      { Name perfFuncSensFilt; Value { Term { [ {psi}/designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
//      { Name dV; Value { Term { [ designVar[] ] ; In DomainOpt ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
 { Name Get_PrimalSystem_Func; NameOfPostProcessing PostOptim;
   Operation{

     // optim quantitys
     Print[ComplianceELM[DomainFunc], OnGlobal, Format Table,
	 File StrCat[ResDir, StrCat["ComplianceElm",ExtGnuplot]], LastTimeStepOnly,
	 SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];
   }
 }

 { Name Get_PostQuasiStatic; NameOfPostProcessing MagSta_a;
    Operation {
  
     Print[ b, OnElementsOf Domain,
	 File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;
  }
 }

 { Name Get_PrimalSystem; NameOfPostProcessing PostOptim;
   Operation{
     // Volume and mass
     Print[ Volume[DomainOpt], OnGlobal, Format TimeTable, 
       File StrCat[ResDir,"Volume",ExtGmsh], LastTimeStepOnly, 
       SendToServer StrCat[po_min,"Volume"], Color "LightYellow"] ;

     Print[ Volume, OnElementsOf DomainOpt, 
       File StrCat[ResDir,"ElementVolume",ExtGmsh], LastTimeStepOnly] ;

     Print[ b, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;

     Print[ br, OnElementsOf DomainM,
       File StrCat[ResDir, StrCat["br",ExtGmsh]], LastTimeStepOnly] ;
 
   }
 }

 { Name SolveAdjointSystem; NameOfPostProcessing AdjointFormulation;
   Operation{
     Print[ lambdaZ, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambdaZ",ExtGmsh]], LastTimeStepOnly] ;

     Print[ lambda, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;

     Print[ d_lambda, OnElementsOf Domain,
     	 File StrCat[ResDir, StrCat["d_lambda",ExtGmsh]], LastTimeStepOnly] ;

   }
 }

 { Name GetSemiAdjointSens; NameOfPostProcessing AdjointFormulation;
   Operation{

     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
  	   File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];
     Print[ lambda_g_1[DomainM], OnGlobal, Format Table, Store 95,
	   File StrCat[ResDir, StrCat["lambda_g_M",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g_M"], Color "LightYellow" ];
     Print[ lambda_g[Domain],OnGlobal, Format Table,
	   File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
	   SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
   }
 }

 { Name Get_AvmFixedDomSens;NameOfPostProcessing AdjointFormulation;
   Operation{
//     Print[ Sensitivity_AdjointMethod, OnElementsOf DomainOpt,LastTimeStepOnly,
//	   File StrCat[ResDir, StrCat["SensPerfAvmFixedDom",ExtGmsh]]] ;
   }
 }

  // --------------------------------------------------------------------
  // Sensitivity (adjoint variable) with Lie approach 
  // --------------------------------------------------------------------
  { Name GetShapeOptAdjointSens; NameOfPostProcessing AdjointFormulation;
    Operation{
//       Print[ v, OnElementsOf Domain,
//	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;

       Print[ sensF[DomainFunc], OnGlobal, Format Table, 
              File StrCat[ResDir, StrCat["d_func", ExtGnuplot]], 
	      SendToServer StrCat[po_min,"d_func"], LastTimeStepOnly];
       Print[ sensK[Domain], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["d_bilin", ExtGnuplot]],  
              SendToServer StrCat[po_min,"d_bilin"], LastTimeStepOnly];
       Print[ sensM[DomainM], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["d_M", ExtGnuplot]], 
              SendToServer StrCat[po_min,"d_M"], LastTimeStepOnly];
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
       Print[ v, OnElementsOf Domain,
	      File StrCat[ResDir, StrCat["velocity",ExtGmsh]], LastTimeStepOnly] ;
       Print[ dF_direct_lie[DomainFunc], OnGlobal, Format Table,
              File StrCat[ResDir, StrCat["sensDirectLie", ExtGnuplot]], 
              SendToServer StrCat[po_min,"sensDirectLie"], LastTimeStepOnly];
    }
  } 

  { Name FilterSens; NameOfPostProcessing FilterSensitivity;
    Operation {
	  Print [ perfFuncSensFilt_timesDesVar, OnElementsOf DomainOpt, 
                  File StrCat[ResDir,"Sensitivity_DesVar_Filtered",".pos"] ];
    }
  }

}
