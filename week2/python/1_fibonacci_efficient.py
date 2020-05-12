def f(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        previous, current = 0, 1
        for i in range(x-1):
            previous, current = current, previous+current
        return current


n = int(input())
print(f(n))
