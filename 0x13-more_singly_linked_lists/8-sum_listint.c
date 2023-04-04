#include "lists.h"

/**
 * sum_listint - adds all values stored in a linked list
 * @head: Address of the first node in a linked list
 *
 * Return: Sum of all values stored in a linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (head->next == NULL)
			break;
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;

	return (sum);
}
