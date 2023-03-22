#include "function_pointers.h"

/**
 * int_index - returns an index for the first match from cmp function
 * @array: pointer to an array of values to cmp
 * @size: size of the array
 * @cmp: pointer to a compare function
 *
 * Return: -1 if no matches or fail, positive integer otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* checks for arguments */
	if (array == NULL || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
