#include "main.h"

/**
 * set_bit - Set a bit at a given index to 1
 * @n: value
 * @index: index of the bit to set to 1
 *
 * Return: Void
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}
