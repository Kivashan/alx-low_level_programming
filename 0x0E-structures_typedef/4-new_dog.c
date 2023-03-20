#include "dog.h"
#include <stdlib.h>

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
	dog_t hound;
	dog_t *b = &hound;

	hound.name = name;
	hound.age = age;
	hound.owner = owner;

	if (!b)
		return (NULL);
	return (b);
}
