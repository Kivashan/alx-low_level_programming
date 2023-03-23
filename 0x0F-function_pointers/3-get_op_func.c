#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns a pointer to the function that corresponds
 * to the operator given as a parameter.
 * @s: operator to test against
 *
 * Return: Null if unsuccessfull, pointer to the correct function otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/**
	 * while loop iterates through array of op_t and returns pointer
	 * if there is a succeful match
	 */
	while (ops[i].op != NULL)
	{
		if ((ops[i].op[0]) == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
