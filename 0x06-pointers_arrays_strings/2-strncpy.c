#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer for copy to be placed in
 * @src: string to copy
 * @n: the number of elements from src to be copied into buffer
 *
 * Return: pointer to a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
