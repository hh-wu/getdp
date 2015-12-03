/*
- This function constructs N_scatCreated ellipses, which centres coordinate and
semi axis are contained respectively in the lists "CentreX", "CentreY",
"RadiusX" and "RadiusY". Each list is of size N_scatCreated.  To make this
function work, the lists "LL_scat[]" and "Line_scat[]" are assumed to
exist. They contain respectively the indices of the "Line Loop" and the "Line"
of the scatterers already created (could be empty if no scatterer at the
moment).  The function "CreateEllipses" adds the Line Loop and the Plane Surface
of the new discs created at the end of the lists mentioned above.

Warning: The point PF = (0,0,0) is assumed to exist!

- Global variables involved:

N_scatCreated = Number of obstacles to construct (will never be incremented)
CentreScat[] = List of size N_scatCreated containing the indexes of the
               centres(=point) of the discs
RadiusX[] = List of size N_scatCreated containing the radii of the discs (reals)
LL_scat[] = List of the indexes containing the "Line Loop" of each scatterer
            already created (could be empty)
Line_scat[] = Same but containing the indexes of the line of the
              boundary of the scatterers.

Remark: the variables finishing by "aux" are used only inside this function
(created and modified locally).

- Variables created and used in this function:

pCreate: Counter of the "For-loop"
CentreXp: CentreX[pCreate]
CentreYp: CentreY[pCreate]
RadiusXp:  RadiusX[pCreate]
RadiusYp:  RadiusY[pCreate]
c1aux, c2aux,c3aux,c4aux: points on the circle (usefull for the creation of circle arc).
L1aux,L2aux,L3aux,L4aux: circle arc of the (futur) circles
lineloopaux: Line Loop(New Disc)
surfaceaux: Plane Surface(New Disc)

No modification are operated on the involved variables except on LL_scat[] and
Line_scat[]

If(radius == 0) then obstacle is not created (for onelab)
*/

MAX_TRIAL = 100;

Function CreateEllipses
  //Security bool
  Abording = 0;
  StopTrying = 0;
  //init
  CentreXp = XS;
  CentreYp = YS;
  RadiusXp = 0;
  RadiusYp = 0;
  //For each Obstacle
  For pCreate In {0:(N_scat_to_create-1)}
    If(!Abording)
      ntrial = 0;
      ItsOK = 0;
      For itry In {0:MAX_TRIAL}
	If(!ItsOK)
	  ntrial ++;
	  //compute random center
	  Radius = r_min + Rand[r_max - r_min];
	  RadiusXp = Radius;
	  RadiusYp = Radius;

	  //compute random center
	  CentreXp = Xboxmin + RadiusXp + Rand[Xboxmax - Xboxmin - 2*RadiusXp];
	  CentreYp = Yboxmin + RadiusYp + Rand[Yboxmax - Yboxmin - 2*RadiusYp];

	  //Check if the ellipses touch the boundary
	  Call DoesThisEllipseFit;
	  //check the ellipses
	  If(ItsOK)
	    cpX = CentreXp; cpY = CentreYp;
	    rpX = RadiusXp; rpY = RadiusYp;
	    For q In {0:N_scatCreated-1}
	      cqX = CentreX[q]; cqY = CentreY[q];
	      rqX = RadiusX[q]; rqY = RadiusY[q];
	      Call DoTheseEllipsesIntersect;
	    EndFor
	  EndIf
	EndIf
      EndFor
      //Stop now: impossible to place a new obstacle
      If(!ItsOK)
	Abording = 1;
	Error("Only %g disks can be placed instead of %g", N_scatCreated, N_scat_to_create);
      EndIf
      If(ItsOK)
	N_scatCreated ++;
	//update variables
	CentreX[] += CentreXp;
	CentreY[] += CentreYp;
	RadiusX[] += RadiusXp;
	RadiusY[] += RadiusYp;

	//creation of the center point
	Centrep = newp; Point(Centrep) = {CentreXp, CentreYp, 0, lcScat};

	//Creation of the 4 points (Up,Down,Left,Right) used to create the circle
	c1aux = newp; Translate{RadiusXp,0,0}{Duplicata{Point{Centrep};}}
	c2aux = newp; Translate{0,RadiusYp,0}{Duplicata{Point{Centrep};}}
	c3aux = newp; Translate{-RadiusXp,0,0}{Duplicata{Point{Centrep};}}
	c4aux = newp; Translate{0,-RadiusYp,0}{Duplicata{Point{Centrep};}}

	//Creation of the 4 circle-arcs
	L1aux = newreg; Ellipse(L1aux) = {c1aux,Centrep, c2aux, c2aux};
	L2aux = newreg; Ellipse(L2aux) = {c2aux,Centrep, c3aux, c3aux};
	L3aux = newreg; Ellipse(L3aux) = {c3aux,Centrep, c4aux, c4aux};
	L4aux = newreg; Ellipse(L4aux) = {c4aux,Centrep, c1aux, c1aux};

	// Creation of the "Line Loop" of the new disc
	lineloopaux = newreg;
	Line Loop(lineloopaux) = {L1aux,L2aux,L3aux,L4aux};

	Line_scat[] = {Line_scat[], L1aux,L2aux,L3aux,L4aux};

	//Storing the indexes of the "Line Loop" in the list "LL_scat"
	LL_scat[] = {LL_scat[],lineloopaux};
	saux = news; Plane Surface(saux) = {lineloopaux};
	S_scat[] = {S_scat[], saux};
	//End For-Loop
      EndIf
    EndIf
  EndFor
  // End of the Function
Return

//---------------------------------------------------------------------------
// Check if two ellipses intersect or overlap
// compare [cpX, cpY] and [cqX,cqY] ellipses with radii [rpX,rpY] and [rqX,rqY]
// Variables here are suffixed by "_AAA" to avoid overlap
Function DoTheseEllipsesIntersect
  //first compare the radii
  If(rpX <= 0 || rpY <= 0 || rqX <= 0 || rqY <=0)
    ItsOK=0;
  EndIf

  //test inclusion
  If(ItsOK)
    dp_AAA = (cpX-cqX)*(cpX-cqX)/(rpX*rpX) + (cpY-cqY)*(cpY-cqY)/(rpY*rpY);
    dq_AAA = (cpX-cqX)*(cpX-cqX)/(rqX*rqX) + (cpY-cqY)*(cpY-cqY)/(rqY*rqY);
    If(dp_AAA < 1 || dq_AAA <1)
      ItsOK =0; //one of these ellipse is included in the other one
    EndIf
  EndIf

  //test intersections
  If(ItsOK)
    dpq_AAA = Sqrt[(cpX-cqX)*(cpX-cqX) + (cpY-cqY)*(cpY-cqY)];
    //distance on ellipse P
    costhetap_AAA = (cqX-cpX)/dpq_AAA;
    sinthetap_AAA = (cqY-cpY)/dpq_AAA;
    xp_AAA = costhetap_AAA*rpX;
    yp_AAA = sinthetap_AAA*rpY;
    rp_AAA = Sqrt[xp_AAA*xp_AAA + yp_AAA*yp_AAA];
    //distance on ellipse P
    costhetaq_AAA = (cpX-cqX)/dpq_AAA;
    sinthetaq_AAA = (cpY-cqY)/dpq_AAA;
    xq_AAA = costhetaq_AAA*rqX;
    yq_AAA = sinthetaq_AAA*rqY;
    rq_AAA = Sqrt[xq_AAA*xq_AAA + yq_AAA*yq_AAA];
    If(dpq_AAA -rp_AAA -rq_AAA <= dmin)
      ItsOK =0; //intersection or too close
    EndIf
  EndIf
Return


// Check if the ellipse intersects the boundary. Note that it's not fully
// precise: what is checked is if the rectangle surrounding the ellipse does
// intersect the boundary.
Function DoesThisEllipseFit
  dpq_AAA = Sqrt[CentreXp*CentreXp + CentreYp*CentreYp];
  If(dpq_AAA == 0)
    ItsOK = (RadiusXp < Xmax) && (RadiusYp < Ymax);
  EndIf
  If(dpq_AAA > 0)
    ItsOK = (CentreXp + RadiusXp < Xmax) && (CentreXp - RadiusXp > - Xmax) && (CentreYp + RadiusYp < Ymax) && (CentreXp - RadiusYp > -Ymax); //intersection
  EndIf
Return
