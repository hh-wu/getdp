Include "freq.pro";
Nh = 2 ; Nv = 2 ;
Nbr_SubProblems = Nh*Nv ;

ratiolc1lc0 = 1 ;
Flag_Field = 0 ;
Flag_Quinconce = 0;
k = k0 ;
R0 = 1;

disty = R0;
distx = R0;
dist = (distx>disty)?distx:disty;

MaxN = (Nh>Nv)?Nh:Nv;
Ro = 0.65*MaxN*(2*R0+dist) ;
//Ro = MaxN*(R0+dist/2)-dist/2 + R0 ;

lambda = 2*Pi/k ;
scalefactor = (k<2) ? 2./k : 1.;

nlambda = 10 ;
lc0 = lambda/nlambda/scalefactor ;
lc1 = lambda/nlambda/scalefactor * ratiolc1lc0 ;

