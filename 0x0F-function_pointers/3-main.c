#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 Successful, positive integer otherwise
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int);
	int num1, num2;
	char operator;

	/* checks for arguments */
	if (argc != 4) /*|| (!num1 && argv[1][0] != '0'))*/
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if (!get_op_func(&operator))
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* assign memory address from return of get_op_func to calc */
	calc = get_op_func(&operator);
	printf("%d\n", calc(num1, num2));
	return (0);
}
