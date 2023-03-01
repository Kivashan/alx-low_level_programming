#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int tmp = 0;
	unsigned int tmp1 = n;
	int last_digit = 0;

	if (n % 10 == 0 && n != 0)
		last_digit = 1;
	if (n < 0)
	{
		_putchar('-');
		tmp1 = -n;
	}

		while (tmp1 > 9)
		{
			tmp = (tmp * 10) + tmp1 % 10;
			tmp1 = tmp1 / 10;
		}
		tmp = (tmp * 10) + tmp1 % 10;
		tmp1 = 0;
		while (tmp > 9)
		{
			_putchar(tmp % 10 + 48);
			tmp = tmp / 10;
		}
		_putchar(tmp + 48);
		if (last_digit == 1)
			_putchar('0');
}
