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
    
    if algor == 'sqrootn':
        print(time**2)
    elif algor =='n':
        print(time)
    elif algor =='nlogn':
        n=1
        while n*np.log2(n) < time:
            n+=100
        print(n-100)
    elif algor =='n^2':
        print(np.sqrt(time))
    elif algor =='n^3':
        print(np.cbrt(time))
    elif algor =='2^n':
        print(np.log2(time))
    elif algor =='n!':
        print(np.math.factorial(time))
    else:
        print('Wrong algo input')


x=input("enter second,minute,hour,day,month,year,century:::=")
x=x.lower()
print(x)
algor=input("Enter logn, sqrootn, n, nlogn, n^2, n^3, 2^n, n!::=")
TimeComplexity(x,algor)