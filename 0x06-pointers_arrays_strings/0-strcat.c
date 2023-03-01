#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string to be added to destination string
 *
 * Return: a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	int dcount = 0;
	int scount = 0;

	while (dest[dcount] != '\0')
		dcount++;

	for (; src[scount] != '\0'; scount++, dcount++)
		dest[dcount] = src[scount];

	dest[dcount] = '\0';

	return (dest);
}
