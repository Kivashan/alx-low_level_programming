#include "main.h"
/**
 * print_number - Entry point
 * @n: Integer argument
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int tmp = 0;
	unsigned int m = n;
	int count = 0;
	int last_digit = 0;

	if (m % 10 == 0 && m != 0)
		last_digit = 1;
	if (n < 0)
	{
		m = -m;
		count = 1;
	}

		while (m > 9)
		{
			tmp = (tmp * 10) + m % 10;
			m = m / 10;
		}
		tmp = (tmp * 10) + m % 10;
		m = 0;
		if (count == 1)
			_putchar('-');

		while (tmp > 9)
		{
			_putchar(tmp % 10 + 48);
			tmp = tmp / 10;
		}
		_putchar(tmp + 48);
		if (last_digit == 1)
			_putchar('0');
}
