""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
"""

import numpy as np
import pylab as pl
import matplotlib.pyplot as plt

import sys
#sys.path[:0] = ['tool']
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool2 import *
    
# *****************************************************************************
#                               MAIN PROGRAM 
# *****************************************************************************
if __name__ == "__main__":

    # Create the parameters
    parameters = {}
    parameters['pathGmsh'] = '/Applications/Gmsh.app/Contents/MacOS/gmsh '
    parameters['pathGetdp'] = '/Applications/getdp '
    parameters['modelName'] = 'def'
    parameters['AnalysisModelType']='FEM'
    parameters['flagParallel'] = 0
    parameters['flagOptType'] = 'Topology'
    parameters['PerturbMesh'] = 0 # must be automatically set to 0!!
    parameters['modelType'] = 'beam'
    parameters['paramName'] = 'E'
    parameters['VolFrac'] = 0.4
    parameters['performance'] = ['Compliance', 'Volume']
    parameters['m'] = len(parameters['performance']) - 1 # number of constraint

    # Optimizer
    op = OPTIMIZATION(parameters)
    x = np.array([op.parameters['VolFrac']]*op.parameters['nbDesignVar'])

    # Compute the derivative
    print('-- Analytic adjoint variable method (fixed mesh) --')
    dfdx = op.AnalyticAVMcomplete(x,0,parameters)
    np.save('dfdx_unfilt.npy',dfdx)
    os.system('cp res/SensitivityObj_AdjointMethod.pos res/SensitivityObjDiscreteFilt.pos')
    #print dfdx
    
    # Filter sensitivity (PDE)
    print('-- PDE filter --')
    parameters['rmin'] = 0.007#0.007#0.008
    dfdxPDE = op.filterSensitivityPDE(x,parameters,
                 path='res/SensitivityObj_AdjointMethod.pos')
    np.save('dfdx_filtPDE.npy',dfdxPDE)
    
    # filter sensitivity (discrete)
    print('-- PDE-D filter --')
    parameters['rmin'] = 1.5
    parameters['nelx'] = 59
    parameters['nely'] = 39
    dfdxPDED = op.filterSensitivityDiscrete(x,dfdx,parameters)
    np.save('dfdx_filtPDED.npy',dfdxPDED)
    op.refreshPostOpFile(dfdxPDED, path='res/SensitivityObjDiscreteFilt.pos',
                         indexStart=op.parameters['indexStart'])
    #print dfdxPDED
    print dfdxPDED[:] - dfdx[:]




