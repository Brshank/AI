a=0
b=0
ctr1=1
ctr=0

# **********Read Multiple files with txt *ext* from a dir:
import os
path=input("Enter Folder Path=")
os.chdir(path)
def read_text_file(file_path):
    with open(file_path,'r') as f:
        findrun=f.read()
        

for file in os.listdir():
    if file.endswith(".txt"):
        file_path = f"{path}\{file}"
        read_text_file(file_path)

#* for opening particular folder

# with open("bin.txt", "r") as f:
#     findrun=f.read()  
run=int(input("how many runs for 1's do u want="))
x=int(len(findrun)-(run-1))

def findrun(run,dindrun)
#******LOGIC STARTS*********

for a in range(x+1):
    for b in range(run):
        if findrun[b] != '1':
           continue
        else:
            ctr1+=1
            if ctr1 == run:
                ctr+=1
                ctr1=0
                continue
    
#************* Logic Ends
    
#***** to check if findrun is above20 perc:
if (ctr/(x)*100) >=20:
    print('YES, it has ctrs gr8r than 20%')

print('number of counters of run for=',ctr)
print('Ctr1=',ctr1)





