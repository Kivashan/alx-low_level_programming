#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and fills in first element
 * @size: size of array
 * @c: first element of array
 *
 * Return: NULL if size = 0, NULL is malloc fails, pointer to array is success
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	/*allocates memory*/

	array = malloc(size * sizeof(char));

	/* if statement checks if malloc is successful or if size != 0*/
	/* returns Null if fail*/

	if (!array || size == 0)
	{
		return (NULL);
	}
	
	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}
