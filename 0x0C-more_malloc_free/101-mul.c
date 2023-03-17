#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int check_main_args(int ac, char *av[]);
void _print(char *s);

/**
 * main - Entry point
 * @argc - Argument count
 * @argv - Argument vector
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	/* call function to check main args */
	if (check_main_args(argc, argv) != 0)
		exit (98);

	return (0);
}

/* function that checks main args */
int check_main_args(int ac, char *av[])
{
	int i, j;
	char *err = "Error\n";

	/* checks to see that there are two arguments */
	if (ac != 3)
	{
		_print(err);
		return (1);
	}

	/*checks to see if arguments are only digits */
	for (i = 1; i < ac ; i++)
	{
		for (j = 0; av[i][j]; j++) 
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				_print(err);
				return (1);
			}
		}	
	}
	return (0);
}

/* function to print strings */
void _print(char *s)
{
	while (s)
		_putchar(*s++);
}
