#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data fields containing data on a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 *
 * Description: Structure containing information pertaining
 * to a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
