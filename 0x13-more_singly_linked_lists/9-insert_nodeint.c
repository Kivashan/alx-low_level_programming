#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a node at the given index
 * @head: The first address in a linked list
 * @idx: The index at which to insert the node, index begins at 0
 * @n: The value to be stored in the node
 *
 * Return: A pointer to the beginning of the linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *start;
	listint_t *new;

	if (!head)
		return (NULL);
	start = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (start && idx > 0)
	{
		start = start->next;
		if ((*head)->next == NULL)
			break;
		idx--;
	}
	if (idx == 0)
	{
		new->next = start->next;
		start->next = new;
	}
	return (*head);
}
