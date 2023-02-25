#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int start = 1;
	int sum = 0;
	int i = 3;
	int j = 5;

	for (start = 1; start < 1024; start++)
	{
		if (start % i == 0 || start % j == 0)
			sum += start;
	}

	printf("%d\n", sum);
	return (0);
}
