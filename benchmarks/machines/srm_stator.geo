//--------------------------------------------------------------------------------
// SRM stator
//--------------------------------------------------------------------------------

// Create all stator points
Rsmid = Rsout-YWs ;
For N In {0:Ns/2-1}
  th0s=N*dths+th0ss;
  p1sox=Rsout*Cos(-dths/2.+th0s); p1soy=Rsout*Sin(-dths/2.+th0s);
  p1six=Rsmid*Cos(-dths/2.+th0s); p1siy=Rsmid*Sin(-dths/2.+th0s);

  th4s=Asin(Rsin/Rsmid*Sin(Betas/2.));
  p2six=Rsmid*Cos(-th4s+th0s);    p2siy=Rsmid*Sin(-th4s+th0s);
  p3six=Rsin*Cos(-Betas/2.+th0s); p3siy=Rsin*Sin(-Betas/2.+th0s);
  p4six=Rsin*Cos( Betas/2.+th0s); p4siy=Rsin*Sin( Betas/2.+th0s);
  p5six=Rsmid*Cos(th4s+th0s);     p5siy=Rsmid*Sin(th4s+th0s);

  p1so[N]=newp; Point(p1so[N])={p1sox,p1soy,0.,8*Lc} ;
  p1si[N]=newp; Point(p1si[N])={p1six,p1siy,0.,8*Lc} ;
  p2si[N]=newp; Point(p2si[N])={p2six,p2siy,0.,8*Lc} ;
  p3si[N]=newp; Point(p3si[N])={p3six,p3siy,0.,1*Lc} ;
  p4si[N]=newp; Point(p4si[N])={p4six,p4siy,0.,1*Lc} ;
  p5si[N]=newp; Point(p5si[N])={p5six,p5siy,0.,8*Lc} ;
EndFor

N = Ns/2 ;
th0s=N*dths+th0ss;
p1sox=Rsout*Cos(-dths/2.+th0s);  p1soy=Rsout*Sin(-dths/2.+th0s);
p1six=Rsmid*Cos(-dths/2.+th0s);  p1siy=Rsmid*Sin(-dths/2.+th0s);
p1so[]+=newp; Point(newp)={p1sox,p1soy,0.,8*Lc} ;
p1si[]+=newp; Point(newp)={p1six,p1siy,0.,8*Lc} ;

// Create Stator Lines, arcs and regions
// outer stator surface
For N In {0:Ns/2-1}
 arcso[]+=newl; Circle(newl)={p1so[N],pAxe,p1so[(N+1)%Ns]};
EndFor

// outer surface of N-th stator tooth
For N In {0:Ns/2-1}
 clsi1[N]=newl; Circle(clsi1[N])={p1si[N],pAxe,p2si[N]};
 clsi2[N]=newl; Line(clsi2[N])={p2si[N],p3si[N]};
 clsi3[N]=newl; Circle(clsi3[N])={p3si[N],pAxe,p4si[N]};
 clsi4[N]=newl; Line(clsi4[N])={p4si[N],p5si[N]};
 clsi5[N]=newl; Circle(clsi5[N])={p5si[N],pAxe,p1si[(N+1)%Ns]};
EndFor

ss1=newl; Line(newl)={p1si[0], p1so[0]};
ss2=newl; Line(newl)={p1si[Ns/2], p1so[Ns/2]};
llStator=newll;
statorin[] = {clsi1[0]:clsi5[Ns/2-1]} ;

llstator = newll ; Line Loop (llstator)={-ss1,clsi1[0]:clsi5[Ns/2-1],ss2,-arcso[{2:0:-1}]};
Stator[] += news ; Plane Surface(Stator[0]) = {llstator} ;

// Create Coil regions
For N In {0:Ns/2}
 th0s=N*dths+th0ss;
 p1cx=Rsin*Cos(-dths/2.+th0s);
 p1cy=Rsin*Sin(-dths/2.+th0s);
 p1c[N]=newp; Point(p1c[N])={p1cx,p1cy,0.,2*Lc} ;
EndFor
For N In {0:Ns/2}
 clci1[N]=newl; Line(clci1[N])={p1si[N],p1c[N]};
EndFor
For N In {0:Ns/2-1}
   clci2[N]=newl; Circle(clci2[N])={p1c[N],pAxe,p3si[N]};
   clci3[N]=newl; Circle(clci3[N])={p4si[N],pAxe,p1c[(N+1)%Ns]};
EndFor

For N In {0:Ns/2-1}
 Coillln[N]=newll; Line Loop (Coillln[N])={clci1[N],clci2[N],-clsi2[N],-clsi1[N]};
 Coiln[N]=news ;   Plane Surface(Coiln[N])= {Coillln[N]};
 Coilllp[N]=newll; Line Loop (Coilllp[N])={-clsi4[N],clci3[N],-clci1[(N+1)%Ns],-clsi5[N]};
 Coilp[N]=news ;   Plane Surface(Coilp[N])= {Coilllp[N]};
EndFor

// Lines limiting the stator and coils (outer airgap)
For N In {0:Ns/2-1}
  airgco[3*N]=clci2[N] ;
  airgco[3*N+1]=clsi3[N] ;
  airgco[3*N+2]=clci3[N] ;
EndFor

For N In {0:Ns/2-1}
  th0s=N*dths+th0ss;
  p1mbsx=Rag*Cos(-dths/2.+th0s);  p1mbsy=Rag*Sin(-dths/2.+th0s);
  p2mbsx=Rag*Cos(-Betas/2.+th0s); p2mbsy=Rag*Sin(-Betas/2.+th0s);
  p3mbsx=Rag*Cos( Betas/2.+th0s); p3mbsy=Rag*Sin( Betas/2.+th0s);
  pmbs[]+=newp; Point(newp)={p1mbsx,p1mbsy,0.,1*Lc} ;
  pmbs[]+=newp; Point(newp)={p2mbsx,p2mbsy,0.,1*Lc} ;
  pmbs[]+=newp; Point(newp)={p3mbsx,p3mbsy,0.,1*Lc} ;
  If(N==Ns/2-1)
    p4mbsx=Rag*Cos( dths/2.+th0s);  p4mbsy=Rag*Sin( dths/2.+th0s);
    pmbs[]+=newp; Point(newp)={p4mbsx,p4mbsy,0.,1*Lc} ;
  EndIf
EndFor
For N In {0:#pmbs[]-2}
  clmbs[]+=newl ; Circle(newl)={pmbs[N], pAxe, pmbs[N+1]} ;
EndFor
For N In {0:#clmbs[]-1}
  clmbs[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata { Line{clmbs[N]}; } };
EndFor

lmbs[]+=newl; Line(newl)={pmbs[0],p1c[0]};
lmbs[]+=newl; Line(newl)={p1c[Ns/2],pmbs[#pmbs[]-1]};

Nl = #clmbs[] ;
llmbs=newll; Line Loop(llmbs)={airgco[],lmbs[1],-clmbs[{Nl/2-1:0:-1}],lmbs[0]};
surfmbstator[]+=news ; Plane Surface(surfmbstator[0]) = {llmbs};

//============================================================
//============================================================
If(Flag_Symmetry==0)
  // FULL MODEL
  // Rotation of Pi + duplication of all surfaces
  NN = #arcso[]-1 ;
  For N In {0:NN} // For simplicity (those lines would appear naturally when rotating Stator[0])
    arcso[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Line{arcso[N]};} };
  EndFor

  Stator[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{Stator[0]};} };

  For N In {0:Ns/2-1}
    Coiln[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{Coiln[N]};} };
    Coilp[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{Coilp[N]};} };
  EndFor

  surfmbstator[]+= Rotate {{0, 0, 1}, {0, 0, 0}, Pi} { Duplicata{ Surface{surfmbstator[0]};} };
EndIf

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
// Physical regions
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

allsurfaces[]= Surface '*';
Reverse Surface {allsurfaces[]};

Physical Surface(STATOR_FE) = {Stator[]} ;
Physical Surface(STATOR_AIRGAP) = {surfmbstator[]};

NN = (!Flag_Symmetry)?Ns-1:Ns/2-1;

Physical Surface(STATOR_IND_AP) = {Coilp[{0}]};
Physical Surface(STATOR_IND_AM) = {Coiln[{0}]};
Physical Surface(STATOR_IND_BP) = {Coilp[{1}]};
Physical Surface(STATOR_IND_BM) = {Coiln[{1}]};
Physical Surface(STATOR_IND_CP) = {Coilp[{2}]};
Physical Surface(STATOR_IND_CM) = {Coiln[{2}]};

If(!Flag_Symmetry)
  Physical Surface(STATOR_IND_AM_) = {Coilp[{Ns/2}]};
  Physical Surface(STATOR_IND_AP_) = {Coiln[{Ns/2}]};
  Physical Surface(STATOR_IND_BM_) = {Coilp[{1+Ns/2}]};
  Physical Surface(STATOR_IND_BP_) = {Coiln[{1+Ns/2}]};
  Physical Surface(STATOR_IND_CM_) = {Coilp[{2+Ns/2}]};
  Physical Surface(STATOR_IND_CP_) = {Coiln[{2+Ns/2}]};
EndIf

Physical Line(SURF_EXT) = arcso[] ;

If(!Flag_Symmetry)
  Physical Line(STATOR_BND_MOVING_BAND) = clmbs[] ;
EndIf
If(Flag_Symmetry)
  Physical Line(STATOR_BND_MOVING_BAND)   = clmbs[{0:#clmbs[]/2-1}] ;
  Physical Line(STATOR_BND_MOVING_BAND+1) = clmbs[{#clmbs[]/2:#clmbs[]-1}] ;

  //Lines for symmetry link
  Physical Line(STATOR_BND_A0) = {ss1,clci1[0],lmbs[0]} ;
  Physical Line(STATOR_BND_A1) = {ss2,clci1[(Ns/2)%Ns],lmbs[1]} ;
EndIf

//-------------------------------------------------------------------------------
// For nice visualization
//-------------------------------------------------------------------------------
linStator[] = CombinedBoundary{ Surface{Stator[]};};
linStator[] += Boundary{Surface{Coiln[], Coilp[]};};

Color SteelBlue {Surface{Stator[]};}
Color SkyBlue {Surface{surfmbstator[]};}

Color Red        {Surface{ Coilp[{0:NN:Ns/2}] };} // A+
Color SpringGreen{Surface{ Coiln[{2:NN:Ns/2}] };} // C-
Color Gold       {Surface{ Coilp[{1:NN:Ns/2}] };} // B+
Color Pink         {Surface{ Coiln[{0:NN:Ns/2}] };} // A-
Color ForestGreen  {Surface{ Coilp[{2:NN:Ns/2}] };} // C+
Color PaleGoldenrod{Surface{ Coiln[{1:NN:Ns/2}] };} // B-

