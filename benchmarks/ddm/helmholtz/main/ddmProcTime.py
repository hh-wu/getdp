#!/usr/bin/python
from sys import argv
from time import localtime, strftime

with open('time_%s_%s.txt'%(argv[1], argv[2]),'a') as myfile:
    myfile.write(strftime("%H.%M.%S\n",localtime()))
