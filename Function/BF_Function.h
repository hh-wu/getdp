
#include "Message.h"

#include "Data_Element.h"
#include "HBF_Function.h"

#define BF_ARG  struct Element * Element, int NumEntity, \
                double u, double v, double w,  double Value[]


/* BF_ ...   */
/* --------- */

void  BF_Node                        (BF_ARG) ;
void  BF_GradNode                    (BF_ARG) ;
				     
void  BF_Edge                        (BF_ARG) ;
void  BF_CurlEdge                    (BF_ARG) ;
				     
void  BF_Facet                       (BF_ARG) ;
void  BF_DivFacet                    (BF_ARG) ;
				     
void  BF_Volume                      (BF_ARG) ;
				     
void  BF_PerpendicularEdge           (BF_ARG) ;
void  BF_CurlPerpendicularEdge       (BF_ARG) ;
				     
void  BF_NodeX                       (BF_ARG) ;
void  BF_NodeY                       (BF_ARG) ;
void  BF_NodeZ                       (BF_ARG) ;

void  BF_GroupOfNodesX               (BF_ARG) ;
void  BF_GroupOfNodesY               (BF_ARG) ;
void  BF_GroupOfNodesZ               (BF_ARG) ;
void  BF_DxyGNodesX                  (BF_ARG) ;
void  BF_DxyGNodesY                  (BF_ARG) ;

void  BF_CurlNodeX                   (BF_ARG) ;
void  BF_CurlNodeY                   (BF_ARG) ;
void  BF_CurlNodeZ                   (BF_ARG) ;
void  BF_DivNodeX                    (BF_ARG) ;
void  BF_DivNodeY                    (BF_ARG) ;
void  BF_DivNodeZ                    (BF_ARG) ;
				     
void  BF_PerpendicularFacet          (BF_ARG) ;
void  BF_DivPerpendicularFacet       (BF_ARG) ;

void  BF_GroupOfNodes                (BF_ARG) ;
void  BF_GradGroupOfNodes            (BF_ARG) ;
void  BF_GroupOfPerpendicularEdges   (BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges(BF_ARG) ;

void  BF_GroupOfEdges                (BF_ARG) ;
void  BF_CurlGroupOfEdges            (BF_ARG) ;

void  BF_Region                      (BF_ARG) ;
void  BF_RegionX                     (BF_ARG) ;
void  BF_RegionY                     (BF_ARG) ;
void  BF_RegionZ                     (BF_ARG) ;

void  BF_Global                      (BF_ARG) ;
void  BF_dGlobal                     (BF_ARG) ;

void  BF_Zero                        (BF_ARG) ;
void  BF_One                         (BF_ARG) ;

#undef BF_ARG

