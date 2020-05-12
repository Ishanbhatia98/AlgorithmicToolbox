
def fibonacci(n, m=10):
    previous, current = 0, 1
    s = [0, 1]
    for i in range(m**2):
        previous, current = current, (previous+current) % m
        s.append((s[len(s)-1]+current) % m)
        if previous == 0 and current == 1:
            break

    psiano = i+1
    n %= psiano
    previous, current = 0, 1
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        sums = 1
        for i in range(n-1):
            previous, current = current, previous+current
            sums += current
        return sums % m


n = int(input())
print(fibonacci(n))
