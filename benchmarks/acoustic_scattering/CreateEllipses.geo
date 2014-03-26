/*
- This function constructs N_scat ellipses, which centers coordinate and semi axis are contained respectively in the lists 
"CentreX", "CentreY", "RadiusX" and "RadiusY". Each list is of size N_scat.
To make this function works, the lists "LL_scat[]" and "Line_scat[]" are assumed to exist. They contains respectively
the indexes of the "Line Loop" and the "Line" of the scatterers already created (could be empty if no scatterer at the moment).
The function "CreateN_scatDisks" add the Line Loop and the Plane Surface of the new discs created in the end of the lists mentionned above.

Warning: The point PF = (0,0,0) is assumed to be created !!

- Global variables involved:
N_scat: Number of obstacles to contruct (will never be incremented)
CentreScat[] = List of size N_scat containing the indexes of the centres(=point) of the discs
RadiusX[] = List of size N_scat containing the radii of the discs (reals)
LL_scat[] = List of the indexes containing the "Line Loop" of each scatterer already created (could be empty)
Line_Scat[] = Same but containing the indexes of the line of the boundary of the scatterers.

Remark: the variables finishing by "aux" are used only inside this function (created and modified locally).
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

No modification are operated on the involved variables except on LL_scat[] and Line_Scat[]

If(radius ==0) then obstacle is not created (for onelab)
*/

Function CreateEllipses
 
//For each Obstacle
For pCreate In {0:(N_scat_to_create-1)}
  ItsOK = 1;
  //Extraction of the centre "Point{Centre[pCreate]}" and of the radius "Rayon[pCreate]"
  CentreXp = CentreX_pre[pCreate]; CentreYp = CentreY_pre[pCreate];
  RadiusXp = RadiusX_pre[pCreate]; RadiusYp = RadiusY_pre[pCreate];

  //Check if the ellipses touch the boundary
  Call DoesThisEllipseFit;
  If(!ItsOK)
    Error("Obstacle number %g cannot be placed ! (too close to boundary)", pCreate);
  EndIf
    
  //check the ellipses
  If(ItsOK)
    For q In {0:N_scat-1}
      cpX = CentreXp; cpY = CentreYp;
      rpX = RadiusXp; rpY = RadiusYp;
      cqX = CentreX[q]; cqY = CentreY[q];
      rqX = RadiusX[q]; rqY = RadiusY[q];
      Call DoesTheseEllipsesIntersect;
    EndFor
    If(!ItsOK)
      Error("Obstacle number %g cannot be placed ! (intersection with other ellipse)", pCreate);
    EndIf
  EndIf
  _ItsOK~{pCreate} = ItsOK;
  
  If(ItsOK)  
    //update variables
    N_scat +=1;
    CentreX[] += CentreXp;
    CentreY[] += CentreYp;
    RadiusX[] += RadiusXp;
    RadiusY[] += RadiusYp;
    
    //creation of the center point
    //if X=Y=0 then the point exists (=PF)
    If(CentreXp ==0 && CentreYp == 0)
      Centrep = PF;
    EndIf
    If(CentreXp != 0 || CentreYp != 0)
      Centrep = newp; Point(Centrep) = {CentreXp, CentreYp, 0, lcScat};
    EndIf
    
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
    Line_Scat[] = {Line_Scat[], L1aux,L2aux,L3aux,L4aux};
    
    //Storing the indexes of the "Line Loop" in the list "LL_scat"
    LL_scat[] = {LL_scat[],lineloopaux};
    
    saux = news; Plane Surface(saux) = {lineloopaux};
    S_scat[] = {S_scat[], saux};
  EndIf
EndFor

// End of the Function
Return

//---------------------------------------------------------------------------
// Check if two ellipses intersect or overlap
// compare [cpX, cpY] and [cqX,cqY] ellipses with radii [rpX,rpY] and [rqX,rqY]
// Variables here are suffixed by "_AAA" to avoid overlap
Function DoesTheseEllipsesIntersect
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
    If(dpq_AAA -rp_AAA -rq_AAA <= 0)
      ItsOK =0; //intersection
    EndIf
  EndIf
Return


//--------------------------
// Check if the ellipse intersects the boundary. Note that it's not fully precise: what is checked is if the
// rectangle surrounding the ellipse does intersect the boundary.
Function DoesThisEllipseFit
  dpq_AAA = Sqrt[CentreXp*CentreXp + CentreYp*CentreYp];
  If(dpq_AAA == 0)
    ItsOK = (RadiusXp < Xmax) && (RadiusYp < Ymax);
  EndIf  
  If(dpq_AAA > 0)  
    If(Type_Truncation == ABC)
      //check the four corners of the rectangle
      //top right
      x_AAA = CentreXp + RadiusXp; y_AAA = CentreYp + RadiusYp;
      r_AAA = x_AAA*x_AAA/(Xmax*Xmax) + y_AAA*y_AAA/(Ymax*Ymax);
      ItsOK = ItsOK && (r_AAA < 1);
      //top left
      x_AAA = CentreXp - RadiusXp; y_AAA = CentreYp + RadiusYp;
      r_AAA = x_AAA*x_AAA/(Xmax*Xmax) + y_AAA*y_AAA/(Ymax*Ymax);
      ItsOK = ItsOK && (r_AAA < 1);
      //down left
      x_AAA = CentreXp - RadiusXp; y_AAA = CentreYp - RadiusYp;
      r_AAA = x_AAA*x_AAA/(Xmax*Xmax) + y_AAA*y_AAA/(Ymax*Ymax);
      ItsOK = ItsOK && (r_AAA < 1);
      //down right
      x_AAA = CentreXp + RadiusXp; y_AAA = CentreYp - RadiusYp;
      r_AAA = x_AAA*x_AAA/(Xmax*Xmax) + y_AAA*y_AAA/(Ymax*Ymax);
      ItsOK = ItsOK && (r_AAA < 1);
    EndIf
    If(Type_Truncation == PML)      
      ItsOK = (CentreXp + RadiusXp < Xmax) && (CentreXp - RadiusXp > -Xmax) && (CentreYp + RadiusYp < Ymax) && (CentreXp - RadiusYp > -Ymax); //intersection
    EndIf
  EndIf
Return

