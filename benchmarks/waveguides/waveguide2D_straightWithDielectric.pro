//========================================================
// Benchmark "EM waveguide 2D - Straight with a rectangular dielectric"
// File: GetDP simulation
// Contributors: A. Modave
//========================================================

Include "waveguide2D_straightWithDielectric.dat" ;

Group {
  Port_1 = Region[{BND_PORT1}] ;
  Port_2 = Region[{BND_PORT2}] ;
  BndABC = Region[{Port_1, Port_2}] ;
  BndPEC = Region[{BND_PEC}] ;
  DomainAir = Region[{DOM_AIR}] ;
  DomainDiel = Region[{DOM_DIEL}] ;
  Domain = Region[{DomainAir, DomainDiel}] ;
}

eps0 = 8.8541878176e-12 ;
mu0 = 1.2566370614e-6 ;
Z0 = Sqrt[mu0/eps0] ;
Y0 = Sqrt[eps0/mu0] ;
c0 = 1/Sqrt[eps0*mu0] ;

DefineConstant[
  FREQ = { 1e9, Min 1e8, Max 1e10, Step 1e8,
    Name StrCat[catParam2,"1Frequency [Hz]"]},
  LAMB = { c0/FREQ*100, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"2Wavelength [cm]"]}
];
LAMB = LAMB/100;


Function {
  I[] = Complex[0.,1.] ;
  
  epsR[BndABC] = 1. ;
  epsR[DomainAir] = 1. ;
  epsR[DomainDiel] = 4. ; //Complex[4.,1.] ;
  muR[] = 1 ;
  
  k0 = 2*Pi/LAMB; // Free space wavevector
  
  hPort1[] = Vector[ 0., 0., 1. ] ;
  hPort2[] = Vector[ 0., 0., 1. ] ;
  intPort1 = W/2 ; // square of electric field "ePort1" integrated at port 1
  intPort2 = W/2 ; // square of electric field "ePort2" integrated at port 2
  hInc[Port1] = hPort1[] ;
  hInc[Port2] = Vector[ 0., 0., 0. ] ;
}

Include "formulations.pro";

PostProcessing {
  { Name postPro_Field ; NameOfFormulation hFormulation ;
    Quantity {
      { Name hZ ; Value { Local{ [ CompZ[{h}] ] ; In Domain ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_FieldsBnd ; NameOfFormulation hFormulation ;
    Quantity {
      { Name hBnd ; Value { Local{ [ {h} ] ; In SurAll ; Jacobian Jac ; } } }
      { Name hPort1 ; Value { Local{ [ hPort1[] ] ; In Port1 ; Jacobian Jac ; } } }
      { Name hPort2 ; Value { Local{ [ hPort2[] ] ; In Port2 ; Jacobian Jac ; } } }
      { Name hInc ; Value { Local{ [ hInc[] ] ; In BndABC ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_SParameters ; NameOfFormulation hFormulation ;
    Quantity {
      { Name R ; Value { Integral{ [ ({h}-hPort1[])*Conj[hPort1[]] / intPort1 ] ; In Port1 ; Jacobian Jac ; Integration I1 ; } } }
      { Name T ; Value { Integral{ [ ({h})         *Conj[hPort2[]] / intPort2 ] ; In Port2 ; Jacobian Jac ; Integration I1 ; } } }
      { Name NormR ; Value { Local{ [ Norm[#1] ] ; In Port1 ; Jacobian Jac ; } } }
      { Name NormT ; Value { Local{ [ Norm[#2] ] ; In Port2 ; Jacobian Jac ; } } }
      { Name NormR_2 ; Value { Local{ [ Norm[#1]^2 ] ; In Port1 ; Jacobian Jac ; } } }
      { Name NormT_2 ; Value { Local{ [ Norm[#2]^2 ] ; In Port2 ; Jacobian Jac ; } } }
      { Name NormR_dB ; Value { Local{ [ 20*Log10[Norm[#1]] ] ; In Port1 ; Jacobian Jac ; } } }
      { Name NormT_dB ; Value { Local{ [ 20*Log10[Norm[#2]] ] ; In Port2 ; Jacobian Jac ; } } }
    }
  }
}

PostOperation {
  { Name Get_Field ; NameOfPostProcessing postPro_Field ;
    Operation {
      Print [ hZ, OnElementsOf Domain, File StrCat[myDir, "hZ.pos"]] ;
    }
  }
  { Name Get_FieldsBnd ; NameOfPostProcessing postPro_FieldsBnd ;
    Operation {
      Print [ hBnd, OnElementsOf SurAll, File StrCat[myDir, "hBnd.pos"]] ;
      Print [ hPort1, OnElementsOf Port1, File StrCat[myDir, "hPort1.pos"]] ;
      Print [ hPort2, OnElementsOf Port2, File StrCat[myDir, "hPort2.pos"]] ;
      Print [ hInc, OnElementsOf BndABC, File StrCat[myDir, "hInc.pos"]] ;
      Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
    }
  }
  { Name Get_SParameters ; NameOfPostProcessing postPro_SParameters ;
    Operation {
      Print [ R[Port1], OnRegion Port1, StoreInRegister 1,
        Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
      Print [ T[Port2], OnRegion Port2, StoreInRegister 2,
        Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      Print [ NormR[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"0|R|"),
        Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
      Print [ NormT[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"1|T|"),
        Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      Print [ NormR_2[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"2|R|^2"),
        Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
      Print [ NormT_2[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"3|T|^2"),
        Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      Print [ NormR_dB[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"4|R| [dB]"),
        Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
      Print [ NormT_dB[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"5|T| [dB]"),
        Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
    }
  }
}

DefineConstant[
  MyPostOp = {" Get_Field, Get_SParameters", Choices{"Get_Field", "Get_FieldsBnd", "Get_SParameters"},
    Name "Input/1Post-processing", MultipleSelection "101"}
] ;

DefineConstant[
  R_ = {"hFormulation", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
] ;
