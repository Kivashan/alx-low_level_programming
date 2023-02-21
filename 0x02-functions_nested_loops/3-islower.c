#include "main.h"
/**
 *_islower -  Entry point
 *@c: Integer argument
 *
 *Return: 1 is true, 2 is false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
