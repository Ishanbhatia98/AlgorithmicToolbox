n = int(input())
l = list(map(int, input().split()))
'''
m = 0
for i in range(0, len(l)):
    for j in range(i+1, len(l)):
        m = max(l[i]*l[j], m)
'''
l = sorted(l)
a, b = l[-2:]
print(a*b)
