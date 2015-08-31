""" 
    Author: Erin Kuci
    Performance functions of the optimization problem.

"""
from tool import *
from defPerfFuncSens import *

def opt_sens(x,data,parameters):
    vm = data['ComplianceElm'][0]
    input = {
        'f':[vm],
        'f_name':['Compliance'],
        'df':['FiniteDifference'],
        'fmax':[1.0],
        'sign':[-1.0],
    }
    return input

def opt_eig_sens(x,data,parameters):
    nbEig = 1
    w2 = data['eig2'][0]
    #print('eig2-before:{}'.format(w2)) #fixme
    nn = len(w2)
    w2 = w2[nn-nbEig:nn]
    print('l_eig2:{}\neig2:{}'.format(nn,w2)) #fixme
    input = {
        'f':[w2]*len(parameters['sensitivity']),
        'df':['FiniteDifference'],
        'fmax':[0],
        'f_name':['eig_noNorm'],
        'sign':[1.0]
    }
    return input

def opt_eig(x,data,parameters):
    nbEig = 10
    w2 = data['eig2'][0]
    nn = len(w2)
    w2 = w2[nn-nbEig:nn]
    #print('l_eig2:{}\neig2:{}'.format(nn,eig2)) #fixme
    input = {
        'f':w2,
        'df':['AnalyticNotEplicit']*nbEig,#'AnalyticNotEplicit','FiniteDifference'
        'fmax':[0]*nbEig,
        'f_name':['eig_noNorm']*nbEig,
        'sign':[1.0]*nbEig
    }
    return input

def opt_vm2(x,data,parameters):
    input = {
        'f':[16.0-data['Mass'][0],data['StressVM'][0]],
        'df':['AnalyticNotEplicit','AdjointLie'],
        'fmax':[16.0,data['StressVM'][0]*1.1],
        'f_name':['Mass2','vonMises'],
        'sign':[-1.0,1.0]
    }
    return input

def opt_pnorm(x,data,parameters):
    input = {
        'f':[data['Mass'][0],data['StressVM_pNorm'][0]],
        'df':['FiniteDifference']*2,#['AnalyticNotEplicit','AdjointLie']
        'fmax':[data['Mass'][0],data['StressVM_pNorm'][0]*1.05],
        'f_name':['Mass2','vonMises_Pnorm'],
        'sign':[1.0,1.0]
    }
    return input

def opt_vonMises_elem(x,data,parameters):
    vm = data['VM'][0]
    input = {
        'f':[16.0-data['Mass'][0]]+vm,
        'df':['FiniteDifference']*(len(vm)+1),
        'fmax':[16.0]+[2.8e8]*len(vm),
        'sign':[-1.0]+[1.0]*len(vm)
    }
    return input

def Compliance_Volume(x,data,parameters):
    input = {
        'f':[data['ComplianceElm'][0], np.sum(x)],
        'df':['AdjointFixedDom',volumeSens],#provide the name of a function!!
        'fmax':[0, np.sum(x)],
        'f_name':['Compliance','Volume'],#see .pro
        'sign':[1.0]*2,
        'filter':[2,0]
    }
    return input

def Compliance(x,data,parameters):
    return [np.sum(np.array(data['ComplianceElm']).flatten())]

def vonMises(x,data,parameters):
    r = {'f':[np.sum(np.array(data['StressVM']).flatten())],
         'df':['FiniteDifference'],'fmax':[2.5e16]}
    return r

def vonMises_Pnorm(x,data,parameters):
    r = {   'f':[np.sum(np.array(data['StressVM_pNorm']).flatten())],
            'df':['FiniteDifference'],'fmax':[2.8e9]}
    return r

def vonMises_elem(x,data,parameters):
    vm = data['VM'][0]
    r = {'f':vm,'df':['FiniteDifference']*len(vm),'fmax':[2.8e8]*len(vm)}
    return r

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

def Volume(x,data,parameters):
    # TODO: add vector values in data too in computePhysicalQuantitySerial !!!!
    #ve = data['ElementVolume'][0]
    #return np.sum(ve*x)
#    print x
#    print len(x)
#    print("volume:{}".format(np.sum(x)))
    return [np.sum(x)]

def MassTO(x,data,parameters):
    me = data['ElementMass'][0]
    return [np.sum(me*x)]

def Mass(x,data,parameters):
    r = {'f':[np.sum(np.array(data['Mass']).flatten())],
         'df':['FiniteDifference'],'fmax':[16.0]}
    return r

def Mass2(x,data,parameters):
    # mass of the hole !!!
    r = {'f':[16.0-np.sum(np.array(data['Mass']).flatten())],
         'df':['FiniteDifference'],'fmax':[16.0]}
    return  r



