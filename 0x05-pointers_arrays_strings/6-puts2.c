#include "main.h"

/**
 * puts2 - Entry point
 * @str: a pointer to a string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int count = 0;

	for (; str[count] != '\0'; count++)
		if (count % 2 == 0)
			_putchar(str[count]);
	_putchar('\n');
}
