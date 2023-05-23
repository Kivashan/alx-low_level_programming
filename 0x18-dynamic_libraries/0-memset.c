#include "main.h"

/**
 * _memset - function fills the first n bytes of s with the constant byte b
 * @s: character string
 * @b: byte to fill in
 * @n: number of bytes to fill
 *
 * Return: A pointer to a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = (int)n - 1;

	for (; i >= 0; i--)
		s[i] = b;

	return (s);
}


