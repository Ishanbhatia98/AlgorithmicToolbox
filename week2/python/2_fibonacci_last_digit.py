
n = int(input())
l = [0,1]

for i in range(n-1):
    last = len(l)-1
    slast = len(l)-2
    l.append((l[last]+l[slast])%10)

print(l[n])

