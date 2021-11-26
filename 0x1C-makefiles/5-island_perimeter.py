#!/usr/bin/python3


'''Define perimeter'''


def island_perimeter(grid):
    '''Calculate perimeter'''
    x = len(grid)
    y = len(grid[0])
    sum = 0
    max = 0
    for i in range(x):
        sum = 0
        for j in range(y):
            sum += grid[i][j]
        if sum >= max:
            max = sum
    l1 = max
    max = 0
    for i in range(y):
        sum = 0
        for j in range(x):
            sum += grid[j][i]
        if sum >= max:
            max = sum
    l2 = max
    return (l1 + l2) * 2
