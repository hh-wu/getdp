#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Utils.h"

#include "sphere3D.h"
#include "grid.h"
#include "gridIntegrator.h"
#include "log.h"

#define MAX(a,b)   ((a)>(b) ? (a) : (b))
#define TWO_PI     6.2831853071795865

int main(int argc, char *argv[]){
  int i, j, k;
  double radius = 1.0, waveNumber = 1.0, gamma = MAX(3,radius/TWO_PI*waveNumber);
  int fullIntegrator=1, nbIntervalsU = 10, nbIntervalsV = 10;
  patch3D *patch;
  complex<double> value;
  logger log;

  i = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if(Cmp(argv[i]+1, "full", 1)){ i++; fullIntegrator=1; }
      else if(Cmp(argv[i]+1, "critical", 1)){ i++; fullIntegrator=0; }
      else { Msg(GERROR, "Unknowns option '%s'", argv[i]+1); exit(1); }
    }
  }

  //log.setLevel(ERROR|INFORMATION|TIMING|DEBUG);
  log.setLevel(ERROR|INFORMATION);
  log.setFilename("-");
  
  // create body patches
  valarray<patch3D*> bodyArray(6);
  vector<long> bodyArrayNbIntervalsU(6);
  vector<long> bodyArrayNbIntervalsV(6);
  bodyArray[0] = new spherePatch(radius,0.0+0.001234     ,0.0               );
  bodyArray[1] = new spherePatch(radius,0.0              ,0.5*M_PI+0.001734 );
  bodyArray[2] = new spherePatch(radius,0.5*M_PI+0.002734,0.0+0.001234      );
  bodyArray[3] = new spherePatch(radius,0.0+001435       ,-0.5*M_PI+0.003734);
  bodyArray[4] = new spherePatch(radius,-0.5*M_PI+0.0024 ,0.0+0.002734      );
  bodyArray[5] = new spherePatch(radius,M_PI+0.0035734   ,0.0               );
  for(i=0; i<6 ; i++){
    bodyArrayNbIntervalsU[i] = nbIntervalsU;
    bodyArrayNbIntervalsV[i] = nbIntervalsV;
  }

  // create coarse grid (covering the whole body)
  grid *gridInst = new grid(bodyArray, bodyArrayNbIntervalsU, bodyArrayNbIntervalsV);

  FILE *fp = fopen("test.pos", "w");
  gridInst->printGmsh(fp);
  fclose(fp);


  if(fullIntegrator){

    Msg(INFO, "Using Randy's full integrator");

    Msg(INFO, "Init gridIntegrator");
    gridIntegrator *integrator = new gridIntegrator(gridInst, &bodyArray, waveNumber,
						    "both", gamma, "no");

    // gridIntegrator makes a copy of the grid and patches... we should:
    // delete gridInst;
    // delete[] bodyArray;
  
    Msg(INFO, "Start forward map");
    for(i=0 ; i<gridInst->densities.size() ; i++){ // loop on patches
      for(j=0 ; j<gridInst->densities[i].size() ; j++){ // loop on target points
	value = integrator->integrateTargetPointOnGrid(i,j);
	Msg(INFO, "Int (%d,%d) = %.16g + i* %.16g", i, j, value.real(), value.imag());
      }
    }

  }
  else{

    Msg(INFO, "Using high frequency integrator");
    
    

  }

  Msg(INFO, "End");
  
}
