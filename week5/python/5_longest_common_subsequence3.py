# not working as expected
l = int(input())
s1 = list(map(int, input().split()))
m = int(input())
s2 = list(map(int, input().split()))
n = int(input())
s3 = list(map(int, input().split()))

d = [[[0 for _ in range(m+1)] for _ in range(n+1)] for _ in range(l+1)]

for i in range(l+1):
    for j in range(n+1):
        for k in range(m+1):
            if i == 0 or j == 0 or k == 0:
                d[i][j][k] = 0

            if s1[i-1] == s2[k-1] == s3[j-1]:
                d[i][j][k] = 1 + d[i-1][j-1][k-1]
            else:
                d[i][j][k] = max(d[i][j-1][k], d[i-1][j][k], d[i][j][k-1])
print(d[l][n][m])
