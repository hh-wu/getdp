""" 
    Author: Erin Kuci
    Common performance functions
"""
from tool import *
from defPerfFuncSens import *

def opt_torqueVarianceConstr(x,data,parameters):
    torque = np.array(data['Torque'])
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque/Tnom-1.0)**2.0)
    dummyConstr = np.sum(x) #x[0]
    dummyConstrMax = 1.0+np.sum(parameters['xmax']) #parameters['xmax'][0]
    print('torque:{}'.format(torque))
    print('t_nom:{}'.format(Tnom))
    print('varTorque:{} - mean:{}'.format(var,np.mean(torque)))
    input = {
        'f':[var, dummyConstr],
        'df':['AdjointLie', dummy],#'AdjointLie','AdjointSemi'
        'fmax':[2.0, dummyConstrMax],
        'f_name':['TorqueVariance','dummy'],
        'sign':[1.0, 1.0]
    }
    return input

def opt_torqueVariance(x,data,parameters):
    torque = np.array(data['Torque'])
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque/Tnom-1.0)**2.0)
    mean = np.mean(torque)
    print('torque:{}'.format(torque))
    print('t_nom:{}'.format(Tnom))
    print('var Torque:{}'.format(var))
    print('mean Torque:{}'.format(mean))
    input = {
        'f':[var],
        'df':['FiniteDifference'],#'AdjointLie','AdjointSemi',
        'fmax':[16.0],
        'f_name':['TorqueVariance'],
        'sign':[1.0]
    }
    return input

def opt_torque_VarMean(x,data,parameters):
    torque = np.array(data['Torque']); nn = len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    print('torque:{}'.format(torque))
    print('t_nom:{}'.format(Tnom))
    print('{}'.format([var,mean]))
    print('mean(T): {} | mean( (T-T0)^2 ): {}'.format(mean,var))
    input = {
        'f':[var,mean],
        'df':['AdjointFixedDom']*2, #['AdjointLie']*2,
        'fmax':[var,Tnom],
        'f_name':['VarTorque','MeanTorque'],
        'sign':[1.0,-1.0],
        'filter':[]
    }
    return input

def opt_torque_VarMean_lsq(x,data,parameters):
    torque = np.array(data['Torque']);
    nn = parameters['defaultValue']['NbAngle'][1] #len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    #print('torque:{}'.format(torque))
    #print('t_nom:{}'.format(Tnom))
    print('mean(T): {} | mean( (T-T0)^2 ): {}'.format(mean,var))
    print('{}'.format([var,mean]))
    ff = [0.]*(2*nn+2)
    ff[0] = 0
    for k in range(1,len(torque)+1): ff[k] = torque[k-1];ff[k+nn] = torque[k-1]
    ff[-1] = mean # m = 2*p+q
    print('ff:{}'.format(ff))
    ffMax=[2];ffMax.extend([Tnom]*nn*2);ffMax.append(Tnom)
    #print ffMax
    f_name = ['none'];f_name.extend(['Torque']*2*nn)
    #f_name.extend(['TorqueP_'+str(k) for k in range(nn)])
    #f_name.extend(['TorqueN_'+str(k) for k in range(nn)])
    f_name.append('MeanTorque')
    sign = [1.0];sign.extend([1.0]*nn);sign.extend([-1.0]*nn);sign.append(-1.0)
    df_meth = [0];df_meth.extend([1.0]*nn);df_meth.extend([1.0]*nn);df_meth.append(2.0)
    #print sign
    df = [dummy0];df.extend(['DirectLie']*nn*2);df.append('DirectLie')
    print df
    
    input = {
        'f':ff,
        'df':df,
        'df_meth':df_meth,
        'fmax':ffMax,
        'f_name':f_name,
        'sign':sign
    }
    
    return input

def topopt_torque_VarMean_lsq(x,data,parameters):
    torque = np.array(data['Torque']); nn = len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    ve = data['ElementVolume'][0]
    vol = np.dot(x,ve)
    print('mean(T): {} | mean( (T-T0)^2 ): {} | vol: {}'.format(mean,var,vol))
    ff = [0.]*(2*nn+3)
    ff[0] = 0
    for k in range(1,len(torque)+1): ff[k] = torque[k-1];ff[k+nn] = torque[k-1]
    ff[2*nn+1] = mean;ff[-1] = vol
    print('ff:{}'.format(ff))
    ffMax=[2];ffMax.extend([Tnom]*nn*2);ffMax.append(Tnom)
    ffMax.append(0.00525563060743)
    #print ffMax
    f_name=['none'];f_name.extend(['Torque']*nn*2);f_name.extend(['MeanTorque'])
    f_name.extend(['Volume'])
    sign = [1.0];sign.extend([1.0]*nn);sign.extend([-1.0]*nn)
    sign.extend([-1.0]);sign.extend([1.0])
    #print sign
    df = [dummy0];df.extend(['AdjointFixedDom']*nn*2);
    df.append('AdjointFixedDom');df.append(volumeSens)
    #df.append(dummy)
    df_meth = [0];df_meth.extend([1.0]*nn);df_meth.extend([1.0]*nn);
    df_meth.append(2.0);df_meth.append(0.0)

    input = {
        'f':ff,
        'df':df,
        'df_meth':df_meth,
        'fmax':ffMax,
        'f_name':f_name,
        'sign':sign,
        'filter':[1]
    }
    
    return input

def opt_meanTorque_VarTorque(x,data,parameters):
    torque = np.array(data['Torque']); nn = len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    print torque
    print('mean(T): {} | mean( (T-T0)^2 ): {}'.format(mean,var))
    input = {
        'f':[mean,var],
        'df':['AdjointSemi']*2,
        'fmax':[16.0,49140.8077922*0.5],
        'f_name':['MeanTorque','VarTorque'],
        'sign':[-1.0,1.0]
    }
    return input

def topopt_torque_VarMean(x,data,parameters):
    torque = np.array(data['Torque']); nn = len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    vol = np.sum(x)
    #print('torque:{}'.format(torque))
    #print('t_nom:{}'.format(Tnom))
    print('mean(T): {} | mean( (T-T0)^2 ): {} | vol:{}'.format(mean,var,vol))
    input = {
        'f':[var,mean,vol],
        'df':['AdjointFixedDom','AdjointFixedDom',dummy],
        'df_meth':[2,2,0],
        'fmax':[16.0,Tnom,16688.0],
        'f_name':['VarTorque','MeanTorque','Volume'],
        'sign':[1.0,-1.0,1.0],
        'filter':[1]
    }
    return input

def topopt_torque_Var(x,data,parameters):
    torque = np.array(data['Torque']); nn = len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    vol = np.sum(x)
    #print('torque:{}'.format(torque))
    #print('t_nom:{}'.format(Tnom))
    print('mean(T): {} | mean( (T-T0)^2 ): {} | vol:{}'.format(mean,var,vol))
    input = {
        'f':[var,vol],
        'df':['AdjointFixedDom',dummy],
        'df_meth':[2,0],
        'fmax':[16.0,16688.0],
        'f_name':['VarTorque','Volume'],
        'sign':[1.0,1.0],
        'filter':[]
    }
    return input

def topopt_BradVol(x,data,parameters):
    BradErrorInt = data['BradErrorInt'][0]
    vol = np.sum(x)
    print('Int(Br-Btarget): {} | vol:{}'.format(BradErrorInt,vol))
    input = {
        'f':[BradErrorInt,vol],
        'df':['AdjointFixedDom',dummy],
        'df_meth':[2,0],
        'fmax':[16.0,6317.5],
        'f_name':['BradErrorInt','Volume'],
        'sign':[1.0,1.0],
        'filter':[]
    }
    return input

def topopt_torqueVariance(x,data,parameters):
    torque = np.array(data['Torque'])
    Tnom = parameters['defaultValue']['Tnom'][1]
    var = np.sum((torque/Tnom-1.0)**2.0)
    mean = np.mean(torque)
    vol = np.sum(x)
    print('torque:{}'.format(torque))
    print('mean(T): {} | mean( (T-T0)^2 ): {} | vol:{}'.format(mean,var,vol))
    input = {
        'f':[var,vol],
        'df':['AdjointFixedDom',dummy],#'AdjointLie','AdjointSemi',
        'fmax':[16.0,16688.0],
        'f_name':['TorqueVariance','Volume'],
        'sign':[1.0,1.0],
        'filter':[1]
    }
    return input

def opt_Compliance_Volume(x,data,parameters):
    torque = np.array(data['Torque']); nn = len(torque)
    Tnom = parameters['defaultValue']['Tnom'][1]
    ve = data['ElementVolume'][0]
    energy = data['ComplianceElm'][0]
    var = np.sum((torque - Tnom)**2.0)/nn
    mean = np.mean(torque)
    vol = np.sum(x)
    print('mean(T):{} | mean( (T-T0)^2 ): {} | vol:{} | compl.:{}'.\
          format(mean,var,vol,energy))
    input = {
        'f':[energy,vol],
        'df':['AdjointFixedDom',dummy],
        'fmax':[0,9025.0],
        'f_name':['Compliance','Volume'],
        'sign':[-1.0,1.0],
        'filter':[]
    }
    return input

def Compliance(x,data,parameters):
    comp = data['ComplianceElm']
    print('compliance:{}'.format(comp))
    print('sum compliance:{}'.format(np.sum(comp)))
    input = {
        'f':[np.sum(comp)],
        'df':['AdjointFixedDom'],
        'df_meth':[0],
        'fmax':[16.0],
        'f_name':['Compliance'],
        'sign':[-1.0]
    }
    return input

def Torque(x,data,parameters):
    torque = data['Torque']
    print('torque:{}'.format(torque))
    print('sum torque:{}'.format(np.sum(torque)))
    input = {
        'f':[np.sum(torque)],
        'df':['AdjointFixedDom'],
        'df_meth':[0],
        'fmax':[16.0],
        'f_name':['Torque'],
        'sign':[-1.0]
    }
    return input

def TorqueVar(x,data,parameters):
    torque = data['Torque']
    Tnom = parameters['defaultValue']['Tnom'][1]
    sumTorque = 0.0
    for k in range(len(torque)):
        sumTorque += (torque[k]/Tnom - 1.0)**2.0
    input = {
        'f':[sumTorque],
        'df':['AdjointFixedDom'],
        'fmax':[16.0],
        'f_name':['TorqueVariance'],
        'sign':[-1.0]
    }
    return input

def TorqueMean(x,data,parameters):
    torque = data['Torque']
    mean_torque = np.mean(torque)
    input = {
        'f':[mean_torque],
        'df':['AdjointFixedDom'],
        'fmax':[16.0],
        'f_name':['MeanTorque'],
        'sign':[-1.0]
    }
    return input

def TorqueVar0(x,data,parameters):
    torque = data['Torque']
    Tnom = parameters['defaultValue']['Tnom'][1]
    varTorque = 0.0
    for tt in torque:
        varTorque += (tt - Tnom)**2.0
    varTorque /= len(torque)
    print torque
    print varTorque
    print Tnom
    input = {
        'f':[varTorque],
        'df':['AdjointFixedDom'],
        'fmax':[16.0],
        'f_name':['VarTorque'],
        'sign':[-1.0]
    }
    return input

# ************************************************************************
# ***** create the design functions                                  *****
# ************************************************************************
# -- convex problem --
def convex_0(x,data,parameters):
    return 1.0/x[0] + 1.0/x[1]
def convex_1(x,data,parameters):#constr 1
    return x[0] + 2.0*x[1]
def convex_2(x,data,parameters):#constr 2
    return 2.0*x[0] + x[1]

# -- quadratic problem --
def quadratic_0(x,data,parameters):
    return x[0]**2.0 + (x[1]-6.0)**2.0
def quadratic_1(x,data,parameters):
    return x[0]**2.0 + x[1]**2.0
def quadratic_2(x,data,parameters):
    return (x[0]-5.0)**2.0 + (x[1]-5.0)**2.0
def quadratic_3(x,data,parameters):
    return x[0] - x[1]

# -- quadratic Svanberg problem --
def quadraticSvan_0(x,data,parameters):
    return x[0]**2.0 + x[1]**2.0 + x[2]**2.0
def quadraticSvan_1(x,data,parameters):
    return (x[0]-5.0)**2.0 + (x[1]-2.0)**2.0 + (x[2]-1.0)**2.0
def quadraticSvan_2(x,data,parameters):
    return (x[0]-3.0)**2.0 + (x[1]-4.0)**2.0 + (x[2]-3.0)**2.0

# -- quadratic qp:cvxopt problem --
def quadraticCvx_0(x,data,parameters):
    return 0.5*x[0]**2.0 + 3.0*x[0] + 4.0*x[1]
def quadraticCvx_1(x,data,parameters):
    return -x[0] - 3.0*x[1]
def quadraticCvx_2(x,data,parameters):
    return 2.0*x[0] + 5.0*x[1]
def quadraticCvx_3(x,data,parameters):
    return 3.0*x[0] + 4.0*x[1]

# -- cantilever beam --
def cantilever_0(x,data,parameters):
    return 0.0624*np.sum(x)
def cantilever_1(x,data,parameters):
    aa = 61.0/(x[0]**3.0)+37.0/(x[1]**3.0)+19.0/(x[2]**3.0)+\
         7.0/(x[3]**3.0)+1.0/(x[4]**3.0)
    return aa

# -- rosenbrock --
def rosenbrock_0(x,data,parameters):
    return (1.0-x[0])**2.0 + 100.0*(x[1]-x[0]**2.0)**2.0

def BradialErrorInt(x,data,parameters):
    # Sum_theta( Integral(B-radial-air-gap - B-target)^2 )
    return np.sum(np.array(data['BradialErrorInt']).flatten())

def IronLoss(x,data,parameters):
    return np.sum(np.array(data['IronLoss']).flatten())

def TorqueRipple(x,data,parameters):
    # Sum_theta( Integral(B-radial-air-gap - B-target)^2 )
    torque = np.array(data['Torque']).flatten()
    return np.max(torque) - np.min(torque)

#def Torque(x,data,parameters):
#    torque = np.array(data['Torque']).flatten()
#    return torque


def StressVM(x,data,parameters):
    print('StressVM:{}'.format(np.sum(np.array(data['StressVM']).flatten())))
    return np.sum(np.array(data['StressVM']).flatten())

def EigFreqSquare_1(x,data,parameters):
    print('data[EigOmega_re]:{}'.format(data['EigOmega_re']))
    #print('data[EigOmega_im]:{}'.format(data['EigOmega_im']))
    aa = data['EigOmega_re'][3]**2.0 + data['EigOmega_im'][3]**2.0
    #aa = data['EigOmega_re'][3]**2.0
    return aa

def EigFreqSquare_2(x,data,parameters):
    aa = data['EigOmega_re'][4]**2.0 + data['EigOmega_im'][4]**2.0
    return aa

def EigFreqSquare_3(x,data,parameters):
    aa = data['EigOmega_re'][5]**2.0 + data['EigOmega_im'][5]**2.0
    return aa

def EigFreqSquare_4(x,data,parameters):
    aa = data['EigOmega_re'][6]**2.0 + data['EigOmega_im'][6]**2.0
    return aa

def EigFreqSquare_5(x,data,parameters):
    aa = data['EigOmega_re'][7]**2.0 + data['EigOmega_im'][7]**2.0
    return aa

def EigFreqSquare_6(x,data,parameters):
    aa = data['EigOmega_re'][8]**2.0 + data['EigOmega_im'][8]**2.0
    return aa

def MeanTorque(x,data,parameters):
    return np.mean(np.array(data['Torque']).flatten())

def MeanTorqueConstr(x,data,parameters):
    #mean torque/TorqueNominal - 1.0
    torque = np.array(data['Torque']).flatten()
    return np.mean(torque)/parameters['TorqueNominal'] - 1.0

def MeanUnconstrained(x,data,parameters):
    return 0.0

def Volume(x,data,parameters):
    #print('ext volume')
    # TODO: add vector values in data too in computePhysicalQuantitySerial !!!!
    n = len(x)
    ve = data['VolumeElemDomain'][0]
    #print('len x:{0} len ve:{1}'.format(n,len(ve)))
    return np.sum(ve*x)

def VolumeDomShape(x,data,parameters):
    #print('vol dom shape:{}'.format(data['DomainVol'][0]))
    return data['DomainVol'][0]

def VolumeDomShapeMax(x,data,parameters):
    return parameters['VolFrac']*data['DomainVol'][0]

