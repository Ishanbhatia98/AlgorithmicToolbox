seq1 = input()
seq2 = input()

# correct way to define 2-d arrays
# rows = len(seq1)+1,columns = len(seq2)+1
d = [[10**4 for _ in range(len(seq2)+1)] for _ in range(len(seq1)+1)]

# wrong way to define 2d array
# d = [[10**4]*n]*m -> Forms copies of first list!!

for i in range(len(seq1)+1):

    d[i][0] = i

for j in range(len(seq2)+1):

    d[0][j] = j


for i in range(1, len(seq1)+1):
    for j in range(1, len(seq2)+1):

        if seq1[i-1] == seq2[j-1]:
            d[i][j] = d[i-1][j-1]
        else:
            d[i][j] = 1 + min(d[i-1][j], d[i][j-1], d[i-1][j-1])


print(d[len(seq1)][len(seq2)])
