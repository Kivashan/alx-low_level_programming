#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: integer argument for no of columns in 2d array
 * @height: integer argument for no of rows in 2d array
 *
 * Return: pointer to 2d array if success, NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	/* checks for width & height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* memory allocation for array of pointers */
	grid = malloc(sizeof(*grid) * height);

	/* check for unsuccessful allocation of memory */
	if (!grid)
		return (NULL);

	/* initialization of grid elements */
	for (i = 0; i < height; i++)
	{
		/* allocate memory for each row*/
		grid[i] = malloc(sizeof(*grid[i]) * width);
		if (!grid)
		{
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
