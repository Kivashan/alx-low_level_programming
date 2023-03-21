#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory block
 * @d: pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!(d->name) || !(d->owner))
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
