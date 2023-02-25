#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 2;
	int tmp;

	while (b < 4000000)
	{
		tmp = a;
		a = b;
		b = tmp + a;

		if (b % 2 == 0)
			sum += b;
	}
	printf("%d\n", sum);
	return (0);
}
