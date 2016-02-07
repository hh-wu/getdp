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
IP = 4
file='beam'
sys = 'u_Mec'
gmshRead = {8:'res/u.pos',9:'res/lambda.pos'}
x = [0.8]
pIn = 'Input/Constructive Parameters/';ppC = 'Input/0Cao/'
extrude = 0
varName = [pIn+'Hole Length']
func = VMelem #opt_eig_sens,compliance,vm_pnorm,eig0
funcName = 'vonMisesElem'
load = 1
execMode = 'derivative' #'derivative','plot-perturb','plot-converge'
Nlc = 1
msh = ''
if (Nlc==0): msh=['beam3.msh']#['beam'+str(k)+'.msh' for k in range(6)]
step = [1.0e-06] #np.logspace(-11, -1, num=11)
sensMeth = ['FiniteDifference','AdjointFixedDom']
#'SelfFixedDom','AdjointLie','AnalyticNotEplicit'
pathSave = 'resSens'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5

femParam = {'OptType':['Input/Optimization Type','topology'],
            'load':['Input/Loading/case',load],
            'extrude':[ppC+'extrude?',extrude],
            'Hole':[ppC+'Hole',0],
            'Lx':[pIn+'X length [m]',3],
            'Ly':[pIn+'Y length [m]',1],
            'Nx':[ppC+'Nx',18],
            'Ny':[ppC+'Ny',6],
            'Nz':[ppC+'Nz',2],
            'Transfinite':[ppC+'transfinite?',1],
            'degVM':['Input/Optimization/degVM',2],
            'Deg2':['Input/degree 2?',0]}
tagElem = [1000]
# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(IP,file,sys,varName,func,x,step,Nlc,execMode,pathSave,femParam,sensMeth,
     mshName=msh,gmshRead=gmshRead,tagElem=tagElem,funcName=funcName)


