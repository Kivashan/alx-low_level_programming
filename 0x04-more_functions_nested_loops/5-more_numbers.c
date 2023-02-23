#include "main.h"
/**
 *more_numbers - Entry point
 *
 *Return: Void
 */

void more_numbers(void)
{
	int i = 0;
	int b = 0;

	while (i <= 14)
	{
		while (b <= 14)
		{
			if(b >= 10)
				_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			b++;
		}
		_putchar('\n');
		i++;
		b = 0;
	}
}
