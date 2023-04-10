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

	while ((n >> count) > 1)
		count++;

	while (count >= 0)
	{
		_putchar((n >> count) & 1 ? '1' : '0');
		count--;
	}
}
