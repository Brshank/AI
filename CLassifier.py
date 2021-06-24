ctr=0
j=0
i=0
x=0
with open("bin.txt", "r") as f:
    findrun=f.read()
run=int(input("how many runs for 1's do u want="))
print(run)
x=len(findrun)-run
while i < x:
    while j<(run-1):
        if findrun[j]==1:
            ctr+=1
    j+=1
    