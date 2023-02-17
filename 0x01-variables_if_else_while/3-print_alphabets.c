#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		++i;
	};
	putchar('\n');
	return (0);

}
