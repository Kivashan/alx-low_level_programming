#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string to be appended to the destination string
 * @n: the number of elements from source string to be copied
 *
 * Return: a pointer to a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dcount = 0;
	int scount = 0;

	while (dest[dcount] != '\0')
		dcount++;

	for (; src[scount] != '\0' && scount < n; scount++, dcount++)
		dest[dcount] = src[scount];

	dest[dcount] = '\0';

	return (dest);
}
