#include "main.h"
/**
 *times_table - Entry point
 *
 *Return: Void
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			if (j == 0)
				_putchar('0');
			else if (i * j >= 10)
			{
				_putchar(i * j / 10 + 48);
				_putchar(i * j % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(i * j % 10 + 48);
			}
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
