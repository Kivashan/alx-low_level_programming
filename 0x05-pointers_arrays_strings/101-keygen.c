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
	int c = 0;

	srand(time(NULL));
	for (c = 0; c < 2772; c = c + i)
	{	
		i = rand() % 128; /* max positive range for a char is 127 */
		printf("%c", i);
	}
	printf("\n");
	return (0);
}

