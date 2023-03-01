#include "main.h"

/**
 * leet - changes letter to number
 * @a: string to test and change
 *
 * Return: pointer to a string
 */

char *leet(char *a)
{
	int i = 0;
	char alpha[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char num[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (; a[i] != '\0'; i++)
	{
		int j;

		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (alpha[j] == a[i])
			{
				a[i] = num[j];
				break;
			}
		}
	}
	return (a);
}
