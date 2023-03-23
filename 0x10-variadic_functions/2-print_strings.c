#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a separator
 * @separator: char/s used to separate strings
 * @n: number of arguments
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (n > 0)
	{
		va_list strings;

		va_start(strings, n);

		for (i = 0; i < n; i++)
		{
			char *s = va_arg(strings, char*);

			if (i == 0)
			{
				if (!s)
					printf("(nil)");
				else
					printf("%s", s);
				continue;
			}
			if (separator)
				printf("%s", separator);
			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
		}
		va_end(strings);
	}
	printf("\n");
}
