#include "main.h"
/**
 *_isalpha - Entry point
 *@c: Integer argument
 *
 *Return: 1 is true, 0 is false
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
