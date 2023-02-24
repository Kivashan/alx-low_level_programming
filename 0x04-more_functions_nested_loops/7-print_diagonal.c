#include "main.h"
/**
 *print_diagonal - Entry point
 *@n: integer argument
 *
 *Return: Void
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 1;
	int tmp;

	while (i <= n && n != 0)
	{
		tmp = 1;
		while (tmp <= j)
		{
			_putchar(' ');
			if (tmp == j)
				_putchar('\\');
			tmp++;
		}
		_putchar('\n');
		i++;
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
