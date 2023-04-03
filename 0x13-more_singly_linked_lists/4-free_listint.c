#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: First node in a linked list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *start;

	while (head)
	{
		start = head;
		head = head->next;
		free(start);
	}
}
