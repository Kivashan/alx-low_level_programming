#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int count = 0;
	unsigned long int tmp;

	printf("1, 2");

	for (count = 0; count < 96; count++)
	{
		tmp = a;
		a = b;
		b = tmp + a;
		if (b > 1000000)
		{
			printf(", %lu", b / 1000000);
			printf("%lu", b % 1000000);
		}
		else
			printf(", %lu", b);
	}
	printf("\n");
	return (0);
}
