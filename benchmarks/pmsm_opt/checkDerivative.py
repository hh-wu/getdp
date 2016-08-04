
"""
    Author: Erin Kuci
    Check the computation of sensitivity
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from defPerfFunc import *
from defPerfFuncSens import *
from _checkDerivative import *

# ************************************************************************
# **** Input                                                         *****
# ************************************************************************
pp = 'Input/Constructive Parameters/';mm=1.0e-03;deg=np.pi/180.0
tagElem = [1000]
angles = [0] #np.linspace(7.5,15.0,5)
femParam = {
    'OptType':['Input/Optimization Type','shape'],
    'InnerPM':['Geo/Inner PM',0],
    'NL':['Input/Finite Element/NonlinearSystem',0],
    'Istat':['Input/Finite Element/50Id stator current',1.2],
    'FEorder':['Input/Finite Element/FE order', 1],
    'angle':['Input/ShiftMeshRotorPosition',angles],
    'NbAngle':['Input/Optimization/NbAngle',len(angles)],
    'MaterialInterpLaw':['Input/Optimization/Material Law','simp'],
    'SimpDegree':['Input/Optimization/Simp Degree',2.0],
    'DomOpt':['Input/Optimization/region TO',0],
    'Tnom':['Input/Optimization/Tnom', 7.0]
}
parameters = {
    'Print':10,
    'file':'pmsm',
    'analysis':['MagStaDyn_a_2D'],
    'analysisPost':['MagStaDyn_a_2D'],
    'adjoint':['Adjoint_MagStaDyn_a_2D'],
    'semiPost':['Semi_Adjoint_MagStaDyn_a_2D'],
    'direct':['Direct_MagStaDyn_a_2D'],
    'defaultValue':femParam,
    'variables':[pp+'Magnet thickness'],
    #[pp+'Magnet length'],#[pp+'Airgap width [m]'],
    'performance':Torque, #Compliance,Torque,TorqueVar,TorqueMean
    'allowCentralFD':0,
    'MeshRefine':1,
    'project_xe':0,'TAG':tagElem,
    'smoothVelocity':0,
    'parallel':0,
    'nbCPU':6
}
x = [32.67*deg]#[2.352*mm] #[(26.02-25.6)*mm]
execMode = 'derivative' #derivative,plot
Nlc = 1
mesh=[]
if Nlc==0: mesh = ['v4.msh'] #['v'+str(k)+'.msh' for k in range(5)]
step = [1.0e-06] #np.logspace(-16, -2, num=14)
sensMeth = ['FiniteDifference','DirectLie','AdjointLie','AdjointSemi']
#'FiniteDifference','AdjointLie','AdjointFixedDom','AdjointSemi'
pathSave = 'resSens'

# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(x,execMode,sensMeth,step,Nlc,femParam,parameters,pathSave,mesh)





