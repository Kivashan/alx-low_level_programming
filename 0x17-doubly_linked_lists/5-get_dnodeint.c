#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at a given index in doubly linked list
 * @head: head node in list
 * @index: index
 *
 * Return: the node at the given index or null otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
		return (temp);

	return (NULL);
}
