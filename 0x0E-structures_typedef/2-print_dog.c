#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints elements of struct dog
 * @d: pointer to a struct dog
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	/* check for null pointer */
	if (d)
	{
		/* check for individual struct members(NULL) */
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if ((d->name) && (d->owner))
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
