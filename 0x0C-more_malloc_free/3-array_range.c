#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the newly allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr;
	int len;
	int i;

	/* checks for arguments passed */
	if (min > max)
		return (NULL);

	/* calculate length of string */
	len = max - min + 1;

	/* allocate memory */
	ptr = malloc(sizeof(int) * len);

	/* check for memory allocation success */
	if (!ptr)
		exit(EXIT_SUCCESS);

	/* initialization */
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
