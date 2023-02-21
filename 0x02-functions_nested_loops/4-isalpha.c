#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the character being checked
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
