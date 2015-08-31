""" 
    Author: Erin Kuci
    
    Template for shape optimization routine 
    fd
    [  -287.13761822]
    [  -400.47652874]
    [   277.42280508]
    [ -6458.30004942]
    [-18090.74965422]
    [-32756.50451542]
    [ -3069.30451188]
    [ -8720.23083502]
    [  1814.99053724]
    [  3152.95474138]

    semi
    [  -287.39776934]
    [  -396.8532246 ]
    [   276.8821811 ]
    [ -6453.17120401]
    [-18106.50098223]
    [-32768.25393626]
    [ -3070.63208327]
    [ -8720.54463191]
    [  1819.01820738]
    [  3165.23131529]
    
    analytic
    [  -286.94350446]
    [    93.12884026]
    [   274.82658919]
    [ -4053.35907421]
    [-20363.4237834 ]
    [-25044.97030132]
    [ -2027.75622886]
    [ -6743.71542191]
    [  2176.51252397]
    [  6315.9558414 ]
"""

import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# ***** create the parameters                                        *****
# ************************************************************************
pIn = 'Input/Constructive Parameters/'
ppC = 'Input/0Cao/'
cao = 'square'
param=1;n=10
if (param==1):
    var = [pIn+'Hole Length',pIn+'Hole Width']
else:
    var = [pIn+' R'+str(k) for k in range(n)]

parameters = {
    'file':'beam','plot':1,'Print':5,
    'analysis': ['u_Mec'],
    'analysisPost':['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'OptType':['Input/Optimization Type','shape'],
        'cao':[ppC+'0 Cao?',cao],
        'load':['Input/Loading/case',2],
        'lc':[ppC+'Mesh density',5.0],
        'Hole':[ppC+'Hole',param],
        'nbPtSpline':[ppC+'nb points',n],
        'degVM':['Input/Optimization/degVM',2]},
    'step':1.0e-06,
    'variables':var,
    'performance':opt_pnorm,#opt_eig,opt_vm2,opt_pnorm,opt_vonMises_elem
    'optimizer':'conlinFile', #mma2007,conlinFile,gcmma,openopt
    'xtol':1.0e-03
}

# Design variables
if (param==1):
    x = [0.4,0.4]
    xmin = [0.01,0.01]
    xmax = [3.5,3.5]
else:
    x = [0.4]*n
    xmin = [0.01]*n
    xmax = [3.5]*n

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters, xmin, xmax, x)

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
op.postprocessing('resOpt/histOptClassAttr.txt', op.iter-1)

## Torque comparison
#angles=np.linspace(7.5,15.0+7.5,15*3)
#pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
#            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
#            'resOpt/torqueCompare.eps']
#pathLoad = ['','']#'resOpt/torqueOpt.npy']
#iter = len(x[:,0])
#op.compareTorque(x0,x[iter-1],angles,op.parameters,pathSave)

