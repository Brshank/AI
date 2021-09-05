n=int(input())
for i in range(n):
    name = input()
    score = float(input())
    for i in range(n):
        Combined=[name[i],score[i] ]
for i in range(n):
    print(Combined,end="")
