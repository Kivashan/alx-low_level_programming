#include "main.h"

/**
 * puts_half - Entry point
 * @str: a pointer to a string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;
	n = n + 1;

	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n - 1) / 2;

	for ( ; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
