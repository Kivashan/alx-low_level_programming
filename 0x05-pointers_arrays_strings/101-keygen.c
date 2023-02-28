#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	srand(time(NULL));
	i = rand();
	printf("%d\n", i);

	return (0);
}

