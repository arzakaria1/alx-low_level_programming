#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @y: The caharacter to be checked
 * Return: 1 for upper case or 0 for otherwise
 */

int _isupper(int y)
{
	if (y >= 65 && y <= 90)
	{
	return (1);
	}
	return (0);
}
