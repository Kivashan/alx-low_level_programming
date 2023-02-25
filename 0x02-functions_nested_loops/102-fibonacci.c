#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int tmp;
	long int count;

	printf("1, 2, ");

	for (count = 0; count < 48; count++)
	{
		tmp = a;
		a = b;
		b = a + tmp;
		if (count != 47)
			printf("%ld, ", b);
		else
			printf("%ld", b);
	}
	printf("\n");
	return (0);
}
