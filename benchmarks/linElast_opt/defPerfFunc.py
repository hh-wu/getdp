""" 
    Author: Erin Kuci
    Performance functions of the optimization problem.
"""
from tool import *

def Compliance(x,data,parameters):
    print('compliance:{}'.format(np.sum(np.array(data['ComplianceElm']).flatten())))
    return np.sum(np.array(data['ComplianceElm']).flatten())

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

def Volume(x,data,parameters):
    #print('ext volume')
    # TODO: add vector values in data too in computePhysicalQuantitySerial !!!!
    n = len(x)
    ve = data['VolumeElemDomain'][0]
    #print('len x:{0} len ve:{1}'.format(n,len(ve)))
    return np.sum(ve*x)


