#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory block at end of use
 * @d: pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
