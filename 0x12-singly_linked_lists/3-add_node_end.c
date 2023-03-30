#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list
 * @head: first element/node of the linked list
 * @str: character string
 *
 * Return: A pointer to the newly created element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	/* memory allocation */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	end = *head;
	while (end != NULL)
	{
		if (end->next == NULL)
			break;
		end = end->next;
	}
	new->next = end->next;
	end->next = new;

	return (end);
}


