
print('Please Give the Range==(Start,End)')
Start=int(input('Start=='))
End=int(input('End=='))

print('What lies inside this Range Given Above:=')
x1=int(input())

print('Please Give the Final Range ==(Start,End)')
Start2=int(input('Start=='))
End2=int(input('End=='))


x=(x1-Start)/(End-Start)

prediction=(x*(End2-Start2)) +Start2


print('So the Predicted number that will lie in the range is=='+prediction)
