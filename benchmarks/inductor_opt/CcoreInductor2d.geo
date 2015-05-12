//Flag_3Dmodel = 0;

// characteristic lengths
lc0  = wcoil/nn_wcore;
lc1  = ag/nn_airgap;
lcri = Pi*Rint/2/nn_ri;
lcro = Pi*Rext/2/nn_ro;
lcCcore = lc0/1.0;//refined mesh
//lcCcore = lc0;//non refined mesh

// center of the model at (0,0)
cen = newp; Point(newp) = {0,0,0, lc0};

// coil (left)
pntCoilLeft[] += newp; Point(newp) = { 0, hcoil, 0, lcCcore };
pntCoilLeft[] += newp; Point(newp) = { -wcoil, hcoil, 0, lcCcore };
pntCoilLeft[] += newp; Point(newp) = { -wcoil, -hcoil, 0, lcCcore };
pntCoilLeft[] += newp; Point(newp) = { 0, -hcoil, 0, lcCcore };

lnCoilLeft[] += newl; Line(newl) = {cen,pntCoilLeft[0]};
lnCoilLeft[] += newl; Line(newl) = {pntCoilLeft[0],pntCoilLeft[1]};
lnCoilLeft[] += newl; Line(newl) = {pntCoilLeft[1],pntCoilLeft[2]};
lnCoilLeft[] += newl; Line(newl) = {pntCoilLeft[2],pntCoilLeft[3]};
lnCoilLeft[] += newl; Line(newl) = {pntCoilLeft[3],cen};

// coil (right)
pntCoilRight[] += newp; Point(newp) = { wgapCoil, hcoil, 0, lcCcore };
pntCoilRight[] += newp; Point(newp) = { wgapCoil + wcoil, hcoil, 0, lcCcore };
pntCoilRight[] += newp; Point(newp) = { wgapCoil + wcoil, -hcoil, 0, lcCcore };
pntCoilRight[] += newp; Point(newp) = { wgapCoil, -hcoil, 0, lcCcore };

lnCoilRight[] += newl; Line(newl) = {pntCoilRight[0],pntCoilRight[1]};
lnCoilRight[] += newl; Line(newl) = {pntCoilRight[1],pntCoilRight[2]};
lnCoilRight[] += newl; Line(newl) = {pntCoilRight[2],pntCoilRight[3]};
lnCoilRight[] += newl; Line(newl) = {pntCoilRight[3],pntCoilRight[0]};

// C-core	
pntCcore[] += newp; Point(newp) = { 0, hcoreE, 0, lcCcore };
pntCcore[] += newp; Point(newp) = { wcoreE, hcoreE, 0, lcCcore};
pntCcore[] += newp; Point(newp) = { wcoreE, -hcoreE, 0, lcCcore};
pntCcore[] += newp; Point(newp) = { 0, -hcoreE, 0, lcCcore};

pt_Spline[] += {pntCcore[1]};
deltaY = 2.0*hcoreE/(nbPointsSpline+1);
For k In {0:nbPointsSpline-1}
  pt_Spline+=newp;Point(newp)={wcoreE+deltaX~{k+1},hcoreE-(k+1)*deltaY,0,lcCcore};
EndFor
pt_Spline[] += {pntCcore[2]};
Printf("pt_Spline:", pt_Spline[]);//afficher les numéros de lignes

lnCCore[] += newl; Line(newl) = {pntCoilLeft[0],pntCcore[0]};
lnCCore[] += newl; Line(newl) = {pntCcore[0],pntCcore[1]};

lnSpline[] += newl; Spline(newl) = {pt_Spline[]};

lnCCore[] += newl; Line(newl) = {pntCcore[2],pntCcore[3]};
lnCCore[] += newl; Line(newl) = {pntCcore[3],pntCoilLeft[3]};
lnCCore[] += newl; Line(newl) = {pntCoilLeft[3],cen};

// I-core	
pntIcore[] += newp; Point(newp) = { wcoreEMax+ag, hcoreE, 0, lcCcore };
pntIcore[] += newp; Point(newp) = { wcoreEMax+ag+wcoreI, hcoreE, 0, lcCcore };
pntIcore[] += newp; Point(newp) = { wcoreEMax+ag+wcoreI, -hcoreE, 0, lcCcore };
pntIcore[] += newp; Point(newp) = { wcoreEMax+ag, -hcoreE, 0, lcCcore };

lnIcore[] += newl; Line(newl) = {pntIcore[0],pntIcore[1]};
lnIcore[] += newl; Line(newl) = {pntIcore[1],pntIcore[2]};
lnIcore[] += newl; Line(newl) = {pntIcore[2],pntIcore[3]};
lnIcore[] += newl; Line(newl) = {pntIcore[3],pntIcore[0]};

// gap
pntGap[] += newp; Point(newp) = { wcoreE+ag, hcoreE, 0, lcCcore };
pntGap[] += newp; Point(newp) = { wcoreE+ag, -hcoreE, 0, lcCcore };
lnGap[] += newl; Line(newl) = {pntCcore[1],pntGap[0]};//hor
lnGap[] += newl; Line(newl) = {pntGap[0],pntIcore[0]};
lnGap[] += newl; Line(newl) = {pntCcore[2],pntGap[1]};
lnGap[] += newl; Line(newl) = {pntGap[1],pntIcore[3]};
lnGap[] += newl; Line(newl) = {pntGap[0],pntGap[1]};

// box
pntBox[] += newp; Point(newp) = { -stepAirBox, hcoreE+stepAirBox, 0, lc0 };
pntBox[] += newp; Point(newp) = { wcoreEMax+ag+wcoreEMax/5+stepAirBox,hcoreE+stepAirBox,0,lc0};
pntBox[] += newp; Point(newp) = {wcoreEMax+ag+wcoreEMax/5+stepAirBox,-hcoreE-stepAirBox,0,lc0};
pntBox[] += newp; Point(newp) = { -stepAirBox, -hcoreE-stepAirBox,0,lc0};

lnBox[] += newl; Line(newl) = {pntBox[0],pntBox[1]};
lnBox[] += newl; Line(newl) = {pntBox[1],pntBox[2]};
lnBox[] += newl; Line(newl) = {pntBox[2],pntBox[3]};
lnBox[] += newl; Line(newl) = {pntBox[3],pntBox[0]};


// line loop coil right
Line Loop(2) = {lnCoilRight[0],lnCoilRight[1],lnCoilRight[2],lnCoilRight[3]};

// line loop coil left
Line Loop(3) = {lnCoilLeft[0],lnCoilLeft[1],lnCoilLeft[2],lnCoilLeft[3],lnCoilLeft[4]};

// line loop C-core
cc[]={lnCoilLeft[0],lnCCore[0],lnCCore[1],lnSpline[0],lnCCore[2],
      lnCCore[3],lnCoilLeft[4]};
//Printf("cc:", cc[]);//afficher les numéros de lignes
//Printf("lnSpline:", lnSpline[]);//afficher les numéros de lignes
Line Loop(1) = cc[];

// line loop gap
Line Loop(4) = {lnGap[0],lnGap[4],-lnGap[2],-lnSpline[0]};
Line Loop(44) = {lnGap[1],-lnIcore[3],-lnGap[3],-lnGap[4]};
//Line Loop(4) = {lnGap[0],-lnIcore[3],-lnGap[1],-lnSpline[0]};

// line loop I-core
Line Loop(5) = {lnIcore[0],lnIcore[1],lnIcore[2],lnIcore[3]};

// line loop gap Air Inf
Line Loop(6) = {lnBox[0],lnBox[1],lnBox[2],lnBox[3]};

// line loop interior ???
ccc[] = {lnCCore[0],lnCCore[1],lnGap[0],lnGap[1],lnIcore[0],lnIcore[1],lnIcore[2],
                -lnGap[3],-lnGap[2],lnCCore[2],lnCCore[3],-lnCoilLeft[3],-lnCoilLeft[2],
                -lnCoilLeft[1]};
//Printf("ccc:", ccc[]);//afficher les numéros de lignes
//Printf("lnCCore:", lnCCore[]);//afficher les numéros de lignes
Line Loop(7) = ccc[];

nicepos[] = {lnIcore[],lnCoilRight[],lnCoilLeft[],lnCCore[],lnBox[],lnGap[],lnSpline[]};

surf_CCore = news ; Plane Surface(news) = {1,-2};
surf_CoilLeft = news ; Plane Surface(news) = {3};
surf_CoilRight = news ; Plane Surface(news) = {2};
surf_AirgapC = news ; Plane Surface(news) = {4};
surf_AirgapI = news ; Plane Surface(news) = {44};
surf_ICore = news ; Plane Surface(news) = {5};
surf_AirInf = news ; Plane Surface(news) = {6,-7};

//=================================================
// Some colors... for aesthetics :-)
//=================================================
Color Red {Surface{surf_CoilLeft,surf_CoilRight};}
Color SteelBlue {Surface{surf_CCore, surf_ICore};}
Color SkyBlue{Surface{surf_AirgapC,surf_AirgapI,surf_AirInf};}
//Geometry.Color.Lines = Orange;
//Color SteelBlue{Lines {nicepos};};
//=================================================
// Physical regions for FE analysis with GetDP
//=================================================
Physical Line(NICEPOS) = { nicepos[] };
Physical Surface(ECORE) = surf_CCore;
Physical Surface(ICORE) = surf_ICore;
Physical Surface(COIL) = surf_CoilRight;
Physical Surface(COIL+1) = surf_CoilLeft;
Physical Surface(AIRGAP_C) = surf_AirgapC; //either Fe or air
Physical Surface(AIRGAP_I) = surf_AirgapI; //either Fe or air
Physical Surface(AIR) = surf_AirInf;
Physical Surface(AIRINF) = surf_AirInf;
//Physical Line(AXIS_Y) = ln_axis[] ; // BC if symmetry
Physical Line(SURF_AIROUT) = lnBox[];
Physical Line(SURF_AIRGAP_ECORE) = lnSpline[0];//lnCCore[3];
Physical Line(SURF_AIRGAP_ICORE) = lnGap[4];//lnCCore[3];
If(Flag_meshRecombine==1.0)
  Recombine Surface{surf_CCore};
  Mesh.Algorithm = 8; // DelQuad (experimental)
EndIf
//Recombine Surface{surf_CCore,surf_ICore,surf_CoilRight,surf_CoilLeft,surf_Airgap,surf_AirInf};
//------
//Physical Line(AXIS_Y) = ln_axis[] ; // BC if symmetry
//Physical Line(SURF_AIROUT) = ln_rout[];

Coherence;


