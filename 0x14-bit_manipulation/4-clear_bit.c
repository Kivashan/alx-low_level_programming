#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: value
 * @index: given index to set to 0
 *
 * Return: 1 if successful, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
