#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: Integer argument
 *
 *Return: n - Integer
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
