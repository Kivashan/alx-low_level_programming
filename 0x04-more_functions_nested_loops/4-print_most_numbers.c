#include "main.h"
/**
 *print_most_numbers - Entry point
 *
 *Return: void
 */

void print_most_numbers(void)
{
	char a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
			_putchar(a);
		a++;
	}
	_putchar('\n');
}
