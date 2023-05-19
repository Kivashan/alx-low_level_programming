#include "lists.h"

/**
 * free_dlistint - frees memory for a doubly linked list
 * @head: first node in list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
