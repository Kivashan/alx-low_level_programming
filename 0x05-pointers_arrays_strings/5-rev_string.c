#include "main.h"

/**
 * rev_string - Entry point
 * @s: takes a pointer to a string as an argument
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char tmp;

	while (s[count] != '\0')
		count++;

	count--;
	while (rev < count)
	{
		tmp = s[rev];
		s[rev] = s[count];
		s[count] = tmp;
		rev++;
		count--;
	}
}
