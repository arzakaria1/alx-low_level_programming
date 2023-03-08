#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: input number
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= -1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - displays if a number is recyrsively prime
 * @n: integer number
 * @i: iterator
 * Return: 1 if n is prime, 0 otherwise
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
