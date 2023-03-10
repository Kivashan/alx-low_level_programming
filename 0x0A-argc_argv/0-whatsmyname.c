#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector - pointer to a array of strings
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}
