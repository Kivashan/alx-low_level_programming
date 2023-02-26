#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	long int i = 612852475143;
	long int factor = 2;

	for (factor = 2; factor <= i; factor++)
	{
		if (i % factor == 0 && i / factor != 0)
		{
			i = i / factor;
			factor--;
		}
	}
	printf("%ld\n",factor);
	return (0);
}
