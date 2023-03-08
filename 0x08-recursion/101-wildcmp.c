#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: - pointer to a string
 * @s2: - pointer to a string
 *
 * Return: 1 for equal strins, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 && *s2)
		return (1);
	else
		return (0);
}

