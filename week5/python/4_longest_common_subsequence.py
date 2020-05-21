# Longest common subsequence problem is the optimal alingment problem!!!

n = int(input())
seq1 = list(map(int, input().split()))
m = int(input())
seq2 = list(map(int, input().split()))


d = [[10**4 for _ in range(len(seq2)+1)] for _ in range(len(seq1)+1)]


for i in range(n+1):

    d[i][0] = 0

for j in range(m+1):

    d[0][j] = 0


for i in range(1, n+1):
    for j in range(1, m + 1):

        if seq1[i-1] == seq2[j-1]:
            d[i][j] = d[i-1][j-1] + 1
        else:
            d[i][j] = max(d[i-1][j], d[i][j-1], d[i-1][j-1])


print(d[n][m])
