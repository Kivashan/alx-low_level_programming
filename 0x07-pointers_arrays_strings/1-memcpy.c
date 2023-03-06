#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: a pointer to a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = (int)n - 1; /*n-i because array begins at 0 */

	for (; i >= 0; --i)
		dest[i] = src[i];

	return (dest);
}

