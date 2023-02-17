#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
