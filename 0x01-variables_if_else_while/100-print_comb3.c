#include <stdio.h>
/**
 *main - Entry poit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int tmp1 = 0;
	int tmp2 = 0;

	while (i <= 99)
	{
		tmp1 = i / 10;
		tmp2 = i % 10;
		if (tmp1 != tmp2 && tmp1 < tmp2)
		{
			putchar(tmp1 + 48);
			putchar(tmp2 + 48);
			if (i == 89)
				break;
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
