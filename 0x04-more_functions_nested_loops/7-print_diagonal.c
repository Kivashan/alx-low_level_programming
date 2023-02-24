#include "main.h"
/**
 *print_diagonal - Entry point
 *@n: integer argument
 *
 *Return: Void
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		int j = 0;

		while (j <= i)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
