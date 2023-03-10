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
	char *test2 = haystack;

	while (*haystack)
	{
		char *test = needle;

		test2 = haystack;
		while (*haystack && *test && *haystack == *test)
		{
			haystack++;
			test++;
		}
		if (!*test)
			return (test2);
		haystack = test2 + 1;
	}
	return (NULL);
}
