PostProcessing {
  // Direct differentiation method
  { Name Direct_MagSta_a ; NameOfFormulation Direct_MagSta_a ;
    PostQuantity {
      // Field quantities
      { Name dadx  ; Value { Term { [ {d_a} ] ; In Domain ; Jacobian Vol ; }}}
      
      { Name dF_direct_lie ; 
          Value { 
            Integral{[ dF_direct_lie[{d a}, {d d_a}] ]; 
              In DomainFunc; Jacobian Vol; Integration I1; }
          }
      }
    }
  }
  { Name Direct_MagSta_phi ; NameOfFormulation Direct_MagSta_phi ;
    PostQuantity {
      // Field quantities
      { Name dadx  ; Value { Term { [ {d_phi} ] ; In Domain ; Jacobian Vol ; }}}
      
      { Name dF_direct_lie ; 
          Value { 
            Integral{[ dF_direct_lie[{d phi}, {d d_phi}] ]; 
              In DomainFunc; Jacobian Vol; Integration I1; }
          }
      }
    }
  }

  // Adjoint method
  { Name Adjoint_MagSta_a ; NameOfFormulation Adjoint_MagSta_a ;
    PostQuantity {
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
      { Name d_lambda ; Value { Term {[ {d lambda} ] ; In Domain ; Jacobian Vol;}}}

      { Name Func ; 
        Value { 
          Integral { [ Func[{d a}] ] ;
	    In Domain ; Jacobian Vol ; Integration I1 ; } 
        } 
      }
      { Name lambda_K_A; 
          Value {
      	    Integral { [ nu[{d a}]*{d a}*{d lambda} ];
	      In Domain ; Jacobian Vol  ; Integration I1; }   
          }
      }
      { Name lambda_g; 
      	Value {
      	  Integral { [( nu[{d a}] * br[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
      	}
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
          Integral { [ -d_M_lie[ {d a}, {d lambda} ] ];//d{l}/d{tau}(phi,lambda)
            In DomainM ; Jacobian Vol ; Integration I1 ; }
        } 
      }
    }
  }
  { Name Adjoint_MagSta_phi ; NameOfFormulation Adjoint_MagSta_phi ;
    PostQuantity {
      { Name lambda ; Value { Term {[ {lambda} ] ; In Domain ; Jacobian Vol;}}}
      { Name d_lambda ; Value { Term {[ {d lambda} ] ; In Domain ; Jacobian Vol;}}}

      { Name lambda_K_A; 
          Value {
      	    Integral { [ mu[]*{d phi}*{d lambda} ];
	      In Domain ; Jacobian Vol  ; Integration I1; }   
          }
      }
      { Name lambda_g; 
      	Value {
      	  Integral { [( mu[] * hc[] )*{d lambda}];
	              In DomainM ; Jacobian Vol  ; Integration I1; }      	
      	}
      }
      { Name Func ; 
        Value { 
          Integral { [ Func[{d phi}] ] ;
	    In Domain ; Jacobian Vol ; Integration I1 ; } 
        } 
      }

      { Name sensF ; 
        Value { 
          Integral { Type Global ;[ dF_adjoint_lie[ {d phi} ] ] ;
	    In Domain ; Jacobian Vol ; Integration I1 ; } } }
      { Name sensK ; 
        Value { 
          Integral { Type Global ; [ d_bilin_lie[ {d phi}, {d lambda} ] ];
	    In Domain ; Jacobian Vol ; Integration I1 ; } } }
      { Name sensM ; 
        Value { 
          Integral { Type Global ; [ d_M_lie[ {d phi}, {d lambda} ] ];
	    In Domain ; Jacobian Vol ; Integration I1 ; } } }

      { Name AvmVarDomSens; 
        Value { 
          Integral { [ dF_adjoint_lie[{d phi}] ];  // d{f}/d{tau}(phi)
            In DomainFunc ; Jacobian Vol ; Integration I1 ; }
          Integral { [ -d_bilin_lie[ {d phi}, {d lambda} ] ];//d{a}/d{tau}(phi,lambda)
            In Domain ; Jacobian Vol ; Integration I1 ; }
          Integral { [ d_M_lie[ {d phi}, {d lambda} ] ];//d{l}/d{tau}(phi,lambda)
            In DomainM ; Jacobian Vol ; Integration I1 ; }
        } 
      }
    }
  }

}

PostOperation {

 // adjoint 
 { Name Adjoint_MagSta_a; NameOfPostProcessing Adjoint_MagSta_a;
   Operation{
     Print[ lambda, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;
     Print[ d_lambda, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["d_lambda",ExtGmsh]], LastTimeStepOnly] ;
   }
 }
 { Name Adjoint_MagSta_phi; NameOfPostProcessing Adjoint_MagSta_phi;
   Operation{
     Print[ lambda, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;
     Print[ d_lambda, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["d_lambda",ExtGmsh]], LastTimeStepOnly] ;
   }
 }

 // direct 
 { Name Direct_MagSta_phi; NameOfPostProcessing Direct_MagSta_phi;
   Operation{ 
     Print[ dadx, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["d_a",ExtGmsh]], LastTimeStepOnly] ;
   }
 } 
 { Name Direct_MagSta_a; NameOfPostProcessing Direct_MagSta_a;
   Operation{ 
     Print[ dadx, OnElementsOf Domain,
       File StrCat[ResDir, StrCat["d_a",ExtGmsh]], LastTimeStepOnly] ;
   }
 } 

 // semi-analytic
 { Name SemiAdjoint_MagSta_a; NameOfPostProcessing Adjoint_MagSta_a;
   Operation{
     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
       File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];
     Print[ lambda_g[Domain],OnGlobal, Format Table,
       File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
   }
 }
 { Name SemiAdjoint_MagSta_phi; NameOfPostProcessing Adjoint_MagSta_phi;
   Operation{
     Print[ lambda_K_A[Domain], OnGlobal, Format Table,
       File StrCat[ResDir, StrCat["lambda_K_A",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"lambda_K_A"], Color "LightYellow" ];
     Print[ lambda_g[Domain],OnGlobal, Format Table,
       File StrCat[ResDir, StrCat["lambda_g",ExtGnuplot]], LastTimeStepOnly,
       SendToServer StrCat[po_min,"lambda_g"], Color "LightYellow" ];
   }
 }

 // Lie derivative
 { Name Lie_Adjoint_MagSta_a; NameOfPostProcessing Adjoint_MagSta_a;
   Operation{
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
 { Name Lie_Adjoint_MagSta_phi; NameOfPostProcessing Adjoint_MagSta_phi;
   Operation{
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

 { Name Lie_Direct_MagSta_a; NameOfPostProcessing Direct_MagSta_a;
   Operation{
     Print[ dF_direct_lie[DomainFunc], OnGlobal, Format Table,
       File StrCat[ResDir, StrCat["sensDirectLie", ExtGnuplot]], 
       SendToServer StrCat[po_min,"sensDirectLie"], LastTimeStepOnly];
   }
 } 
 { Name Lie_Direct_MagSta_phi; NameOfPostProcessing Direct_MagSta_phi;
   Operation{
     Print[ dF_direct_lie[DomainFunc], OnGlobal, Format Table,
       File StrCat[ResDir, StrCat["sensDirectLie", ExtGnuplot]], 
       SendToServer StrCat[po_min,"sensDirectLie"], LastTimeStepOnly];
   }
 } 

//  { Name FilterSens; NameOfPostProcessing FilterSensitivity;
//    Operation {
//	  Print [ perfFuncSensFilt_timesDesVar, OnElementsOf DomainOpt, 
//                  File StrCat[ResDir,"Sensitivity_DesVar_Filtered",".pos"] ];
//    }
//  }

}
