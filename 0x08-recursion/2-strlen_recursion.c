#include "main.h"

/**
 * _strlen_recursion - a function to find the lenth of a string
 * @s: a pointer to a string
 *
 * Return: integer contaiining the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
