PostProcessing {
  { Name MagSta_phi ; NameOfFormulation MagSta_phi ;
    Quantity {
      { Name b   ; Value { Local { [ - mu[] * {d phi} ] ; In Domain ; Jacobian Vol ; }
                           Local { [ - mu[] * hc[] ] ; In DomainM ; Jacobian Vol ; } } }
      { Name h   ; Value { Local { [ - {d phi} ] ; In Domain ; Jacobian Vol ; } } }
      { Name hc  ; Value { Local { [ hc[] ] ; In DomainM ; Jacobian Vol ; } } }
      { Name phi ; Value { Local { [ {phi} ]; In Domain ; Jacobian Vol ; } } }
      For i In {1:NumMagnets}
        { Name un~{i} ; Value { Local { [ {un~{i}} ] ; In Domain ; Jacobian Vol ; } } }
        { Name f~{i} ; Value { Integral { [ - TM[-mu[] * {d phi}] * {d un~{i}} ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
        { Name fx~{i} ; Value { Integral{[ CompX[- TM[-mu[] * {d phi}] * {d un~{i}} ] ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
        { Name fy~{i} ; Value { Integral{[ CompY[- TM[-mu[] * {d phi}] * {d un~{i}} ] ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
        { Name fz~{i} ; Value { Integral{[ CompZ[- TM[-mu[] * {d phi}] * {d un~{i}} ] ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
      EndFor
      { Name Compliance;//ELM energy 
      	Value {
      	  Integral {[ mu[] * SquNorm[{d phi}] ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
    }
  }
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    PostQuantity {
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian Vol; } } }
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian Vol; } } }
      { Name br ; Value { Local { [ br[] ]; In Domain ; Jacobian Vol; } } }
      For i In {1:NumMagnets}
        { Name un~{i} ; Value { Local { [ {un~{i}} ] ; In Domain ; Jacobian Vol ; } } }
        { Name f~{i} ; Value { Integral { [ - TM[{d a}] * {d un~{i}} ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
        { Name fx~{i} ; Value { Integral { [ CompX[- TM[{d a}] * {d un~{i}} ] ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
        { Name fy~{i} ; Value { Integral { [ CompY[- TM[{d a}] * {d un~{i}} ] ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
        { Name fz~{i} ; Value { Integral { [ CompZ[- TM[{d a}] * {d un~{i}} ] ] ;
              In Air ; Jacobian Vol ; Integration I1 ; } } }
      EndFor
      { Name Compliance;//ELM energy 
      	Value {
      	  Integral {[ nu[{d a}] * SquNorm[{d a}] ];
            In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
    }
  }
}

PostOperation {
  { Name MagSta_phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ b, OnElementsOf Domain, File "b.pos" ] ;
      //Print[ h, OnElementsOf Domain, File "h.pos" ] ;
      //Print[ hc, OnElementsOf Domain, File "hc.pos" ] ;
      For i In {1:NumMagnets}
        //Print[ un~{i}, OnElementsOf Domain, File "un.pos"  ];
        Print[ f~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir,"F.dat"]  ];
        Print[ fx~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir,"Fx.dat"],
          SendToServer Sprintf("Output/Magnet %g/X force [N]", i), Color "Ivory"  ];
        Print[ fy~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir, "Fy.dat"],
          SendToServer Sprintf("Output/Magnet %g/Y force [N]", i), Color "Ivory"  ];
        Print[ fz~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir, "Fz.dat"],
          SendToServer Sprintf("Output/Magnet %g/Z force [N]", i), Color "Ivory"  ];
      EndFor
      Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
        File StrCat[ResDir, StrCat["ComplianceElm",ExtOnelabScal]], LastTimeStepOnly,
        SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];
    }
  }
  { Name MagSta_a ; NameOfPostProcessing MagSta_a ;
    Operation {
      Print[ b,  OnElementsOf Domain,  File StrCat[ResDir,"b.pos"] ];
      Print[ br,  OnElementsOf DomainM,  File StrCat[ResDir,"br.pos"] ];
      //Print[ a,  OnElementsOf Domain,  File StrCat[ResDir,"a.pos"] ];
      For i In {1:NumMagnets}
        //Print[ un~{i}, OnElementsOf Domain, File "un.pos"  ];
        Print[ f~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir, "F.dat"]  ];
        Print[ fx~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir, "Fx.dat"],
          SendToServer Sprintf("Output/Magnet %g/X force [N]", i), Color "Ivory"  ];
        Print[ fy~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir, "Fy.dat"],
          SendToServer Sprintf("Output/Magnet %g/Y force [N]", i), Color "Ivory"  ];
        Print[ fz~{i}[Air], OnGlobal, Format Table, File StrCat[ResDir, "Fz.dat"],
          SendToServer Sprintf("Output/Magnet %g/Z force [N]", i), Color "Ivory"  ];
      EndFor
      Print[ Compliance[DomainFunc], OnGlobal, Format TimeTable,
        File StrCat[ResDir, StrCat["ComplianceElm",ExtOnelabScal]], LastTimeStepOnly,
        SendToServer StrCat[po_min,"ComplianceElm"], Color "LightYellow" ];
    }
  }
}


