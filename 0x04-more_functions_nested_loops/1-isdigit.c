#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @k: The number to be checked
 * Return: 1 if character is a digit and 0 otherwise
 */

int _isdigit(int k)
{
	if (k >= 48 && k <= 57)
	{
	return (1);
	}
	return (0);
}
