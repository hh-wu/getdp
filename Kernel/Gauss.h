// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GAUSS_H_
#define _GAUSS_H_

#define GAUSS_ARGS  int Nbr_Points, int Num_Point, \
                    double *u, double *v, double *w, double *wght

void  Gauss_Point              (GAUSS_ARGS) ;

void  Gauss_Line               (GAUSS_ARGS) ;

void  Gauss_Triangle           (GAUSS_ARGS) ;
void  GaussLegendre_Triangle   (GAUSS_ARGS) ;
void  GaussSingularR_Triangle  (GAUSS_ARGS) ;

void  Gauss_Quadrangle         (GAUSS_ARGS) ;
void  GaussLegendre_Quadrangle (GAUSS_ARGS) ;
void  GaussSingularR_Quadrangle(GAUSS_ARGS) ;

void  Gauss_Tetrahedron        (GAUSS_ARGS) ;
void  GaussLegendre_Tetrahedron(GAUSS_ARGS) ;

void  Gauss_Hexahedron         (GAUSS_ARGS) ;
void  GaussLegendre_Hexahedron (GAUSS_ARGS) ;

void  Gauss_Prism              (GAUSS_ARGS) ;

void  Gauss_Pyramid            (GAUSS_ARGS) ;

#undef GAUSS_ARGS

#define MAX_LINE_POINTS 100

void GaussLegendre(double x1, double x2, double x[], double w[], int n) ;

#endif
