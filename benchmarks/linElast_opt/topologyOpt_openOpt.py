"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnary()

parameters['warmStart'] = 0
parameters['plot'] = 1

# Model
parameters['fileName'] = 'def'
parameters['AnalysisModelType']='FEM'
parameters['flagOptType'] = 1 #0:'Shape', 1:'Topology'
parameters['defautValue'] = {'MaterialInterpLaw':0,'SimpDegree':3.0,
                             'RecombineSurf':1,'lc':2.0}

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.75
parameters['elementOfDomainTopOptTAG'] = [1000]
x0 = np.array([parameters['VolFrac']])
xmin = np.array([0.001])
xmax = np.array([1.0])

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
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
op = Optimization(parameters,xmin,xmax,x0)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

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





