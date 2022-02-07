// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef GEO_ELEMENT_RTREE_H
#define GEO_ELEMENT_RTREE_H

#include <vector>
#include "ProData.h"
#include "rtree.h"

class GeoElementRTree {
private:
  RTree<struct Geo_Element *, double, 3, double> *_rtree;
  double _tol;
  static bool _rtreeCallback(struct Geo_Element *e, void *ctx)
  {
    std::vector<struct Geo_Element *> *out =
      static_cast<std::vector<struct Geo_Element *> *>(ctx);
    out->push_back(e);
    return true; // continue searching to get all matches
  }
  void _getMinMax(struct Geo_Element *e, double min[3], double max[3],
                  double tol)
  {
    for(int i = 0; i < e->NbrNodes; i++) {
      struct Geo_Node *node = Geo_GetGeoNodeOfNum(e->NumNodes[i]);
      if(!i) {
        min[0] = max[0] = node->x;
        min[1] = max[1] = node->y;
        min[2] = max[2] = node->z;
      }
      else {
        min[0] = std::min(min[0], node->x);
        min[1] = std::min(min[1], node->y);
        min[2] = std::min(min[2], node->z);
        max[0] = std::max(max[0], node->x);
        max[1] = std::max(max[1], node->y);
        max[2] = std::max(max[2], node->z);
      }
    }
    for(int i = 0; i < 3; i++) {
      min[i] -= tol;
      max[i] += tol;
    }
  }

public:
  GeoElementRTree(double tolerance = 1.e-8)
  {
    _rtree = new RTree<struct Geo_Element *, double, 3, double>();
    _tol = tolerance;
  }
  ~GeoElementRTree()
  {
    _rtree->RemoveAll();
    delete _rtree;
  }
  void insert(struct Geo_Element *e)
  {
    double min[3], max[3];
    _getMinMax(e, min, max, _tol);
    _rtree->Insert(min, max, e);
  }
  bool find(struct Geo_Element *e, std::vector<struct Geo_Element *> &out)
  {
    double min[3], max[3];
    _getMinMax(e, min, max, _tol);
    if(_rtree->Search(min, max, _rtreeCallback, &out)) { return true; }
    return false;
  }
};

#endif
