#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sphere3D.h"
#include "grid.h"
#include "gridIntegrator.h"
#include "log.h"

#define MAX(a,b)   ((a)>(b) ? (a) : (b))
#define TWO_PI     6.2831853071795865


template <class T>

// put this as an alternative constructor in the grid class

grid *initGrid(valarray<T> &bodyArray, int nbIntervalsU, int nbIntervalsV){
  int i, j, k, l, index;
  int nbPts = (nbIntervalsU+1)*(nbIntervalsV+1), nbPatches = bodyArray.size();
  double u[nbIntervalsU+1][nbIntervalsV+1], v[nbIntervalsU+1][nbIntervalsV+1];
  double uPatch[nbIntervalsU+1][nbIntervalsV+1], vPatch[nbIntervalsU+1][nbIntervalsV+1];
  double uTmp, vTmp, uTmp2, vTmp2, xTmp, yTmp, zTmp, thisPOU, otherPOU;
  valarray<double> *xyzTmp, *uvTmp;
  patch3D *patch, *patch2;
  grid *gridInst;

  printf("nbpatch = %d\n", nbPatches);

  gridInst = new grid();
  gridInst->uIntervals = nbIntervalsU;
  gridInst->vIntervals = nbIntervalsV;

  gridInst->positionsX.resize(nbPatches);
  gridInst->positionsY.resize(nbPatches);
  gridInst->positionsZ.resize(nbPatches);
  gridInst->normalsX.resize(nbPatches);
  gridInst->normalsY.resize(nbPatches);
  gridInst->normalsZ.resize(nbPatches);
  gridInst->pou.resize(nbPatches);
  gridInst->u.resize(nbPatches);
  gridInst->v.resize(nbPatches);
  gridInst->jacobianDeterminant.resize(nbPatches);
  gridInst->densities.resize(nbPatches);
  gridInst->uH.resize(nbPatches);
  gridInst->vH.resize(nbPatches);
  gridInst->scalarData.resize(nbPatches);

  for(j=0 ; j<nbIntervalsU+1; j++){
    for(k=0 ; k<nbIntervalsV+1; k++){
      u[j][k] = j/(double)nbIntervalsU;
      v[j][k] = k/(double)nbIntervalsV;
    }
  }

  for(i=0 ; i<nbPatches ; i++){
    
    patch = bodyArray[i];

    for(j=0 ; j<nbIntervalsU+1; j++){
      for(k=0 ; k<nbIntervalsV+1; k++){
	uPatch[j][k] = (patch->uEnd - patch->uStart)*u[j][k] + patch->uStart;
	vPatch[j][k] = (patch->vEnd - patch->vStart)*v[j][k] + patch->vStart;
      }
    }

    gridInst->uH[i] = uPatch[0][0]-uPatch[1][0];
    gridInst->vH[i] = vPatch[0][0]-vPatch[0][1];

    gridInst->positionsX[i].resize(nbPts);
    gridInst->positionsY[i].resize(nbPts);
    gridInst->positionsZ[i].resize(nbPts);
    gridInst->normalsX[i].resize(nbPts);
    gridInst->normalsY[i].resize(nbPts);
    gridInst->normalsZ[i].resize(nbPts);
    gridInst->pou[i].resize(nbPts);
    gridInst->u[i].resize(nbPts);
    gridInst->v[i].resize(nbPts);
    gridInst->jacobianDeterminant[i].resize(nbPts);
    gridInst->densities[i].resize(nbPts);

    gridInst->scalarData[i].resize(nbIntervalsU+1);

    for(j=0 ; j<nbIntervalsU+1 ; j++){

      gridInst->scalarData[i][j].resize(nbIntervalsV+1);

      for(k=0 ; k<nbIntervalsV+1 ; k++){

	uTmp = uPatch[j][k];
	vTmp = vPatch[j][k];

	xyzTmp = patch->call(uTmp,vTmp);
	xTmp = (*xyzTmp)[0];
	yTmp = (*xyzTmp)[1];
	zTmp = (*xyzTmp)[2];
	
	index = j*(nbIntervalsV+1)+k;

	gridInst->positionsX[i][index] = xTmp;
	gridInst->positionsY[i][index] = yTmp;
	gridInst->positionsZ[i][index] = zTmp;
	gridInst->jacobianDeterminant[i][index] = patch->jacobianDeterminant(uTmp,vTmp);

	thisPOU = patch->pou(uTmp,vTmp);

	if(fabs(thisPOU) < 1.e-15 ||
	   fabs(thisPOU)*gridInst->jacobianDeterminant[i][index] < 1.e-15)
	  printf("Should mask this point\n");
	
	otherPOU = 0.;
	for(l=0 ; l<nbPatches ; l++){
	  patch2 = bodyArray[l];
	  if((uvTmp = patch2->inverse(xTmp,yTmp,zTmp))){
	    uTmp2 = (*uvTmp)[0];
	    vTmp2 = (*uvTmp)[1];
	    if(uTmp2 >= patch2->uStart && uTmp2 <= patch2->uEnd &&
	       vTmp2 >= patch2->vStart && vTmp2 <= patch2->vEnd)
	      otherPOU += patch2->pou(uTmp2,vTmp2);
	  }
	}
	
	if(otherPOU < 1.e-6)
	  printf("Sum of POU too small: patch %d, (u,v)=(%g,%g)\n", i, uTmp, vTmp);

	gridInst->pou[i][index] = thisPOU/otherPOU;

	xyzTmp = patch->unitNormal(uTmp, vTmp);
	gridInst->normalsX[i][index] = (*xyzTmp)[0];
	gridInst->normalsY[i][index] = (*xyzTmp)[1];
	gridInst->normalsZ[i][index] = (*xyzTmp)[2];

	gridInst->u[i][index] = u[j][k];
	gridInst->v[i][index] = v[j][k];

	gridInst->densities[i][index] = 1.;
	gridInst->scalarData[i][j][k] = gridInst->densities[i][index] * gridInst->pou[i][index];
      }
    }

  }

  return gridInst;
}

void printGrid(grid *g){
  int i, j, k, i0, i1, i2, i3;
  int nbPatches = g->positionsX.size();
  
  FILE *fp = fopen("test.pos", "w");

  for(i=0 ; i<g->positionsX.size() ; i++){ // nbPatches
    fprintf(fp, "View \"patch %d\" {\n", i);
    for(j=0 ; j<g->uIntervals ; j++){
      for(k=0 ; k<g->vIntervals ; k++){
	i0 = j*(g->vIntervals+1)+k;
	i1 = (j+1)*(g->vIntervals+1)+k;
	i2 = (j+1)*(g->vIntervals+1)+(k+1);
	i3 = j*(g->vIntervals+1)+(k+1);
	fprintf(fp, "SQ(%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g){%g,%g,%g,%g};\n", 
		g->positionsX[i][i0], g->positionsY[i][i0], g->positionsZ[i][i0],
		g->positionsX[i][i1], g->positionsY[i][i1], g->positionsZ[i][i1],
		g->positionsX[i][i2], g->positionsY[i][i2], g->positionsZ[i][i2],
		g->positionsX[i][i3], g->positionsY[i][i3], g->positionsZ[i][i3],
		g->pou[i][i0], g->pou[i][i1], g->pou[i][i2], g->pou[i][i3]);	
      }
    }
    fprintf(fp, "};\n");
  }

  fclose(fp);
}

int main(){
  int i, j, k;
  double radius = 1.0, waveNumber = 1.0, gamma = MAX(3,1./TWO_PI*waveNumber);
  int nbIntervalsU = 3, nbIntervalsV = 3;
  patch3D *patch;
  complex<double> value;
  logger log;

  log.setLevel(ERROR|INFORMATION|TIMING|DEBUG);
  //log.setLevel(ERROR|INFORMATION);
  log.setFilename("-");
  
  // create patches
  valarray<patch3D*> bodyArray(6);
  bodyArray[0] = new spherePatch(radius,0.0+0.001234     ,0.0               );
  bodyArray[1] = new spherePatch(radius,0.0              ,0.5*M_PI+0.001734 );
  bodyArray[2] = new spherePatch(radius,0.5*M_PI+0.002734,0.0+0.001234      );
  bodyArray[3] = new spherePatch(radius,0.0+001435       ,-0.5*M_PI+0.003734);
  bodyArray[4] = new spherePatch(radius,-0.5*M_PI+0.0024 ,0.0+0.002734      );
  bodyArray[5] = new spherePatch(radius,M_PI+0.0035734   ,0.0               );

  // create grid
  grid *gridInst = initGrid(bodyArray, nbIntervalsU, nbIntervalsV);

  printGrid(gridInst);

  gridIntegrator *integrator = new gridIntegrator(gridInst, &bodyArray, waveNumber,
						  "both", gamma, "no");

  for(i=0 ; i<gridInst->densities.size() ; i++){ // loop on patches
    for(j=0 ; j<gridInst->densities[i].size() ; j++){ // loop on target points
      value = integrator->integrateTargetPointOnGrid(i,j);
    }
  }

  printf("hehe\n");
  
}
