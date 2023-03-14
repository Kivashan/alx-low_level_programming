#include "main.h"
#include <stdlib.h>

int str_length(char *s1, char *s2);

/**
 * str_concat - allocates new memory for a string and stores s1 and s2 in new
 * memory as a concatenated string
 * @s1: pointer to a string to be copied
 * @s2: pointer to a string to be copied and concatenated to s1
 *
 * Return: Null if malloc fails, pointer to new memory area if success
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *array;
	int i;
	int j;

	len = str_length(s1, s2);

	/* allocate memory */
	array = malloc(sizeof(char) * len);

	if (!array && len == 0)
		return (NULL);

	/* copy contents of s1 and s2 to array */
	for (i = 0; i < len && s1[i] != '\0'; i++)
		array[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		array[i + j] = s2[j];

	array[i + j] = '\0';

	return (array);
}

/**
 * str_length - get length of s1 and s2
 * @s1: string
 * @s2: string
 *
 * Return: length of string
 */

int str_length(char *s1, char *s2)
{
	int len = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	for (i = 0; s2[i] != '\0'; i++)
		len++;

	return (len + 1);
}
