#include "main.h"
/**
 *jack_bauer - Entry point
 *
 *Return: Void
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		_putchar(h / 10 + 48);
		_putchar(h % 10 + 48);
		_putchar(':');
		_putchar(m / 10 + 48);
		_putchar(m % 10 + 48);
		_putchar('\n');
		if (m == 59)
		{
			m = 0;
			h++;
		}
		else
			m++;
	}
}
