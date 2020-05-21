n = int(input())

num = dict()
num[1] = [1]
for i in range(1, n+1):
    num1 = i+1
    num2 = i*2
    num3 = i*3
    '''
    print('num1', num1)
    print('num2', num2)
    print('num3', num3)
   '''

    if num1 not in num.keys():
        num[num1] = num[i] + [i+1]
    elif len(num[num1]) >= len(num[i] + [i+1]):
        num[num1] = num[i] + [i+1]

    if num2 not in num.keys():
        num[num2] = num[i] + [i*2]
    elif len(num[num2]) >= len(num[i] + [i*2]):
        num[num2] = num[i] + [i*2]

    if num3 not in num.keys():
        num[num3] = num[i] + [i*3]
    elif len(num[num3]) >= len(num[i] + [i*3]):
        num[num3] = num[i] + [i*3]

print(len(num[n])-1)
print(*num[n])
