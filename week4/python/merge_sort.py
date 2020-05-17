# Not working as Expected!
def ms(a):
    if len(a) > 1:
        m = len(a)//2
        l = a[:m]
        r = a[(m+1):]

        l = ms(l)
        r = ms(r)

        a.clear()
        while len(l) > 0 and len(r) > 0:
            if l[0] <= r[0]:
                a.append(l[0])

                l.pop(0)
            else:
                a.append(r[0])

                r.pop(0)
        for i in l:
            a.append(i)
        for i in r:
            a.append(i)
    return a


n = int(input())
a = list(map(int, input().split()))
a = ms(a)
print(a)
