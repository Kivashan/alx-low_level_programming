#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int tmp = n, tmp2 = n;
	unsigned int count;

	if (n < 0)
	{
		_putchar('-');
		tmp2 = -n;
	}

	count = 1;
	while (tmp2 > 9)
	{
		tmp2 = tmp2 / 10;
		count *= 10;
	}

	while (count > 9)
	{
		_putchar((tmp / count) % 10 + 48);
		count /= 10;

	}
	_putchar(tmp % 10 + 48);
}
