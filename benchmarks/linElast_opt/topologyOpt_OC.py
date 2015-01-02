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
parameters['hole'] = 0
parameters['transfinite'] = 0
parameters['holeWidth'] = 0.15
parameters['holeLength']= 0.36

# Model
parameters['modelName'] = 'def'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
parameters['simpPenal'] = 5.0 #2.0->5.0 (3.0 ok)
parameters['modelType'] = 'beam'
parameters['beamTestCase'] = 1 #0:short cantilever,1:mbb,2:mbb-center

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.4
parameters['elementOfDomainTopOptTAG'] = 1000

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
#parameters['performance'] = ['Compliance', 'Mass']
parameters['unitElemVol'] = 0
parameters['mf'] = 850.0 #2362.2 kg (max)
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['fiMax'] = np.zeros(parameters['m']+1)
parameters['sign'] = [1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1, 0] #[0,0]
parameters['rmin'] = 0.007*2.0

# Optimizer set-up
parameters['optimizer']='gcmma'
parameters['solverName'] = 'GCMMA-SVANBERG'
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
op.OC(op.x0,op.parameters['fiMax'],op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(op.parameters)





