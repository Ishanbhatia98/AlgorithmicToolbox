def count(l, x, c):
    if x+m >= d:
        return c
    for i in range(n-1, -1, -1):
        if x+m >= l[i]:
            return count(l, l[i], c+1)


def check(l):
    for i in range(n):
        if l[i+1]-l[i] > m:
            return False
    return True


d = int(input())
m = int(input())
n = int(input())
l = list(map(int, input().split()))
l.append(d)

if check(l):
    print(count(l, 0, 0))
else:
    print(-1)

#print(count(l, 0, 0))
