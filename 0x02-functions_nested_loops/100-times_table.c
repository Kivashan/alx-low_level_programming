#include "main.h"
/**
 * print_times_table - Entry point
 * @n: Integer argument
 *
 * Return: Void
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				int tmp = i * j;

				_putchar(',');
				_putchar(' ');

				if (tmp >= 10 && tmp <= 99)
				{
					_putchar(' ');
					_putchar(tmp / 10 + 48);
					_putchar(tmp % 10 + 48);
				}
				else if (tmp >= 100)
				{
					_putchar(tmp / 100 + 48);
					_putchar(tmp / 10 % 10 + 48);
					_putchar(tmp % 10 + 48);
				}

				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(tmp % 10 + 48);
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
