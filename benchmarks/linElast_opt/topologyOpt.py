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

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
nbEig = 3
aa = [getattr(defPerfFunc,'EigFreqSquare_'+str(k)) for k in range (1,nbEig+1)]

parameters = {
    'plot':1,'Print':0,'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec_Post'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'OptType':['Input/Optimization Type','topology'],
        'MaterialInterpLaw':['Input/Optimization/Material Law','simp'],
        'SimpDegree':['Input/Optimization/Simp Degree',3.0],
        'RecombineSurf':['Geo/Recombine',1],
        'Transfinite':['Geo/transfinite',1],
        'lc':['Geo/Mesh density',1.0],
        '2D':['Input/ 2D?', 1],
        'Hole':['Geo/Hole',0]},
    'TAG':[1000],
    'performance':Compliance_Volume, #[Compliance, Volume],
    'rmin':0.025,
    'optimizer':'conlinFile',#'mma2007','conlinFile','gcmma','openopt'
    'xtol':1.0e-02,
    'iterMax':1000}

x = np.array([0.3])
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
op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)
#op.OC(op.x,op.fjMax,op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
op.postprocessing('resOpt/histOptClassAttr.txt',op.iter)
#op.postprocessing('hist/TO_2D_cantil_100.400_midlPnt_Filt0.005_vfrac0.5/histOptClassAttr.txt',146)




