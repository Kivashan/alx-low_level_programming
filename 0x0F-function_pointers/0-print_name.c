#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: pointer to a string containing a name
 * @f: pointer to a function that accepts a char arg and returns void
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if(name)
		f(name);
}
