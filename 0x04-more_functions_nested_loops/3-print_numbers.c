#include "main.h"
/**
 *print_numbers - Entry point
 *
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char a = 48;

	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
