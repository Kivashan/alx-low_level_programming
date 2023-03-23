#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print_char(int c);
void print_num(int num);
void print_fl(float f);
void print_str(char *s);

/**
 * print_all - prints all arguments
 * @format: format string
 *
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list all;
	const char *a = format;

	va_start(all, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				print_char(va_arg(all, int));
				break;
			case 'i':
				print_num(va_arg(all, int));
				break;
			case 'f':
				print_fl((float)(va_arg(all, double)));
				break;
			case 's':
				print_str(va_arg(all, char *));
				break;
			default:
				break;
		}
		while (a[i] == 'c' || a[i] == 'i' || a[i] == 'f' || a[i] == 's')
		{
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		}
		i++;
	}
	va_end(all);
	printf("\n");
}

/**
 * print_char - prints character
 * @c: char to be printed
 *
 * Return: Void
 */
void print_char(int c)
{
	printf("%c", c);
}

/**
 * print_num - prints integer
 * @num: Integer
 *
 * Return: Void
 */
void print_num(int num)
{
	printf("%d", num);
}

/**
 * print_fl - prints float
 * @f: double value
 *
 * Return: Void
 */
void print_fl(float f)
{
	printf("%f", f);
}

/**
 * print_str - prints string
 * @s: String
 *
 * Return: Void
 */
void print_str(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
