from random import choice


n = int(input())
l = list(map(int, input().split()))
print(*sorted(l))
