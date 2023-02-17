#include <stdio.h>
/**
 *main - Entry poit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int tmp = 0;

	while (i <= 99)
	{
		if (i / 10 == i % 10)
		{
			i++;
			continue;
		}
		tmp = i / 10;
		putchar(tmp + 48);
		tmp = i % 10;
		putchar(tmp + 48);
		if (i == 99)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
