#include "main.h"
#include <stdlib.h>
#include <string.h>

void initializer(unsigned int size, unsigned int nmemb, void *ptr);
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

	/* checks for arguments passed */
	if (!nmemb || !size)
		return (NULL);

	/* memory allocation */
	ptr = malloc((nmemb) * size);

	/* check for memory allocation success */
	if (!ptr)
		return (NULL);

	/* initialization */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
