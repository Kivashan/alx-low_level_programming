#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int tmp1, tmp2, tmp3;

	while (i <= 999)
	{
		tmp1 = i / 100;
		tmp2 = i % 100 / 10;
		tmp3 = i % 10;
		if (tmp1 != tmp2 && tmp1 != tmp3 && tmp2 != tmp3)
		{
			if (tmp1 < tmp2 && tmp2 < tmp3)
			{
				putchar(tmp1 + 48);
				putchar(tmp2 + 48);
				putchar(tmp3 + 48);
				if (i == 789)
					break;
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

