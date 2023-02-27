#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: a pointer to a string
 * @n: array size
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
	else
		printf("%d\n", a[i]);
}