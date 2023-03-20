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
	if (!d)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if ((d->name) && (d->owner))
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
