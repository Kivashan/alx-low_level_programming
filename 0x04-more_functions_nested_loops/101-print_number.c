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

	if (n >= 0)
	{
		while (n >= 10)
		{
			tmp = (tmp * 10) + n % 10;
			n = n / 10;
		}
		tmp = (tmp * 10) + n % 10;
		n = 0;

		while (tmp >= 10)
		{
			_putchar(tmp % 10 + 48);
			tmp = tmp / 10;
		}
		_putchar(tmp + 48);
	}
}
