#include "main.h"

/**
 * cap_string - Captilizes all words
 * @a: - string to test and change
 *
 * Return: pointer to a string
 */

char *cap_string(char *a)
{
	char test[] = " \t\n,;.!?\"(){}";
	int lookingForWord = 1;
	int i;					 /* traverse a */

	for (i = 0; a[i] != '\0'; i++)
	{
		if (lookingForWord)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = a[i] - 32;
				lookingForWord = 0;
			}
			if (a[i] >= 65 && a[i] <= 90)
				lookingForWord = 0;
			if (a[i] >= 48 && a[i] <= 57)
				lookingForWord = 0;
		}

		if (lookingForWord == 0)
		{
			int j = 0;

			for (; test[j] != '\0'; j++)
			{
				if (test[j] == a[i])
				{
					lookingForWord = 1;
					break;
				}
			}
		}
	}
	return (a);
}
