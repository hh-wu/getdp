
struct Brick {
  List_T *p[3];
} ;

struct ElementBox {
  double  Xmin, Xmax ;
  double  Ymin, Ymax ;
  double  Zmin, Zmax ;
} ;

struct PointElement {
  double d;
  double xp, yp, zp;
  struct Element Element;
} ;

void Init_SearchGrid (struct Grid * Grid) ;

void InWhichElement (struct Grid Grid, 
		     List_T *ExcludeRegion,
		     struct Element * Element, 
		     int Flag, 
		     double  x, double  y, double  z, 
		     double *u, double *v, double *w) ;

void xyz2uvwInAnElement (struct Element *Element,
			 double  x, double  y, double  z, 
			 double *u, double *v, double *w,
			 double   (*Get_Jacobian) (struct Element * Element, MATRIX3x3 * Jac),
			 int      Dimension) ;
