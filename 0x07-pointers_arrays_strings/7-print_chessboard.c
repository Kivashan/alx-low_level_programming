#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: a pointer to a multi dimensional array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
	_putchar('\n');
	}
}
