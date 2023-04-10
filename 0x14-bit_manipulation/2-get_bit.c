#include "main.h"

/**
 * get_bit - returns the bit at the given index
 * @n: The value whose bits are looked at
 * @index: The index of the bit
 *
 * Return: The bit at the given index else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while ((n >> count) > 1)
		count++;

	if (index > count || (index > 31))
		return (-1);

	return ((n >> index) & 1 ? 1 : 0);
}
