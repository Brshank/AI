ctr=0
j=0
i=0
x=0
z=0
y=0
with open("bin.txt", "r") as f:
    findrun=f.read()
    
run=int(input("how many runs for 1's do u want="))
x=int(len(findrun)-run)

for z in range(i,x):
    for  y in range(j,(run-1)):
        if findrun[j]=='1':
            ctr+=1
           
print('number of counters of run for=',ctr)
