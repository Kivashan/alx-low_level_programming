#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - copies s1 followed by n bytes of s2 in the newly
 * allocated memory if n > length of s2, then copy s2 after s1
 * @s1: string 1 to be copied
 * @s2: second string to be copied
 * @n: no of bytes from second string to be copied into new memor arrear
 *
 * Return: a pointer to the newly allocated memory arrear
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int len;
	int i = 0, j;

	/*checks for arguments */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate length*/
	len = ((strlen(s2) > n) ? n : strlen(s2)) + strlen(s1);

	/* allocate memory */
	array = malloc(sizeof(char) * (len + 1));

	/* check for memory allocation success */
	if (!array)
		exit(EXIT_FAILURE);

	/* initialize array */
	/* copy s1 into array*/
	for (; s1[i]; i++)
		array[i] = s1[i];

	/* copy n bytes of s2 into array */
	for (j = 0; i < len; j++, i++)
		array[i] = s2[j];

	array[i] = '\0';

	return (array);
}



