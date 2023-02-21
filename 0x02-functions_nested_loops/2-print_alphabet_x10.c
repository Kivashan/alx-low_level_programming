#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *
 *Return: Void Always
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
