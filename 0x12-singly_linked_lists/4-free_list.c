#include "lists.h"

/**
 * free_list - Free's a linked list
 * @head: Pointer to the first element of a linked list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
}

