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
pIn = 'Input/Constructive Parameters/'
ppC = 'Input/0Cao/'
cao = 'square' #'square','rotor'
extrude=0;param=1;n=10;load = 2
if (param==1):
    var = [pIn+'Hole Length',pIn+'Hole Width']
else:
    var = [pIn+' R'+str(k) for k in range(n)]

parameters = {
    'file':'beam','plot':1,'Print':1,
    'analysis': ['u_Mec'],
    'analysisPost':['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'Deg2':['Input/degree 2?',1],
        'OptType':['Input/Optimization Type','shape'],
        'cao':[ppC+'0 Cao?',cao],
        'Lx':[pIn+'X length [m]',8],
        'Ly':[pIn+'Y length [m]',8],
        'extrude':[ppC+'extrude?',extrude],
        'load':['Input/Loading/case',load],
        'lc':[ppC+'Mesh density',1.0],
        'Hole':[ppC+'Hole',param],
        'nbPtSpline':[ppC+'nb points',n],
        'degVM':['Input/Optimization/degVM',2]},
    'step':1.0e-06,
    'allowCentralFD':0,
    'MeshRefine':3,
    'iterMax':1000,
    'variables':var,
    'performance':opt_pnormVM,#opt_vmpNorm_massHole,#opt_maxvonMises,
    #opt_vonMises_elem,
    #opt_pnormVM,
    #opt_pnormVM_mass,
    #opt_eig,opt_vm2,opt_pnorm,
    'optimizer':'mma',#'mma',#'mma2007',conlinFile,gcmma,openopt
    'xtol':1.0e-03,'archivate':1
}

# Design variables
if (param==1 and cao=='square'):
    x = [0.2,0.2];xmin = [0.001,0.001];xmax = [1.2,1.2]
elif (param==2 and cao=='square'):
    x = [0.4]*n;xmin = [0.01]*n;xmax = [3.5]*n
else:
    x = [0.01,0.01];xmin = [0.005,0.005];xmax = [0.08,0.025]

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
a0 = 1.0; a=[0.]*op.m;c=[1000.]*op.m;d=[1.]*op.m
op.mmaPy(op.x,op.xmin,op.xmax,a0,a,c,d,op.parameters['performance'],0,1)
#op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)
#aa = []; cc = []
#op.mmaSvanFortran07(op.x,op.xmax,op.xmin,op.fjMax,op.parameters,aa,cc)
# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
op.postprocessing('resOpt/histOptClassAttr.txt', op.iter-1)

