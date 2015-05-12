//--------------------------------------------------------------------------------
// SRM rotor
//--------------------------------------------------------------------------------

// Create all rotor points
For N In {0:Nr/2-1}
  th0r = N*dthr+th0rs;
  p1rox=Rrin*Cos(-dthr/2.+th0r);   p1roy=Rrin*Sin(-dthr/2.+th0r);
  p6rox=Rrout*Cos(-dthr/2.+th0r);  p6roy=Rrout*Sin(-dthr/2.+th0r);

  th2r=Asin(Rrout/Rrin*Sin(Betar/2.));
  p2rox=Rrin*Cos(-th2r+th0r);      p2roy=Rrin*Sin(-th2r+th0r);
  p3rox=Rrout*Cos(-Betar/2.+th0r); p3roy=Rrout*Sin(-Betar/2.+th0r);
  p4rox=Rrout*Cos(Betar/2.+th0r);  p4roy=Rrout*Sin(Betar/2.+th0r);
  p5rox=Rrin*Cos(th2r+th0r);       p5roy=Rrin*Sin(th2r+th0r);
  p1rix=Rshaft*Cos(-dthr/2.+th0r); p1riy=Rshaft*Sin(-dthr/2.+th0r);

  p1ro[N]=newp; Point(p1ro[N])={p1rox,p1roy,0.,4*Lc};
  p2ro[N]=newp; Point(p2ro[N])={p2rox,p2roy,0.,6*Lc};
  p3ro[N]=newp; Point(p3ro[N])={p3rox,p3roy,0.,2*Lc/2};
  p4ro[N]=newp; Point(p4ro[N])={p4rox,p4roy,0.,2*Lc/2};
  p5ro[N]=newp; Point(p5ro[N])={p5rox,p5roy,0.,6*Lc};
  p6ro[N]=newp; Point(p6ro[N])={p6rox,p6roy,0.,6*Lc};
  p1ri[N]=newp; Point(p1ri[N])={p1rix,p1riy,0.,6*Lc};
EndFor

N = Nr/2 ;
th0r = N*dthr+th0rs;
p1rox=Rrin*Cos(-dthr/2.+th0r);   p1roy=Rrin*Sin(-dthr/2.+th0r);
p1rix=Rshaft*Cos(-dthr/2.+th0r); p1riy=Rshaft*Sin(-dthr/2.+th0r);
p6rox=Rrout*Cos(-dthr/2.+th0r);  p6roy=Rrout*Sin(-dthr/2.+th0r);
p1ro[N]=newp; Point(p1ro[N])={p1rox,p1roy,0.,4*Lc};
p1ri[N]=newp; Point(p1ri[N])={p1rix,p1riy,0.,6*Lc};
p6ro[N]=newp; Point(p6ro[N])={p6rox,p6roy,0.,6*Lc};

// Create Rotor Lines, arcs and regions
For N In {0:Nr/2-1}
  arcri[N]=newl; Circle(arcri[N])={p1ri[N],pAxe,p1ri[(N+1)%Nr]};
EndFor
cutshaft[0] = newl; Line(newl)={p1ri[2],pAxe};
cutshaft[1] = newl; Line(newl)={pAxe,p1ri[0]};

For N In {0:Nr/2-1}
  clro1[N]=newl; Circle(clro1[N])={p1ro[N],pAxe,p2ro[N]};
  clro2[N]=newl; Line(clro2[N])={p2ro[N],p3ro[N]};
  clro3[N]=newl; Circle(clro3[N])={p3ro[N],pAxe,p4ro[N]};
  clro4[N]=newl; Line(clro4[N])={p4ro[N],p5ro[N]};
  clro5[N]=newl; Circle(clro5[N])={p5ro[N],pAxe,p1ro[(N+1)%Nr]};
EndFor

rr1=newl; Line(newl)={p1ri[0],p1ro[0]};
rr2=newl; Line(newl)={p1ri[Nr/2],p1ro[Nr/2]};
llshaft = newll ; Line Loop (llshaft) = {arcri[],cutshaft[]};
Shaft[] += news ; Plane Surface(Shaft[0]) = {llshaft} ;

rotorout[]= clro1[0]:clro5[Nr/2-1] ;
llrotor = newll ; Line Loop (llrotor) = {rotorout[],-rr2, -arcri[{1:0}],rr1};
Rotor[] += news ; Plane Surface(Rotor[0]) = {llrotor} ;
rr1_=newl; Line(newl)={p1ro[0],p6ro[0]};
rr2_=newl; Line(newl)={p1ro[2],p6ro[2]};

For N In {0:Nr/2-1}
  clrr2[N]=newl; Circle(clrr2[N])={p6ro[N],pAxe,p3ro[N]};
  clrr3[N]=newl; Circle(clrr3[N])={p4ro[N],pAxe,p6ro[(N+1)%Ns]};
EndFor

Line Loop(newll) = {rotorout[{0,1}],-clrr2[0], -rr1_};
AirgapRotorIn[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {rotorout[{3:6}], -clrr2[1],-clrr3[0]};
AirgapRotorIn[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {rotorout[{8,9}], rr2_, -clrr3[1]};
AirgapRotorIn[]+=news; Plane Surface(news) = {newll-1};


//============================================================
// moving band - from Rotor
For N In {0:Nr-1}
  th0r = N*dthr+th0rs;
  p1mbrx= Ragr*Cos(-dthr/2.+th0r);  p1mbry=Ragr*Sin(-dthr/2.+th0r);
  p2mbrx= Ragr*Cos(-Betar/2.+th0r); p2mbry=Ragr*Sin(-Betar/2.+th0r);
  p3mbrx= Ragr*Cos( Betar/2.+th0r); p3mbry=Ragr*Sin( Betar/2.+th0r);
  pmbr[]+=newp; Point(newp)={p1mbrx,p1mbry,0.,2*Lc};//4
  pmbr[]+=newp; Point(newp)={p2mbrx,p2mbry,0.,2*Lc/2};
  pmbr[]+=newp; Point(newp)={p3mbrx,p3mbry,0.,2*Lc/2};
EndFor

For N In {0:#pmbr[]-1}
  clmbr[]+=newl ; Circle(newl)={pmbr[N], pAxe, pmbr[{(N<#pmbr[]-1)?N+1:0}]} ;
EndFor
lmbr[]+=newl; Line(newl)={pmbr[0],p6ro[0]};
lmbr[]+=newl; Line(newl)={p6ro[2],pmbr[6]};

bndmbrotor[] = {clrr3[1],rotorout[7],clrr2[1],clrr3[0],rotorout[2],clrr2[0]};
llmbr=newll; Line Loop(llmbr)={-lmbr[0],clmbr[{0:#clmbr[]/2-1}],-lmbr[1], -bndmbrotor[]};
surfmbrotor[]+=news ; Plane Surface(surfmbrotor[0]) = {llmbr};

//============================================================
//============================================================
If(Flag_Symmetry==0) // FULL MODEL

  Rotor[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{Rotor[0]};} };
  Shaft[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{Shaft[0]};} };
  surfmbrotor[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{surfmbrotor[0]};} };

  NN = #AirgapRotorIn[]-1 ;
  For N In {0:NN}
    AirgapRotorIn[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{AirgapRotorIn[N]};} };
  EndFor
EndIf

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
// Physical regions
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

Reverse Surface {AirgapRotorIn[]};

Physical Surface(ROTOR_FE)  = {Rotor[]} ;
Physical Surface(ROTOR_SHAFT)  = {Shaft[]} ;
Physical Surface(ROTOR_AIRGAP) = {surfmbrotor[]};
Physical Surface(ROTOR_AIR)= {AirgapRotorIn[]};

If(!Flag_Symmetry)
  Physical Line(ROTOR_BND_MOVING_BAND)  = clmbr[] ;
EndIf
If(Flag_Symmetry)
  Physical Line(ROTOR_BND_MOVING_BAND)    = clmbr[{0:#clmbr[]/2-1}] ;
  Physical Line(ROTOR_BND_MOVING_BAND+1) = clmbr[{#clmbr[]/2:#clmbr[]-1}] ;

  Physical Point(ROTOR_REF_PNT) = {pAxe} ;

  //Lines for symmetry link
  Physical Line(ROTOR_BND_A0) = {rr1,rr1_,cutshaft[1],lmbr[0]} ;
  Physical Line(ROTOR_BND_A1) =  {rr2,rr2_,cutshaft[0],lmbr[1]};
EndIf

//-------------------------------------------------------------------------------
// For nice visualization
//-------------------------------------------------------------------------------
linRotor[]  = CombinedBoundary{ Surface{Rotor[]}; };

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

Color SteelBlue {Surface{Rotor[]};}
Color SkyBlue {Surface{Shaft[]};}
Color SkyBlue {Surface{surfmbrotor[],AirgapRotorIn[]};}


