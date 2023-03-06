#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: 2d array
 * @size: size of 2d matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	for (; i < size; i++)
	{
		sum1 = sum1 + *(a + (i * (size + 1)));
		sum2 = sum2 + *(a + (size - 1) + (i * (size - 1)));
	}
	printf("%d, %d\n", sum1, sum2);
}
