#Not working as expected
from random import choice


def qs(a, l, r):
    if l < r:
        p = partition(a, l, r)

        qs(a, l, p-1)
        qs(a, p+1, r)


def partition(a, l, r):
    i = l-1
    #m = choice(range(l, r))
    pivot = a[r]

    for j in range(l, r):
        if a[j] <= pivot:
            i += 1
            a[i], a[j] = a[j], a[i]
    a[i+1], a[r] = a[r], a[i+1]
    return i+1


n = int(input())
a = list(map(int, input().split()))
qs(a, 0, len(a)-1)
print(*a)
