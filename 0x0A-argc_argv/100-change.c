#include <stdio.h>
#include <stdlib.h>

int make_change(int change);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector - a pointer to an array of strings
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (-1);
	}
	if (atoi(argv[1]) > 0)
	{
		coins = make_change((atoi(argv[1])));
		printf("%d\n", coins);
	}
	else if (atoi(argv[1]) < 0 || *argv[1] == '0')
		printf("0\n");
	else
	{
		printf("Error\n");
		return (-1);
	}
	return (0);
}

/**
 * make_change - converts money to the least amount of coins
 * @change: the amount of money to change
 *
 * Return: The least number of coins as int
 */

int make_change(int change)
{
	int coins = 0;

	coins += change / 25;
	change = change % 25;
	coins += change / 10;
	change = change % 10;
	coins += change / 5;
	change = change % 5;
	coins += change / 2;
	change = change % 2;
	coins += change / 1;

	return (coins);
}
