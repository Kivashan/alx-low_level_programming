#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a doubly linked list
 * @head: first node of list
 * @n: data to be stored in new node
 *
 * Return: head node on success, null otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	/* if new is the first node in the list */
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;

	/* if new is not the first node in list*/
	new->next = temp;
	new->prev = NULL;
	temp->prev = new;
	*head = new;
	return (*head);
}
