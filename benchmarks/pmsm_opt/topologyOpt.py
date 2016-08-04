"""
    Author: Erin Kuci
    Topology optimization template
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
NbAngle = 1
angles = [0.]
#angles = np.linspace(0.,15.,NbAngle)
print angles
parameters = {
    'plot':1,'Print':4,'file':'pmsm',
    'analysis':['MagStaDyn_a_2D'],
    'analysisPost':['MagStaDyn_a_2D'],
    'adjoint':['Adjoint_MagStaDyn_a_2D'],
    'project_xe':0,
    'defaultValue':{
        'OptType':['Input/Optimization Type','topology'],
        'NL':['Input/Finite Element/NonlinearSystem',0],
        'Istat':['Input/Finite Element/51Iq stator current',3.9],
        'Tnom':['Input/Optimization/Desired nominal torque',5.0],
        'MaterialInterpLaw':['Input/Optimization/Material Law','simp'],
        'SimpDegree':['Input/Optimization/Simp Degree',2.0],
        'DomOpt':['Input/OptParam/TO domain','Rotor Fe-PM'],
        'Deg2':['Input/Finite Element/FE order',2],
        'angle':['Input/Shift mesh rotor position',angles],
        'NbAngle':['Input/Optimization/NbAngle',NbAngle]},
    'TAG':[5000],
    'performance':topopt_BradVol,
    #opt_Compliance_Volume,
    #topopt_torque_Var,
    #opopt_torque_Var,
    #topopt_torque_VarMean,
    #topopt_torqueVariance,
    #opt_Compliance_Volume,
    #opt_torque_VarMean,
    #topopt_torque_VarMean_lsq,
    'rmin':0.002,
    'MeshRefine':1,
    'MeshName':'',
    'iterMax':1000,
    # Optimizer set-up
    'optimizer':'mmaDualCG',#'mma3', #conlinFile,gcmma,openopt
    'xtol':1.0e-02,'archivate':1,'parallel':0,'nbCPU':4
}

x = np.array([0.7])
xmin = np.array([1.0e-03])
xmax = np.array([1.0])

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

#NbAngle = 40
#angles = np.linspace(0.,45.,NbAngle)
#op.parameters['defaultValue']['NbAngle'][1] = NbAngle
#op.parameters['defaultValue']['angle'][1] = angles
#sol = op.Analysis(op.x,op.parameters)
#data = sol['dataFEM']
#torque = np.array(data['Torque'])
#plotSimple(angles,torque,['rotor angle','torque'],'torque_I0.pdf')

# Call optimizer
a0 = 1.0; a=[0.]*op.m;c=[1000.]*op.m;d=[1.]*op.m
#a0 = 1.0; a=[0.]*op.m;d=[1.]*op.m
#c = [0.]*2*int(NbAngle)
#c.extend([1000.]*(op.m-2*int(NbAngle)))
#print c
op.mmaPy(op.x,op.xmin,op.xmax,a0,a,c,d,op.parameters['performance'],0,1)

#op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)
#mm = len(op.fjMax) - 1
#cc = 10000.0*np.ones(mm)
#aa = np.zeros(mm);#aa[0:3]=1.0
#op.mmaSvanFortran07(op.x,op.xmax,op.xmin,op.fjMax,op.parameters,aa,cc,1)

# Close optimizer
#op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
#path = 'resOpt/histOptClassAttr.txt'
#op.postprocessing(path,24)
#
#path = ['resOpt/opt_compl_vol0.4_conlin_rotStat_6angPos_sym_simp2/histOptClassAttr.txt',
#        'resOpt/opt_compl_vol0.4_openopt_rotStat_6angPos_sym_simp2/histOptClassAttr.txt']
#tag = [19,20]
#label = ['CONLIN','OpenOpt']
#op.multiPlotOpt(path,tag,label)

# Compute torque
#angles = np.linspace(7.5,15.0+7.5,15*3)

##xx = op.readPostOpFile(op.n, 'res/designVariable.posIter19')
#xx = np.ones(op.n)
#print op.n
#op.setOptimizationParameters(xx)
#k = 0
#torque = np.zeros(len(angles))
#op.setScalarParameter(op.OnelabVarIn['StateVar'],1)
#for angle in angles:
#    op.setScalarParameter(op.OnelabVarIn['RotorPos'],angle)
#    op.femAnalysis(modelName='v.pro',mshName='v.msh')
#    torque[k] = op.getScalarParamVal(op.OnelabVarOut['Torque'])
#    print('angular position:{0} - torque:{1}'.format(angle,torque[k]))
#    k += 1
#print torque
#op.setScalarParameter(op.OnelabVarIn['StateVar'],0)
#np.save('resOpt/torque.npy',torque)
#np.save('resOpt/angles.npy',angles)
#
#plt.figure
#plt.plot(angles,torque,'-o',linewidth=2)
#plt.title('torque[Nm]')
#plt.xlabel('rotor angular position')
#plt.grid(True)
#plt.savefig('resOpt/torque.pdf')
#plt.show()

#torqueBasic = np.load('resOpt/torqueBasic.npy')
#torqueOpt = np.load('resOpt/opt_compl_vol0.4_conlin_rotStat_6angPos_sym_simp2/torqueOpt.npy')
#print('mean torque basic:{0}\nmean torque opt:{1}'.\
#      format(np.mean(torqueBasic),np.mean(torqueOpt)))
#plt.figure
#plt.plot(angles,torqueBasic,'-o',linewidth=2,label='Torque (basic) [Nm]')
#plt.plot(angles,torqueOpt,'-*',linewidth=2,label='Torque (optimized) [Nm]')
#plt.xlabel('rotor angular position')
#plt.grid(True)
#plt.legend(loc="best",fontsize=16)
#plt.savefig('resOpt/torqueCompare.pdf')
#plt.show()





