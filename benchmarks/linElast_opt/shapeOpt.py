""" 
    Author: Erin Kuci
    
    Template for shape optimization routine 
"""

import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# ***** create the parameters                                        *****
# ************************************************************************
pIn = 'Input/Constructive parameters/'
parameters = {
    'file':'beam',
    'plot':1,
    'Print':99,
    'AnalysisModelType':'FEM',
    'analysisType': ['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defautValue':{'OptType':'shape','lc':5},
    'variables':[pIn+'Hole Length',pIn+'Hole Width'],
    'performance': [Mass, vonMises],
    'fjMax':[0.0,3.6e15],
    'sign':[1.0,1.0], # -1:>=, 1:<=
    'Sensitivity':['AnalyticNotEplicit','AdjointLie'],
    'optimizer':'conlinFile', #mma2007,conlinFile,gcmma,openopt
    'xtol':1.0e-06}

# Design variables
x = np.array([0.2, 0.2])
xmin = np.array([0.001,0.001])
xmax = np.array([1.2,1.2])

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)

# ************************************************************************
# ***** Shape Optimization routine                                   *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Call Optimizer
op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
#op.postprocessing('resOpt/histOptClassAttr.txt', 24)

## Torque comparison
#angles=np.linspace(7.5,15.0+7.5,15*3)
#pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
#            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
#            'resOpt/torqueCompare.eps']
#pathLoad = ['','']#'resOpt/torqueOpt.npy']
#iter = len(x[:,0])
#op.compareTorque(x0,x[iter-1],angles,op.parameters,pathSave)

