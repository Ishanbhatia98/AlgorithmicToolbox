n, capacity = map(int, input().split())
l = []
for _ in range(n):
    l.append(tuple(map(int, input().split())))



#using // instead of / makes aa big difference!!

l = sorted(l, reverse = True, key = lambda x:x[0]/x[1])
weight, value = 0, 0
for i in range(n):
    v, w = l[i]
    if weight+w <= capacity:
        weight+=w
        value+=v
    else:
        r = capacity-weight
        value+=v*r/w
        break

print(round(value, 4))
        
