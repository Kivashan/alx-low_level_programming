#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: Integer
 *
 * Return: -1 if no natural square root exists, else returns square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (is_sqrt(n, 2));
}

/**
 * is_sqrt - checks if n has a natural sqaure root
 * @n: integer to test
 * @i: represents x in x * x = y
 *
 * Return: i if natural square, -1 if otherwise
 */

int is_sqrt(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i * i < n)
	{
		++i;
		return (is_sqrt(n, i));
	}
	else
		return (-1);
}
