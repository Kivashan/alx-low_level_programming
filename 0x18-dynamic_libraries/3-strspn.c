#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: sub string
 *
 * Return: number of bytes from start of s, matching accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int n;
	int i;

	while (s[count] != '\0')
	{
		n = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == s[count])
			{
				count++;
				n = 1;
				break;
			}
			i++;
		}
		if (n == 0)
			break;
	}

	return (count);
}
