#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char array[] = "and that piece of art is useful\" - Dora Korpar,\
		       	2015-10-19\n";

	do{
		putchar(array[i]);
		++i;
	} while (array[i] != '\0');
	return (1);
}
