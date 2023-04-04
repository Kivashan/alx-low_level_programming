#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at the given index
 * @head: Address of the first node in the linked list
 * @index: The given index in the linked list that must be returned
 *
 * Return: A pointer to the node at the given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;

	if (!head)
		return (NULL);

	while (head != NULL && (count != (int)index))
	{
		head = head->next;
		count++;
	}

	if (count == (int)index)
	{
		return (head);
	}
	return (NULL);
}
