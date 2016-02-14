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
x = [0.4]
pIn = 'Input/Constructive Parameters/';ppC = 'Input/0Cao/'
varName = [pIn+'Hole Length']
func = compliance #VMelem,opt_eig_sens,compliance,vm_pnorm,eig0
funcName = 'vonMisesElem'
execMode = 'derivative' #'derivative','plot-perturb','plot-converge'
Nlc = 4
msh = ''
if (Nlc==0): msh=['beam3.msh']#['beam'+str(k)+'.msh' for k in range(6)]
step = [1.0e-06] #np.logspace(-11, -1, num=11)
sensMeth = ['AdjointLie']
#'SelfFixedDom','AdjointLie','AnalyticNotEplicit','AdjointFixedDom'
pathSave = 'resSens'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5

femParam = {'OptType':['Input/Optimization Type','shape'],
            'load':['Input/Loading/case',2],
            'extrude':[ppC+'extrude?',0],
            'Hole':[ppC+'Hole',1],
            'Lx':[pIn+'X length [m]',1.5],
            'Ly':[pIn+'Y length [m]',1.5],
            'Nx':[ppC+'Nx',18],
            'Ny':[ppC+'Ny',6],
            'Nz':[ppC+'Nz',2],
            'Transfinite':[ppC+'transfinite?',0],
            'degVM':['Input/Optimization/degVM',2],
            'Deg2':['Input/degree 2?',1]}
tagElem = [1000]
# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(IP,file,sys,varName,func,x,step,Nlc,execMode,pathSave,femParam,sensMeth,
     mshName=msh,gmshRead=gmshRead,tagElem=tagElem,funcName=funcName)


