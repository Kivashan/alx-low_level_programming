#include "main.h"

/**
 * print_rev - Entry point
 * @s: takes a pointer to a string as an argument
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
