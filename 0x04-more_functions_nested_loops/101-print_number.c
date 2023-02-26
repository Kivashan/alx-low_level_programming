#include "main.h"
/**
 * print_number - Entry point
 * @n: Integer argument
 *
 * Return: Void
 */

void print_number(int n)
{
	int tmp = 0;
	int last_digit = 0;

	if (n % 10 == 0 && n != 0)
		last_digit = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

		while (n > 9)
		{
			tmp = (tmp * 10) + n % 10;
			n = n / 10;
		}
		tmp = (tmp * 10) + n % 10;
		n = 0;
		while (tmp > 9)
		{
			_putchar(tmp % 10 + 48);
			tmp = tmp / 10;
		}
		_putchar(tmp + 48);
		if (last_digit == 1)
			_putchar('0');
}
