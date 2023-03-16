#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: integer value representing the no. of elements in array
 * @size: the number of bytes for a single element
 *
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	/* checks for arguments passed */
	if (!nmemb || !size)
		return (NULL);

	/* memory allocation */
	ptr = malloc((nmemb) * size);

	/* check for memory allocation success */
	if (!ptr)
		return (NULL);

	/* initialization */
	if (sizeof(char) == size)
		for (i = 0; i < (int)nmemb; i++)
			*(char *)ptr = 'o';
	else if (sizeof(int) == size)
		for (i = 0; i < (int)nmemb; i++)
			*(int *)ptr = 0;
	else if (sizeof(float) == size)
		for (i = 0; i < (int)nmemb; i++)
			*(float *)ptr = 0;
			
	return (ptr);
}
