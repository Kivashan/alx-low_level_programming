#include  "main.h"

/**
 * flip_bits - Flips the bits of one value to match another value
 * @n: value whose bits should be flipped
 * @m: value whose bits should be matched
 *
 * Return: The total number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = sizeof(unsigned long int) * 8;
	int count = 0, i;
	
	/* for loop sequences through bits from 0 to index - 1 */
	for (i = 0; i < index; i++)
	{
		/* if bit at position i for n != bit at position i for m
		 * then add 1 to count
		 */
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
