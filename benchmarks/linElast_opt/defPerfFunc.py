""" 
    Author: Erin Kuci
    Performance functions of the optimization problem.
"""
from tool import *

def Compliance(x,data,parameters):
    return np.sum(np.array(data['ComplianceElm']).flatten())

def vonMises(x,data,parameters):
    #print('StressVM:{}'.format(np.sum(np.array(data['StressVM']).flatten())))
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
    # TODO: add vector values in data too in computePhysicalQuantitySerial !!!!
    #ve = data['ElementVolume'][0]
    #return np.sum(ve*x)
#    print x
#    print len(x)
#    print("volume:{}".format(np.sum(x)))
    return np.sum(x)

def MassTO(x,data,parameters):
    me = data['ElementMass'][0]
    return np.sum(me*x)

def Mass(x,data,parameters):
    return np.sum(np.array(data['Mass']).flatten())



