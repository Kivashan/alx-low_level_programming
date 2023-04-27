#include "main.h"

/**
 * get_endianness - gets endianness
 *
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *ch;

	i = 1;
	ch = ((char *) &i);

	if (ch)
		return (1);

	return (0);
}
