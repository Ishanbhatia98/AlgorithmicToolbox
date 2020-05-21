def primitive_calculator(number):
    min_steps = [None]*(number+1)
    predecessor = [None]*(number+1)

    min_steps[1] = 0

    for i in range(2, number+1):
        min_steps[i] = min_steps[i-1]+1
        predecessor[i] = i-1

        if(i % 3 == 0):
            if(min_steps[i//3] < min_steps[i]):
                min_steps[i] = min_steps[i//3] + 1
                predecessor[i] = i//3
        if(i % 2 == 0):
            if(min_steps[i//2] < min_steps[i]):
                min_steps[i] = min_steps[i//2] + 1
                predecessor[i] = i//2

    print(min_steps[number])
    i = number
    sequence = []
    while(i != 1):
        sequence.append(i)
        i = predecessor[i]

    sequence.append(1)
    print(*sequence[::-1])


number = int(input())
primitive_calculator(number)
