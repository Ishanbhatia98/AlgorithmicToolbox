def fibonacci(n, m):
    previous, current = 0, 1
    for i in range(m**2):
        previous, current = current, (previous+current) % m

        if previous == 0 and current == 1:
            break

    psiano = i+1
    print(psiano)
    n %= psiano
    previous, current = 0, 1
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        for i in range(n-1):
            previous, current = current, previous+current

        return current % m


n, m = map(int, input().split())
print(fibonacci(n, m))
