#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: a pointer to a string
 *
 * Return: 1 is string s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int slength = string_length(s, i);

	if (test_palindrome(s, slength, i))
		return (1);
	else
		return (0);
}

/**
 * string_length - finds the length of the given string
 * @s: pointer to a string
 * @length: counter for length of string
 *
 * Return: length of string
 */

int string_length(char *s, int length)
{
	if (*s == '\0')
	{
		return (length - 1);
	}
	else
		return (string_length(s + 1, length + 1));
}

/**
 * test_palindrome - tests if string is palindrome
 * @s: pointer to a string
 * @length: string length
 * @i: integer to increment through string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int test_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length] && i < length)
	{
		return (1 * test_palindrome(s, length - 1, i + 1));
	}
	else if (s[i] != s[length] && i < length)
		return (0);
	else
		return (1);
}
