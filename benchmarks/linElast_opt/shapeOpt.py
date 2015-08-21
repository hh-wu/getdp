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
param=1;n=10
if (param==1):
    var = [pIn+'Hole Length',pIn+'Hole Width']
else:
    var = [pIn+' R'+str(k) for k in range(n)]

parameters = {
    'file':'beam',
    'plot':1,
    'Print':2,
    'analysis': ['u_Mec'],
    'analysisPost':['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'OptType':['Input/Optimization Type','shape'],
        'lc':['Geo/Mesh density',10.0],
        '2D':['Input/ 2D?',1],
        'Hole':['Geo/Hole',param],
        'nbPtSpline':['Geo/nb points',n],
        'degVM':['Input/Optimization/degVM',2]},
    'variables':var,
    'performance': [Mass2, vonMises_Pnorm],
    'fjMax':[16,1.7e8],
    'sign':[-1.0,1.0], # -1:>=, 1:<=
    'Sensitivity':['AnalyticNotEplicit','AdjointLie'],#['FiniteDifference']*2,
    'optimizer':'conlinFile', #mma2007,conlinFile,gcmma,openopt
    'xtol':1.0e-03
}

# Design variables
if (param==1):
    x = np.array([0.4, 0.4])
    xmin = np.array([0.01,0.01])
    xmax = np.array([3.5,3.5])
else:
    x = np.array([0.4]*n)
    xmin = np.array([0.01]*n)
    xmax = np.array([3.5]*n)

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
op.postprocessing('resOpt/histOptClassAttr.txt', op.iter)

## Torque comparison
#angles=np.linspace(7.5,15.0+7.5,15*3)
#pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
#            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
#            'resOpt/torqueCompare.eps']
#pathLoad = ['','']#'resOpt/torqueOpt.npy']
#iter = len(x[:,0])
#op.compareTorque(x0,x[iter-1],angles,op.parameters,pathSave)

