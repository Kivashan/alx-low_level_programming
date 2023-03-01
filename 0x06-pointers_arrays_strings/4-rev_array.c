#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in array to be reversed
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j = 0;
	int tmp = 0;

	for (n--; j < n; n--, j++)
	{
		tmp = a[n];
		a[n] = a[j];
		a[j] = tmp;
	}
}

