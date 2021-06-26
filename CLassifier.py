ctr=0
j=0
i=0
x=0
z=0
y=0
ctr1=1
k=0
with open("bin.txt", "r") as f:
    findrun=f.read()  
run=int(input("how many runs for 1's do u want="))
x=int(len(findrun)-(run-1))
print('j','|','k','|','fdrn[k]','|','ctr1')



for i in range(x):
    for  j in range(run):
        if findrun[k]=='1':
            ctr1+=1
        k+=1
        print(j,'|',k,'|',findrun[k],'|',ctr1)
    k=0
    if ctr1 == run:
        ctr+=1 
    j+=1
    ctr1=1      



if (ctr/(x)*100) >=20:
    print('YES, it has ctrs gr8r than 20%')
print('number of counters of run for=',ctr)
print('Ctr1=',ctr1)