from math import ceil


def bs(a, l, h, k):

    if h < l:
        return -1

    m = ceil(l + (h-l)/2)

    if k == a[m]:
        return m
    elif k < a[m]:
        return bs(a, l, m-1, k)
    else:
        return bs(a, m+1, h, k)


s = list(map(int, input().split()))
s = s[1:]

q = list(map(int, input().split()))
q = q[1:]

print(*[bs(s, 0, len(s)-1, i) for i in q])
