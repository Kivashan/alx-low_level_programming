#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: A linked list
 *
 * Return: Number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	unsigned int count = 0;

	head = h;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
