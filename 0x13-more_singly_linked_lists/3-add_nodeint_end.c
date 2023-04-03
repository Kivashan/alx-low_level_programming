#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: First node in a linked list
 * @n: Value to be added in new node
 *
 * Return: Address of the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tracer;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head))
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tracer = *head;
	while (tracer)
	{
		if (tracer->next == NULL)
			break;
		tracer = tracer->next;
	}
	new->next = tracer->next;
	tracer->next = new;
	return (tracer);
}
