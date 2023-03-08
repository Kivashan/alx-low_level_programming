#include "main.h"

/**
 * _pow_recursion - return the value of x to the power of y
 * @x: the base value
 * @y: the exponent value
 *
 * Return: -1 if y < 0, 1 if y = 0 and value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x, y - 1)));
}
