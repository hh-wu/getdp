#ifndef _GET_CELLS_H_
#define _GET_CELLS_H_


#define NBR_MAX_DERHAM_CELLS 12 /* dual edges hexahedron */

void Get_deRhamCells(struct Element *Element,
		     struct QuantityStorage * QuantityStorage,
		     struct Group * Group, 
		     int *Nbr_Cell, struct Element Cell[], 
		     struct Value Vec[], int *RelJac);


#define NBR_MAX_INTEGRATION_CELLS 4 /* quadrangle divided in 4  */

void Get_IntegrationCells(struct Element *Element, 
			  double x, double y, double z,
			  int *Nbr_Cells, struct Element Cells[]) ;

#endif
