#include "main.h"
/**
 *_isdigit - Entry point
 *@c: Integer argument
 *
 *Return: 1 is true, 0 is false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
