#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of an island described in the given grid.

    :param grid: A list of lists of integers, where 0 represents water and 1 represents land.
    :return: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check top neighbor
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1

                # Check bottom neighbor
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1

                # Check left neighbor
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1

                # Check right neighbor
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter

