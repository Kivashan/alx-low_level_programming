#include "main.h"

/**
 * is_prime_number - checks if number is prime number
 * @n: integer argument to test
 *
 * Return: returns 1 if integer is prime number, else return 0
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n <= 0)
		return (0);
	if (is_prime(n, 2))
		return (1);
	else
		return (0);
}

/**
 * is_prime - increments the divisor and tests if n is prime
 * @n: integer to test
 * @m: divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime(int n, int m)
{
	if (n % m == 0 && n == m)
		return (1);
	if (n % m == 0)
		return (0);
	m++;
	return (is_prime(n, m));
}
