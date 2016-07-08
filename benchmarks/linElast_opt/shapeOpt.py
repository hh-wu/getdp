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
ppC = 'Input/0Cao/';
pIn = ppC + 'Constructive Parameters/'
cao = 'square' #'square','rotor'
extrude = 0; param = 2; nSpline = 6; load = 9
if (param==1):
    var = [pIn+'Hole Length',pIn+'Hole Width']
else:
    nbHole = 6; nbDesVar = nbHole*nSpline
    var = []
    for ii in range(nbHole):
        for jj in range(nSpline):
            var.append(pIn+'R'+str(ii)+str(jj))

parameters = {
    'file':'beam','plot':1,'Print':5,
    'analysis': ['u_Mec'],
    'analysisPost':['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'Deg2':['Input/degree 2?',1],
        'OptType':['Input/Optimization Type','shape'],
        'cao':[ppC+'0 Cao?',cao],
        'Lx':[pIn+'X length [m]',6.0],
        'Ly':[pIn+'Y length [m]',1.0],
        'extrude':[ppC+'extrude?',extrude],
        'load':['Input/Loading/case',load],
        'lc':[ppC+'Mesh density',2.0],
        'Hole':[ppC+'Hole',param],
        'Symetry':[ppC+'Symetry',0],
        'Transf':[ppC+'transfinite?',0],
        'nbPtSpline':[ppC+'nb points',nSpline],
        'degVM':['Input/Optimization/degVM',3]},
    'step':1.0e-06,
    'allowCentralFD':0,
    'gmshRead':{8:'res/u.pos',9:'res/lambda.pos'},
    'MeshRefine':2,
    'iterMax':1000,
    'variables':var,
    'performance':shape_complianceVolume,
    #opt_maxvonMises,
    #opt_pnormVM,opt_vmpNorm_massHole,opt_maxvonMises,
    #opt_vonMises_elem,
    #opt_pnormVM,
    #opt_pnormVM_mass,
    #opt_eig,opt_vm2,opt_pnorm,
    'optimizer':'mma3',#'mma',#'mma2007',conlinFile,gcmma,openopt
    'xtol':1.0e-08,'archivate':1,'parallel':0,'nbCPU':6
}

# Design variables
if (param==1 and cao=='square'):
    x = [0.05*2.0]*2;xmin = [0.002]*2;xmax = [0.4*2.0]*2
elif (param==2 and cao=='square'):
    x = [0.2]*nbDesVar;xmin = [0.1]*nbDesVar;xmax = [0.4]*nbDesVar
else:
    x = [0.01,0.01];xmin = [0.005,0.005];xmax = [0.08,0.025]
print x
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
#op.postprocessing('resOpt/histOptClassAttr.txt', op.iter-1)

