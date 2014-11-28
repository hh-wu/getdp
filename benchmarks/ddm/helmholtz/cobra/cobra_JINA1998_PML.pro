Include "params_JINA1998.geo";

// Compute the number of domains as the sum of the domains in each part of the waveguide
N_DOM = 0;
For i In {0:PARTS-1}
N_DOM += nDomList(i);
EndFor

If (MPI_Rank == 0)
Printf("Total number of domains: %g", N_DOM);
EndIf

Include "../main/ddmDefines.pro";
Include "groups_cobra_PML.pro";

EXT_TIME = 1;

Function {
  I[] = Complex[0, 1];
  // k[] = WAVENUMBER ;

  V_SOURCE[] = 0.;

  If (!geo3d)
    uinc[] = Complex[ Sin[Pi*m/d*(Y[]-(shiftY-d/2.))], 0. ];
  EndIf

  om[] = WAVENUMBER;
  c[] = 1.;//1.25*(1.-.4*Exp[-32*(Y[]-.5)^2]) ;
  k[] = om[]/c[] ;


  kDtn[] = k[];
  kInf[] = k[];
}

Include "../main/tcDefaults.pro";

N = 2;

nDoms = N_DOM;

If (PML)
xBaseList = {};
yBaseList = {};
thetaList = {};

xBaseList += shiftX;
yBaseList += shiftY;
thetaList += 0;

// Printf["part %g: %g", 0, nDomList(0)];
ic = 0;
For i In {1:nDomList(0)}
  xBaseList += xBaseList(#xBaseList()-1) + D1/nDomList(0);
  yBaseList += yBaseList(#yBaseList()-1);
  thetaList += thetaList(#thetaList()-1);
EndFor
ic += i;
// Printf["part %g: %g", 1, nDomList(1)];
For i In {1:nDomList(1)}
xBaseList += xBaseList((ic)) + (R+d1)*Sin[alpha*i/nDomList(1)];
  yBaseList += yBaseList((ic)) + (R+d1)*(1.-Cos[alpha*(i)/nDomList(1)]);
  thetaList += thetaList(#thetaList()-1) + alpha/nDomList(1);
EndFor
ic += i;
// Printf["part %g: %g", 2, nDomList(2)];
For i In {1:nDomList(2)}
  xBaseList += xBaseList(#xBaseList()-1) + D2*Cos[alpha]/nDomList(2);
  yBaseList += yBaseList(#yBaseList()-1) + D2*Sin[alpha]/nDomList(2);
  thetaList += thetaList(#thetaList()-1);
EndFor
ic += i;
// Printf["part %g: %g", 3, nDomList(3)];
For i In {1:nDomList(3)}
xBaseList += xBaseList((ic)) + ( (R)*Sin[alpha] - (R)*Sin[alpha*(nDomList(3)-i)/nDomList(3)] );
yBaseList += yBaseList((ic)) + ((R)*(1.-Cos[alpha])-(R)*(1.-Cos[alpha*(nDomList(3)-i)/nDomList(3)]));
  thetaList += thetaList(#thetaList()-1) - alpha/nDomList(3);
EndFor
ic += i;
// Printf["part %g: %g", 4, nDomList(4)];
For i In {1:nDomList(4)}
  xBaseList += xBaseList(#xBaseList()-1) + D3/nDomList(4);
  yBaseList += yBaseList(#yBaseList()-1);
  thetaList += thetaList(#thetaList()-1);
EndFor
ic += i;

// Printf["list size: %g", #thetaList()];
// Printf["ic: %g", ic];

// For i In {0:#thetaList()-1}

// Printf["*** i: %g", i];
// Printf["x: %g", xBaseList(i)];
// Printf["y: %g", yBaseList(i)];
// Printf["t: %g", thetaList(i)];

// EndFor

Function{

  For idom In {0:N_DOM-1}
    For jdom In {0:1}
      If (idom == 0) // straight part
        P~{idom}~{jdom}[] = Y[]-shiftY;//(R+d1) - Norm[ (Vector[shiftX,R+d1+shiftY,0] - Vector[X[], Y[], 0 ]) ];
        Q~{idom}~{jdom}[] = Z[];
        // R_0~{idom}~{jdom}[] = X[]*Cos[theta]+Y[]*Sin[theta]+dBb;
      EndIf
      If (idom == 1) // bent part
        P~{idom}~{jdom}[] = (R+d1) - Norm[ (Vector[shiftX+D1,R+d1+shiftY,0] - Vector[X[], Y[], 0 ]) ];
        Q~{idom}~{jdom}[] = Z[];
        // R_0~{idom}~{jdom}[] = X[]*Cos[theta]+Y[]*Sin[theta]+dBb;
      EndIf
      If (idom == 2) // straight oblique part
        P~{idom}~{jdom}[] = Sin[-alpha]*(X[]-(shiftX+D1+(R+d1)*Sin[alpha])) + Cos[-alpha]*(Y[]-((R+d1)*(1.-Cos[alpha])+shiftY)) + 0*shiftY;//(R+d1) - Norm[ (Vector[shiftX+D1,R+d1+shiftY,0] - Vector[X[], Y[], 0 ]) ];
        Q~{idom}~{jdom}[] = Z[];
        // R_0~{idom}~{jdom}[] = X[]*Cos[theta]+Y[]*Sin[theta]+dBb;
      EndIf
    EndFor
  EndFor

  // uinc[] = Sin[1.*Pi/d1*P~{0}~{0}[]]*Sin[1.*Pi/d2*Q~{0}~{0}[]]; // mode in the rotated coordinates
  // uinc[] = Sin[1.*Pi/d1*P~{N_DOM-1}~{1}[]]*Sin[1.*Pi/d2*Q~{N_DOM-1}~{1}[]]; // mode in the rotated coordinates
  uinc[] = Sin[1.*Pi/d1*Y[]]*Sin[1.*Pi/d2*Z[]]; // mode in the rotated coordinates


  }
EndIf




Include "../main/topology/inline.pro";



If (PML)
Include "pmlFunctions.pro";
EndIf





If (PRECOND_SWEEP)
  // ListOfCuts = {0, 7, N_DOM-1}; //16/1
  ListOfCuts = {0, 5, 10, N_DOM-1}; //16/2
  // ListOfCuts = {0, 4, 8, 12, N_DOM-1}; //16/3
  // ListOfCuts = {0, 3, 6, 9, 12, N_DOM-1}; //16/4

  // ListOfCuts = {0, 17, N_DOM-1}; //32/1
  // // ListOfCuts = {0, 11, 22, N_DOM-1}; //32/2;
  // ListOfCuts = {0, 8, 16, 24, N_DOM-1}; //32/3
  // ListOfCuts = {0, 6, 12, 18, 24, N_DOM-1}; //32/4



  // Hack to build a 'list of lists': generate variables with 'indexed names'
  nCuts = 0;
  For iCut In {0:#ListOfCuts()-2}
    nProcsInCut~{iCut} = 0;
  EndFor
  For iCut In {0:#ListOfCuts()-2}
    For iDom In {ListOfCuts(iCut):ListOfCuts(iCut+1):1}
      ListOfProcsInCut~{iCut}~{nProcsInCut~{iCut}} = iDom;
      nProcsInCut~{iCut} += 1;
    EndFor
    nCuts += 1;
  EndFor

  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

Include "../main/Helmholtz.pro";
