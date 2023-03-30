#include "lists.h"

void first(void)__attribute__((constructor));

/**
 * first - Prints a statement before the execution of main
 *
 * Return: Void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
