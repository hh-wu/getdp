
"""
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    248953.65908742
    243881.57948852
    233194.46109235
    227693.10884178
    225757.28967786
    225195.70961595
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
x = np.array([.4])
pIn = 'Input/Constructive Parameters/'
varName = [pIn+'Hole Length']
func = vm_pnorm #compliance,vm_pnorm,eig0
load = 2
execMode = 'plot' #'response','derivative','plot'
Nlc = 1
step =  [1.0e-06]#np.logspace(-11, -1, num=11)
sensMeth =['FiniteDifference','AdjointSemi','AdjointLie']
#sensMeth = ['FiniteDifference'] #,'AnalyticNotEplicit']
pathSave = 'resSens/tt'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5
femParam = {'OptType':['Input/Optimization Type','shape'],
            'load':['Input/Loading/case',load],
            'degVM':['Input/Optimization/degVM',2]}

# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(IP,file,sys,varName,func,x,step,Nlc,execMode,pathSave,femParam,sensMeth)
