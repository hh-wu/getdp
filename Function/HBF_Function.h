/* $Id: HBF_Function.h,v 1.3 2000-09-07 18:47:23 geuzaine Exp $ */

#define HBF_ARG  struct Element * Element, int NumEntity, \
                 double u, double v, double w,  double Value[]


/* HBF_Node_XXX */
/* ------------ */

void  HBF_Node_2E                    (HBF_ARG) ;
void  HBF_Node_2F                    (HBF_ARG) ;
void  HBF_Node_2V                    (HBF_ARG) ;
void  HBF_Node_3E                    (HBF_ARG) ;
void  HBF_Node_3F                    (HBF_ARG) ;
void  HBF_Node_3V                    (HBF_ARG) ;

void  HBF_GradNode_2E                (HBF_ARG) ;
void  HBF_GradNode_2F                (HBF_ARG) ;
void  HBF_GradNode_2V                (HBF_ARG) ; 
void  HBF_GradNode_3E                (HBF_ARG) ;
void  HBF_GradNode_3F                (HBF_ARG) ;
void  HBF_GradNode_3V                (HBF_ARG) ;

void  HBF_PerpendicularEdge_2E       (HBF_ARG) ;
void  HBF_PerpendicularEdge_2F       (HBF_ARG) ;
void  HBF_PerpendicularEdge_2V       (HBF_ARG) ;
void  HBF_PerpendicularEdge_3E       (HBF_ARG) ;
void  HBF_PerpendicularEdge_3F       (HBF_ARG) ;
void  HBF_PerpendicularEdge_3V       (HBF_ARG) ;

void  HBF_CurlPerpendicularEdge_2E   (HBF_ARG) ;
void  HBF_CurlPerpendicularEdge_2F   (HBF_ARG) ;
void  HBF_CurlPerpendicularEdge_2V   (HBF_ARG) ;
void  HBF_CurlPerpendicularEdge_3E   (HBF_ARG) ;
void  HBF_CurlPerpendicularEdge_3F   (HBF_ARG) ;
void  HBF_CurlPerpendicularEdge_3V   (HBF_ARG) ;

void  HBF_NodeX_2E                   (HBF_ARG) ;
void  HBF_NodeX_2F                   (HBF_ARG) ;
void  HBF_NodeX_2V                   (HBF_ARG) ;
void  HBF_NodeY_2E                   (HBF_ARG) ;
void  HBF_NodeY_2F                   (HBF_ARG) ;
void  HBF_NodeY_2V                   (HBF_ARG) ;
void  HBF_NodeZ_2E                   (HBF_ARG) ;
void  HBF_NodeZ_2F                   (HBF_ARG) ;
void  HBF_NodeZ_2V                   (HBF_ARG) ;
void  HBF_NodeX_3E                   (HBF_ARG) ;
void  HBF_NodeX_3F                   (HBF_ARG) ;
void  HBF_NodeX_3V                   (HBF_ARG) ;
void  HBF_NodeY_3E                   (HBF_ARG) ;
void  HBF_NodeY_3F                   (HBF_ARG) ;
void  HBF_NodeY_3V                   (HBF_ARG) ;
void  HBF_NodeZ_3E                   (HBF_ARG) ;
void  HBF_NodeZ_3F                   (HBF_ARG) ;
void  HBF_NodeZ_3V                   (HBF_ARG) ;


/* HBF_Edge_XXX */
/* ------------ */

void  HBF_Edge_2E                    (HBF_ARG) ;
void  HBF_Edge_3F_a                  (HBF_ARG) ;
void  HBF_Edge_3F_b                  (HBF_ARG) ;
void  HBF_Edge_3F_c                  (HBF_ARG) ;
void  HBF_Edge_4E                    (HBF_ARG) ;
void  HBF_Edge_4F                    (HBF_ARG) ;

void  HBF_CurlEdge_2E                (HBF_ARG) ;
void  HBF_CurlEdge_3F_a              (HBF_ARG) ;
void  HBF_CurlEdge_3F_b              (HBF_ARG) ;
void  HBF_CurlEdge_3F_c              (HBF_ARG) ;
void  HBF_CurlEdge_4E                (HBF_ARG) ;
void  HBF_CurlEdge_4F                (HBF_ARG) ;

void  HBF_PerpendicularFacet_2E      (HBF_ARG) ;
void  HBF_PerpendicularFacet_3F_a    (HBF_ARG) ;
void  HBF_PerpendicularFacet_3F_b    (HBF_ARG) ;
void  HBF_PerpendicularFacet_3F_c    (HBF_ARG) ;
void  HBF_PerpendicularFacet_4E      (HBF_ARG) ;
void  HBF_PerpendicularFacet_4F      (HBF_ARG) ;

void  HBF_DivPerpendicularFacet_2E   (HBF_ARG) ;
void  HBF_DivPerpendicularFacet_3F_a (HBF_ARG) ;
void  HBF_DivPerpendicularFacet_3F_b (HBF_ARG) ;
void  HBF_DivPerpendicularFacet_3F_c (HBF_ARG) ;
void  HBF_DivPerpendicularFacet_4E   (HBF_ARG) ;
void  HBF_DivPerpendicularFacet_4F   (HBF_ARG) ;


/* HBF_GroupOfEntities_XXX */
/* ----------------------- */

void  HBF_GroupOfNodes_2E            (HBF_ARG) ;
void  HBF_GroupOfNodes_2F            (HBF_ARG) ;
void  HBF_GroupOfNodes_2V            (HBF_ARG) ;

void  HBF_GradGroupOfNodes_2E        (HBF_ARG) ;
void  HBF_GradGroupOfNodes_2F        (HBF_ARG) ;
void  HBF_GradGroupOfNodes_2V        (HBF_ARG) ;

void  HBF_GroupOfEdges_2E            (HBF_ARG) ;

void  HBF_CurlGroupOfEdges_2E        (HBF_ARG) ;


#undef HBF_ARG

