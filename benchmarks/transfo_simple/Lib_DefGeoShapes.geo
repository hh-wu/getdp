
/////////////////////////
//  F U N C T I O N S  //
/////////////////////////

// These functions can be used for repetitive operations and use automatic
// numbering of geometrical entities.
// Useful inputs and outputs are available (only global variables are allowed).


// Definition of one path (and possibly its sub-paths)
//  IN:
//    x_[] : List of operations for defining a path
// OUT:
//    p_[] : List of points of the defined path
//    l_[] : List of lines of the defined path
//    current_p_index_[] : List of index of points joining sub-paths
//    current_l_index_[] : List of index of lines  joining sub-paths

START_  = 1; // to define the starting point of a path
LINE_   = 2; // to define a line linking the previous point and the current one
CIRCLE_ = 3; // to define a circle linking the previous point and the current one
CENTER_ = 4; // to define the current center for further circles

NEWP_     = 1; // to define a new point with absolute coordinates
NEWP_REL_ = 2; // to define a new point with relative coordinates
OLDP_     = 3; // to use an already existing point
CLOSE_    = 4; // for closed path (last point joining the first one)

SIZE_DATA_[NEWP_    ] = 7;
SIZE_DATA_[NEWP_REL_] = 7;
SIZE_DATA_[OLDP_    ] = 4;
SIZE_DATA_[CLOSE_   ] = 3;

////////
Function DefPath_

// Determine the number of groups of data in x_[]
// (x_[] must be analysed element by element because the loop variable
//  cannot be incremented in the loop body)
ix_toReach_ = 0; nb_groupsData_ = 0;
For ix_ In {0:#x_[]-1}
  If (ix_ == ix_toReach_)
    ix0_=ix_;
    ix_toReach_ = (ix0_+2 < #x_[])? ix0_ + SIZE_DATA_[x_[ix0_+2]] : -1;
    nb_groupsData_++;
  EndIf
EndFor
//Printf(" A-> nb_groups_ = %g", nb_groupsData_);

p_[] = {0}; l_[] = {};
ip_=0; il_=0;

ip_start_ = -1; ip_previous_ = -1; ip_center_ = -1;
x_previous_[] = {0., 0., 0.};

current_p_index_[]={}; current_l_index_[]={};

ix0_=0;
For i_group_ In {0:nb_groupsData_-1}
//  Printf(" A-> i_group_ = %g", i_group_);
//  Printf(" A-> ix0_ = %g", ix0_);

  If (x_[ix0_+2] == NEWP_ || x_[ix0_+2] == NEWP_REL_
      || x_[ix0_+2] == OLDP_ || x_[ix0_+2] == CLOSE_)

    ix_=ix0_+3;

    If (x_[ix0_+2] == NEWP_)
      p_[ip_] = newp;
      //    Printf(" A-> Add New Point (%g) = %g", ip_, p_[ip_]);
      //     Point(p_[ip_]) = {x_[ix_], x_[ix_+1], x_[ix_+2],  x_[ix_+3]};
      x_previous_[0] = x_[ix_  ];
      x_previous_[1] = x_[ix_+1];
      x_previous_[2] = x_[ix_+2];
      Point(p_[ip_]) = {x_previous_[0], x_previous_[1], x_previous_[2],  x_[ix_+3]};
    EndIf
    If (x_[ix0_+2] == NEWP_REL_)
      p_[ip_] = newp;
      //    Printf(" A-> Add New Point (%g) = %g", ip_, p_[ip_]);
      x_previous_[0] += x_[ix_  ];
      x_previous_[1] += x_[ix_+1];
      x_previous_[2] += x_[ix_+2];
      Point(p_[ip_]) = {x_previous_[0], x_previous_[1], x_previous_[2],  x_[ix_+3]};
    EndIf
    If (x_[ix0_+2] == OLDP_)
      p_[ip_] = x_[ix_];
      //     Printf(" A-> Add Old Point (%g) = %g", ip_, p_[ip_]);
    EndIf
    If (x_[ix0_+2] == CLOSE_)
      p_[ip_] = p_[ip_start_];
      //     Printf(" A-> Add Close Point (%g) = %g", ip_, p_[ip_]);
    EndIf

    If (x_[ix0_+1])
      current_p_index_[x_[ix0_+1]-1] = ip_previous_; // point index in p_[] for new sub-path
      current_l_index_[x_[ix0_+1]-1] = il_;   // line  index in l_[] for new sub-path
    EndIf
    ip_current_ = ip_; ip_++;
  EndIf

  If (x_[ix0_] == CENTER_) ip_center_ = ip_current_; EndIf
  If (x_[ix0_] == START_ ) ip_start_ = ip_current_; ip_previous_ = ip_current_; EndIf
  If (x_[ix0_] == LINE_ || x_[ix0_] == CIRCLE_)
    p_1_ = p_[ip_previous_]; p_2_ = p_[ip_current_];
    l_[il_] = newl;
    If (x_[ix0_] == LINE_)
      //      Printf(" A-> Add Line (%g) = %g", il_, l_[il_]);
      Line(l_[il_]) = {p_1_, p_2_};
    EndIf
    If (x_[ix0_] == CIRCLE_)
      //      Printf(" A-> Add Circle (%g) = %g", il_, l_[il_]);
      Circle(l_[il_]) = {p_1_, p_[ip_center_], p_2_};
    EndIf
    il_++;
    ip_previous_ = ip_current_;
  EndIf

  ix0_ += SIZE_DATA_[x_[ix0_+2]]; // Go to next line in data list x[]
EndFor

Return


////////
Function DefLoopAndSurface_
Call DefLoop_;
Call DefSurface_;
Return

////////
Function DefLoop_
current_numSurface=News++; Line Loop(current_numSurface) = current_loop[];
Return

////////
Function DefSurface_
If (flag_DefSurface)
  If (!#loopHoles[]) Plane Surface(current_numSurface) = {current_numSurface}; EndIf
  If ( #loopHoles[]) Plane Surface(current_numSurface) = {current_numSurface, loopHoles[]}; EndIf
EndIf
Return

////////
Function Get_StartPoints_
  current_pStartPoints[] = {};
  For ii_ In {0:#current_ref_StartPoints_[]-1}
    current_pStartPoints[ii_] = p_[current_p_index_[current_ref_StartPoints_[ii_]-1]];
  EndFor
Return

// Get a sub-path
//  IN:
//    num_path           : sub-path number
//    current_l_index_[] : List of index of lines  joining sub-paths
// OUT:
//    current_path[]     : sub-path (list of its lines)
////////
Function GetSubPath_
  index_inf_ = current_l_index_[num_path-1];
  If (num_path <  #current_l_index_[]) index_sup_ = current_l_index_[num_path] - 1; EndIf
  If (num_path >= #current_l_index_[]) index_sup_ = #current_loop[] - 1; EndIf
  current_path[] = current_loop[{index_inf_ : index_sup_}];
Return

// Inverse a sub-path (both the order of its lines and their orientations
//  IN:
//    in_path[]      : input  sub-path (list of its lines)
// OUT:
//    current_path[] : inversed sub-path (list of its lines)
////////
Function GetInvPath_
  size_path_ = #in_path[];
  current_path[]={};
  For il_ In {0:size_path_-1}
    current_path[size_path_-1 - il_] = -in_path[il_];
  EndFor
Return


// Define a path as a sequence of sub-paths
//  IN:
//    in_path[]      : input  sub-path (list of its lines)
//    current_loop[] : to be updated
// OUT:
//    current_loop[] : updated
////////
Function DefPath_Start
  current_loop[] = in_path[];
Return
Function DefPath_Add
  current_loop[] += in_path[];
Return
Function DefPath_AddInv
  Call GetInvPath_;
  current_loop[] += current_path[];
Return



// Definition of Rectangle
//  IN:
//    x0[0:2]        : Position of center
//    dx[0:1]        : width and height
//    lc             : Mesh size for corner points
//    flag_DefSurface: To define (1) or not (0) the surface...
//                     (the surface could be defined later with another function)
//    loopHoles[]    : set of loops for possible holes (={} if no holes)
//    flagTransfinite: 1 for Transfinite mesh...
//    valBump        : ... using this Bump parameter
//    flagRecombine  : 1 for Recombine (if Transfinite mesh)
// OUT:
//    current_loop[] : Loop vector
//    current_numSurface:
//                     Surface number

////////
Function DefPath_GeoRectangle

x_[] = {
  START_, 0, NEWP_, x0[0]-dx[0]/2., x0[1]-dx[1]/2., x0[2],  lc,
  LINE_ , 1, NEWP_REL_, dx[0],    0., 0.,  lc,
  LINE_ , 0, NEWP_REL_,    0., dx[1], 0.,  lc,
  LINE_ , 0, NEWP_REL_,-dx[0],    0., 0.,  lc,
  LINE_ , 2, CLOSE_
};
/* or with absolute coordinates
x_[] = {
  START_, 0, NEWP_, x0[0]-dx[0]/2., x0[1]-dx[1]/2., x0[2],  lc,
  LINE_ , 1, NEWP_, x0[0]+dx[0]/2., x0[1]-dx[1]/2., x0[2],  lc,
  LINE_ , 0, NEWP_, x0[0]+dx[0]/2., x0[1]+dx[1]/2., x0[2],  lc,
  LINE_ , 0, NEWP_, x0[0]-dx[0]/2., x0[1]+dx[1]/2., x0[2],  lc,
  LINE_ , 2, CLOSE_
};
*/


Call DefPath_;
current_loop[] = l_[];
Call DefLoopAndSurface_;
/*
Return

Function DefPath_GeoRectangle_Transfinite
*/
If (flagTransfinite)
  nxDivs = dx[0]/lc; nyDivs = dx[1]/lc;
  Transfinite Line {l_[1],l_[3]} = nyDivs+1 Using Bump valBumpY;
  If (valBumpX != 0)
    Transfinite Line {l_[0],l_[2]} = nxDivs+1 Using Bump valBumpX;
  EndIf
  If (valBumpX == 0)
    Transfinite Line {l_[0]} = nxDivs+1 Using Progression valProgressionX;
    Transfinite Line {l_[2]} = nxDivs+1 Using Progression 1./valProgressionX;
  EndIf
  If (flag_DefSurface)
    Transfinite Surface {current_numSurface} = {p_[0],p_[1],p_[2],p_[3]};  
    If (flagRecombine)  Recombine Surface {current_numSurface};  EndIf
  EndIf
EndIf

Return


// Definition of Circle
//  IN:
//    x0[0:2]        : Position of center
//    radius         : Circle radius
//    lc             : Mesh size for corner points
//    flag_DefSurface: To define (1) or not (0) the surface...
//    loopHoles[]    : set of loops for possible holes (={} if no holes)
// OUT:
//    current_loop[] : Loop vector
//    current_numSurface:
//                     Surface number

////////
Function DefPath_GeoCircle

x_[] = {
  CENTER_, 0, NEWP_, x0[0], x0[1], x0[2], lc,
  START_ , 0, NEWP_, x0[0]+radius, x0[1], x0[2], lc,
  CIRCLE_, 1, NEWP_, x0[0], x0[1]+radius, x0[2], lc,
  CIRCLE_, 0, NEWP_, x0[0]-radius, x0[1], x0[2], lc,
  CIRCLE_, 0, NEWP_, x0[0], x0[1]-radius, x0[2], lc,
  CIRCLE_, 0, CLOSE_
};
Call DefPath_;
current_loop[] = l_[];
Call DefLoopAndSurface_;

Return


// Definition of a half circle joined by two lines (e.g. on y-axis)
////////
Function DefPath_GeoHalfCircle_Yaxis

x_[] = {
  CENTER_, 0, NEWP_, x0[0], x0[1], x0[2], lc,
  START_ , 0, OLDP_, current_pStartPoints[0],
  LINE_  , 1, NEWP_, x0[0], x0[1]-radius, x0[2], lc,
  CIRCLE_, 2, NEWP_, x0[0]+radius, x0[1], x0[2], lc,
  CIRCLE_, 0, NEWP_, x0[0], x0[1]+radius, x0[2], lc,
  LINE_  , 3, OLDP_, current_pStartPoints[1]
};
Call DefPath_;
// the loop has to be defined by the user (adding paths)

Return


// Print Vector (for checking numbers)
//  IN:
//    vector[] : list of quantities to be printed
// OUT:
//    /
////////
Function PrintVector
vector_size_ = #vector[];
Printf("Vector: size: %g", vector_size_);
For i In {0:vector_size_-1}
  Printf(" %g", vector[i]);
EndFor 
Return
/* use e.g.:
vector[]=yourlist[]; Call PrintVector;
 */


News = 0; // replaces 'news', to allow surface numbers to be given to loops as well
