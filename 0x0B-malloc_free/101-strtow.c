#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits a string into words
 * @str: string that needs to be split into words
 *
 * Return: pointer to an array of strings if successful, NULL otherwise
 */

char **strtow(char *str)
{
	char **array;
	int len = 0;
	int i;
	int lookingForWord = 1;
	int wordCount = 0;
	int j = 0;
	int k = 0;

	/* check for argument passed*/
	if (!str || strlen(str) == 0)
		return (NULL);

	/* no of words/rows*/	
	for (i = 0; str[i]; i++)
	{	
		if (lookingForWord && str[i] != ' ')
		{
			wordCount++;
			lookingForWord = 0;
		}
		if (!lookingForWord && str[i] == ' ')
			lookingForWord = 1;
	}

	/* allocate memory to array of strings */
	array = malloc(sizeof(*array) * (wordCount));

	/* check if memory allocation was successful */
	if (!array)
		return (NULL);

	/* i traverses the rows in 2d array */
	for (i = 0; i < wordCount; i++)
	{
		len = 0;
		for (; str[k] != '\0'; k++)
		{
			if (str[k] != ' ')
			{
				while (str[k] != ' ')
				{
					len++;
					k++;
				}
				break;
			}
		}

		/* allocate memory for individual strings */
		array[i] = malloc(sizeof(*array[i]) * (len + 1));

		/* check for memory allocation failure */
		if (!array[i])
		{
			while (i >= 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}

		for (j = 0; j <= len; j++)
			array[i][j] = str[k - len + j];
		array[i][j] = '\0';
	}
	array[i] = NULL;

	return (array);
}

