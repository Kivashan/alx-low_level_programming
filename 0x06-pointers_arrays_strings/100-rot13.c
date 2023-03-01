#include "main.h"

/**
 * rot13 - encodes/decodes string using rot13
 * @a: string to be encoded/decoded
 *
 * Return: pointer to a string
 */

char *rot13(char *a)
{
	char c[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char b[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i;
	int j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (a[i] == c[j])
			{
				a[i] = b[j];
				break;
			}
		}
	}
	return (a);
}
