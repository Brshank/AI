x = int(input())
y = int(input())
z = int(input())
n = int(input())

i=[x for x in range(0,x+1)]
j=[y for y in range(0,y+1)]
k=[z for z in range(0,z+1)]

Combinations=([[x,y,z]for x in i for y in j for z in k if x+y+z!=n])
print(Combinations)