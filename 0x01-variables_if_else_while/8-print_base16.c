#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char hexa[] = "0123456789abcdef";
	int i = 0;

	while (hexa[i] != '\0')
	{
		putchar(hexa[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
