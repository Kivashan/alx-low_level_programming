#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *str);
/**
 * strtow - function that splits a string into words
 * @str: string that needs to be split into words
 *
 * Return: pointer to an array of strings if successful, NULL otherwise
 */

char **strtow(char *str)
{
	char **array;
	int len = 0, wordCount = 0;
	int i = 0, j = 0, k = 0;

	/* check for argument passed*/
	if (!str || strlen(str) == 0)
		return (NULL);

	/* no of words/rows*/
	wordCount = count_words(str);	
	
	if (wordCount == 0)
		return (NULL);
	/* allocate memory to array of strings */
	array = malloc(sizeof(*array) * (wordCount + 1));

	/* check if memory allocation was successful */
	if (!array)
		return (NULL);

	/* i traverses the rows in 2d array */
	for (i = 0; i <= wordCount; i++)
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
		array[i] = malloc(sizeof(*array[i]) * (len - 1));

		/* check for memory allocation failure */
		if (i == wordCount)
			*(array + i) = NULL;
		else
		{	for (j = 0; j < len; j++)
				array[i][j] = str[k - len + j];
			array[i][j] = '\0';
		}
	}
	return (array);
}

int count_words(char *str)
{
	int i = 0, lookingForWord = 1, wordCount = 0;

	for (i = 0; str[i]; i++)
	{
		if (lookingForWord && str[i] != ' ')
		{
			wordCount++;
			lookingForWord  = 0;
		}
		if (!lookingForWord && str[i] == ' ')
			lookingForWord = 1;
	}
	return wordCount;
}
