
struct NumxList{
  int       Num ;
  List_T  * List ;
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
int InWhichBrick (struct Grid Grid, double x, double y, double z) ;

int PointInElement (struct Element * Element, int i_Element, 
		    List_T *ExcludeRegion_L,
		    double  x, double  y, double  z, 
		    double *u, double *v, double *w);

int PointInLastElement (struct Element * Element,
			double  x, double  y, double  z,
			double *u, double *v, double *w) ;

int PointInElementBox (struct Element * Element,
		       double x, double y, double z) ;

int PointInRefElement (struct Element * Element,
		       double u, double v, double w) ;

List_T * AllBricks (struct Grid Grid) ;
List_T * AllBricksForAnElementBox (struct Grid Grid) ;

void xyz2uvwInAnElement (struct Element *Element,
			 double  x, double  y, double  z, 
			 double *u, double *v, double *w,
			 double   (*Get_Jacobian) (struct Element * Element, MATRIX3x3 * Jac),
			 int      Dimension) ;

void Invert_MappingLists (List_T * List1, List_T * List2) ;

void Print_MappingList (List_T * List) ;

int fcmp_NumxList(const void * a, const void * b) ;
