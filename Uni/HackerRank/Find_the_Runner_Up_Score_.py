n = int(input())
a = sorted(map(int, input().split()), reverse=True)
print(a)
print(a[a.count(a[0])])