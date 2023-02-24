#include "main.h"
/**
 *print_square - Entry point
 *@size: Integer argument
 *
 *Return: Void
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		while (j <= size)
		{
			if (j == size)
				_putchar('\n');
			else
				_putchar('#');
			j++;
		}
		i++;
		j = 0;
	}
	if (size <= 0)
		_putchar('\n');
}
