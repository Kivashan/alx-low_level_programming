#include "lists.h"

/**
 * list_len - returns the number of elements/node
 * @h: first element/head of the linked list
 *
 * Return: The total number of elements/nodes in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
