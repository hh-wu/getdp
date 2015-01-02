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

# Model
parameters['modelName'] = 'def'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
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
parameters['normalizeObj'] = 1
parameters['sign'] = [1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1, 0]
parameters['rmin'] = 0.007

# Optimizer set-up
parameters['optimizer']='gcmmaFleury'
parameters['solverName'] = 'GCMMA-FLEURY'
parameters['xtol'] = 1.0e-02
parameters['plot'] = 1

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

# Call optimizer
op.mmaFleuryFor(op.x0,op.xmax,op.xmin,op.parameters['fiMax'],op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(op.parameters)





