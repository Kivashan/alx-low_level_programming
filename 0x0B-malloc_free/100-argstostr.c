#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all arguments
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: a pointer to a string
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int len = 0;
	int i;
	int j;
	int k = 0;

	/* checks for ac and av */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* length of all strings in av + whitespace between arguments */
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	/* memory allocation for array */
	array = malloc(sizeof(char) * (len + ac + 1));

	/* memory allocation check */
	if (!array)
		return (NULL);

	/* initialization */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			array[k] = av[i][j];
		array[k] = '\n';
		k++;
	}

	return (array);
}
