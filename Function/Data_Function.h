/* $Id: Data_Function.h,v 1.15 2001-08-10 16:22:51 sabarieg Exp $ */
#ifndef _DADA_FUNCTION_H_
#define _DATA_FUNCTION_H_

#include "BF_Function.h"
#include "F_Function.h"
#include "GF_Function.h"

#define CAST  void(*)()

#define POI  POINT
#define LIN  LINE | LINE_2
#define TRI  TRIANGLE | TRIANGLE_2
#define QUA  QUADRANGLE | QUADRANGLE_2
#define TET  TETRAHEDRON | TETRAHEDRON_2
#define HEX  HEXAHEDRON | HEXAHEDRON_2
#define PRI  PRISM | PRISM_2
#define PYR  PYRAMID | PYRAMID_2

#define ALL  POI|LIN|TRI|QUA|TET|HEX|PRI|PYR

/* ------------------------------------------------------------------------ */
/*  Keywords, their assigned 3 functions and 2 numbers                      */
/* ------------------------------------------------------------------------ */

struct StringX3Function2Nbr  BF_Function[] = {
 
  /* H^1 Basis Functions and their gradients */

  {"BF_Node",    (CAST)BF_Node,    
                 (CAST)BF_GradNode,    (CAST)BF_Zero, 1., ALL },
  {"BF_Node_1N", (CAST)BF_Node,    
                 (CAST)BF_GradNode,    (CAST)BF_Zero, 1., ALL },
  {"BF_Node_2E", (CAST)BF_Node_2E, 
                 (CAST)BF_GradNode_2E, (CAST)BF_Zero, 2., ALL }, 
  {"BF_Node_2F", (CAST)BF_Node_2F, 
                 (CAST)BF_GradNode_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI }, 
  {"BF_Node_2V", (CAST)BF_Node_2V, 
                 (CAST)BF_GradNode_2V, (CAST)BF_Zero, 2., HEX|PRI }, 
  {"BF_Node_3E", (CAST)BF_Node_3E, 
                 (CAST)BF_GradNode_3E, (CAST)BF_Zero, 3., ALL }, 
  {"BF_Node_3F", (CAST)BF_Node_3F, 
                 (CAST)BF_GradNode_3F, (CAST)BF_Zero, 3., TRI|QUA|TET|HEX|PRI }, 
  {"BF_Node_3V", (CAST)BF_Node_3V, 
                 (CAST)BF_GradNode_3V, (CAST)BF_Zero, 3., HEX|PRI }, 

  {"BF_GradNode",    (CAST)BF_GradNode,   
                     (CAST)BF_Zero, (CAST)BF_Node,    0., ALL },
  {"BF_GradNode_1N", (CAST)BF_GradNode,    
                     (CAST)BF_Zero, (CAST)BF_Node,    0., ALL },
  {"BF_GradNode_2E", (CAST)BF_GradNode_2E, 
                     (CAST)BF_Zero, (CAST)BF_Node_2E, 1., ALL },
  {"BF_GradNode_2F", (CAST)BF_GradNode_2F, 
                     (CAST)BF_Zero, (CAST)BF_Node_2F, 1., QUA|HEX|PRI },
  {"BF_GradNode_2V", (CAST)BF_GradNode_2V, 
                     (CAST)BF_Zero, (CAST)BF_Node_2V, 1., HEX|PRI },
  {"BF_GradNode_3E", (CAST)BF_GradNode_3E, 
                     (CAST)BF_Zero, (CAST)BF_Node_3E, 2., ALL },
  {"BF_GradNode_3F", (CAST)BF_GradNode_3F, 
                     (CAST)BF_Zero, (CAST)BF_Node_3F, 2., TRI|QUA|TET|HEX|PRI },
  {"BF_GradNode_3V", (CAST)BF_GradNode_3V, 
                     (CAST)BF_Zero, (CAST)BF_Node_3V, 2., HEX|PRI },

  {"BF_GroupOfNodes",    (CAST)BF_GroupOfNodes,   
                         (CAST)BF_GradGroupOfNodes,    (CAST)BF_Zero, 1., ALL },
  {"BF_GroupOfNodes_1N", (CAST)BF_GroupOfNodes,    
                         (CAST)BF_GradGroupOfNodes,    (CAST)BF_Zero, 1., ALL },
  {"BF_GroupOfNodes_2E", (CAST)BF_GroupOfNodes_2E, 
                         (CAST)BF_GradGroupOfNodes_2E, (CAST)BF_Zero, 2., ALL },
  {"BF_GroupOfNodes_2F", (CAST)BF_GroupOfNodes_2F, 
                         (CAST)BF_GradGroupOfNodes_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI },
  {"BF_GroupOfNodes_2V", (CAST)BF_GroupOfNodes_2V, 
                         (CAST)BF_GradGroupOfNodes_2V, (CAST)BF_Zero, 2., HEX|PRI },
  {"BF_GroupOfNodes_3E", (CAST)BF_GroupOfNodes_3E, 
                         (CAST)BF_GradGroupOfNodes_3E, (CAST)BF_Zero, 3., ALL },
  {"BF_GroupOfNodes_3F", (CAST)BF_GroupOfNodes_3F, 
                         (CAST)BF_GradGroupOfNodes_3F, (CAST)BF_Zero, 3., HEX|PRI|TET|HEX|PRI },
  {"BF_GroupOfNodes_3V", (CAST)BF_GroupOfNodes_3V, 
                         (CAST)BF_GradGroupOfNodes_3V, (CAST)BF_Zero, 3., HEX|PRI },

  {"BF_GradGroupOfNodes",    (CAST)BF_GradGroupOfNodes,    
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes,    0., ALL },
  {"BF_GradGroupOfNodes_1N", (CAST)BF_GradGroupOfNodes,    
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes,    0., ALL },
  {"BF_GradGroupOfNodes_2E", (CAST)BF_GradGroupOfNodes_2E,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_2E, 1., ALL },
  {"BF_GradGroupOfNodes_2F", (CAST)BF_GradGroupOfNodes_2F,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_2F, 1., QUA|HEX|PRI },
  {"BF_GradGroupOfNodes_2V", (CAST)BF_GradGroupOfNodes_2V,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_2V, 1., HEX|PRI },
  {"BF_GradGroupOfNodes_3E", (CAST)BF_GradGroupOfNodes_3E,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_3E, 2., ALL },
  {"BF_GradGroupOfNodes_3F", (CAST)BF_GradGroupOfNodes_3F,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_3F, 2., HEX|PRI|TET|HEX|PRI },
  {"BF_GradGroupOfNodes_3V", (CAST)BF_GradGroupOfNodes_2V,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_3V, 2., HEX|PRI },


  /* H(curl) basis Functions and their curls */

  {"BF_Edge",      (CAST)BF_Edge,      
                   (CAST)BF_CurlEdge,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_Edge_1E",   (CAST)BF_Edge,     
                   (CAST)BF_CurlEdge,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_Edge_2E",   (CAST)BF_Edge_2E,  
                   (CAST)BF_CurlEdge_2E,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_Edge_2F",   (CAST)BF_Edge_2F,   
                   (CAST)BF_CurlEdge_2F,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_Edge_2V",   (CAST)BF_Edge_2V,   
                   (CAST)BF_CurlEdge_2V,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_Edge_3E",   (CAST)BF_Edge_3E,   
                   (CAST)BF_CurlEdge_3E,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3F_a", (CAST)BF_Edge_3F_a, 
                   (CAST)BF_CurlEdge_3F_a, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3F_b", (CAST)BF_Edge_3F_b, 
                   (CAST)BF_CurlEdge_3F_b, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3F_c", (CAST)BF_Edge_3F_c,
                   (CAST)BF_CurlEdge_3F_c, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3V",   (CAST)BF_Edge_3V,  
                   (CAST)BF_CurlEdge_3V,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_4E",   (CAST)BF_Edge_4E,  
                   (CAST)BF_CurlEdge_4E,   (CAST)BF_Zero, 2.,  ALL }, 
  {"BF_Edge_4F",   (CAST)BF_Edge_4F,  
                   (CAST)BF_CurlEdge_4F,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_4V",   (CAST)BF_Edge_4V,   
                   (CAST)BF_CurlEdge_4V,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI }, 

  {"BF_CurlEdge",      (CAST)BF_CurlEdge,      
                       (CAST)BF_Zero, (CAST)BF_Edge,      0., ALL },
  {"BF_CurlEdge_1E",   (CAST)BF_CurlEdge,      
                       (CAST)BF_Zero, (CAST)BF_Edge,      0., ALL },
  {"BF_CurlEdge_2E",   (CAST)BF_CurlEdge_2E,  
                       (CAST)BF_Zero, (CAST)BF_Edge_2E,   0., ALL },
  {"BF_CurlEdge_2F",   (CAST)BF_CurlEdge_2F,   
                       (CAST)BF_Zero, (CAST)BF_Edge_2F,   0., ALL },
  {"BF_CurlEdge_2V",   (CAST)BF_CurlEdge_2V,  
                       (CAST)BF_Zero, (CAST)BF_Edge_2V,   0., ALL },
  {"BF_CurlEdge_3E",   (CAST)BF_CurlEdge_3E,  
                       (CAST)BF_Zero, (CAST)BF_Edge_3E,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3F_a", (CAST)BF_CurlEdge_3F_a,
                       (CAST)BF_Zero, (CAST)BF_Edge_3F_a, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3F_b", (CAST)BF_CurlEdge_3F_b,
                       (CAST)BF_Zero, (CAST)BF_Edge_3F_b, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3F_c", (CAST)BF_CurlEdge_3F_c, 
                       (CAST)BF_Zero, (CAST)BF_Edge_3F_c, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3V",   (CAST)BF_CurlEdge_3V,  
                       (CAST)BF_Zero, (CAST)BF_Edge_3V,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_4E",   (CAST)BF_CurlEdge_4E,   
                       (CAST)BF_Zero, (CAST)BF_Edge_4E,   1., ALL },
  {"BF_CurlEdge_4F",   (CAST)BF_CurlEdge_4F,   
                       (CAST)BF_Zero, (CAST)BF_Edge_4F,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_4V",   (CAST)BF_CurlEdge_4V,  
                       (CAST)BF_Zero, (CAST)BF_Edge_4V,   1., TRI|QUA|TET|HEX|PRI },

  {"BF_GroupOfEdges",      (CAST)BF_GroupOfEdges,     
                           (CAST)BF_CurlGroupOfEdges,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_GroupOfEdges_1E",   (CAST)BF_GroupOfEdges,      
                           (CAST)BF_CurlGroupOfEdges,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_GroupOfEdges_2E",   (CAST)BF_GroupOfEdges_2E,   
                           (CAST)BF_CurlGroupOfEdges_2E,   (CAST)BF_Zero, 1.,  ALL },
  {"BF_GroupOfEdges_2F",   (CAST)BF_GroupOfEdges_2F,  
                           (CAST)BF_CurlGroupOfEdges_2F,   (CAST)BF_Zero, 1.,  ALL },
  {"BF_GroupOfEdges_2V",   (CAST)BF_GroupOfEdges_2V,  
                           (CAST)BF_CurlGroupOfEdges_2V,   (CAST)BF_Zero, 1.,  ALL },
  {"BF_GroupOfEdges_3E",   (CAST)BF_GroupOfEdges_3E,   
                           (CAST)BF_CurlGroupOfEdges_3E,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3F_a", (CAST)BF_GroupOfEdges_3F_a, 
                           (CAST)BF_CurlGroupOfEdges_3F_a, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3F_b", (CAST)BF_GroupOfEdges_3F_b, 
                           (CAST)BF_CurlGroupOfEdges_3F_b, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3F_c", (CAST)BF_GroupOfEdges_3F_c,
                           (CAST)BF_CurlGroupOfEdges_3F_c, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3V",   (CAST)BF_GroupOfEdges_3V,   
                           (CAST)BF_CurlGroupOfEdges_3V,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_4E",   (CAST)BF_GroupOfEdges_4E,   
                           (CAST)BF_CurlGroupOfEdges_4E,   (CAST)BF_Zero, 2.,  ALL },
  {"BF_GroupOfEdges_4F",   (CAST)BF_GroupOfEdges_4F,  
                           (CAST)BF_CurlGroupOfEdges_4F,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_4V",   (CAST)BF_GroupOfEdges_4V,  
                           (CAST)BF_CurlGroupOfEdges_4V,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI },

  {"BF_CurlGroupOfEdges",      (CAST)BF_CurlGroupOfEdges,      
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges,      0., ALL },
  {"BF_CurlGroupOfEdges_1E",   (CAST)BF_CurlGroupOfEdges,      
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges,      0., ALL },
  {"BF_CurlGroupOfEdges_2E",   (CAST)BF_CurlGroupOfEdges_2E,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_2E,   0., ALL },
  {"BF_CurlGroupOfEdges_2F",   (CAST)BF_CurlGroupOfEdges_2F,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_2F,   0., ALL },
  {"BF_CurlGroupOfEdges_2V",   (CAST)BF_CurlGroupOfEdges_2V,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_2V,   0., ALL },
  {"BF_CurlGroupOfEdges_3E",   (CAST)BF_CurlGroupOfEdges_3E,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3E,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3F_a", (CAST)BF_CurlGroupOfEdges_3F_a, 
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3F_a, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3F_b", (CAST)BF_CurlGroupOfEdges_3F_b, 
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3F_b, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3F_c", (CAST)BF_CurlGroupOfEdges_3F_c, 
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3F_c, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3V",   (CAST)BF_CurlGroupOfEdges_3V,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3V,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_4E",   (CAST)BF_CurlGroupOfEdges_4E,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_4E,   1., ALL },
  {"BF_CurlGroupOfEdges_4F",   (CAST)BF_CurlGroupOfEdges_4F,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_4F,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_4V",   (CAST)BF_CurlGroupOfEdges_4V,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_4V,   1., TRI|QUA|TET|HEX|PRI },


  /* H(curl, perp) basis Functions and their curls */

  {"BF_PerpendicularEdge",    (CAST)BF_PerpendicularEdge,    
                              (CAST)BF_CurlPerpendicularEdge,    (CAST)BF_Zero, 1., ALL },
  {"BF_PerpendicularEdge_1N", (CAST)BF_PerpendicularEdge,    
                              (CAST)BF_CurlPerpendicularEdge,    (CAST)BF_Zero, 1., ALL }, 
  {"BF_PerpendicularEdge_2E", (CAST)BF_PerpendicularEdge_2E, 
                              (CAST)BF_CurlPerpendicularEdge_2E, (CAST)BF_Zero, 2., ALL }, 
  {"BF_PerpendicularEdge_2F", (CAST)BF_PerpendicularEdge_2F, 
                              (CAST)BF_CurlPerpendicularEdge_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI }, 
  {"BF_PerpendicularEdge_2V", (CAST)BF_PerpendicularEdge_2V, 
                              (CAST)BF_CurlPerpendicularEdge_2V, (CAST)BF_Zero, 2., QUA|HEX }, 
  {"BF_PerpendicularEdge_3E", (CAST)BF_PerpendicularEdge_3E, 
                              (CAST)BF_CurlPerpendicularEdge_3E, (CAST)BF_Zero, 3., ALL }, 
  {"BF_PerpendicularEdge_3F", (CAST)BF_PerpendicularEdge_3F, 
                              (CAST)BF_CurlPerpendicularEdge_3F, (CAST)BF_Zero, 3., TRI|QUA|TET|HEX|PRI }, 
  {"BF_PerpendicularEdge_3V", (CAST)BF_PerpendicularEdge_3V, 
                              (CAST)BF_CurlPerpendicularEdge_3V, (CAST)BF_Zero, 3., HEX|PRI }, 

  {"BF_CurlPerpendicularEdge",    (CAST)BF_CurlPerpendicularEdge,    
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge,    0., ALL },
  {"BF_CurlPerpendicularEdge_1N", (CAST)BF_CurlPerpendicularEdge,   
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge,    0., ALL },
  {"BF_CurlPerpendicularEdge_2E", (CAST)BF_CurlPerpendicularEdge_2E,
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_2E, 1., ALL },
  {"BF_CurlPerpendicularEdge_2F", (CAST)BF_CurlPerpendicularEdge_2F, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_2F, 1., QUA|HEX|PRI },
  {"BF_CurlPerpendicularEdge_2V", (CAST)BF_CurlPerpendicularEdge_2V,
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_2V, 1., QUA|HEX },
  {"BF_CurlPerpendicularEdge_3E", (CAST)BF_CurlPerpendicularEdge_3E, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_3E, 2., ALL },
  {"BF_CurlPerpendicularEdge_3F", (CAST)BF_CurlPerpendicularEdge_3F, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_3F, 2., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlPerpendicularEdge_3V", (CAST)BF_CurlPerpendicularEdge_3V, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_3V, 2., HEX|PRI },

  {"BF_GroupOfPerpendicularEdges",    (CAST)BF_GroupOfPerpendicularEdges,   
                                      (CAST)BF_CurlGroupOfPerpendicularEdges,    (CAST)BF_Zero, 1., ALL },
  {"BF_GroupOfPerpendicularEdges_1N", (CAST)BF_GroupOfPerpendicularEdges,    
                                      (CAST)BF_CurlGroupOfPerpendicularEdges,    (CAST)BF_Zero, 1., ALL }, 
  {"BF_GroupOfPerpendicularEdges_2E", (CAST)BF_GroupOfPerpendicularEdges_2E, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_2E, (CAST)BF_Zero, 2., ALL }, 
  {"BF_GroupOfPerpendicularEdges_2F", (CAST)BF_GroupOfPerpendicularEdges_2F, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI }, 
  {"BF_GroupOfPerpendicularEdges_2V", (CAST)BF_GroupOfPerpendicularEdges_2V, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_2V, (CAST)BF_Zero, 2., QUA|HEX }, 
  {"BF_GroupOfPerpendicularEdges_3E", (CAST)BF_GroupOfPerpendicularEdges_3E, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_3E, (CAST)BF_Zero, 3., ALL }, 
  {"BF_GroupOfPerpendicularEdges_3F", (CAST)BF_GroupOfPerpendicularEdges_3F, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_3F, (CAST)BF_Zero, 3., TRI|QUA|TET|HEX|PRI }, 
  {"BF_GroupOfPerpendicularEdges_3V", (CAST)BF_GroupOfPerpendicularEdges_3V, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_3V, (CAST)BF_Zero, 3., HEX|PRI }, 

  {"BF_CurlGroupOfPerpendicularEdges",    (CAST)BF_CurlGroupOfPerpendicularEdges,    
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges,    0., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_1N", (CAST)BF_CurlGroupOfPerpendicularEdges,   
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges,    0., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_2E", (CAST)BF_CurlGroupOfPerpendicularEdges_2E, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_2E, 1., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_2F", (CAST)BF_CurlGroupOfPerpendicularEdges_2F, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_2F, 1., QUA|HEX|PRI },
  {"BF_CurlGroupOfPerpendicularEdges_2V", (CAST)BF_CurlGroupOfPerpendicularEdges_2V, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_2V, 1., QUA|HEX },
  {"BF_CurlGroupOfPerpendicularEdges_3E", (CAST)BF_CurlGroupOfPerpendicularEdges_3E, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_3E, 2., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_3F", (CAST)BF_CurlGroupOfPerpendicularEdges_3F, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_3F, 2., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfPerpendicularEdges_3V", (CAST)BF_CurlGroupOfPerpendicularEdges_3V, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_3V, 2., HEX|PRI },


  /* H(div) basis Functions and their divergences */

  {"BF_Facet", (CAST)BF_Facet, (CAST)BF_DivFacet, (CAST)BF_Zero, 0.5, ALL },

  {"BF_DivFacet", (CAST)BF_DivFacet, (CAST)BF_Zero, (CAST)BF_Facet, 0., ALL },


  /* H(div, perp) basis Functions and their divergences */

  {"BF_PerpendicularFacet",      (CAST)BF_PerpendicularFacet,    
                                 (CAST)BF_DivPerpendicularFacet,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_PerpendicularFacet_1E",   (CAST)BF_PerpendicularFacet,    
                                 (CAST)BF_DivPerpendicularFacet,      (CAST)BF_Zero, 0.5, ALL }, 
  {"BF_PerpendicularFacet_2E",   (CAST)BF_PerpendicularFacet_2E, 
                                 (CAST)BF_DivPerpendicularFacet_2E,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_PerpendicularFacet_2F",   (CAST)BF_PerpendicularFacet_2F, 
                                 (CAST)BF_DivPerpendicularFacet_2F,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_PerpendicularFacet_2V",   (CAST)BF_PerpendicularFacet_2V, 
                                 (CAST)BF_DivPerpendicularFacet_2V,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_PerpendicularFacet_3E",   (CAST)BF_PerpendicularFacet_3E, 
                                 (CAST)BF_DivPerpendicularFacet_3E,   (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3F_a", (CAST)BF_PerpendicularFacet_3F_a, 
                                 (CAST)BF_DivPerpendicularFacet_3F_a, (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3F_b", (CAST)BF_PerpendicularFacet_3F_b, 
                                 (CAST)BF_DivPerpendicularFacet_3F_b, (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3F_c", (CAST)BF_PerpendicularFacet_3F_c,
                                 (CAST)BF_DivPerpendicularFacet_3F_c, (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3V",   (CAST)BF_PerpendicularFacet_3V, 
                                 (CAST)BF_DivPerpendicularFacet_3V,   (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_4E",   (CAST)BF_PerpendicularFacet_4E, 
                                 (CAST)BF_DivPerpendicularFacet_4E,   (CAST)BF_Zero, 2.,  ALL }, 
  {"BF_PerpendicularFacet_4F",   (CAST)BF_PerpendicularFacet_4F, 
                                 (CAST)BF_DivPerpendicularFacet_4F,   (CAST)BF_Zero, 2.,  ALL }, 
  {"BF_PerpendicularFacet_4V",   (CAST)BF_PerpendicularFacet_4V, 
                                 (CAST)BF_DivPerpendicularFacet_4V,   (CAST)BF_Zero, 2.,  ALL }, 

  {"BF_DivPerpendicularFacet",      (CAST)BF_DivPerpendicularFacet,      
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet,      0., ALL },
  {"BF_DivPerpendicularFacet_1E",   (CAST)BF_DivPerpendicularFacet,      
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet,      0., ALL },
  {"BF_DivPerpendicularFacet_2E",   (CAST)BF_DivPerpendicularFacet_2E,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_2E,   0., ALL },
  {"BF_DivPerpendicularFacet_2F",   (CAST)BF_DivPerpendicularFacet_2F,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_2F,   0., ALL },
  {"BF_DivPerpendicularFacet_2V",   (CAST)BF_DivPerpendicularFacet_2V,  
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_2V,   0., ALL },
  {"BF_DivPerpendicularFacet_3E",   (CAST)BF_DivPerpendicularFacet_3E,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3E,   1., ALL },
  {"BF_DivPerpendicularFacet_3F_a", (CAST)BF_DivPerpendicularFacet_3F_a, 
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3F_a, 1., ALL },
  {"BF_DivPerpendicularFacet_3F_b", (CAST)BF_DivPerpendicularFacet_3F_b, 
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3F_b, 1., ALL },
  {"BF_DivPerpendicularFacet_3F_c", (CAST)BF_DivPerpendicularFacet_3F_c, 
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3F_c, 1., ALL },
  {"BF_DivPerpendicularFacet_3V",   (CAST)BF_DivPerpendicularFacet_3V,  
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3V,   1., ALL },
  {"BF_DivPerpendicularFacet_4E",   (CAST)BF_DivPerpendicularFacet_4E,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_4E,   1., ALL },
  {"BF_DivPerpendicularFacet_4F",   (CAST)BF_DivPerpendicularFacet_4F,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_4F,   1., ALL },
  {"BF_DivPerpendicularFacet_4V",   (CAST)BF_DivPerpendicularFacet_4V,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_4V,   1., ALL },


  /* L^2 basis Functions */

  {"BF_Volume", (CAST)BF_Volume, (CAST)BF_Volume, (CAST)BF_Zero, 0., ALL },


  /* (H^1)^3 Basis Functions */

  {"BF_NodeX" , (CAST)BF_NodeX , (CAST)BF_NodeX_D1 , (CAST)BF_NodeX_D2 , 1. , ALL },
  {"BF_NodeY" , (CAST)BF_NodeY , (CAST)BF_NodeY_D1 , (CAST)BF_NodeY_D2 , 1. , ALL },
  {"BF_NodeZ" , (CAST)BF_NodeZ , (CAST)BF_NodeZ_D1 , (CAST)BF_NodeZ_D2 , 1. , ALL },

  {"BF_NodeX_D1" , (CAST)BF_NodeX_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeY_D1" , (CAST)BF_NodeY_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeZ_D1" , (CAST)BF_NodeZ_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_NodeX_D2" , (CAST)BF_NodeX_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeY_D2" , (CAST)BF_NodeY_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeZ_D2" , (CAST)BF_NodeZ_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_NodeX_D12" , (CAST)BF_NodeX_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeY_D12" , (CAST)BF_NodeY_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeZ_D12" , (CAST)BF_NodeZ_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_GroupOfNodesX" , (CAST)BF_GroupOfNodesX , (CAST)BF_GroupOfNodesX_D1 , (CAST)BF_GroupOfNodesX_D2 , 1. , ALL },
  {"BF_GroupOfNodesY" , (CAST)BF_GroupOfNodesY , (CAST)BF_GroupOfNodesY_D1 , (CAST)BF_GroupOfNodesY_D2 , 1. , ALL },
  {"BF_GroupOfNodesZ" , (CAST)BF_GroupOfNodesZ , (CAST)BF_GroupOfNodesZ_D1 , (CAST)BF_GroupOfNodesZ_D2 , 1. , ALL },

  {"BF_GroupOfNodesX_D1" , (CAST)BF_GroupOfNodesX_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_GroupOfNodesY_D1" , (CAST)BF_GroupOfNodesY_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_GroupOfNodesZ_D1" , (CAST)BF_GroupOfNodesZ_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_GroupOfNodesX_D2" , (CAST)BF_GroupOfNodesX_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_GroupOfNodesY_D2" , (CAST)BF_GroupOfNodesY_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_GroupOfNodesZ_D2" , (CAST)BF_GroupOfNodesZ_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_GroupOfNodesX_D12" , (CAST)BF_GroupOfNodesX_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_GroupOfNodesY_D12" , (CAST)BF_GroupOfNodesY_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_GroupOfNodesZ_D12" , (CAST)BF_GroupOfNodesZ_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },


  /* Special basis Functions */

  {"BF_Zero", (CAST)BF_Zero, (CAST)BF_Zero, (CAST)BF_Zero, 0., ALL },
  {"BF_One",  (CAST)BF_One,  (CAST)BF_One,  (CAST)BF_One,  0., ALL },

  {"BF_Region"  , (CAST)BF_Region   , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_RegionX" , (CAST)BF_RegionX  , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_RegionY" , (CAST)BF_RegionY  , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_RegionZ" , (CAST)BF_RegionZ  , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },

  {"BF_Global"  , (CAST)BF_Global   , (CAST)BF_dGlobal , (CAST)BF_Zero , 0. , ALL },
  {"BF_dGlobal" , (CAST)BF_dGlobal  , (CAST)BF_Zero    , (CAST)BF_Global, 0. , ALL },

  {NULL , NULL , NULL , NULL , 0. , ALL }
} ;

#undef POI
#undef LIN
#undef TRI
#undef QUA
#undef TET
#undef HEX
#undef PRI
#undef PYR
          
#undef ALL


/* ------------------------------------------------------------------------ */
/*  Keywords, their assigned functions and 2 numbers                        */
/* ------------------------------------------------------------------------ */


struct StringXFunction2Nbr  F_Function[] = {    /* #Par #Arg */

  /* #Par = -1 => free number of Parameters ; = -2 free even number */
  /* #Arg ... same */

  /* F_Math */

  {"Exp"               , (CAST)F_Exp              ,   0,   1 },
  {"Log"               , (CAST)F_Log              ,   0,   1 },
  {"Log10"             , (CAST)F_Log10            ,   0,   1 },
  {"Sqrt"              , (CAST)F_Sqrt             ,   0,   1 },
  {"Sin"               , (CAST)F_Sin              ,   0,   1 },
  {"Asin"              , (CAST)F_Asin             ,   0,   1 },
  {"Cos"               , (CAST)F_Cos              ,   0,   1 },
  {"Acos"              , (CAST)F_Acos             ,   0,   1 },
  {"Tan"               , (CAST)F_Tan              ,   0,   1 },
  {"Atan"              , (CAST)F_Atan             ,   0,   1 },
  {"Sinh"              , (CAST)F_Sinh             ,   0,   1 },
  {"Cosh"              , (CAST)F_Cosh             ,   0,   1 },
  {"Tanh"              , (CAST)F_Tanh             ,   0,   1 },
  {"Fabs"              , (CAST)F_Fabs             ,   0,   1 },
  {"Floor"             , (CAST)F_Floor            ,   0,   1 },
  {"Ceil"              , (CAST)F_Ceil             ,   0,   1 },
  {"Atan2"             , (CAST)F_Atan2            ,   0,   2 },
  {"Fmod"              , (CAST)F_Fmod             ,   0,   2 },

  /* F_ExtMath */

  {"Hypot"             , (CAST)F_Hypot            ,   0,   2 },
  {"TanhC2"            , (CAST)F_TanhC2           ,   0,   1 },
  {"Transpose"         , (CAST)F_Transpose        ,   0,   1 },
  {"TTrace"            , (CAST)F_Trace            ,   0,   1 },
  {"Rotate"            , (CAST)F_RotateXYZ        ,   0,   4 },
  {"Norm"              , (CAST)F_Norm             ,   0,   1 },
  {"SquNorm"           , (CAST)F_SquNorm          ,   0,   1 },
  {"Unit"              , (CAST)F_Unit             ,   0,   1 },
  {"Normalized"        , (CAST)F_Unit             ,   0,   1 },
  {"F_Cos_wt_p"        , (CAST)F_Cos_wt_p         ,   2,   0 },
  {"F_Sin_wt_p"        , (CAST)F_Sin_wt_p         ,   2,   0 },
  {"F_Period"          , (CAST)F_Period           ,   1,   1 },
  {"Interval"          , (CAST)F_Interval         ,   3,   3 },

  /* F_Type */

  {"Complex"           , (CAST)F_Complex          ,   0,  -2 },
  {"Re"                , (CAST)F_Re               ,   0,   1 },
  {"Im"                , (CAST)F_Im               ,   0,   1 },
  {"Conj"              , (CAST)F_Conj             ,   0,   1 },
  {"Vector"            , (CAST)F_Vector           ,   0,   3 },
  {"Tensor"            , (CAST)F_Tensor           ,   0,   9 },
  {"TensorV"           , (CAST)F_TensorV          ,   0,   3 },
  {"TensorSym"         , (CAST)F_TensorSym        ,   0,   6 },
  {"TensorDiag"        , (CAST)F_TensorDiag       ,   0,   3 },
  {"SquDyadicProduct"  , (CAST)F_SquDyadicProduct ,   0,   1 },
  {"CompX"             , (CAST)F_CompX            ,   0,   1 },
  {"CompY"             , (CAST)F_CompY            ,   0,   1 },
  {"CompZ"             , (CAST)F_CompZ            ,   0,   1 },
  {"CompXX"            , (CAST)F_CompXX           ,   0,   1 },
  {"CompXY"            , (CAST)F_CompXY           ,   0,   1 },
  {"CompXZ"            , (CAST)F_CompXZ           ,   0,   1 },
  {"CompYX"            , (CAST)F_CompYX           ,   0,   1 },
  {"CompYY"            , (CAST)F_CompYY           ,   0,   1 },
  {"CompYZ"            , (CAST)F_CompYZ           ,   0,   1 },
  {"CompZX"            , (CAST)F_CompZX           ,   0,   1 },
  {"CompZY"            , (CAST)F_CompZY           ,   0,   1 },
  {"CompZZ"            , (CAST)F_CompZZ           ,   0,   1 },
  {"Cart2Sph"          , (CAST)F_Cart2Sph         ,   0,   1 },
  {"UnitVectorX"       , (CAST)F_UnitVectorX      ,   0,   0 },
  {"UnitVectorY"       , (CAST)F_UnitVectorY      ,   0,   0 },
  {"UnitVectorZ"       , (CAST)F_UnitVectorZ      ,   0,   0 },

  /* F_Coord */

  {"CoordX"            , (CAST)F_CoordX           ,   0,   0 },
  {"CoordY"            , (CAST)F_CoordY           ,   0,   0 },
  {"CoordZ"            , (CAST)F_CoordZ           ,   0,   0 },
  {"CoordXYZ"          , (CAST)F_CoordXYZ         ,   0,   0 },
  {"X"                 , (CAST)F_CoordX           ,   0,   0 },
  {"Y"                 , (CAST)F_CoordY           ,   0,   0 },
  {"Z"                 , (CAST)F_CoordZ           ,   0,   0 },
  {"XYZ"               , (CAST)F_CoordXYZ         ,   0,   0 },
  {"F_aX_bY_cZ"        , (CAST)F_aX_bY_cZ         ,   3,   0 },
  {"F_aX21_bY21_cZ21"  , (CAST)F_aX21_bY21_cZ21   ,   3,   0 },


  /* F_Misc */

  {"Printf"            , (CAST)F_Printf           ,   0,   1 },
  {"Normal"            , (CAST)F_Normal           ,   0,   0 },
  {"NormalSource"      , (CAST)F_NormalSource     ,   0,   0 },
  {"Tangent"           , (CAST)F_Tangent          ,   0,   0 },
  {"CompElementNum"    , (CAST)F_CompElementNum   ,   0,   0 },
  {"SurfaceArea"       , (CAST)F_SurfaceArea      ,  -1,   0 },
  {"InterpolationLinear"   , (CAST)F_InterpolationLinear   ,  -2,   1 },
  {"dInterpolationLinear"  , (CAST)F_dInterpolationLinear  ,  -2,   1 },
  {"dInterpolationLinear2" , (CAST)F_dInterpolationLinear2 ,  -2,   1 },
  {"InterpolationAkima"    , (CAST)F_InterpolationAkima    ,  -2,   1 },
  {"dInterpolationAkima"   , (CAST)F_dInterpolationAkima   ,  -2,   1 },


  /* F_MultiHar */

  {"MHToTime"          , (CAST)F_MHToTime         ,   0,   1 },
  /* {"MHTimeIntegration" , (CAST)F_MHTimeIntegration,   0,   1 }, */


  /* F_Analytic */

  {"F_Sphere"          , (CAST)F_Sphere           ,   6,   0 },
  {"F_Cylinder"        , (CAST)F_Cylinder         ,   7,   0 },
 
  {"JFIE_ZPolAnalyticOnCyl",      (CAST)F_JFIE_ZPolCyl     ,   4,   1 },
  {"JFIE_TransZPolAnalyticOnCyl", (CAST)F_JFIE_TransZPolCyl,   3,   1 },
  {"JFIE_OnSphCutTheta",          (CAST)F_JFIE_SphTheta,       4,   1 },
  {"RCS_SphTheta",                (CAST)F_RCS_SphTheta,        4,   1 },
  {"JFIE_OnSphCutPhi",            (CAST)F_JFIE_SphPhi,         4,   1 },
  {"RCS_SphPhi",                  (CAST)F_RCS_SphPhi,          4,   1 },

  /* GF_XXX : Green Functions */

  {"Laplace"           , (CAST)GF_Laplace          ,   1,   0 },
  {"GradLaplace"       , (CAST)GF_GradLaplace      ,   1,   0 },
  {"NPxGradLaplace"    , (CAST)GF_NPxGradLaplace   ,   1,   0 },
  {"NSxGradLaplace"    , (CAST)GF_NSxGradLaplace   ,   1,   0 },
  {"ApproximateLaplace", (CAST)GF_ApproximateLaplace,  2,   0 },

  {"Helmholtz"         , (CAST)GF_Helmholtz        ,   2,   0 },
  {"GradHelmholtz"     , (CAST)GF_GradHelmholtz    ,   2,   0 },
  {"NPxGradHelmholtz"  , (CAST)GF_NPxGradHelmholtz ,   2,   0 },
  {"NSxGradHelmholtz"  , (CAST)GF_NSxGradHelmholtz ,   2,   0 },

  {NULL                , NULL                      ,   0,   0 } 

} ;




/* ------------------------------------------------------------------------ */
/*  The Green Function and its associated Analytical Integration function   */
/* ------------------------------------------------------------------------ */


struct FunctionXFunction  GF_Function[] = {

  {(CAST)GF_Laplace         , (CAST)GF_LaplacexForm        } ,
  {(CAST)GF_GradLaplace     , (CAST)GF_GradLaplacexForm    } ,
  {(CAST)GF_NPxGradLaplace  , (CAST)GF_NPxGradLaplacexForm } ,
  {(CAST)GF_NSxGradLaplace  , (CAST)GF_NSxGradLaplacexForm } ,

  {(CAST)GF_ApproximateLaplace  , (CAST)GF_ApproximateLaplacexForm  } ,

  {(CAST)GF_Helmholtz         , (CAST)GF_HelmholtzxForm        } ,

  {NULL                    , NULL }  

} ;


#undef CAST

#endif
