# Failing test Cases!
from collections import defaultdict as dd


def naivecheck(l, v):
    d = dd(int)
    for i in v:
        for x, y in l:
            if i in range(x, y+1):
                d[i] += 1
            else:
                break
    return d


def check(l, v):
    n = len(l)
    left = ['l'] * n
    right = ['r'] * n
    point = ['p'] * len(v)

    a, b = zip(*l)
    a, b = list(a), list(b)

    grand = []
    grand += list(zip(a, left))
    grand += list(zip(b, right))
    grand += list(zip(v, point))

    grand = sorted(grand, key=lambda x: x[0])

    count = 0
    d = dd(int)

    for p, k in grand:
        if k == 'l':
            count += 1
        elif k == 'r':
            count -= 1
        else:
            if p not in d.keys():
                d[p] = count

    return d


s, p = map(int, input().split())
l = []
for _ in range(s):
    l.append(tuple(map(int, input().split())))

l = sorted(l, key=lambda x: x[1])

v = list(map(int, input().split()))


d = check(l, v)
print(*[d[i] for i in v])
