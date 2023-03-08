#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a pointer to a string;
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	static int i = 1;

	if (*s)
	{
		i++;
		_print_rev_recursion(s + 1);
		_putchar(*s);
		i--;
	}
	if (i == 0)
		_putchar('\n');

}
