#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: no of bytes requested
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
