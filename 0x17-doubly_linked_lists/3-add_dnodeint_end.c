#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: first node in list
 * @n: data to be stored in new node
 *
 * Return: head node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	/*if new is first node in list*/
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;

	/*if new is not first node in list add new to end of list*/
	while (temp)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	new->next = NULL;
	new->prev = temp;
	temp->next = new;

	return (*head);
}
