#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: source string
 * @accept: string to test against source
 *
 * Return: returns pointer to s where accept if first found, else null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *test = accept;

		while (*test)
		{
			if (*test == *s)
				return (s);
			test++;
		}
		s++;
	}
	return (NULL);
}
