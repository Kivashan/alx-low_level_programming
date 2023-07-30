#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table structure
 * @size: The size of the table structure
 *
 * Return: Returns the newly created table or NULL if failure occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	/* dynamically allocate space for new table */
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	/* set size member variable for new table */
	new->size = size;

	/* dynamically allocate space for node member array for new table */
	new->array = calloc(new->size, sizeof(hash_node_t));
	if (!new->array)
		return (NULL);

	/* set each item/element in new->array to null */
	for (i = 0; i < new->size; i++)
		new->array[i] = NULL;

	return (new);
}
