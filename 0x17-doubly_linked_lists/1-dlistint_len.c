#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in the list
 * @h: head node of list
 *
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int nodes = 0;

	if (!h)
		return (nodes);

	temp = h;

	while (temp)
	{
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
