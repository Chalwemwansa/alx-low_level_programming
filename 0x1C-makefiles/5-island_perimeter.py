#!/usr/bin/python3
"""python3 -c 'print(__import__("my_module").my_function.__doc__)'
    function that computes the perimeter of an island
"""


def island_perimeter(grid):
    """the function computes the perimeter of an
        island which is a list of lists with a 1 as
        land as 0 as sea
    """
    if grid is None or len(grid) == 0 or len(grid[0]) == 0:
        return 0
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            sum = 0
            if grid[i][j] == 1:
                try:
                    tmp = grid[i + 1][j]
                    if tmp == 0:
                        sum += 1
                except IndexError:
                    sum += 1
                if i - 1 >= 0:
                    try:
                        tmp = grid[i - 1][j]
                        if tmp == 0:
                            sum += 1
                    except IndexError:
                        sum += 1
                if j - 1 >= 0:
                    try:
                        tmp = grid[i][j - 1]
                        if tmp == 0:
                            sum += 1
                    except IndexError:
                        sum += 1
                try:
                    tmp = grid[i][j + 1]
                    if tmp == 0:
                        sum += 1
                except IndexError:
                    sum += 1
                if sum == 4:
                    if perimeter > sum:
                        return perimeter
                    else:
                        return sum
                perimeter += sum
    return perimeter
