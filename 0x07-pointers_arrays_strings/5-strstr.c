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
	char *test2 = haystack;

	while (*haystack)
	{
		char *test = needle;

		test2 = haystack;
		i = 1;
		while (*test)
		{
			if (*test != *test2)
			{
				i = 0;
				break;
			}
			test++;
			test2++;
		}
		if (i == 1)
			return (needle);
		haystack++;
	}
	return (NULL);
}
