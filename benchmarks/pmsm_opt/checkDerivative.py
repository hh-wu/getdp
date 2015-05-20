""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
"""
#quest: why difference of torque with pmsm_FH ???
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks/pmsm_opt/tool')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# **** Input                                                         *****
# ************************************************************************
x = np.array([0.3]) #np.array([op.getScalarParamVal('Input/OptParam/x_0')])
execMode = 2 #0:debug, 1:sensitivity, 2:plot
lc = [0.65] #np.logspace(0.5, -0.7, num=20)
step = [1.0e-07] #np.logspace(-16, -3, num=14)
sensMeth = ['GlobalFiniteDifference','AdjointSemi','AdjointLie','DirectLie']
pathSave = 'resSens'

# ************************************************************************
# **** Define parameters                                             ****
# ************************************************************************
parameters = {
    'PrintOpt':99,
    'fileName': 'pmsm',
    'AnalysisModelType':'FEM',
    'OptType': 0, #0:'Shape', 1:'Topology'
    'analysisType': ['static'],
    'NLsys': 1,
    'NLcurve': 1,
    'performance':[Compliance],#[Compliance],[Torque]
    'allowCentralFD': 0,
    'rotorAngles': np.array([37.0]),#np.linspace(7.5,15.0,5)
    'defautValue': {'TorqueNominal':90.0}}

# ************************************************************************
# **** Instantiate the sensitivity module                            *****
# ************************************************************************
op = Sensitivity(parameters)

# ************************************************************************
# **** Compute sensitivity analysis                                  *****
# ************************************************************************
# Initialization
if ((execMode <= 2) and not(os.path.exists(pathSave))):os.mkdir(pathSave, 0755)

if ( execMode == 1 ): # debug code

    # Compute f
    print('*'*80+'\n** Compute performance function **\n'+'*'*80)
    op.setScalarParameter('Geo/Mesh Characteristic Length Factor',lc[0])
    op.MeshCao(x, op.parameters)
    resAnalysis = op.Analysis(x,parameters)
    print('*'*80+'\n** d[f1, ..., fk]/dx with method [M1,...Mk] **\n'+'*'*80)
    op.parameters['step'] = step[0]
    op.parameters['SensitivityMethod'] = np.copy(sensMeth)
    dfdx = op.Sensitivity(x,resAnalysis['fj'],resAnalysis['dataFEM'],op.parameters)
    dfdx = dfdx['dfjdx']
    print('[f1, ..., fk]:{}\n[M1,...Mk]:{}\nd[f1, ..., fk]/dx:{}'.\
          format(resAnalysis['fj'],op.parameters['SensitivityMethod'],dfdx))

elif( execMode == 2 ): # check sensitivity
    
    print('*'*80+'\n** df/dx with method [M1,...Mk] for (lc,step) **\n'+'*'*80)
    sensMeth = np.array(sensMeth)
    Nlc = len(lc);Nstep = len(step);nbMeth = len(sensMeth);n = len(x)
    f = np.zeros(Nlc);dfdx = np.zeros([Nlc,Nstep,nbMeth,n]);relErr = np.copy(dfdx)
    
    # Compute df/dx
    for j in range(Nlc): # loop over mesh quality (lc)
        op.setScalarParameter('Geo/Mesh Characteristic Length Factor',lc[j])
        op.MeshCao(x, op.parameters)
        
        for k in range(Nstep): # loop over perturbation step (step)
            op.parameters['step'] = step[k]
            
            for l in range(nbMeth): # loop over sens. analysis methods
                # compute f(x)
                resAnalysis = op.Analysis(x,op.parameters)
                f[j] = np.copy(resAnalysis['fj'][0])
                
                # compute df/dx(x)
                op.parameters['SensitivityMethod'] = [sensMeth[l]]
                t0 = time.time()
                resSens = op.Sensitivity(x,resAnalysis['fj'],parameters=op.parameters)
                tf = time.time()
                dfdx[j,k,l] = resSens['dfjdx']
                
                # compute relative error wrt FD
                relErr[j,k,l] = op.relError(dfdx[j,k,0],dfdx[j,k,l])
                
                # display result
                print('-'*80)
                print('method:{},lc:{},step:{}'.format(sensMeth[l],lc[j],step[k]))
                print('f:{}\ndfdx:{}\nrelErr({},{}):{:.4E}\nTime(s):{:.4E}'.\
                      format(f[j],dfdx[j,k,l],sensMeth[l],sensMeth[0],
                             float(relErr[j,k,l]),float(tf-t0)))
                print('-'*80)

    # Save result
    saveData(pathSave,f,dfdx,step,lc,relErr,sensMeth)

else: #load data and plot
    sensMeth,f,dfdx,step,lc,relErr = loadData(pathSave)
    sensMeth = ['GlobalFiniteDifference','AdjointLie','DirectLie']
    plotMultiVec(np.arange(len(lc)),np.abs(dfdx[:,0,:,0]),pathSave+'/dfdx_lc.pdf',
        labelx='Mesh Quality',labely=sensMeth,log=0,titleName='Derivative')
    plotMultiVec(np.arange(len(lc)),np.abs(relErr[:,0,1:,0]), pathSave+'/relErr_lc.pdf',
        labelx='Mesh Quality', labely=sensMeth[1:],log=3,titleName='RelErr(.,FD)')
#    plotMultiVec(step,np.abs(dfdx[0,:,:,0][0]),pathSave+'/dfdx_step.pdf',
#                 labelx='perturbation step',labely=sensMeth)
#    plotMultiVec(step,np.abs(relErr[:,0,1:,0][0]),pathSave+'/relErr_step.pdf',
#                labelx='perturbation step', labely=sensMeth[1:])


