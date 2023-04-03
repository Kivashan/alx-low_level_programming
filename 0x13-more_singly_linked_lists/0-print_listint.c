#include "lists.h"

/**
 * print_listint - Prints all values in a list
 * @h: A linked list structure
 *
 * Return: The number of nodes, negative number if fail
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *head;
	unsigned int count = 0;

	head = h;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}



