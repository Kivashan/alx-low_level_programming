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
	long unsigned int i;
	dog_t *b;

	/* check on arguments */
	if (!name || !owner)
		return (NULL);

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
		return (NULL);

	b->age = age;
	
	for (i = 0; i < strlen(name); i++)
		b->name[i] = name[i];
	b->name[i] = '\0';

	for (i = 0; i < strlen(owner); i++)
		b->owner[i] = owner[i];
	b->owner[i] = '\0';

	return (b);
}
