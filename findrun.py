# with open("bin.txt", "r") as f:
#     findrun=f.read()
# print(findrun)
# ctr=0
# i=0
# int(i)
# for i in findrun:
#     if "1"==findrun[i]:
#         if "1"==findrun[i+1]:
#             if "1"==findrun[i+2]:
#                 ctr+=1
#     else:continue
#     i+=1
# print(ctr)
ctr=0
j=0
run=input("how many runs for 1's do u want=")
print(run)
for i=(len(findrun)-run):
    while j<(run-1):
        if findrun[j]==1:
        ctr+=1
    j+=1
    