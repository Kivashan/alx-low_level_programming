#include "main.h"

/**
 * swap_int - Entry point
 * @a: takes a pointer to an int as an argument
 * @b: takes a pointer to an int as an argument
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;

}
