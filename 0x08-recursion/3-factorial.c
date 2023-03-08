#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer argument who factorial we are looking for
 *
 * Return: if n < 0 return -1, else return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * (factorial(n - 1)));
}
