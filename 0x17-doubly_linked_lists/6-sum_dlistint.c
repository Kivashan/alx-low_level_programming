#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all data stored in dlinked list
 * @head: first node in list
 *
 * Return: sum of all data stored in the nodes in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (sum);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
