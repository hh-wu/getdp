#include "Data_Active.h"


/* Treatment_Formulation & co */
/* -------------------------- */

void  Treatment_Formulation(struct Formulation * Formulation_P) ;

void  Treatment_FemFormulation(struct Formulation * Formulation_P) ;
void  Treatment_FemGlobalTerm
  (struct EquationTerm   * EquationTerm_P,
   struct FunctionSpace  * FunctionSpace_P,
   struct GlobalQuantity * GlobalQuantity_P) ;

void  Treatment_GlobalFormulation(struct Formulation * Formulation_P) ;

/*---------------------------------------------------------------------*/

void  Pre_InitTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				struct QuantityStorage  * QuantityStorage_P0) ;
void  Pre_TermOfFemEquation(struct Element          * Element,
			    struct EquationTerm     * EquationTerm_P,
			    struct QuantityStorage  * QuantityStorage_P0) ;

void  Pre_InitGlobalTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				      struct QuantityStorage  * QuantityStorage_P0) ;
void  Pre_GlobalTermOfFemEquation(int  Num_Region,
				  struct EquationTerm     * EquationTerm_P,
				  struct QuantityStorage  * QuantityStorage_P0) ;

void  Cal_FemGlobalEquation(struct EquationTerm    * EquationTerm_P,
			    struct DefineQuantity  * DefineQuantity_P0,
			    struct QuantityStorage * QuantityStorage_P0) ;
void  Pre_FemGlobalEquation(struct EquationTerm    * EquationTerm_P,
			    struct DefineQuantity  * DefineQuantity_P0,
			    struct QuantityStorage * QuantityStorage_P0) ;

/*---------------------------------------------------------------------*/

void  Par_TermOfFemEquation(struct Element          * Element,
			    struct EquationTerm     * EquationTerm_P,
			    struct QuantityStorage  * QuantityStorage_P0) ;

/*---------------------------------------------------------------------*/

void  Cal_InitGalerkinTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
					struct QuantityStorage  * QuantityStorage_P0,
					struct QuantityStorage  * QuantityStorageNoDof,
					struct Dof              * DofForNoDof_P) ;

void  Cal_GalerkinTermOfFemEquation(struct Element          * Element,
				    struct EquationTerm     * EquationTerm_P,
				    struct QuantityStorage  * QuantityStorage_P0) ;

void  Cal_InitdeRhamTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				      struct QuantityStorage  * QuantityStorage_P0,
				      struct QuantityStorage  * QuantityStorageNoDof,
				      struct Dof              * DofForNoDof_P) ;

void  Cal_deRhamTermOfFemEquation(struct Element          * Element,
				  struct EquationTerm     * EquationTerm_P,
				  struct QuantityStorage  * QuantityStorage_P0) ;

void  Cal_GlobalTermOfFemEquation(int  Num_Region,
				  struct EquationTerm     *EquationTerm_P,
				  struct QuantityStorage  *QuantityStorage_P0,
				  struct QuantityStorage  *QuantityStorageNoDof,
				  struct Dof              *DofForNoDof_P) ;

void  Cal_InitIntegralQuantity(struct Element                *Element, 
			       struct IntegralQuantityActive *IQ,
			       struct QuantityStorage        *QuantityStorage_P) ;

void  Cal_IntegralQuantity(struct Element                *Element, 
			   struct IntegralQuantityActive *IQ,
			   struct QuantityStorage        *QuantityStorageDof_P0,
			   struct QuantityStorage        *QuantityStorageDof_P,
			   int                            Type_DEfineQuantity, 
			   int                            Nbr_Dof, 
			   void                         (*xFunctionBF[])(),
			   struct                         Value vBFxDof[] ) ;

void Cal_vBFxDof(struct EquationTerm       * EquationTerm_P,
		 struct FemLocalTermActive * FI,
		 struct QuantityStorage    * QuantityStorage_P0,
		 struct QuantityStorage    * QuantityStorageDof_P,
		 int                         Nbr_Dof,			   
		 void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
		 (struct Element * Element, int NumEntity, 
		  double u, double v, double w, double Value[]),
		 double vBFxEqu[][MAX_DIM],
		 struct Value vBFxDof[]);

double  Cal_AnalyticIntegration(struct Element * Element, 
				void (*BFEqu)(), void (*BFDof)(),
				int i, int j, double (*Cal_Productx)() ) ;

/*---------------------------------------------------------------------*/

void  Pos_Formulation(struct Formulation * Formulation_P,
		      struct PostProcessing * PostProcessing_P,
		      struct PostSubOperation * PostSubOperation_P) ;
void  Pos_FemInterpolation (struct Element          * Element,
			    struct QuantityStorage  * QuantityStorage_P0,
			    struct QuantityStorage  * QuantityStorage_P,
			    int Type_Quantity, int Type_Operator, int UseXYZ, 
			    double u, double v, double w, 
			    double x, double y, double z, 
			    double Val[], int * Type_FormDof,
			    int Flag_ChangeOfCoordinates) ;
void  Pos_Interactive(struct Formulation *Formulation_P,
		      struct PostProcessing * PostProcessing_P);

/*---------------------------------------------------------------------*/

void  Cal_AssembleTerm_NoDt   (struct Dof * Equ, struct Dof * Dof, double Val[]) ;
void  Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[]) ;
void  Cal_AssembleTerm_DtDof  (struct Dof * Equ, struct Dof * Dof, double Val[]) ;
void  Cal_AssembleTerm_Dt     (struct Dof * Equ, struct Dof * Dof, double Val[]) ;
void  Cal_AssembleTerm_DtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]) ;
void  Cal_AssembleTerm_DtDt   (struct Dof * Equ, struct Dof * Dof, double Val[]) ;
void  Cal_AssembleTerm_JacNL  (struct Dof * Equ, struct Dof * Dof, double Val[]) ;

/*---------------------------------------------------------------------*/

int   Get_ValueFromForm(int Form);

struct IntegrationCase * Get_IntegrationCase (struct Element * Element, 
					      List_T *IntegrationCase_L, 
					      int     CriterionIndex) ;

void  Get_InitFunctionValue(int Type_Operator,
			    struct QuantityStorage  * QuantityStorage_P,
			    int * Type_Form) ;
void  Get_FunctionValue(int Nbr_Function, 
			void (*xFunctionBF[])(),
			int Type_Operator,
			struct QuantityStorage  * QuantityStorage_P,
			int * Type_Form) ;

double Cal_InterpolationDegree(struct Element * Element,
			       struct QuantityStorage * QuantityStorage);
double Cal_MaxEdgeLength(struct Element * Element);

void  Get_InitElementSource (struct Element * Element, int InIndex) ;
int   Get_NextElementSource (struct Element * ElementSource) ;

void  Get_ElementTrace (struct Element * Element, int InIndex) ;

/*---------------------------------------------------------------------*/

struct ConstraintActive * Generate_Network(List_T * ConstraintPerRegion_L) ;

void  Cal_SolidAngle(int Source, struct Element *Element,
		     struct QuantityStorage * QuantityStorage,
		     int Nbr_Dof, int Index,
		     struct Value Angles[NBR_MAX_BASISFUNCTIONS][MAX_STACK_SIZE]);
