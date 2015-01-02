"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method on fixed mesh
    Algo: OC(matlab), MMA(matlab), MMA(OpenOpt)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool3 import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnaire()
#print('keys')
#print parameters.keys()
#print('values')
#print parameters.values()

# Model
parameters['modelName'] = 'def'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology'
parameters['modelType'] = 'beam'

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.4

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['m'] = len(parameters['performance']) - 1
parameters['fiMax'] = np.zeros(parameters['m']+1)
parameters['sign'] = np.array([1.0,1.0])
parameters['normalizeObj'] = 1

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1, 0]
parameters['rmin'] = 2.0*0.007 #3.5
parameters['nelx'] = 59
parameters['nely'] = 39

# Optimizer set-up
parameters['xtol'] = 1.0e-02
parameters['optimizer'] = 'gcmma-matlab'
parameters['solverName'] = 'GCMMA-SAVNBERG'

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = OPTIMIZATION(parameters)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Call optimizer
op.parameters['fiMax'][1] = op.parameters['VolFrac']*op.parameters['n']
op.parameters['VolMax'] =  op.parameters['n']
x0 = np.array([op.parameters['VolFrac']]*op.parameters['n'])
xmax = np.array([1.0]*op.parameters['n'])
xmin = np.array([0.001]*op.parameters['n'])

op.mmaSvanMatlab(x0,xmax,xmin,op.parameters['fiMax'][1:],op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x0,xf,obj,constr = op.postprocessing(x0,parameters)



