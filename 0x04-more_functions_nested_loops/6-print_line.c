#include "main.h"
/**
 *print_line - Entry point
 *@n: Integer argument
 *
 *Return: Void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
