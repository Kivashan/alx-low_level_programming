#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 1 Error, 0 Success
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	int is_num = 0;
	int is_char = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				sum += argv[i][j] - 48;
				is_num = 1;
			}
			else if (argv[i][j])
			{
				is_num = 0;
				is_char = 1;
			}
		}
	}
	if (is_char == 0 && is_num == 1)
		printf("%d\n", sum);
	else if (is_char == 1 && is_num == 0)
		printf("0\n");
	else
	{	printf("Error\n");
		return (1);
	}
	return (0);
}
