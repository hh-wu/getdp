#include "Data_Passive.h"
#include "Data_GeoData.h"

/* Init_Problem */
/* ------------ */

int   Get_Options(int argc, char *argv[], int *supargc, char **supargv, 
		  char *NameProblem) ;

void  Init_ProblemStructure (void) ;
void  Init_GlobalVariables (void) ;

void  Read_ProblemStructure (char * NameFilePro) ;

void  Print_ProblemStructure(struct Problem  * Problem) ;
void  Print_ListResolution(struct Problem  * Problem) ;
void  Print_ListPostOperation(struct Problem  * Problem) ;
void  Print_ListPostProcessing(struct Problem  * Problem) ;

void  SolvingAnalyse(char * NameGene) ;

void  Treatment_Resolution(int ResolutionIndex,
			   int * Nbr_DefineSystem, int * Nbr_OtherSystem,
			   struct Resolution   ** Resolution_P,
			   struct DefineSystem ** DefineSystem_P0,
			   struct DofData      ** DofData_P0,
			   List_T              ** DofData_L,
			   List_T              *  GeoData_L,
			   struct GeoData      ** GeoData_P0) ;

void  Init_HarInDofData(struct DefineSystem * DefineSystem_P,
			struct DofData * DofData_P) ;
void  Init_PartInDofData(struct DofData * DofData_P, int NbrPart) ;
void  Init_DofDataInDefineQuantity(struct DefineSystem *DefineSystem_P,
				   struct DofData      *DofData_P0,
				   struct Formulation  *Formulation_P) ;

void Treatment_Preprocessing(int Nbr_DefineSystem,
                             struct DofData        * DofData_P0,
                             struct DefineSystem   * DefineSystem_P0,
			     struct GeoData        * GeoData_P0) ;

void  Treatment_Operation(struct Resolution  * Resolution_P,
                          List_T             * Operation_L, 
                          struct DofData     * DofData_P0,
                          struct GeoData     * GeoData_P0,
                          struct Resolution  * Resolution2_P,
                          struct DofData     * DofData2_P0) ;

void  Init_OperationOnSystem(struct Resolution   * Resolution_P,
			     struct Operation    * Operation_P ,
			     struct DofData      * DofData_P0,
			     struct GeoData      * GeoData_P0,
			     struct DefineSystem ** DefineSystem_P,
			     struct DofData      ** DofData_P,  
			     int Flag_Jac,
			     struct Resolution   * Resolution2_P) ;

void  Generate_System(struct DefineSystem * DefineSystem_P,
		      struct DofData * DofData_P, 
		      struct DofData * DofData_P0, 
		      int Flag_Jac, int Separate) ;

void  Update_System(struct DefineSystem * DefineSystem_P,
		    struct DofData * DofData_P, 
		    struct DofData * DofData_P0,
		    int TimeFunctionIndex) ;

double  * Get_TimeFunctionValues(struct DofData * DofData_P) ;

void  Treatment_PostOperation(struct Resolution     * Resolution_P,
			      struct DofData        * DofData_P0,
			      struct DefineSystem   * DefineSystem_P0,
			      struct GeoData        * GeoData_P0,
			      struct PostOperation  * PostOperation_P) ;

void  Operation_IterativeTimeReduction(struct Resolution  * Resolution_P,
				       struct Operation   * Operation_P, 
				       struct DofData     * DofData_P0,
				       struct GeoData     * GeoData_P0) ;
void  Cal_CompareGlobalQuantity(struct Operation * Operation_P,
				int Type_Analyse, int * Type_ChangeOfState,
				int * FlagIndex, int Flag_First) ;

void  Operation_ChangeOfCoordinates(struct Resolution  * Resolution_P,
				    struct Operation   * Operation_P, 
				    struct DofData     * DofData_P0,
				    struct GeoData     * GeoData_P0) ;
