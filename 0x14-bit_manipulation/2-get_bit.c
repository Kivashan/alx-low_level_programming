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

	while ((n >> count) > 0)
		count++;

	if ((index > count) || (index >= (sizeof(unsigned long int) * 8)))
		return (-1);

	return ((n >> index) & 1 ? 1 : 0);
}
