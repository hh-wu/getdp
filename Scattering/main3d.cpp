
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sphere3D.h"
#include "grid.h"
#include "gridIntegrator.h"

template <class T>

grid *initGrid(valarray<T> &bodyArray, int nbIntervalsU, int nbIntervalsV){
  int nbPatches = bodyArray.size();

  printf("nbpatch = %d\n", nbPatches);

  grid *gridInst = new grid();
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

  /*
  for(i=0 ; i<nbPatches ; i++){
    
    int nbPts = (nbIntervalsU+1)*(nbIntervalsV+1);
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
    gridInst->uH[i].resize(nbPts);
    gridInst->vH[i].resize(nbPts);

    gridInst->scalarData[i].resize(1);
    gridInst->scalarData[i][0].resize(nbPts);

 
    for(j=0 ; j<nbIntervalsU+1 ; j++){
      for(k=0 ; k<nbIntervalsV+1 ; k++){
	gridInst->positionsX[i][j*nbIntervalsU+k] = ...;
	gridInst->positionsY[i][j*nbIntervalsU+k] = ...;
	gridInst->positionsZ[i][j*nbIntervalsU+k] = ...;
	gridInst->normalsX[i][j*nbIntervalsU+k] = ...;
	gridInst->normalsY[i][j*nbIntervalsU+k] = ...;
	gridInst->normalsZ[i][j*nbIntervalsU+k] = ...;
	gridInst->pou[i][j*nbIntervalsU+k] = ...;
	gridInst->u[i][j*nbIntervalsU+k] = ...;
	gridInst->v[i][j*nbIntervalsU+k] = ...;
	gridInst->jacobianDeterminant[i][j*nbIntervalsU+k] = ...;
	gridInst->densities[i][j*nbIntervalsU+k] = ...;
	gridInst->uH[i][j*nbIntervalsU+k] = ...;
	gridInst->vH[i][j*nbIntervalsU+k] = ...;
	gridInst->scalarData[i][0][j*nbIntervalsU+k] = ...;
      }
    }
  }
  */

  return gridInst;
}

int main(){
  double radius = 1.0, waveNumber = 1.0;
  int nbPatches = 6;
  int nbIntervalsU = 10, nbIntervalsV = 10;

  // create patches
  valarray<spherePatch*> bodyArray(nbPatches);
  bodyArray[0] = new spherePatch(radius,0.0+0.001234     ,0.0               );
  bodyArray[1] = new spherePatch(radius,0.0              ,0.5*M_PI+0.001734 );
  bodyArray[2] = new spherePatch(radius,0.5*M_PI+0.002734,0.0+0.001234      );
  bodyArray[3] = new spherePatch(radius,0.0+001435       ,-0.5*M_PI+0.003734);
  bodyArray[4] = new spherePatch(radius,-0.5*M_PI+0.0024 ,0.0+0.002734      );
  bodyArray[5] = new spherePatch(radius,M_PI+0.0035734   ,0.0               );

  // create grid
  grid *gridInst = initGrid(bodyArray, nbIntervalsU, nbIntervalsV);

  gridIntegrator *integrator = new gridIntegrator(gridInst, bodyArray,
						  waveNumber, "single", 0.0);

  printf("hehe\n");
  
}
