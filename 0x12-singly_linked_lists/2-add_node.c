#include "lists.h"

/**
 * add_node - Adds a new node
 * @head: Start of linked list
 * @str: string to add as a member of a node
 *
 * Return: Address of new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	/* Memory allocation for node */
	new = malloc(sizeof(size_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
