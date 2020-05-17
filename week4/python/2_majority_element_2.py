from collections import defaultdict as dd


def count(s):
    n = len(s)
    d = dd(int)
    for i in l:
        d[i] += 1
    for i in d.values():
        if i > n//2:
            return 1
    return 0


n = int(input())
l = list(map(int, input().split()))

print(count(l))
