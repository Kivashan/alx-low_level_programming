#include "main.h"

/**
 * string_toupper - changes all lower case chars to upper case in string
 * @a: string to test and change
 *
 * Return: pointer to a string
 */

char *string_toupper(char *a)
{
	int i = 0;

	for (; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
	return (a);
}
