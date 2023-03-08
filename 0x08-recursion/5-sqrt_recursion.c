#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n - Integer
 *
 * Return: -1 if no natural square root exists, else returns square root
 */

int i = 1;
int j = 0;

int _sqrt_recursion(int n)
{
	if (n < 0 || n < i * i)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n > i * i)
	{
		i++;
		return (1 * _sqrt_recursion(n));
	}
	else
	{
		j = i;
		i = 0;
		return (j);
	}

}
