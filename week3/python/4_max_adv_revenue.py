n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a = sorted(a)
b = sorted(b)
c = [a[i]*b[i] for i in range(n)]
print(sum(c))
