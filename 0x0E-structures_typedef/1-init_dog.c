#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog
 * @d: pointer to a struct dog
 * @name: pointer to a string containing dog name
 * @age: age of dog
 * @owner: pointer to a string containing owner name
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
