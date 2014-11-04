Include "params.geo";
Include "../main/ddmDefines.pro";
If (!PML)
Include "groups_marmousi_mshcut.pro";
EndIf
If (PML)
Include "groups_marmousi_mshcut_PML.pro";
EndIf

VELOCITY_FNAME = "../marmousi/marmousi.pos";
LEFT_PC = 0;
MSH_SPLIT = 1;

If (PML)
  xSigmaList = {};
  For i In {0:nDoms}
    xSigmaList += i*dDom;
  EndFor

  For ii In {0: N_DOM-1}
    idom = ii;
    xSigma~{idom}~{0} = xSigmaList(idom);
    xSigma~{idom}~{1} = xSigmaList(idom+1);
  EndFor
EndIf


Function {
  I[] = Complex[0,1];
  If (EXTERNAL_VELOCITY_FIELD)
    // c[] = ScalarField[XYZ[]]{999}#997 ? #997 : cAvg ;
    c[] = ScalarField[XYZ[]]{999};
  EndIf
  If (!EXTERNAL_VELOCITY_FIELD)
    // cMin = 2.*cMin;
    // cMax = cMax/2.;
    // cMax = cMin*3.1;

    // cMin = cAvg/1.5;
    // cMax = cAvg/1.5;

    // c[] = cAvg; //use a mean value
    c[] = cMin + (cMax-cMin)/(D^2+d^2)*(D*X[]-d*Y[]); // 'oblique' speed gradient
    // c[] = cMin + (cMax-cMin)/(d^2)*(-d*Y[]); // speed gradient along Y
    // c[] = cMin + (cMax-cMin)/(D^2)*(D*X[]); // speed gradient along X

    For i In {0:nDoms}
      // cMid~{i}[] = cMin + (cMax-cMin)/(D^2+d^2)*(D*xSigmaList(i)-d*Y[]);
      cMid~{i}[] = cMin + (cMax-cMin)/(D^2+d^2)*(D*xSigmaList(i)-d*Y[]); // 'oblique' speed gradient
      // cMid~{i}[] = cMin + (cMax-cMin)/(d^2)*(-d*Y[]); // speed gradient along Y
      // cMid~{i}[] = cMin + (cMax-cMin)/(D^2)*(D*(i*dDom)); // speed gradient along X
    EndFor
  EndIf

  om[] = om;

  k[] = om[]/c[] ;
  kInf[] = k[];
  kDtn[] = k[];

  uinc[] = 1.;

  V_SOURCE[] = 0.;
  fGrad[] = 0.;

  alphaBT[] = 0;
  betaBT[] = 0;
}

Include "../main/tcDefaults.pro";
Include "../main/topology/inline.pro";

If (PML)
Include "pmlFunctions.pro";
EndIf

If (PRECOND_SWEEP)
  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

Include "../main/Helmholtz.pro";
