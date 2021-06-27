k=0
a=0
b=0
ctr1=0
ctr=0

#**********Read Multiple files with txt *ext* from a dir:
# import os
# path=input("Enter Folder Path=")
# os.chdir(path)
# def read_text_file(file_path):
#     with open(file_path,'r') as f:
#         findrun=f.read()
#         print(findrun)

# for file in os.listdir():
#     if file.endswith(".txt"):
#         file_path = f"{path}\{file}"
#         read_text_file(file_path)


#* for opening particular folder

with open("bin.txt", "r") as f:
    findrun=f.read()  

run=int(input("how many runs for 1's do u want="))
x=int(len(findrun)-(run-1))
print('x=',x)
print('run=',run)
#********* string to integer list *******

fd=list(findrun.split())
fd=[]
fd[:0]=findrun
fd=list(map(int,fd))
print(fd)
print(type(fd))
#******LOGIC STARTS*********


print('|\t','a','|\t','b','|','  k ','|',' fd[k]','|  ','ctr','|','ctr1','|\t')
print('-'*52)


for a in range(x+1):
    for b in range(run):
        print('|\t',a,'|\t',b,'|\t',k,'|\t',fd[k],'|\t',ctr,'|   ',ctr1,'|\t')
        if fd[k] == 1:
            ctr1+=1
            if ctr1 == run:
               ctr+=1
               ctr1=0
            else:
                ctr1=0
                continue
        

    if b==run-1:
        k+=1   
    #for b, k in zip(range(run), range(x)):
    #run reln
    # k=0
    
    
#************* Logic Ends
print('-'*52)    
#***** to check if findrun is above20 perc:
if (ctr/(x)*100) >=20:
    print('YES, it has ctrs gr8r than 20%')

print('number of counters of run for=',ctr)
print('Ctr1=',ctr1)
