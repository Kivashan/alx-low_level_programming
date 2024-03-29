#include "lists.h"

/**
 * free_listint2 - free a linked list and sets head to NULL
 * @head: first node in linked list
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *start;

	if (!head)
		return;
	if ((*head)->next == NULL)
	{
		start = *head;
		free(start);
		*head = NULL;
		return;
	}

	while (head)
	{
		start = *head;
		*head = (*head)->next;
		if ((*head)->next == NULL)
			break;
		free(start);
	}
	free(start);
	free(*head);
	*head = NULL;
}
