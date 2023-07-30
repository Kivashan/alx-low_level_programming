#include "hash_tables.h"

/**
 * key_index - returns the index for the corresponding key
 * @key: The given key
 * @size: Size of the array
 *
 * Return: returns the index for the corresponding key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
