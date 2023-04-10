#include "main.h"

/**
 * binary_to_uint - Converts a  binary string to an unsigned int
 * @b: binary string
 *
 * Return: The converted number or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		len++;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			num = num + (1 << (len - 1));
		len--;
	}

	return (num);
}
