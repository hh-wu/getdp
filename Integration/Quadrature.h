/* $Id: Quadrature.h,v 1.4 2000-09-07 18:47:25 geuzaine Exp $ */

#define MAX_LINE_POINTS 20

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

void  NewtonCotes_Line       () ;
void  NewtonCotes_Quadrangle () ;


