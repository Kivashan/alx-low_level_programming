#!/usr/bin/python3
"""Island perimeter function"""


def island_perimeter(grid):
    """a function that calculates the perimeter of an island
    based on rules set by ALX

    Args:
        grid: a list of lists of integers

    Return:
        The perimeter of the island
    """

    cells = 0
    r = len(grid)
    c = len(grid[0])

    # Traverse grid
    for row in range(r):
        for col in range(c):

            # check if land then check perimeter
            if grid[row][col] == 1:

                # check whats north of current element
                if (row - 1 >= 0) and grid[row - 1][col] == 0 or row == 0:
                    cells += 1

                # check whats south of current element
                if (row + 1 <= r) and grid[row + 1][col] == 0 or row == r:
                    cells += 1

                # check whats east of current element
                if (col + 1 <= c) and grid[row][col + 1] == 0 or col == c:
                    cells += 1

                # check whats west of current element
                if (col - 1 >= 0) and grid[row][col - 1] == 0:
                    cells += 1

    return (cells)
