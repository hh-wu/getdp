"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and Conlin solver
    
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
parameters['simpPenal'] = 3.0
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
#parameters['mf'] = 450.0
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['fiMax'] = np.array([40.0,0.0])#np.zeros(parameters['m']+1)
parameters['normalizeObj'] = 1
parameters['sign'] = [1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1, 0]
parameters['rmin'] = 0.007*2.0

# Optimizer set-up
parameters['optimizer']='conlinFile'
parameters['solverName'] = 'CONLIN'
parameters['xtol'] = 1.0e-02

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
dc = np.zeros(op.parameters['m']+1)

# convex expansion --> blurred if rmin >>
#jt = 0*np.ones(2)
#d2 = []

# convex/linear --> blurred if rmin >>
jt = np.array([0,0])
d2 = []

# reciprocal/linear --> blurred if rmin >>
#jt = np.array([1,2])
#d2 = []

# mma
#jt = 4*np.ones((op.parameters['m']+1))
#d2 = 0.000001*np.ones([(op.parameters['m']+1),op.parameters['n']])

name='input'
op.conlinForFile(name,op.x0,op.xmax,op.xmin,op.parameters['fiMax'],
                 dc,jt,op.parameters,d2)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(parameters)
