#include "Data_Active.h"


/* Get_Geometry & co */
/* ----------------- */

void  Get_NodesCoordinatesOfElement(struct Element * Element) ;

void  Get_GeoElement(struct Element * Element, double u, double v, double w) ;

void  * Get_JacobianFunction (int Type_Jacobian, int Type_Element,
			      int * Type_Dimension) ;

/* Jacobian */
/* -------- */

#define Jacobian_ARG  struct Element * Element, MATRIX3x3 * Jac

double  JacobianVol0D               (Jacobian_ARG) ;
double  JacobianVol1D               (Jacobian_ARG) ;
double  JacobianVol2D               (Jacobian_ARG) ;
double  JacobianVol3D               (Jacobian_ARG) ;

double  JacobianVolSphShell2D       (Jacobian_ARG) ;
double  JacobianVolSphShell3D       (Jacobian_ARG) ;

double  JacobianVolAxi2D            (Jacobian_ARG) ;
double  JacobianVolAxiSphShell2D    (Jacobian_ARG) ;
double  JacobianVolAxiPlpdX2D       (Jacobian_ARG) ;

double  JacobianVolAxiSqu2D         (Jacobian_ARG) ;
double  JacobianVolAxiSquSphShell2D (Jacobian_ARG) ;

double  JacobianSur2D               (Jacobian_ARG) ;
double  JacobianSur3D               (Jacobian_ARG) ;
double  JacobianSurAxi2D            (Jacobian_ARG) ;

double  JacobianSurSphShell2D       (Jacobian_ARG) ;

double  JacobianLin3D               (Jacobian_ARG) ;


#undef Jacobian_ARG

/* -------- */

void  Get_InverseMatrix(int Type_Dimension, int Type_Element, double DetMat,
			MATRIX3x3 * Mat, MATRIX3x3 * InvMat) ;
void  Get_ProductMatrix(int Type_Dimension,
			MATRIX3x3 * A, MATRIX3x3 * B, MATRIX3x3 * AB) ;

/* -------- */
void *Get_ChangeOfCoordinates(int Flag_ChangeCoord, int Type_Form) ;

void  ChangeOfCoord_No1(struct Element * Element,
			double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_No123(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form1(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form2(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form3(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form1P(struct Element * Element,
			   double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form2P(struct Element * Element,
			   double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form1S(struct Element * Element,
			   double vBFu[], double vBFx[]) ;

/* -------- */

double  Cal_Product123 (double v1[], double v2[]) ;
double  Cal_Product12  (double v1[], double v2[]) ;
double  Cal_Product3   (double v1[], double v2[]) ;
double  Cal_Product1   (double v1[], double v2[]) ;
