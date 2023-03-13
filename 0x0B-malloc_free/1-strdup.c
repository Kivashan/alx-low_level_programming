#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates memory for a pointer to the string passed
 * to it, the string that is passed will be copied to the memory allocated
 * @str: a pointer to a string which is to be copied
 *
 * Return: NULL if malloc fails, pointer to new memory if success
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *array;

	/* get len of str */
	while (str[len] != '\0')
		len++;

	/* allocate memory to array */
	array = malloc(sizeof(char) * (len - 1));

	while (!array || len == 0)
		return (NULL);

	/* initialize array with values stored in str */
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';

	return (array);
}
