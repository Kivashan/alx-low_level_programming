#include "main.h"

/**
 * _strcmp - compares s1 or the first n bytes of s1 to s2
 * @s1: string to be compared
 * @s2: string to be compared against
 *
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = (int)(s1[i]) - (int)(s2[i]);
				break;
		}
	}
	return (j);
}
