#include "main.h"
/**
 *print_triangle - Entry point
 *@size: Integer argument
 *
 *Return: Void
 */

void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = 1; j <= size; j++)
		{
			if (size - j >= i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
