#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: Integer argument
 *
 *Return: n - Integer
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + 48);
	return (n);
}
