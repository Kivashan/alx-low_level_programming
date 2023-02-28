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
	srand(time(NULL));
	int i = rand();
	printf("%d\n", i);

	return (0);
}

