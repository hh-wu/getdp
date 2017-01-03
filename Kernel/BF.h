// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _BF_H_
#define _BF_H_

#include "ProData.h"

#define BF_ARG  struct Element * Element, int NumEntity, \
                double u, double v, double w,  double Value[]

/* H^1 Basis Functions and their gradients */

void  BF_Node(BF_ARG) ;
void  BF_Node_2E(BF_ARG) ;
void  BF_Node_2F(BF_ARG) ;
void  BF_Node_2V(BF_ARG) ;
void  BF_Node_3E(BF_ARG) ;
void  BF_Node_3F(BF_ARG) ;
void  BF_Node_3V(BF_ARG) ;

void  BF_GradNode(BF_ARG) ;
void  BF_GradNode_2E(BF_ARG) ;
void  BF_GradNode_2F(BF_ARG) ;
void  BF_GradNode_2V(BF_ARG) ;
void  BF_GradNode_3E(BF_ARG) ;
void  BF_GradNode_3F(BF_ARG) ;
void  BF_GradNode_3V(BF_ARG) ;

void  BF_GroupOfNodes(BF_ARG) ;
void  BF_GroupOfNodes_2E(BF_ARG) ;
void  BF_GroupOfNodes_2F(BF_ARG) ;
void  BF_GroupOfNodes_2V(BF_ARG) ;
void  BF_GroupOfNodes_3E(BF_ARG) ;
void  BF_GroupOfNodes_3F(BF_ARG) ;
void  BF_GroupOfNodes_3V(BF_ARG) ;

void  BF_GradGroupOfNodes(BF_ARG) ;
void  BF_GradGroupOfNodes_2E(BF_ARG) ;
void  BF_GradGroupOfNodes_2F(BF_ARG) ;
void  BF_GradGroupOfNodes_2V(BF_ARG) ;
void  BF_GradGroupOfNodes_3E(BF_ARG) ;
void  BF_GradGroupOfNodes_3F(BF_ARG) ;
void  BF_GradGroupOfNodes_3V(BF_ARG) ;

/* H(curl) basis Functions and their curls */

void  BF_Edge(BF_ARG) ;
void  BF_Edge_2E(BF_ARG) ;
void  BF_Edge_2F(BF_ARG) ;
void  BF_Edge_2V(BF_ARG) ;
void  BF_Edge_3E(BF_ARG) ;
void  BF_Edge_3F_a(BF_ARG) ;
void  BF_Edge_3F_b(BF_ARG) ;
void  BF_Edge_3F_c(BF_ARG) ;
void  BF_Edge_3V(BF_ARG) ;
void  BF_Edge_4E(BF_ARG) ;
void  BF_Edge_4F(BF_ARG) ;
void  BF_Edge_4V(BF_ARG) ;

void  BF_CurlEdge(BF_ARG) ;
void  BF_CurlEdge_2E(BF_ARG) ;
void  BF_CurlEdge_2F(BF_ARG) ;
void  BF_CurlEdge_2V(BF_ARG) ;
void  BF_CurlEdge_3E(BF_ARG) ;
void  BF_CurlEdge_3F_a(BF_ARG) ;
void  BF_CurlEdge_3F_b(BF_ARG) ;
void  BF_CurlEdge_3F_c(BF_ARG) ;
void  BF_CurlEdge_3V(BF_ARG) ;
void  BF_CurlEdge_4E(BF_ARG) ;
void  BF_CurlEdge_4F(BF_ARG) ;
void  BF_CurlEdge_4V(BF_ARG) ;

void  BF_GroupOfEdges(BF_ARG) ;
void  BF_GroupOfEdges_2E(BF_ARG) ;
void  BF_GroupOfEdges_2F(BF_ARG) ;
void  BF_GroupOfEdges_2V(BF_ARG) ;
void  BF_GroupOfEdges_3E(BF_ARG) ;
void  BF_GroupOfEdges_3F_a(BF_ARG) ;
void  BF_GroupOfEdges_3F_b(BF_ARG) ;
void  BF_GroupOfEdges_3F_c(BF_ARG) ;
void  BF_GroupOfEdges_3V(BF_ARG) ;
void  BF_GroupOfEdges_4E(BF_ARG) ;
void  BF_GroupOfEdges_4F(BF_ARG) ;
void  BF_GroupOfEdges_4V(BF_ARG) ;

void  BF_CurlGroupOfEdges(BF_ARG) ;
void  BF_CurlGroupOfEdges_2E(BF_ARG) ;
void  BF_CurlGroupOfEdges_2F(BF_ARG) ;
void  BF_CurlGroupOfEdges_2V(BF_ARG) ;
void  BF_CurlGroupOfEdges_3E(BF_ARG) ;
void  BF_CurlGroupOfEdges_3F_a(BF_ARG) ;
void  BF_CurlGroupOfEdges_3F_b(BF_ARG) ;
void  BF_CurlGroupOfEdges_3F_c(BF_ARG) ;
void  BF_CurlGroupOfEdges_3V(BF_ARG) ;
void  BF_CurlGroupOfEdges_4E(BF_ARG) ;
void  BF_CurlGroupOfEdges_4F(BF_ARG) ;
void  BF_CurlGroupOfEdges_4V(BF_ARG) ;

/* H(curl, perp) basis Functions and their curls */

void  BF_PerpendicularEdge(BF_ARG) ;
void  BF_PerpendicularEdge_2E(BF_ARG) ;
void  BF_PerpendicularEdge_2F(BF_ARG) ;
void  BF_PerpendicularEdge_2V(BF_ARG) ;
void  BF_PerpendicularEdge_3E(BF_ARG) ;
void  BF_PerpendicularEdge_3F(BF_ARG) ;
void  BF_PerpendicularEdge_3V(BF_ARG) ;

void  BF_CurlPerpendicularEdge(BF_ARG) ;
void  BF_CurlPerpendicularEdge_2E(BF_ARG) ;
void  BF_CurlPerpendicularEdge_2F(BF_ARG) ;
void  BF_CurlPerpendicularEdge_2V(BF_ARG) ;
void  BF_CurlPerpendicularEdge_3E(BF_ARG) ;
void  BF_CurlPerpendicularEdge_3F(BF_ARG) ;
void  BF_CurlPerpendicularEdge_3V(BF_ARG) ;

void  BF_GroupOfPerpendicularEdges(BF_ARG) ;
void  BF_GroupOfPerpendicularEdges_2E(BF_ARG) ;
void  BF_GroupOfPerpendicularEdges_2F(BF_ARG) ;
void  BF_GroupOfPerpendicularEdges_2V(BF_ARG) ;
void  BF_GroupOfPerpendicularEdges_3E(BF_ARG) ;
void  BF_GroupOfPerpendicularEdges_3F(BF_ARG) ;
void  BF_GroupOfPerpendicularEdges_3V(BF_ARG) ;

void  BF_CurlGroupOfPerpendicularEdges(BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges_2E(BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges_2F(BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges_2V(BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges_3E(BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges_3F(BF_ARG) ;
void  BF_CurlGroupOfPerpendicularEdges_3V(BF_ARG) ;

/* H(div) basis Functions and their divergences */

void  BF_Facet(BF_ARG) ;

void  BF_DivFacet(BF_ARG) ;

void  BF_GroupOfFacets(BF_ARG) ;

void  BF_DivGroupOfFacets(BF_ARG) ;

/* H(div, perp) basis Functions and their divergences */

void  BF_PerpendicularFacet(BF_ARG) ;
void  BF_PerpendicularFacet_2E(BF_ARG) ;
void  BF_PerpendicularFacet_2F(BF_ARG) ;
void  BF_PerpendicularFacet_2V(BF_ARG) ;
void  BF_PerpendicularFacet_3E(BF_ARG) ;
void  BF_PerpendicularFacet_3F_a(BF_ARG) ;
void  BF_PerpendicularFacet_3F_b(BF_ARG) ;
void  BF_PerpendicularFacet_3F_c(BF_ARG) ;
void  BF_PerpendicularFacet_3V(BF_ARG) ;
void  BF_PerpendicularFacet_4E(BF_ARG) ;
void  BF_PerpendicularFacet_4F(BF_ARG) ;
void  BF_PerpendicularFacet_4V(BF_ARG) ;

void  BF_DivPerpendicularFacet(BF_ARG) ;
void  BF_DivPerpendicularFacet_2E(BF_ARG) ;
void  BF_DivPerpendicularFacet_2F(BF_ARG) ;
void  BF_DivPerpendicularFacet_2V(BF_ARG) ;
void  BF_DivPerpendicularFacet_3E(BF_ARG) ;
void  BF_DivPerpendicularFacet_3F_a(BF_ARG) ;
void  BF_DivPerpendicularFacet_3F_b(BF_ARG) ;
void  BF_DivPerpendicularFacet_3F_c(BF_ARG) ;
void  BF_DivPerpendicularFacet_3V(BF_ARG) ;
void  BF_DivPerpendicularFacet_4E(BF_ARG) ;
void  BF_DivPerpendicularFacet_4F(BF_ARG) ;
void  BF_DivPerpendicularFacet_4V(BF_ARG) ;

/* L^2 basis Functions */

void  BF_Volume(BF_ARG) ;
void  BF_VolumeX(BF_ARG) ;
void  BF_VolumeY(BF_ARG) ;
void  BF_VolumeZ(BF_ARG) ;

/* (H^1)^3 Basis Functions */

void  BF_NodeX(BF_ARG) ;
void  BF_NodeY(BF_ARG) ;
void  BF_NodeZ(BF_ARG) ;
void  BF_NodeX_2E(BF_ARG) ;
void  BF_NodeY_2E(BF_ARG) ;
void  BF_NodeZ_2E(BF_ARG) ;
void  BF_NodeX_2F(BF_ARG) ;
void  BF_NodeY_2F(BF_ARG) ;
void  BF_NodeZ_2F(BF_ARG) ;
void  BF_NodeX_2V(BF_ARG) ;
void  BF_NodeY_2V(BF_ARG) ;
void  BF_NodeZ_2V(BF_ARG) ;
void  BF_NodeX_3E(BF_ARG) ;
void  BF_NodeY_3E(BF_ARG) ;
void  BF_NodeZ_3E(BF_ARG) ;
void  BF_NodeX_3F(BF_ARG) ;
void  BF_NodeY_3F(BF_ARG) ;
void  BF_NodeZ_3F(BF_ARG) ;
void  BF_NodeX_3V(BF_ARG) ;
void  BF_NodeY_3V(BF_ARG) ;
void  BF_NodeZ_3V(BF_ARG) ;

void  BF_NodeX_D1(BF_ARG) ;
void  BF_NodeY_D1(BF_ARG) ;
void  BF_NodeZ_D1(BF_ARG) ;
void  BF_NodeX_D1_2E(BF_ARG) ;
void  BF_NodeY_D1_2E(BF_ARG) ;
void  BF_NodeZ_D1_2E(BF_ARG) ;
void  BF_NodeX_D1_2F(BF_ARG) ;
void  BF_NodeY_D1_2F(BF_ARG) ;
void  BF_NodeZ_D1_2F(BF_ARG) ;
void  BF_NodeX_D1_2V(BF_ARG) ;
void  BF_NodeY_D1_2V(BF_ARG) ;
void  BF_NodeZ_D1_2V(BF_ARG) ;
void  BF_NodeX_D1_3E(BF_ARG) ;
void  BF_NodeY_D1_3E(BF_ARG) ;
void  BF_NodeZ_D1_3E(BF_ARG) ;
void  BF_NodeX_D1_3F(BF_ARG) ;
void  BF_NodeY_D1_3F(BF_ARG) ;
void  BF_NodeZ_D1_3F(BF_ARG) ;
void  BF_NodeX_D1_3V(BF_ARG) ;
void  BF_NodeY_D1_3V(BF_ARG) ;
void  BF_NodeZ_D1_3V(BF_ARG) ;

void  BF_NodeX_D2(BF_ARG) ;
void  BF_NodeY_D2(BF_ARG) ;
void  BF_NodeZ_D2(BF_ARG) ;
void  BF_NodeX_D2_2E(BF_ARG) ;
void  BF_NodeY_D2_2E(BF_ARG) ;
void  BF_NodeZ_D2_2E(BF_ARG) ;
void  BF_NodeX_D2_2F(BF_ARG) ;
void  BF_NodeY_D2_2F(BF_ARG) ;
void  BF_NodeZ_D2_2F(BF_ARG) ;
void  BF_NodeX_D2_2V(BF_ARG) ;
void  BF_NodeY_D2_2V(BF_ARG) ;
void  BF_NodeZ_D2_2V(BF_ARG) ;
void  BF_NodeX_D2_3E(BF_ARG) ;
void  BF_NodeY_D2_3E(BF_ARG) ;
void  BF_NodeZ_D2_3E(BF_ARG) ;
void  BF_NodeX_D2_3F(BF_ARG) ;
void  BF_NodeY_D2_3F(BF_ARG) ;
void  BF_NodeZ_D2_3F(BF_ARG) ;
void  BF_NodeX_D2_3V(BF_ARG) ;
void  BF_NodeY_D2_3V(BF_ARG) ;
void  BF_NodeZ_D2_3V(BF_ARG) ;

void  BF_NodeX_D12(BF_ARG) ;
void  BF_NodeY_D12(BF_ARG) ;
void  BF_NodeZ_D12(BF_ARG) ;

void  BF_NodeX_D12_2E(BF_ARG) ;
void  BF_NodeY_D12_2E(BF_ARG) ;
void  BF_NodeZ_D12_2E(BF_ARG) ;

void  BF_GradNodeRealCoord(BF_ARG) ;

void  BF_GroupOfNodesX(BF_ARG) ;
void  BF_GroupOfNodesY(BF_ARG) ;
void  BF_GroupOfNodesZ(BF_ARG) ;

void  BF_GroupOfNodesX_D1(BF_ARG) ;
void  BF_GroupOfNodesY_D1(BF_ARG) ;
void  BF_GroupOfNodesZ_D1(BF_ARG) ;

void  BF_GroupOfNodesX_D2(BF_ARG) ;
void  BF_GroupOfNodesY_D2(BF_ARG) ;
void  BF_GroupOfNodesZ_D2(BF_ARG) ;

void  BF_GroupOfNodesX_D12(BF_ARG) ;
void  BF_GroupOfNodesY_D12(BF_ARG) ;
void  BF_GroupOfNodesZ_D12(BF_ARG) ;

/* Special basis Functions */

void  BF_Zero(BF_ARG) ;
void  BF_One(BF_ARG) ;
void  BF_OneZ(BF_ARG) ;

void  BF_Region(BF_ARG) ;
void  BF_RegionX(BF_ARG) ;
void  BF_RegionY(BF_ARG) ;
void  BF_RegionZ(BF_ARG) ;

void  BF_dRegion(BF_ARG) ;
void  BF_dRegionX(BF_ARG) ;
void  BF_dRegionY(BF_ARG) ;
void  BF_dRegionZ(BF_ARG) ;

void  BF_Global(BF_ARG) ;
void  BF_dGlobal(BF_ARG) ;
void  BF_dInvGlobal(BF_ARG) ;

void BF_Wire(BF_ARG) ;
void BF_DivWire(BF_ARG) ;

#undef BF_ARG

#endif
