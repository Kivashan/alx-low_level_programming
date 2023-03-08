#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a pointer to a string;
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_print_rev_recursion(s + i);
		_putchar(*s);
	}
	if (i == 0)
		_putchar('\n');

}
