#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: source string
 * @needle: string to locate within source
 *
 * Return: Returns a pointer to the beginning of located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		char *test = needle;

		i = 1;
		while (*test)
		{
			if (*test != *haystack)
			{
				i = 0;
				break;
			}
			test++;
			haystack++;
		}
		if (i == 1)
			return (needle);
		haystack++;
	}
	return (NULL);
}
