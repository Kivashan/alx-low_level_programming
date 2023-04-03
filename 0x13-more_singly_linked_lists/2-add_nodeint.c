#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list
 * @head: Start of a linked list
 * @n: Value to add at the start of a list
 *
 * Return: The address of the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
