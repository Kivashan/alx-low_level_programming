#include "lists.h"

/**
 * pop_listint - Removes a node from the beginning of the list and returns
 * the value stored in the list
 * @head: The first node in the linked list
 *
 * Return: The value stored in the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *start;
	int num;

	if (!head)
		return (0);
	if (*head == NULL)
		return (0);

	num = (*head)->n;
	if ((*head)->next == NULL)
	{
		start = *head;
		free(start);
		*head = NULL;
		return (num);
	}

	start = *head;
	*head = (*head)->next;
	free(start);

	return (num);
}
