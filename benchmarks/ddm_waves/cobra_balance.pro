
Ltot = D1+D2+D3+2.*R*alpha;

// normalized lengths of each part 
p = {D1/Ltot,
     R*alpha/Ltot,
     D2/Ltot,
     R*alpha/Ltot,
     D3/Ltot};

nDomList = {}; // list of subdomains per part
l = {}; // list of lengths of the subdomains in each part
nd = 0; // counter
For i In{0:4}
  nDomList += Round[p(i)*N_DOM];
  If (nDomList(i) == 0)
    nDomList(i) = 1.;
  EndIf
  nd += nDomList(i);
  l += p(i);
EndFor

// remove or add domains (simplistic approach)
nDiff = nd - N_DOM;
If (nDiff > 0)
  If (nDiff == 1)
    If (l(0) < l(2))
      nDomList[0] = nDomList[0]-1;
    EndIf
    If (l(0) > l(2))
      nDomList(2) = nDomList(2)-1;
    EndIf
  EndIf
  If (nDiff == 2)
    nDomList(1) -= 1;
    nDomList(3) -= 1;
  EndIf
  If (nDiff == 3)
    If (l(0) < l(2))
      nDomList(0) -= 1;
    EndIf
    If (l(0) > l(2))
      nDomList(2) -= 1;
    EndIf
    nDomList(1) -= 1;
    nDomList(3) -= 1;
  EndIf
  If (nDiff == 4)
    nDomList(0) -= 1;
    nDomList(1) -= 1;
    nDomList(2) -= 1;
    nDomList(3) -= 1;
  EndIf
  If (nDiff == 5)
    nDomList(0) -= 1;
    nDomList(1) -= 1;
    nDomList(2) -= 1;
    nDomList(3) -= 1;
    nDomList(4) -= 1;
  EndIf
EndIf
If (nDiff < 0)
  If (nDiff == -1)
    If (l(0) > l(2))
      nDomList(0) += 1;
    EndIf
    If (l(0) < l(2))
      nDomList(2) += 1;
    EndIf
  EndIf
  If (nDiff == -2)
    nDomList(1) += 1;
    nDomList(3) += 1;
  EndIf
  If (nDiff == -3)
    If (l(0) > l(2))
      nDomList(0) += 1;
    EndIf
    If (l(0) < l(2))
      nDomList(2) += 1;
    EndIf
    nDomList(1) += 1;
    nDomList(3) += 1;
  EndIf
  If (nDiff == -4)
    nDomList(0) += 1;
    nDomList(1) += 1;
    nDomList(2) += 1;
    nDomList(3) += 1;
  EndIf
  If (nDiff == -5)
    nDomList(0) += 1;
    nDomList(1) += 1;
    nDomList(2) += 1;
    nDomList(3) += 1;
    nDomList(4) += 1;
  EndIf  
EndIf

