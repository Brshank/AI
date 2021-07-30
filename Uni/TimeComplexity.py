import numpy as np
import math 

def TimeComplexity(x,algor):
    if x == 'second':
        time=10**6
    elif x =='minute':
        time=60*(10**6)
    elif x =='hour':
        time=60*60*(10**6)
    elif x =='day':
        time=24*60*60*(10**6)
    elif x =='month':
        time=30*24*60*60*(10**6)
    elif x =='year':
        time=12*30*24*60*60*(10**6)
    elif x =='century':
        time=100*12*30*24*60*60*(10**6)
    else:
        print('Wrong input fot time Factor')
    
    if algor == 'logn':
        print(format(np.exp(time),'E'))
    elif algor == 'sqrootn':
        print(format(time**2,'E'))
    elif algor =='n':
        print(format(time,'E'))
    elif algor =='nlogn':
        n=1
        while n*np.log2(n) < time:
            n+=100
        print(format((n-100),'E'))
    elif algor =='n^2':
        print(format(np.sqrt(time),'E'))
    elif algor =='n^3':
        print(format(np.cbrt(time),'E'))
    elif algor =='2^n':
        print(format(np.log2(time),'E'))
    elif algor =='n!':
        # print(format(np.math.factorial(time),'E'))
        print(np.math.factorial(time))
    else:
        print('Wrong algo input')


x=input("enter second, minute, hour, day, month, year, century :::=")
x=x.lower()
algor=input("Enter logn, sqrootn, n, nlogn, n^2, n^3, 2^n, n!::=")
TimeComplexity(x,algor)