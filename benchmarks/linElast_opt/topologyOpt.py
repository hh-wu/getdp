"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *
import defPerfFunc

pIn = 'Input/Constructive Parameters/'
ppC = 'Input/0Cao/'
cao = 'square' #'square','rotor'
extrude=0
hole=0
# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = {
    'plot':1,'Print':5,'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec_Post'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'OptType':['Input/Optimization Type','topology'],
        'cao':[ppC+'0 Cao?',cao],
        'extrude':[ppC+'extrude?',extrude],
        'load':['Input/Loading/case',0],
        'MaterialInterpLaw':['Input/Optimization/Material Law','polynomial'],
        'SimpDegree':['Input/Optimization/Simp Degree',3.0],
        'Lx':[pIn+'X length [m]',4],
        'Ly':[pIn+'Y length [m]',1],
        'Transfinite':[ppC+'transfinite?',1],
        'lc':[ppC+'Mesh density',1.0],
        'Hole':[ppC+'Hole',hole]
    },
    'TAG':[1000], #1000,1001
    'performance':opt_complianceVolume,#opt_maxBeta_eig,
    'rmin':0.0125,
    'optimizer':'mma2007',#'mma2007','conlinFile','gcmma','openopt'
    'xtol':1.0e-02,
    'iterMax':1000}

x = np.array([0.5])
xmax = np.array([1.0])
xmin = np.array([0.001])

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Call optimizer
#op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)
op.OC(op.x,op.fjMax,op.parameters)

#mm = len(op.fjMax) - 1
#cc = 10000.0*np.ones(mm)
#aa = np.zeros(mm);#aa[0:3]=1.0
#print('aa:{}'.format(aa))
#op.mmaSvanFortran07(op.x,op.xmax,op.xmin,op.fjMax,op.parameters,aa,cc,1)

#aa = np.zeros(len(op.fjMax)); aa[0:4]=1.0
#print('aa:{}'.format(aa))
#op.mmaSvanMatlab(op.x,op.xmax,op.xmin,op.fjMax[1:],op.parameters,aa,1)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
op.postprocessing('resOpt/histOptClassAttr.txt',op.iter-1)
#op.postprocessing('hist/TO_2D_cantil_100.400_midlPnt_Filt0.005_vfrac0.5/histOptClassAttr.txt',146)




