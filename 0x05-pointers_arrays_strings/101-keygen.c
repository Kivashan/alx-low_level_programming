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

	/* checksum = 2772, therfore all characters in password must total 2772
	 * c is incremented by i through each iteration and loop breaks
	 * before c exceeds 2772
	 */
	for (c = 0; c < 2772; c += i)
	{
		i = rand() % 128; /* max positive range for a char is 127 */
		if(c + i > 2772)
			break;
		printf("%c", i);
	}
	/* The below printf statement prints the difference between 2772 and c */
	printf("%c\n", 2772 - c);
	return (0);
}

