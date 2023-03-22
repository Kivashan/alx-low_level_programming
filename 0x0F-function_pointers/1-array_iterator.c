#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function passed as arg on each element of array
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to a function, this func must be executed for each element
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array && action && size > 0)
	{
		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
