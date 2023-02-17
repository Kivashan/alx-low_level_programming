#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char i = '0';
	char arr[] = "0, ";

	do {
		int j = 0;

		arr[0] = i;
		if (i < '9')
		{
			while (arr[j] != '\0')
			{
				putchar(arr[j]);
				j++;
			}
		}
	i++;
	} while (i <= '9');
	putchar('9');
	putchar('\n');
	return (0);
}
