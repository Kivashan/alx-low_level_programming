#include "main.h"

/**
 * print_binary - prints a binary string representation of the given value
 * @n: The given value
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	int count = 0;

	while ((unsigned long int)(1 << count) < n)
		count++;

	while (count >= 0)
	{
		if ((unsigned long int)(1 << count) <= n)
		{
			n = n - (1 << count);
			_putchar('1');
		}
		else
			_putchar('0');
		count--;
	}
	_putchar('\n');
}
