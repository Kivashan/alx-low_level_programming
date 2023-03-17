#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * @ptr: pointer to memory address of block to be reallocated
 * @old_size: number of bytes of str when passed to the function
 * @new_size: new size of memory block for str
 *
 * Return: a void pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int len;
	unsigned int i;
	unsigned char *ch = ptr; /*points to addr of ptr before mem alloc */
	unsigned char *newch; /* will point tp new addr of ptr after malloc*/

	/*checks for arguments */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	/* calculate initialization length if old_size > new_size */
	len = (old_size > new_size) ? new_size : old_size;

	/* allocate memory */
	ptr = malloc(new_size);

	/* check for memory allocation failure */
	if (!ptr)
		return (NULL);

	newch = ptr;
	/* initialization */
	for (i = 0; i < len; i++)
		newch[i] = ch[i];
	if (!ptr)
		return (NULL);

	return (ptr);
}
