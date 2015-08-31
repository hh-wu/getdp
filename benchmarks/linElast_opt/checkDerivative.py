
"""
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# **** Input                                                         *****
# ************************************************************************
x = np.array([0.4])
pIn = 'Input/Constructive Parameters/'
varName = [pIn+'Hole Length',pIn+'Hole Width']
func = opt_sens
execMode = 'derivative' #{'response','derivative','plot'
lc = [5.0] #np.logspace(0.0, 0.8, num=10)[5:] #[3.0]
step = [1.0e-06] #np.logspace(-11, -1, num=11)
sensMeth =['FiniteDifference','AdjointSemi','AdjointLie']
#sensMeth = ['FiniteDifference'] #,'AnalyticNotEplicit']
pathSave = 'resSens'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5

# ************************************************************************
# **** Define parameters                                              ****
# ************************************************************************
parameters = {
    'Print':4,
    'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'semiPost':['SemiAdjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'defaultValue':{
        'OptType':['Input/Optimization Type','shape'],
        'degVM':['Input/Optimization/degVM',2]},
    'variables':varName,
    'performance':func,
    'allowCentralFD':0
}

# ************************************************************************
# **** Instantiate the sensitivity module                            *****
# ************************************************************************
op = Optimization(parameters, x, x, x)

# ************************************************************************
# **** Compute sensitivity analysis                                  *****
# ************************************************************************
if (execMode!='plot' and not(os.path.exists(pathSave))):os.mkdir(pathSave,0755)

if ( execMode == 'response'):
    print('*'*80+'\n** Compute surface response **\n'+'*'*80)
    nvar = len(xmin)
    ff = np.zeros([len(parameters['performance']),nbSample,nbSample])
    xx = np.zeros([nvar,nbSample])
    for k in range(nvar):
        xx[k] = np.linspace(xmin[k], xmax[k], nbSample)
    print xx
    np.save(pathSave+'/analysis_in.npy', xx)
    op.setScalarParameter('Geo/Mesh Characteristic Length Factor',lc[0])

    for k in range(nbSample):
        for l in range(nbSample):
            x = [xx[0,k],xx[1,l]]
            op.setDesignVariables(x)
            op.MeshCao(op.parameters)
            resAnalysis = op.Analysis(x, op.parameters)
            for m in range(len(parameters['performance'])):
                ff[m,k,l] = np.copy(resAnalysis['fj'][m])
            print('(k:{},l:{});x:{};f(x):{}'.format(k,l,x,ff[:,k,l]))
            np.save(pathSave+'/analysis_out.npy', ff)
    print xx
    print ff
#    xopt = np.array([[0.006,0.0025],[0.0087,0.0031],[0.00869999,0.0037],[ 0.01003261,0.00442],[ 0.01003261,0.00449483]  ])
    xopt = np.load(pathSave+'/optHistVar.npy')
    xx = np.load(pathSave+'/analysis_in.npy')
    ff = np.load(pathSave+'/analysis_out.npy')
    X, Y = np.meshgrid(xx[0], xx[1])
    plotContour(X,Y,ff[0].transpose(),[xopt],'x1','x2','objective',pathSave+'/obj.pdf',50)
    plotContour(X,Y,ff[1].transpose(),[xopt],'x1','x2','constraint',pathSave+'/con.pdf',50)

elif ( execMode == 'derivative'):
    print('*'*80+'\n** df/dx with method [M1,...Mk] for (lc,step) **\n'+'*'*80)
    sensMeth = np.array(sensMeth)
    Nlc = len(lc);Nstep = len(step);nbMeth = len(sensMeth);n = len(x)
    f = np.zeros(Nlc);dfdx = np.zeros([Nlc,Nstep,nbMeth,n]);relErr = np.copy(dfdx)
    
    # Compute df/dx
    for j in range(Nlc): # loop over mesh quality (lc)
        op.setScalarParameter('Geo/Mesh density',lc[j])
        op.setDesignVariables(x)
        op.MeshCao(op.parameters)
        mm = parameters['file']+'.msh'
        os.system('cp ' + mm + ' ' + pathSave + '/'+ mm + str(j))
        
        for k in range(Nstep): # loop over perturbation step (step)
            op.parameters['step'] = step[k]

            for l in range(nbMeth): # loop over sens. analysis methods
                # compute f(x)
                resAnalysis = op.Analysis(x,op.parameters)
                f[j] = np.copy(resAnalysis['fj'][0])

                # compute df/dx(x)
                op.opt['df'] = [sensMeth[l]]
                t0 = time.time()
                resSens = op.Sensitivity(x, resAnalysis['fj'], op.parameters)
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
#    plotMultiVec(np.arange(len(lc)),dfdx[:,0,:,0],pathSave+'/dfdx_lc.pdf',
#        labelx='Mesh Density',labely=sensMeth,log=0,titleName='Derivative')
#    plotMultiVec(np.arange(len(lc)),np.abs(relErr[:,0,1:,0]),pathSave+'/rE_lc.pdf', labelx='Mesh Quality',labely=sensMeth[1:],log=0,titleName='RelErr(.,FD)')
    plotMultiVec(step,dfdx[0,:,:,0],pathSave+'/dfdx_step.pdf',
        labelx='perturbation step',labely=sensMeth,log=1,titleName='Derivative')
#    plotMultiVec(step,np.abs(relErr[:,0,1:,0]),pathSave+'/relErr_step.pdf',
#        labelx='perturbation step', labely=sensMeth[1:])

