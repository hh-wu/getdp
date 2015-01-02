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

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.4

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['fiMax'] = np.zeros(parameters['m']+1)
parameters['normalizeObj'] = 0

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1, 0]
parameters['rmin'] = 0.007*2.5

# Optimizer set-up
parameters['optimizer']='conlin'
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
op.parameters['fiMax'][1] = op.parameters['VolFrac']*op.parameters['n']
op.parameters['VolMax'] =  op.parameters['n']
if(not(parameters['warmStart'])):
    op.x0 = np.array([op.parameters['VolFrac']]*op.parameters['n'])
op.xmax = np.array([1.0]*op.parameters['n'])
op.xmin = np.array([0.001]*op.parameters['n'])

op.preprocessing(op.parameters)

# Create optimizer
op.create(op.parameters)

# Call optimizer
dc = np.zeros(op.parameters['m']+1)
jt = np.array([4.0,4.0])
#d2 = np.zeros((op.parameters['m']+1)*op.parameters['n'])
d2 = np.array([0.01]*(op.parameters['m']+1)*op.parameters['n'])
pds = 0.0
op.conlinFor(x0,xmax,xmin,op.parameters['fiMax'],
             dc,jt,pds,d2,op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x0,xf,obj,constr = op.postprocessing(x0,parameters)

#os.system('cp '+'res/designVar' + str(iterMax)+'.pos '
#               +'res/designVarFilt.pos')
#
#x = op.readPostOpFile(n=op.n, path='res/designVarFilt.pos')
#xf = x[:]
#for k in range(op.n):
#    if(x[k] <= 0.8):
#        xf[k] = 0.0
#    else:
#        xf[k] = 1.0
#op.refreshPostOpFile(x=xf, path='res/designVarFilt.pos',
#                     indexStart=op.parameters['indexStart'])
#



