//========================================================
// Benchmark "EM waveguide 2D - star-shaped network"
// File: GetDP simulation
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide2D_starNetwork.dat" ;

Group {
  For n In {1:NbPorts}
    Port~{n} = Region[{BND_PORT~{n}}] ;
    BndABC += Region[{Port~{n}}] ;
  EndFor
  BndPEC = Region[{BND_LAT}] ;
  Domain = Region[{DOM}] ;
}

eps0 = 8.8541878176e-12 ;
mu0 = 1.2566370614e-6 ;
Z0 = Sqrt[mu0/eps0] ;
Y0 = Sqrt[eps0/mu0] ;
c0 = 1/Sqrt[eps0*mu0] ;

DefineConstant[
  ActivePort = { 1, Min 1, Max NbPorts, Step 1,
    Name StrCat[catParam2,"0Number of active port"]},
  FREQ = { 4e9, Min 1e8, Max 1e10, Step 1e8,
    Name StrCat[catParam2,"1Frequency [Hz]"]},
  m = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"2Excitation mode number"]},
  LAMB = { c0/FREQ*100, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"3Wavelength [cm]"]}
];
LAMB = LAMB/100;

Function {
  I[] = Complex[0.,1.] ;
  epsR[] = 1 ;
  muR[] = 1 ;
  
  k0 = 2*Pi/LAMB ; // Free space wavevector
  kt = m*Pi/W ;    // Transverse wavevector
  
  For n In {1:NbPorts}
    phi = 2*Pi*(n-0.5)/NbPorts ;
    yLoc~{n}[] = -Sin[phi]*X[] + Cos[phi]*Y[] + W/2 ;
    ePort~{n}[] = Vector[ 0., 0., Sin[kt*yLoc~{n}[]] ] ;
    eInc[Port~{n}] = (n == ActivePort) ? ePort~{n}[] : Vector[ 0., 0., 0. ] ;
    EndIf
  EndFor
  intPort = W/2 ; // square of electric field integrated at a port
}

Include "formulations.pro";

PostProcessing {
  { Name postPro_Field ; NameOfFormulation eFormulation ;
    Quantity {
      { Name eZ ; Value { Local{ [ CompZ[{e}] ] ; In Domain ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_FieldsBnd ; NameOfFormulation eFormulation ;
    Quantity {
      { Name eBnd ; Value { Local{ [ {e} ] ; In SurAll ; Jacobian Jac ; } } }
      For n In {1:NbPorts}
        { Name ePort~{n} ; Value { Local{ [ ePort~{n}[] ] ; In Port~{n} ; Jacobian Jac ; } } }
      EndFor
      { Name eInc ; Value { Local{ [ eInc[] ] ; In BndABC ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_SParameters ; NameOfFormulation eFormulation ;
    Quantity {
      For n In {1:NbPorts}
        If ( n == ActivePort )
          { Name xS~{(n*10+ActivePort)} ; Value { Integral { [ ({e}-ePort~{n}[])*Conj[ePort~{n}[]] / intPort ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If ( n != ActivePort )
          { Name xS~{(n*10+ActivePort)} ; Value { Integral { [ {e}*Conj[ePort~{n}[]] / intPort ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        { Name S~{(n*10+ActivePort)} ; Value { Local { [ -20*Log10[Norm[#(n*10+ActivePort)]] ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
      EndFor
    }
  }
}

PostOperation {
  { Name Get_Field ; NameOfPostProcessing postPro_Field ;
    Operation {
      Print [ eZ, OnElementsOf Domain, File StrCat[myDir, "eZ.pos"]] ;
    }
  }
  { Name Get_FieldsBnd ; NameOfPostProcessing postPro_FieldsBnd ;
    Operation {
      Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
      Print [ eBnd, OnElementsOf SurAll, File StrCat[myDir, "eBnd.pos"]] ;
      Print [ eInc, OnElementsOf BndABC, File StrCat[myDir, "eInc.pos"]] ;
      For n In {1:NbPorts}
        Print [ ePort~{n}, OnElementsOf Port~{n}, File StrCat[myDir,StrCat["ePort",StrCat[Sprintf("%g",n),".pos"]]]] ;
      EndFor
    }
  }
  { Name Get_SParameters ; NameOfPostProcessing postPro_SParameters ;
    Operation {
      For n In {1:NbPorts}
        Print [ xS~{(n*10+ActivePort)}[Port~{n}], OnRegion Port~{n}, StoreInRegister (n*10+ActivePort),
          Format Table, File StrCat[myDir, StrCat["temp~{(n*10+ActivePort)}",ExtGnuplot]] ] ;
        Print [ S~{(n*10+ActivePort)}[Port~{n}], OnRegion Port~{n}, SendToServer StrCat(catOutput,StrCat("0S",Sprintf("%g",n*10+ActivePort))),
          Format Table, File StrCat[myDir, StrCat["temp",Sprintf("%g",n*10+ActivePort)]] ] ;
      EndFor
    }
  }
}

DefineConstant[
  MyPostOp = {"Get_Field, Get_SParameters", Choices{"Get_Field", "Get_FieldsBnd", "Get_SParameters"},
    Name "Input/1Post-processing", MultipleSelection "101"}
] ;

DefineConstant[
  R_ = {"eFormulation", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
] ;

