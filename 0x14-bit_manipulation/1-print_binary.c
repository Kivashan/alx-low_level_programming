#include <stdio.h>

void print_binary(unsigned long int n)
{
	int count = 0;

	while ((unsigned long int)(1 << count) < n)
		count++;

	while (count >= 0)
	{
		if ((unsigned long int)(1 << count) <= n)
		{
			n = n - (1 << count);
			printf("1");
		}
		else
			printf("0");
		count--;
	}
	printf("\n");
}
