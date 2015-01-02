"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool4 import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnaire()

parameters['warmStart'] = 0
parameters['plot'] = 1

# Model
parameters['modelName'] = 'def'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
parameters['simpPenal'] = 5.0
parameters['modelType'] = 'beam'
parameters['beamTestCase'] = 1 #0:short cantilever,1:mbb,2:mbb-center

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.4
parameters['elementOfDomainTopOptTAG'] = 1000

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['fiMax'] = np.zeros(parameters['m']+1)
parameters['normalizeObj'] = 0
parameters['sign'] = [1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1, 0]
parameters['rmin'] = 0.007*2.5

# Optimizer set-up
parameters['optimizer']='openopt'
parameters['solverName'] = 'mma'
parameters['xtol'] = 1.0e-08

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = OPTIMIZATION(parameters)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Create optimizer
op.create(op.parameters)

# Call Optimizer
op.openOptCall(op.x0,op.xmax,op.xmin,op.parameters,
               op.ObjFunc,op.ObjFuncDeriv,op.ineqConstr,op.ineqConstrDeriv)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(parameters)





