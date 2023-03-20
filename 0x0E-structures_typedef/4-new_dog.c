#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new struct dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog
 *
 * Return: a pointer to the newly created structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *b;

	/* allocation of memory block for b */
	b = malloc(sizeof(dog_t));

	/* check for memory allocation failure */
	if (!b)
		return (NULL);

	/* allocation of memory for each element */
	b->name = malloc(sizeof(char) * (strlen(name) + 1));
	b->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	/* check for memory allocation failure */
	if (!(b->name) || !(b->owner))
	{
		free(b->name);
		free(b->owner);
		free(b);
		return (NULL);
	}

	b->name = name;
	b->age = age;
	b->owner = owner;

	return (b);
}
