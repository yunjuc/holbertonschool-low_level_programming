#!/usr/bin/python3
'''Island perimeter module'''


def island_perimeter(grid):
    '''Island perimeter'''
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                p += 4
                if i > 0 and grid[i-1][j] == 1:
                    p -= 2
                if j > 0 and grid[i][j-1] == 1:
                    p -= 2
    return p
