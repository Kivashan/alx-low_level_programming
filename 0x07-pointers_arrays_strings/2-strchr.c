#include "main.h"

/**
 * _strchr - returns first occurrence of c if found, else NULL
 * @s: source string
 * @c: character to search for
 *
 * Return: returns 1st occurence of c if found else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*++s == c)
			return (s);
	}
	return (NULL);
}
