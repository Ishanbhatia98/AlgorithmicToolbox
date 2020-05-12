n = int(input())
#mi, ma = 10**9, 0
l = []
for _ in range(n):
    a, b = map(int, input().split())
    #mi = min(mi, a)
    #ma = max(ma, b)
    l.append((a, b))

l = sorted(l, key=lambda x: x[1])
'''
d = dict()
for i in range(mi, ma+1):

    if len(d.keys()) == n:
        print(len(set(d.values())))
        print(*[v for v in set(d.values())])
        break

    for a, b in l:
        if i >= a and i <= b:
            d[(a, b)] = i

print(len(set(d.values())))
print(*[v for v in set(d.values())])
'''

points = []
point = l[0][1]
points.append(point)
for i in range(n):
    if point < l[i][0] or point > l[i][1]:
        point = l[i][1]
        points.append(point)
print(len(points))
print(*[i for i in points])
