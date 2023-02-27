#include "main.h"

/**
 * _atoi - Entry point
 * @s: pointer to a string
 *
 * Return: 0 no number found,else return integer found in string
 */

int _atoi(char *s)
{
	unsigned int tmp = 1, i = 0, num = 0, a = 0;

	while (s[i] < 48 || s[i] > 57)
	{
		if (s[i] == '+')
			tmp *= 1;
		if (s[i] == '-')
			tmp *= -1;
		i++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + s[i] - '0';
			a = 1;
		}
		if (a == 1 && (s[i] < 48 || s[i] > 57))
			break;
	}
	return (num *= tmp);
}
