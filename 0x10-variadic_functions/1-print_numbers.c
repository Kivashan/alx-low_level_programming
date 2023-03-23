#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a seperator
 * @seperator: a pointer to a char/s that are used to seperate numbers
 * @n: total number of arguments
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	/* checks for arguments if n != 0 proceed with iteration through nums */
	if (n > 0)
	{
		va_list nums;

		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			int x = va_arg(nums, int);

			if (i == 0)
			{
				printf("%d", x);
				continue;
			}
			if (separator)
				printf("%s", separator);
			printf("%d", x);
		}
		printf("\n");
		va_end(nums);
	}
	else
		return;
}
