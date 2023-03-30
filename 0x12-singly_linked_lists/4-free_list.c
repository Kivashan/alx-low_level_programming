#include "lists.h"

/**
 * free_list - Free's a linked list
 * @head: Pointer to the first element of a linked list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		free(head->str);
		new = head;
		head = head->next;
		free(new);
	}
}

