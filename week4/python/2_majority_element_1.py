from collections import Counter

n = int(input())
l = list(map(int, input().split()))

c = Counter(l)
print(1 if any(i > n//2 for i in c.values()) else 0)
