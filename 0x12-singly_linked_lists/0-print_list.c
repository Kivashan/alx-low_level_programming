#include "lists.h"

/**
 * print_list - Prints the strings stored in a linked list
 * @h: first/head node in linked list
 *
 * Return: The total number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
