n = int(input())
l = []
r = n
for i in range(1, n):
    if (r <= 2*i):
        l.append(r)
        break
    else:
        l.append(i)
        r -= i

if n == 1:
    print(1)
    print(1)
else:
    print(len(l))
    print(*l)
